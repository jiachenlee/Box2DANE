/*================================================================================
*
* File Name: b2WeldJointDef.as
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
	import ca.digitalarchitect.box2dane.dynamics.b2Body;
	
	public class b2WeldJointDef extends b2JointDef
	{

		private var _localAnchorA:b2Vec2;
		private var _localAnchorB:b2Vec2;
		private var _referenceAngle:Number;
		private var _frequencyHz:Number;
		private var _dampingRatio:Number;

		public function b2WeldJointDef()
		{
			nativeContext.call("ane_b2WeldJointDef_constructor_b2WeldJointDef", ...);
		}

		public function Initialize(bodyA:b2Body, bodyB:b2Body, anchor:b2Vec2):void
		{
			nativeContext.call("ane_b2WeldJointDef_callback_Initialize", ...);
		}

		public function set localAnchorA(val:b2Vec2):void
		{
			if(_readOnly == true){
				return;
			}
			_localAnchorA = val;
			nativeContext.call("ane_b2WeldJointDef_setter_localAnchorA", ...);
		}

		public function get localAnchorA():b2Vec2
		{
			_localAnchorA = nativeContext.call("ane_b2WeldJointDef_getter_localAnchorA", ...);
			return _localAnchorA;
		}

		public function set localAnchorB(val:b2Vec2):void
		{
			if(_readOnly == true){
				return;
			}
			_localAnchorB = val;
			nativeContext.call("ane_b2WeldJointDef_setter_localAnchorB", ...);
		}

		public function get localAnchorB():b2Vec2
		{
			_localAnchorB = nativeContext.call("ane_b2WeldJointDef_getter_localAnchorB", ...);
			return _localAnchorB;
		}

		public function set referenceAngle(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_referenceAngle = val;
			nativeContext.call("ane_b2WeldJointDef_setter_referenceAngle", ...);
		}

		public function get referenceAngle():Number
		{
			_referenceAngle = nativeContext.call("ane_b2WeldJointDef_getter_referenceAngle", ...);
			return _referenceAngle;
		}

		public function set frequencyHz(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_frequencyHz = val;
			nativeContext.call("ane_b2WeldJointDef_setter_frequencyHz", ...);
		}

		public function get frequencyHz():Number
		{
			_frequencyHz = nativeContext.call("ane_b2WeldJointDef_getter_frequencyHz", ...);
			return _frequencyHz;
		}

		public function set dampingRatio(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_dampingRatio = val;
			nativeContext.call("ane_b2WeldJointDef_setter_dampingRatio", ...);
		}

		public function get dampingRatio():Number
		{
			_dampingRatio = nativeContext.call("ane_b2WeldJointDef_getter_dampingRatio", ...);
			return _dampingRatio;
		}

	}
}