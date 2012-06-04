/*================================================================================
*
* File Name: b2WheelJointDef.as
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
	
	public class b2WheelJointDef extends b2JointDef
	{

		private var _localAnchorA:b2Vec2;
		private var _localAnchorB:b2Vec2;
		private var _localAxisA:b2Vec2;
		private var _enableMotor:Boolean;
		private var _maxMotorTorque:Number;
		private var _motorSpeed:Number;
		private var _frequencyHz:Number;
		private var _dampingRatio:Number;

		public function b2WheelJointDef()
		{
			nativeContext.call("ane_b2WheelJointDef_constructor_b2WheelJointDef", ...);
		}

		public function Initialize(bodyA:b2Body, bodyB:b2Body, anchor:b2Vec2, axis:b2Vec2):void
		{
			nativeContext.call("ane_b2WheelJointDef_callback_Initialize", ...);
		}

		public function set localAnchorA(val:b2Vec2):void
		{
			if(_readOnly == true){
				return;
			}
			_localAnchorA = val;
			nativeContext.call("ane_b2WheelJointDef_setter_localAnchorA", ...);
		}

		public function get localAnchorA():b2Vec2
		{
			_localAnchorA = nativeContext.call("ane_b2WheelJointDef_getter_localAnchorA", ...);
			return _localAnchorA;
		}

		public function set localAnchorB(val:b2Vec2):void
		{
			if(_readOnly == true){
				return;
			}
			_localAnchorB = val;
			nativeContext.call("ane_b2WheelJointDef_setter_localAnchorB", ...);
		}

		public function get localAnchorB():b2Vec2
		{
			_localAnchorB = nativeContext.call("ane_b2WheelJointDef_getter_localAnchorB", ...);
			return _localAnchorB;
		}

		public function set localAxisA(val:b2Vec2):void
		{
			if(_readOnly == true){
				return;
			}
			_localAxisA = val;
			nativeContext.call("ane_b2WheelJointDef_setter_localAxisA", ...);
		}

		public function get localAxisA():b2Vec2
		{
			_localAxisA = nativeContext.call("ane_b2WheelJointDef_getter_localAxisA", ...);
			return _localAxisA;
		}

		public function set enableMotor(val:Boolean):void
		{
			if(_readOnly == true){
				return;
			}
			_enableMotor = val;
			nativeContext.call("ane_b2WheelJointDef_setter_enableMotor", ...);
		}

		public function get enableMotor():Boolean
		{
			_enableMotor = nativeContext.call("ane_b2WheelJointDef_getter_enableMotor", ...);
			return _enableMotor;
		}

		public function set maxMotorTorque(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_maxMotorTorque = val;
			nativeContext.call("ane_b2WheelJointDef_setter_maxMotorTorque", ...);
		}

		public function get maxMotorTorque():Number
		{
			_maxMotorTorque = nativeContext.call("ane_b2WheelJointDef_getter_maxMotorTorque", ...);
			return _maxMotorTorque;
		}

		public function set motorSpeed(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_motorSpeed = val;
			nativeContext.call("ane_b2WheelJointDef_setter_motorSpeed", ...);
		}

		public function get motorSpeed():Number
		{
			_motorSpeed = nativeContext.call("ane_b2WheelJointDef_getter_motorSpeed", ...);
			return _motorSpeed;
		}

		public function set frequencyHz(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_frequencyHz = val;
			nativeContext.call("ane_b2WheelJointDef_setter_frequencyHz", ...);
		}

		public function get frequencyHz():Number
		{
			_frequencyHz = nativeContext.call("ane_b2WheelJointDef_getter_frequencyHz", ...);
			return _frequencyHz;
		}

		public function set dampingRatio(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_dampingRatio = val;
			nativeContext.call("ane_b2WheelJointDef_setter_dampingRatio", ...);
		}

		public function get dampingRatio():Number
		{
			_dampingRatio = nativeContext.call("ane_b2WheelJointDef_getter_dampingRatio", ...);
			return _dampingRatio;
		}

	}
}