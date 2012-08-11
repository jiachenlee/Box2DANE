Box2DANE
========

*** UPDATE ***

MY SSD DIED AND A CRAPLOAD OF CHANGES WERE LOST IN MY LOCAL REPO. SORRY GUYS, THIS PROJECT HAS
PRETTY MUCH STALLED BUT I'LL LEAVE IT UP IN CASE ANYONE EVER WANTS TO PICK UP WHERE IT LEFT OFF.

Box2D AIR Native Extension

http://digitalarchitectcanada.github.com/Box2DANE/

-- Project Setup --

The Box2DANEC folder should be in your src directory of your project in Eclipse. Also, Box2D
itself should be within your src folder. 

For the Actionscript side of things, the project is a Flashdevelop project. So you'll need this
if you want to conveniently work with the AS side.

-- Concept --

The general idea for the design of this AIR Native Extension is that the Actionscript side should
function purely as an interface to the methods on the native side. As such, every public method
within Box2D (the C++ side) has been exposed to the Actionscript code, and every publically 
available variable within the native Box2D side has been exposed to the Actionscript side as
well through getters and setters.

Basically for every native function in Box2D C++ there is a C function callback that the flash
virtual machine is able to invoke through ExtensionContext instances. We then use the context
to pull up the associated user data from C (which is usually the class instance on the native side)
and invoke the corresponding method or read/write the appropriate property on the native side.

Within these C callbacks, we can also contruct new Actionscript class instances and return them
to the Flash side of things. This is the main reason why our format for the context initializer
is either:

"DesiredClassType"

or

"DesiredClassType::ObjectAddressInMemory"

Basically by using this format, we can attach the memory address of an object on the native side
that we specifically want our new Actionscript class instance to represent. So when we access properties
or methods on that Actionscript object, those callbacks are invoked specifically on the native object
at the memory address specified.

Note however that the Actionscript developer should NEVER be providing this memory address to any
of the Box2DANE Actionscript classes. This exists solely for the native C side to control. Here is
an example of where this functionality is taken advantage of. Consider the following case:

----- Example -----

Actionscript 3 Class instance of b2World is created. The context initalizer is called, with the 
argument of simply "b2World". This means the initializer will create a brand new instance of a 
b2World on the native side, and then configure the Actionscript 3 instance of that b2World to 
directly access and read/modify from this new native b2World instance.

Now we have an Actionscript 3 instance of b2World, which directly invokes changes or reads from
a specific b2World instance. Now we want to create a b2Body instance within that world. Well, 
the lifecycle of a b2Body is controlled explicitly by the b2World it belongs to. So on the Actionscript
side the method b2World.createBody(...); needs to return an Actionscript 3 instance of b2Body at the
EXACT same time a new instance of b2Body is created on the native side. So what happens is behind the
scenes, the b2World.createBody C callback actually returns a String which holds the native address of a
new instance of b2Body. We then create a new b2Body Actionscript 3 instance ON THE NATIVE SIDE and
set this new instance to be paired with the b2Body we just created on the native side. This is where
that native address setting takes place and only ever should take place. We then return the b2Body
Actionscript 3 instance to the AS3 side and the AS3 developer has no idea because all this stuff
is hidden away from him/her.

----- End Example -----

-- Getters and Setters --

The idea on the AS3 side is to simply interface with a native instance of the class we're using. So,
for example, if we have an AS3 b2AABB instance, any readable property on it is a getter and setter
that actually just does an extensionContext.call(). In this case we need to consider the very real
possibility of creating a ton of new native instances every time a property is read. To
deal with this issue, once a property has been set on the AS3, if it exists when the getter is called
we simply update that instance and return it again. For example:

	public function get lowerBound():b2Vec2
	{
		/* In this getter, we don't want to be creating a new b2Vec2 every single
		 * time we want to read the lowerBound variable. So, if we have already created one, we'll
		 * simply pass it as a parameter to this getter and adjust it's values to match the values
		 * of the b2aabb_instance.lowerBound vector.
		 */
		if (_lowerBound != null) {
			nativeContext.call("ane_b2AABB_getter_lowerBound", _lowerBound);
		}else {
			_lowerBound = nativeContext.call("ane_b2AABB_getter_lowerBound") as b2Vec2;
		}
		
		return _lowerBound;
	}
	
On the native side, the "ane_b2AABB_getter_lowerBound" callback method simply checks to see if we've
supplied a function argument or not. If we have, it pulls up that native instance and updates it. If
we have not, it will create and return a new instance. This same practice is used within all like
classes that have access controlled properties. Just for completeness, the native callback looks
like this:

	FREObject ane_b2AABB_getter_lowerBound(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
		void* nativeData;
		FREGetContextNativeData(ctx, &nativeData);
		b2AABB* b2AABB_instance = (b2AABB*)(nativeData);

		/* This getter function can work one of two ways. It can either accept a single parameter which
		 * is an AS3 b2Vec2 instance, from which we will retrive the native b2Vec2 and assign it to the
		 * value of b2AABB_instance->lowerBound. OR, if no argument is received, it means we need to create
		 * a new b2Vec2 instance, set it equal to b2AABB_instance->lowerBound and return it.
		 */

		FREObject lowerBoundAS3Object;

		if(argc == 1) {
			/* An instance has been supplied. Update it */
			lowerBoundAS3Object = argv[0];
			void* lowerBoundb2Vec2Instance = FREGetNativeInstancePointer(lowerBoundAS3Object);
			b2Vec2* lowerBound = (b2Vec2*)lowerBoundb2Vec2Instance;
			*lowerBound = b2AABB_instance->lowerBound;
		}else{
			/*	Create a new b2Vec2 AS3 instance */

			b2Vec2* lowerBound = new b2Vec2(b2AABB_instance->lowerBound);

			//AS3 b2Vec2 constructor arguments
			FREObject valueX, valueY, b2Vec2MemAddress, b2Vec2AS3Object, initException;
			FREObject constructorArguments[3];
			FRENewObjectFromInt32(0, &valueX);
			FRENewObjectFromInt32(0, &valueY);
			FRENewObjectFromUTF8Pointer((void*)lowerBound, &b2Vec2MemAddress);
			constructorArguments[0] = valueX;
			constructorArguments[1] = valueY;
			constructorArguments[2] = b2Vec2MemAddress;
			//

			const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.common.b2Vec2";

			FREResult objInitResult = FRENewObject(className, 3, constructorArguments, &b2Vec2AS3Object, &initException);

			if(objInitResult != FRE_OK) {
				FREError("Error creating b2Vec2 object in function ane_b2AABB_getter_lowerBound");
			}
			/*	End Create a new b2Vec2 AS3 instance */

			lowerBoundAS3Object = b2Vec2AS3Object;
		}

		return lowerBoundAS3Object;
	}
