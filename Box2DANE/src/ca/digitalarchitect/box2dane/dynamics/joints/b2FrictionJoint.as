/*================================================================================
*
* File Name: b2FrictionJoint.as
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
	
	public class b2FrictionJoint extends b2Joint
	{

		public b2FrictionJoint(nativeMemoryAddress:String)
		{
			
		}

		public function GetAnchorA():b2Vec2
		{
			return nativeContext.call("ane_b2FrictionJoint_callback_GetAnchorA", ...);
		}

		public function GetAnchorB():b2Vec2
		{
			return nativeContext.call("ane_b2FrictionJoint_callback_GetAnchorB", ...);
		}

		public function GetReactionForce(inv_dt:Number):b2Vec2
		{
			return nativeContext.call("ane_b2FrictionJoint_callback_GetReactionForce", ...);
		}

		public function GetReactionTorque(inv_dt:Number):Number
		{
			return nativeContext.call("ane_b2FrictionJoint_callback_GetReactionTorque", ...);
		}

		public function GetLocalAnchorA():b2Vec2
		{
			return nativeContext.call("ane_b2FrictionJoint_callback_GetLocalAnchorA", ...);
		}

		public function GetLocalAnchorB():b2Vec2
		{
			return nativeContext.call("ane_b2FrictionJoint_callback_GetLocalAnchorB", ...);
		}

		public function SetMaxForce(force:Number):void
		{
			nativeContext.call("ane_b2FrictionJoint_callback_SetMaxForce", ...);
		}

		public function GetMaxForce():Number
		{
			return nativeContext.call("ane_b2FrictionJoint_callback_GetMaxForce", ...);
		}

		public function SetMaxTorque(torque:Number):void
		{
			nativeContext.call("ane_b2FrictionJoint_callback_SetMaxTorque", ...);
		}

		public function GetMaxTorque():Number
		{
			return nativeContext.call("ane_b2FrictionJoint_callback_GetMaxTorque", ...);
		}

		public function Dump():void
		{
			nativeContext.call("ane_b2FrictionJoint_callback_Dump", ...);
		}

	}
}