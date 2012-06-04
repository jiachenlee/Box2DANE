package ca.digitalarchitect.box2dane 
{
	import flash.events.EventDispatcher;
	import flash.external.ExtensionContext;
	
	/**
	 * ...
	 * @author Jesse Nicholson
	 */
	public class FakeWorld extends BaseNativeClass 
	{
		
		public function FakeWorld() 
		{
			_extensionContext = ExtensionContext.createExtensionContext("ca.digitalarchitect.Box2DANE", "FakeWorld");
		}
		
		public function createFakeBody():FakeBody
		{
			var newBodyMemoryAddress:String = _extensionContext.call("createFakeBody") as String;
			
			validateMemoryAddress(newBodyMemoryAddress);
			
			var newBody:FakeBody = new FakeBody(newBodyMemoryAddress);
			
			return newBody;
		}
	}

}