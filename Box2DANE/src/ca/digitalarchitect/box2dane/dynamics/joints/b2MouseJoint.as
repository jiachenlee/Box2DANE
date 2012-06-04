/*================================================================================
*
* File Name: b2MouseJoint.as
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
	
	public class b2MouseJoint extends b2Joint
	{

		public b2MouseJoint(nativeMemoryAddress:String)
		{
			
		}

		public function GetAnchorA():b2Vec2
		{
			return nativeContext.call("ane_b2MouseJoint_callback_GetAnchorA", ...);
		}

		public function GetAnchorB():b2Vec2
		{
			return nativeContext.call("ane_b2MouseJoint_callback_GetAnchorB", ...);
		}

		public function GetReactionForce(inv_dt:Number):b2Vec2
		{
			return nativeContext.call("ane_b2MouseJoint_callback_GetReactionForce", ...);
		}

		public function GetReactionTorque(inv_dt:Number):Number
		{
			return nativeContext.call("ane_b2MouseJoint_callback_GetReactionTorque", ...);
		}

		public function SetTarget(target:b2Vec2):void
		{
			nativeContext.call("ane_b2MouseJoint_callback_SetTarget", ...);
		}

		public function GetTarget():b2Vec2
		{
			return nativeContext.call("ane_b2MouseJoint_callback_GetTarget", ...);
		}

		public function SetMaxForce(force:Number):void
		{
			nativeContext.call("ane_b2MouseJoint_callback_SetMaxForce", ...);
		}

		public function GetMaxForce():Number
		{
			return nativeContext.call("ane_b2MouseJoint_callback_GetMaxForce", ...);
		}

		public function SetFrequency(hz:Number):void
		{
			nativeContext.call("ane_b2MouseJoint_callback_SetFrequency", ...);
		}

		public function GetFrequency():Number
		{
			return nativeContext.call("ane_b2MouseJoint_callback_GetFrequency", ...);
		}

		public function SetDampingRatio(ratio:Number):void
		{
			nativeContext.call("ane_b2MouseJoint_callback_SetDampingRatio", ...);
		}

		public function GetDampingRatio():Number
		{
			return nativeContext.call("ane_b2MouseJoint_callback_GetDampingRatio", ...);
		}

		public function Dump():void
		{
			nativeContext.call("ane_b2MouseJoint_callback_Dump", ...);
		}

		public function ShiftOrigin(newOrigin:b2Vec2):void
		{
			nativeContext.call("ane_b2MouseJoint_callback_ShiftOrigin", ...);
		}

	}
}