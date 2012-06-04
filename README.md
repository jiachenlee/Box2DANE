Box2DANE
========

Box2D AIR Native Extension

- Project Setup - 
The Box2DANEC folder should be in your src directory of your project in Eclipse. Also, Box2D
itself should be within your src folder. 

For the Actionscript side of things, the project is a Flashdevelop project. So you'll need this
if you want to conveniently work with the AS side.

- Concept -
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