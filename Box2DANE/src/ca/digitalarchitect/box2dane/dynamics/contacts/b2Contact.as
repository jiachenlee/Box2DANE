/*================================================================================
*
* File Name: b2Contact.as
* Created on: Mon May 7 22:46:25 GMT-0400 2012
* Copyright (©) 2012 Jesse Nicholson. All Rights Reserved. 
* 
*
*                       ***** BEGIN LICENSE BLOCK *****
* This Source Code Form is subject to the terms of the Mozilla Public
* License, v. 2.0. If a copy of the MPL was not distributed with this file,
* You can obtain one at http://mozilla.org/MPL/2.0/.
*                       ***** END  LICENSE  BLOCK *****
*===============================================================================*/

package ca.digitalarchitect.box2dane.dynamics.contacts
{
	import ca.digitalarchitect.box2dane.BaseNativeClass;
	import ca.digitalarchitect.box2dane.collision.b2Manifold;
	import ca.digitalarchitect.box2dane.collision.b2WorldManifold;
	import ca.digitalarchitect.box2dane.common.b2Transform;
	import ca.digitalarchitect.box2dane.dynamics.b2Fixture;
	
	public class b2Contact extends BaseNativeClass
	{

		public b2Contact(nativeMemoryAddress:String)
		{
			
		}

		public function GetManifold():b2Manifold
		{
			return nativeContext.call("ane_b2Contact_callback_GetManifold", ...);
		}

		public function GetWorldManifold(worldManifold:b2WorldManifold):void
		{
			nativeContext.call("ane_b2Contact_callback_GetWorldManifold", ...);
		}

		public function IsTouching():Boolean
		{
			return nativeContext.call("ane_b2Contact_callback_IsTouching", ...);
		}

		public function SetEnabled(flag:Boolean):void
		{
			nativeContext.call("ane_b2Contact_callback_SetEnabled", ...);
		}

		public function IsEnabled():Boolean
		{
			return nativeContext.call("ane_b2Contact_callback_IsEnabled", ...);
		}

		public function GetNext():b2Contact
		{
			return nativeContext.call("ane_b2Contact_callback_GetNext", ...);
		}

		public function GetFixtureA():b2Fixture
		{
			return nativeContext.call("ane_b2Contact_callback_GetFixtureA", ...);
		}

		public function GetChildIndexA():int
		{
			return nativeContext.call("ane_b2Contact_callback_GetChildIndexA", ...);
		}

		public function GetFixtureB():b2Fixture
		{
			return nativeContext.call("ane_b2Contact_callback_GetFixtureB", ...);
		}

		public function GetChildIndexB():int
		{
			return nativeContext.call("ane_b2Contact_callback_GetChildIndexB", ...);
		}

		public function SetFriction(friction:Number):void
		{
			nativeContext.call("ane_b2Contact_callback_SetFriction", ...);
		}

		public function GetFriction():Number
		{
			return nativeContext.call("ane_b2Contact_callback_GetFriction", ...);
		}

		public function ResetFriction():void
		{
			nativeContext.call("ane_b2Contact_callback_ResetFriction", ...);
		}

		public function SetRestitution(restitution:Number):void
		{
			nativeContext.call("ane_b2Contact_callback_SetRestitution", ...);
		}

		public function GetRestitution():Number
		{
			return nativeContext.call("ane_b2Contact_callback_GetRestitution", ...);
		}

		public function ResetRestitution():void
		{
			nativeContext.call("ane_b2Contact_callback_ResetRestitution", ...);
		}

		public function SetTangentSpeed(speed:Number):void
		{
			nativeContext.call("ane_b2Contact_callback_SetTangentSpeed", ...);
		}

		public function GetTangentSpeed():Number
		{
			return nativeContext.call("ane_b2Contact_callback_GetTangentSpeed", ...);
		}

		public function Evaluate(manifold:b2Manifold, xfA:b2Transform, xfB:b2Transform):void
		{
			nativeContext.call("ane_b2Contact_callback_Evaluate", ...);
		}

	}
}