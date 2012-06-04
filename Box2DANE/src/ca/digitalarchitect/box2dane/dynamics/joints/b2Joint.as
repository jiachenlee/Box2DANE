/*================================================================================
*
* File Name: b2Joint.as
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

package ca.digitalarchitect.box2dane.dynamics.joints
{
	import ca.digitalarchitect.box2dane.BaseNativeClass;
	import ca.digitalarchitect.box2dane.common.b2Vec2;
	import ca.digitalarchitect.box2dane.dynamics.b2Body;
	
	public class b2Joint extends BaseNativeClass
	{

		public b2Joint(nativeMemoryAddress:String)
		{
			
		}

		public function GetType():int
		{
			return nativeContext.call("ane_b2Joint_callback_GetType", ...);
		}

		public function GetBodyA():b2Body
		{
			return nativeContext.call("ane_b2Joint_callback_GetBodyA", ...);
		}

		public function GetBodyB():b2Body
		{
			return nativeContext.call("ane_b2Joint_callback_GetBodyB", ...);
		}

		public function GetAnchorA():b2Vec2
		{
			return nativeContext.call("ane_b2Joint_callback_GetAnchorA", ...);
		}

		public function GetAnchorB():b2Vec2
		{
			return nativeContext.call("ane_b2Joint_callback_GetAnchorB", ...);
		}

		public function GetReactionForce(inv_dt:Number):b2Vec2
		{
			return nativeContext.call("ane_b2Joint_callback_GetReactionForce", ...);
		}

		public function GetReactionTorque(inv_dt:Number):Number
		{
			return nativeContext.call("ane_b2Joint_callback_GetReactionTorque", ...);
		}

		public function GetNext():b2Joint
		{
			return nativeContext.call("ane_b2Joint_callback_GetNext", ...);
		}

		public function GetUserData():Object
		{
			return nativeContext.call("ane_b2Joint_callback_GetUserData", ...);
		}

		public function SetUserData(data:Object):void
		{
			nativeContext.call("ane_b2Joint_callback_SetUserData", ...);
		}

		public function IsActive():Boolean
		{
			return nativeContext.call("ane_b2Joint_callback_IsActive", ...);
		}

		public function GetCollideConnected():Boolean
		{
			return nativeContext.call("ane_b2Joint_callback_GetCollideConnected", ...);
		}

		public function Dump():void
		{
			nativeContext.call("ane_b2Joint_callback_Dump", ...);
		}

		public function ShiftOrigin(newOrigin:b2Vec2):void
		{
			nativeContext.call("ane_b2Joint_callback_ShiftOrigin", ...);
		}

	}
}