package ca.digitalarchitect.box2dane 
{
	import flash.external.ExtensionContext;
	import flash.external.ExternalInterface;
	import flash.utils.getQualifiedClassName;
	
	/**
	 * ...
	 * @author Jesse Nicholson
	 */
	public class BaseNativeClass extends ExternalInterface 
	{
		//The native context for this object
		protected var _extensionContext:ExtensionContext;
		//
		
		/* The memory address of the native class this actionscript object represents. Note however
		 * that this variable is not always populated, as in most cases it is not required. The context
		 * itself is directly associated with the native class we're representing. This is really a 
		 * special-case variable.
		 */
		protected var _memoryAddress:String;
		//
		
		public function BaseNativeClass() 
		{
			
		}
		
		protected function initializeContext(classType:Class, memAddress:String = null):void
		{
			if (memAddress != null) {
				validateMemoryAddress(memAddress);				
				
				var className:String = getQualifiedClassName(classType);
				
				_extensionContext = ExtensionContext.createExtensionContext("ca.digitalarchitect.Box2DANE", className + "::" + _memoryAddress);
			}else {
				_extensionContext = ExtensionContext.createExtensionContext("ca.digitalarchitect.Box2DANE", className);				
			}
			
			/* The fetch memory address method is called whether we are already supplied the address or not. The
			 * reason for this is because the "ane_getNativeDataMemoryAddress" function does one other key thing
			 * behind the scenes: it associates the AS3 Class Instance that invoked this method (initializeContext)
			 * directly with the native object we've either created or connected with here. This is important,
			 * because both on the native side and the AS3 side, we need to know exactly which AS3 and Native
			 * instances are paired together.
			 */
			_memoryAddress = _extensionContext.call("ane_getNativeDataMemoryAddress", classType) as String;
		}
		
		protected function validateMemoryAddress(address:String):void
		{
			//Ensure we have a valid hex address here
			if (address.search("x") == -1 || address.search("X") == -1) {
				throw new VerifyError("An invalid memory address has been supplied to a native class constructor. This is most likely your fault for creating the object directly. That's what you did, isn't it, you bad kid.");
			}
			//
			
			_memoryAddress = memAddress;
			
			/* You might think we should return a Boolean here but we don't truck around, no monkey business.
			 * If the address isn't valid, your program DIES. DEAD. GET GOOD and it WON'T HAPPEN SON.
			 */
			return void;
		}
		
		public function get extensionContext():ExtensionContext
		{
			return _extensionContext;
		}
		
		public function get memoryAddress():String
		{
			return _memoryAddress;
		}
	}

}