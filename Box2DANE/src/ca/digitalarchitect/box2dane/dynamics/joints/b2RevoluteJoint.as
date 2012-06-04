/*================================================================================
*
* File Name: b2RevoluteJoint.as
* Created on: Mon May 7 22:46:26 GMT-0400 2012
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
	import ca.digitalarchitect.box2dane.common.b2Vec2;
	
	public class b2RevoluteJoint extends b2Joint
	{

		public b2RevoluteJoint(nativeMemoryAddress:String)
		{
			
		}

		public function GetAnchorA():b2Vec2
		{
			return nativeContext.call("ane_b2RevoluteJoint_callback_GetAnchorA", ...);
		}

		public function GetAnchorB():b2Vec2
		{
			return nativeContext.call("ane_b2RevoluteJoint_callback_GetAnchorB", ...);
		}

		public function GetLocalAnchorA():b2Vec2
		{
			return nativeContext.call("ane_b2RevoluteJoint_callback_GetLocalAnchorA", ...);
		}

		public function GetLocalAnchorB():b2Vec2
		{
			return nativeContext.call("ane_b2RevoluteJoint_callback_GetLocalAnchorB", ...);
		}

		public function GetReferenceAngle():Number
		{
			return nativeContext.call("ane_b2RevoluteJoint_callback_GetReferenceAngle", ...);
		}

		public function GetJointAngle():Number
		{
			return nativeContext.call("ane_b2RevoluteJoint_callback_GetJointAngle", ...);
		}

		public function GetJointSpeed():Number
		{
			return nativeContext.call("ane_b2RevoluteJoint_callback_GetJointSpeed", ...);
		}

		public function IsLimitEnabled():Boolean
		{
			return nativeContext.call("ane_b2RevoluteJoint_callback_IsLimitEnabled", ...);
		}

		public function EnableLimit(flag:Boolean):void
		{
			nativeContext.call("ane_b2RevoluteJoint_callback_EnableLimit", ...);
		}

		public function GetLowerLimit():Number
		{
			return nativeContext.call("ane_b2RevoluteJoint_callback_GetLowerLimit", ...);
		}

		public function GetUpperLimit():Number
		{
			return nativeContext.call("ane_b2RevoluteJoint_callback_GetUpperLimit", ...);
		}

		public function SetLimits(lower:Number, upper:Number):void
		{
			nativeContext.call("ane_b2RevoluteJoint_callback_SetLimits", ...);
		}

		public function IsMotorEnabled():Boolean
		{
			return nativeContext.call("ane_b2RevoluteJoint_callback_IsMotorEnabled", ...);
		}

		public function EnableMotor(flag:Boolean):void
		{
			nativeContext.call("ane_b2RevoluteJoint_callback_EnableMotor", ...);
		}

		public function SetMotorSpeed(speed:Number):void
		{
			nativeContext.call("ane_b2RevoluteJoint_callback_SetMotorSpeed", ...);
		}

		public function GetMotorSpeed():Number
		{
			return nativeContext.call("ane_b2RevoluteJoint_callback_GetMotorSpeed", ...);
		}

		public function SetMaxMotorTorque(torque:Number):void
		{
			nativeContext.call("ane_b2RevoluteJoint_callback_SetMaxMotorTorque", ...);
		}

		public function GetMaxMotorTorque():Number
		{
			return nativeContext.call("ane_b2RevoluteJoint_callback_GetMaxMotorTorque", ...);
		}

		public function GetReactionForce(inv_dt:Number):b2Vec2
		{
			return nativeContext.call("ane_b2RevoluteJoint_callback_GetReactionForce", ...);
		}

		public function GetReactionTorque(inv_dt:Number):Number
		{
			return nativeContext.call("ane_b2RevoluteJoint_callback_GetReactionTorque", ...);
		}

		public function GetMotorTorque(inv_dt:Number):Number
		{
			return nativeContext.call("ane_b2RevoluteJoint_callback_GetMotorTorque", ...);
		}

		public function Dump():void
		{
			nativeContext.call("ane_b2RevoluteJoint_callback_Dump", ...);
		}

	}
}