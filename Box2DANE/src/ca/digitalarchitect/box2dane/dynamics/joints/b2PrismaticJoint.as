/*================================================================================
*
* File Name: b2PrismaticJoint.as
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
	import ca.digitalarchitect.box2dane.common.b2Vec2;
	
	public class b2PrismaticJoint extends b2Joint
	{

		public b2PrismaticJoint(nativeMemoryAddress:String)
		{
			
		}

		public function GetAnchorA():b2Vec2
		{
			return nativeContext.call("ane_b2PrismaticJoint_callback_GetAnchorA", ...);
		}

		public function GetAnchorB():b2Vec2
		{
			return nativeContext.call("ane_b2PrismaticJoint_callback_GetAnchorB", ...);
		}

		public function GetReactionForce(inv_dt:Number):b2Vec2
		{
			return nativeContext.call("ane_b2PrismaticJoint_callback_GetReactionForce", ...);
		}

		public function GetReactionTorque(inv_dt:Number):Number
		{
			return nativeContext.call("ane_b2PrismaticJoint_callback_GetReactionTorque", ...);
		}

		public function GetLocalAnchorA():b2Vec2
		{
			return nativeContext.call("ane_b2PrismaticJoint_callback_GetLocalAnchorA", ...);
		}

		public function GetLocalAnchorB():b2Vec2
		{
			return nativeContext.call("ane_b2PrismaticJoint_callback_GetLocalAnchorB", ...);
		}

		public function GetLocalAxisA():b2Vec2
		{
			return nativeContext.call("ane_b2PrismaticJoint_callback_GetLocalAxisA", ...);
		}

		public function GetReferenceAngle():Number
		{
			return nativeContext.call("ane_b2PrismaticJoint_callback_GetReferenceAngle", ...);
		}

		public function GetJointTranslation():Number
		{
			return nativeContext.call("ane_b2PrismaticJoint_callback_GetJointTranslation", ...);
		}

		public function GetJointSpeed():Number
		{
			return nativeContext.call("ane_b2PrismaticJoint_callback_GetJointSpeed", ...);
		}

		public function IsLimitEnabled():Boolean
		{
			return nativeContext.call("ane_b2PrismaticJoint_callback_IsLimitEnabled", ...);
		}

		public function EnableLimit(flag:Boolean):void
		{
			nativeContext.call("ane_b2PrismaticJoint_callback_EnableLimit", ...);
		}

		public function GetLowerLimit():Number
		{
			return nativeContext.call("ane_b2PrismaticJoint_callback_GetLowerLimit", ...);
		}

		public function GetUpperLimit():Number
		{
			return nativeContext.call("ane_b2PrismaticJoint_callback_GetUpperLimit", ...);
		}

		public function SetLimits(lower:Number, upper:Number):void
		{
			nativeContext.call("ane_b2PrismaticJoint_callback_SetLimits", ...);
		}

		public function IsMotorEnabled():Boolean
		{
			return nativeContext.call("ane_b2PrismaticJoint_callback_IsMotorEnabled", ...);
		}

		public function EnableMotor(flag:Boolean):void
		{
			nativeContext.call("ane_b2PrismaticJoint_callback_EnableMotor", ...);
		}

		public function SetMotorSpeed(speed:Number):void
		{
			nativeContext.call("ane_b2PrismaticJoint_callback_SetMotorSpeed", ...);
		}

		public function GetMotorSpeed():Number
		{
			return nativeContext.call("ane_b2PrismaticJoint_callback_GetMotorSpeed", ...);
		}

		public function SetMaxMotorForce(force:Number):void
		{
			nativeContext.call("ane_b2PrismaticJoint_callback_SetMaxMotorForce", ...);
		}

		public function GetMaxMotorForce():Number
		{
			return nativeContext.call("ane_b2PrismaticJoint_callback_GetMaxMotorForce", ...);
		}

		public function GetMotorForce(inv_dt:Number):Number
		{
			return nativeContext.call("ane_b2PrismaticJoint_callback_GetMotorForce", ...);
		}

		public function Dump():void
		{
			nativeContext.call("ane_b2PrismaticJoint_callback_Dump", ...);
		}

	}
}