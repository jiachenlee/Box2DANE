/*================================================================================
*
* File Name: b2RopeJointDef.as
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
	
	public class b2RopeJointDef extends b2JointDef
	{

		private var _localAnchorA:b2Vec2;
		private var _localAnchorB:b2Vec2;
		private var _maxLength:Number;

		public function b2RopeJointDef()
		{
			nativeContext.call("ane_b2RopeJointDef_constructor_b2RopeJointDef", ...);
		}

		public function set localAnchorA(val:b2Vec2):void
		{
			if(_readOnly == true){
				return;
			}
			_localAnchorA = val;
			nativeContext.call("ane_b2RopeJointDef_setter_localAnchorA", ...);
		}

		public function get localAnchorA():b2Vec2
		{
			_localAnchorA = nativeContext.call("ane_b2RopeJointDef_getter_localAnchorA", ...);
			return _localAnchorA;
		}

		public function set localAnchorB(val:b2Vec2):void
		{
			if(_readOnly == true){
				return;
			}
			_localAnchorB = val;
			nativeContext.call("ane_b2RopeJointDef_setter_localAnchorB", ...);
		}

		public function get localAnchorB():b2Vec2
		{
			_localAnchorB = nativeContext.call("ane_b2RopeJointDef_getter_localAnchorB", ...);
			return _localAnchorB;
		}

		public function set maxLength(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_maxLength = val;
			nativeContext.call("ane_b2RopeJointDef_setter_maxLength", ...);
		}

		public function get maxLength():Number
		{
			_maxLength = nativeContext.call("ane_b2RopeJointDef_getter_maxLength", ...);
			return _maxLength;
		}

	}
}