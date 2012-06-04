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
				_memoryAddress = memAddress;
				
				var className:String = getQualifiedClassName(classType);
				
				_extensionContext = ExtensionContext.createExtensionContext("ca.digitalarchitect.Box2DANE", className + "::" + _memoryAddress);
			}else {
				_extensionContext = ExtensionContext.createExtensionContext("ca.digitalarchitect.Box2DANE", className);
				
				_memoryAddress = _extensionContext.call("ane_getNativeDataMemoryAddress") as String;
			}
		}
		
		protected function validateMemoryAddress(address:String):void
		{
			//Ensure we have a valid hex address here
			if (address.search("x") == -1 || address.search("X") == -1) {
				throw new VerifyError("An invalid memory address has been supplied to a b2Body constructor. This is most likely your fault for creating the object directly. That's what you did, isn't it, you bad kid.");
			}
			//
			
			/* You might think we should return a Boolean here but we don't truck around, no monkey business.
			 * If the address isn't valid, you're program DIES. DEAD. GET GOOD and it WON'T HAPPEN SON.
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