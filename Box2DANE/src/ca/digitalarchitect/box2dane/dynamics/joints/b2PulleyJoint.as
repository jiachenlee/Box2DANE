/*================================================================================
*
* File Name: b2PulleyJoint.as
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
	
	public class b2PulleyJoint extends b2Joint
	{

		public b2PulleyJoint(nativeMemoryAddress:String)
		{
			
		}

		public function GetAnchorA():b2Vec2
		{
			return nativeContext.call("ane_b2PulleyJoint_callback_GetAnchorA", ...);
		}

		public function GetAnchorB():b2Vec2
		{
			return nativeContext.call("ane_b2PulleyJoint_callback_GetAnchorB", ...);
		}

		public function GetReactionForce(inv_dt:Number):b2Vec2
		{
			return nativeContext.call("ane_b2PulleyJoint_callback_GetReactionForce", ...);
		}

		public function GetReactionTorque(inv_dt:Number):Number
		{
			return nativeContext.call("ane_b2PulleyJoint_callback_GetReactionTorque", ...);
		}

		public function GetGroundAnchorA():b2Vec2
		{
			return nativeContext.call("ane_b2PulleyJoint_callback_GetGroundAnchorA", ...);
		}

		public function GetGroundAnchorB():b2Vec2
		{
			return nativeContext.call("ane_b2PulleyJoint_callback_GetGroundAnchorB", ...);
		}

		public function GetLengthA():Number
		{
			return nativeContext.call("ane_b2PulleyJoint_callback_GetLengthA", ...);
		}

		public function GetLengthB():Number
		{
			return nativeContext.call("ane_b2PulleyJoint_callback_GetLengthB", ...);
		}

		public function GetRatio():Number
		{
			return nativeContext.call("ane_b2PulleyJoint_callback_GetRatio", ...);
		}

		public function GetCurrentLengthA():Number
		{
			return nativeContext.call("ane_b2PulleyJoint_callback_GetCurrentLengthA", ...);
		}

		public function GetCurrentLengthB():Number
		{
			return nativeContext.call("ane_b2PulleyJoint_callback_GetCurrentLengthB", ...);
		}

		public function Dump():void
		{
			nativeContext.call("ane_b2PulleyJoint_callback_Dump", ...);
		}

		public function ShiftOrigin(newOrigin:b2Vec2):void
		{
			nativeContext.call("ane_b2PulleyJoint_callback_ShiftOrigin", ...);
		}

	}
}