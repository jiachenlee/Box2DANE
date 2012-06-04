/*================================================================================
*
* File Name: b2PulleyJointDef.as
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
	import ca.digitalarchitect.box2dane.dynamics.b2Body;
	
	public class b2PulleyJointDef extends b2JointDef
	{

		private var _groundAnchorA:b2Vec2;
		private var _groundAnchorB:b2Vec2;
		private var _localAnchorA:b2Vec2;
		private var _localAnchorB:b2Vec2;
		private var _lengthA:Number;
		private var _lengthB:Number;
		private var _ratio:Number;

		public function b2PulleyJointDef()
		{
			nativeContext.call("ane_b2PulleyJointDef_constructor_b2PulleyJointDef", ...);
		}

		public function Initialize(bodyA:b2Body, bodyB:b2Body, groundAnchorA:b2Vec2, groundAnchorB:b2Vec2, anchorA:b2Vec2, anchorB:b2Vec2, ratio:Number):void
		{
			nativeContext.call("ane_b2PulleyJointDef_callback_Initialize", ...);
		}

		public function set groundAnchorA(val:b2Vec2):void
		{
			if(_readOnly == true){
				return;
			}
			_groundAnchorA = val;
			nativeContext.call("ane_b2PulleyJointDef_setter_groundAnchorA", ...);
		}

		public function get groundAnchorA():b2Vec2
		{
			_groundAnchorA = nativeContext.call("ane_b2PulleyJointDef_getter_groundAnchorA", ...);
			return _groundAnchorA;
		}

		public function set groundAnchorB(val:b2Vec2):void
		{
			if(_readOnly == true){
				return;
			}
			_groundAnchorB = val;
			nativeContext.call("ane_b2PulleyJointDef_setter_groundAnchorB", ...);
		}

		public function get groundAnchorB():b2Vec2
		{
			_groundAnchorB = nativeContext.call("ane_b2PulleyJointDef_getter_groundAnchorB", ...);
			return _groundAnchorB;
		}

		public function set localAnchorA(val:b2Vec2):void
		{
			if(_readOnly == true){
				return;
			}
			_localAnchorA = val;
			nativeContext.call("ane_b2PulleyJointDef_setter_localAnchorA", ...);
		}

		public function get localAnchorA():b2Vec2
		{
			_localAnchorA = nativeContext.call("ane_b2PulleyJointDef_getter_localAnchorA", ...);
			return _localAnchorA;
		}

		public function set localAnchorB(val:b2Vec2):void
		{
			if(_readOnly == true){
				return;
			}
			_localAnchorB = val;
			nativeContext.call("ane_b2PulleyJointDef_setter_localAnchorB", ...);
		}

		public function get localAnchorB():b2Vec2
		{
			_localAnchorB = nativeContext.call("ane_b2PulleyJointDef_getter_localAnchorB", ...);
			return _localAnchorB;
		}

		public function set lengthA(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_lengthA = val;
			nativeContext.call("ane_b2PulleyJointDef_setter_lengthA", ...);
		}

		public function get lengthA():Number
		{
			_lengthA = nativeContext.call("ane_b2PulleyJointDef_getter_lengthA", ...);
			return _lengthA;
		}

		public function set lengthB(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_lengthB = val;
			nativeContext.call("ane_b2PulleyJointDef_setter_lengthB", ...);
		}

		public function get lengthB():Number
		{
			_lengthB = nativeContext.call("ane_b2PulleyJointDef_getter_lengthB", ...);
			return _lengthB;
		}

		public function set ratio(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_ratio = val;
			nativeContext.call("ane_b2PulleyJointDef_setter_ratio", ...);
		}

		public function get ratio():Number
		{
			_ratio = nativeContext.call("ane_b2PulleyJointDef_getter_ratio", ...);
			return _ratio;
		}

	}
}