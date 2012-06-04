/*================================================================================
*
* File Name: b2WheelJoint.as
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
	
	public class b2WheelJoint extends b2Joint
	{

		public b2WheelJoint(nativeMemoryAddress:String)
		{
			
		}

		public function GetDefinition(def:b2WheelJointDef):void
		{
			nativeContext.call("ane_b2WheelJoint_callback_GetDefinition", ...);
		}

		public function GetAnchorA():b2Vec2
		{
			return nativeContext.call("ane_b2WheelJoint_callback_GetAnchorA", ...);
		}

		public function GetAnchorB():b2Vec2
		{
			return nativeContext.call("ane_b2WheelJoint_callback_GetAnchorB", ...);
		}

		public function GetReactionForce(inv_dt:Number):b2Vec2
		{
			return nativeContext.call("ane_b2WheelJoint_callback_GetReactionForce", ...);
		}

		public function GetReactionTorque(inv_dt:Number):Number
		{
			return nativeContext.call("ane_b2WheelJoint_callback_GetReactionTorque", ...);
		}

		public function GetLocalAnchorA():b2Vec2
		{
			return nativeContext.call("ane_b2WheelJoint_callback_GetLocalAnchorA", ...);
		}

		public function GetLocalAnchorB():b2Vec2
		{
			return nativeContext.call("ane_b2WheelJoint_callback_GetLocalAnchorB", ...);
		}

		public function GetLocalAxisA():b2Vec2
		{
			return nativeContext.call("ane_b2WheelJoint_callback_GetLocalAxisA", ...);
		}

		public function GetJointTranslation():Number
		{
			return nativeContext.call("ane_b2WheelJoint_callback_GetJointTranslation", ...);
		}

		public function GetJointSpeed():Number
		{
			return nativeContext.call("ane_b2WheelJoint_callback_GetJointSpeed", ...);
		}

		public function IsMotorEnabled():Boolean
		{
			return nativeContext.call("ane_b2WheelJoint_callback_IsMotorEnabled", ...);
		}

		public function EnableMotor(flag:Boolean):void
		{
			nativeContext.call("ane_b2WheelJoint_callback_EnableMotor", ...);
		}

		public function SetMotorSpeed(speed:Number):void
		{
			nativeContext.call("ane_b2WheelJoint_callback_SetMotorSpeed", ...);
		}

		public function GetMotorSpeed():Number
		{
			return nativeContext.call("ane_b2WheelJoint_callback_GetMotorSpeed", ...);
		}

		public function SetMaxMotorTorque(torque:Number):void
		{
			nativeContext.call("ane_b2WheelJoint_callback_SetMaxMotorTorque", ...);
		}

		public function GetMaxMotorTorque():Number
		{
			return nativeContext.call("ane_b2WheelJoint_callback_GetMaxMotorTorque", ...);
		}

		public function GetMotorTorque(inv_dt:Number):Number
		{
			return nativeContext.call("ane_b2WheelJoint_callback_GetMotorTorque", ...);
		}

		public function SetSpringFrequencyHz(hz:Number):void
		{
			nativeContext.call("ane_b2WheelJoint_callback_SetSpringFrequencyHz", ...);
		}

		public function GetSpringFrequencyHz():Number
		{
			return nativeContext.call("ane_b2WheelJoint_callback_GetSpringFrequencyHz", ...);
		}

		public function SetSpringDampingRatio(ratio:Number):void
		{
			nativeContext.call("ane_b2WheelJoint_callback_SetSpringDampingRatio", ...);
		}

		public function GetSpringDampingRatio():Number
		{
			return nativeContext.call("ane_b2WheelJoint_callback_GetSpringDampingRatio", ...);
		}

		public function Dump():void
		{
			nativeContext.call("ane_b2WheelJoint_callback_Dump", ...);
		}

	}
}