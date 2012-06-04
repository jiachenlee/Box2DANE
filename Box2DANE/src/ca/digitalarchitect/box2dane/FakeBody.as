package ca.digitalarchitect.box2dane 
{
	import flash.external.ExtensionContext;
	/**
	 * ...
	 * @author Jesse Nicholson
	 */
	public class FakeBody extends BaseNativeClass
	{
		public function FakeBody(bodyMemoryAddress:String) 
		{
			/* Note that you should NEVER be invoking this constructor yourself directly. This
			 * object, in Native Code, has a private constructor and destructor and the lifetime
			 * of the object is to be controlled 100% by the b2World object that is was created
			 * within. This constructor should only ever be called automatically within the
			 * b2World createBody(...) method. If you are invoking this directly, you either
			 * have a **very** good idea about what is going on here, or you are a very, very
			 * bad kid. Stop it.
			 */
			
			validateMemoryAddress(bodyMemoryAddress);
			
			_memoryAddress = bodyMemoryAddress;
			
			_extensionContext = ExtensionContext.createExtensionContext("ca.digitalarchitect.Box2DANE", "FakeBody::" + _memoryAddress);
		}
		
		public function leet():int
		{
			return _extensionContext.call("leet") as int;
		}
	}

}