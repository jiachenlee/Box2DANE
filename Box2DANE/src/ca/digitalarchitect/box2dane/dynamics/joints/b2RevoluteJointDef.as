/*================================================================================
*
* File Name: b2RevoluteJointDef.as
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
	
	public class b2RevoluteJointDef extends b2JointDef
	{

		private var _localAnchorA:b2Vec2;
		private var _localAnchorB:b2Vec2;
		private var _referenceAngle:Number;
		private var _enableLimit:Boolean;
		private var _lowerAngle:Number;
		private var _upperAngle:Number;
		private var _enableMotor:Boolean;
		private var _motorSpeed:Number;
		private var _maxMotorTorque:Number;

		public function b2RevoluteJointDef()
		{
			nativeContext.call("ane_b2RevoluteJointDef_constructor_b2RevoluteJointDef", ...);
		}

		public function Initialize(bodyA:b2Body, bodyB:b2Body, anchor:b2Vec2):void
		{
			nativeContext.call("ane_b2RevoluteJointDef_callback_Initialize", ...);
		}

		public function set localAnchorA(val:b2Vec2):void
		{
			if(_readOnly == true){
				return;
			}
			_localAnchorA = val;
			nativeContext.call("ane_b2RevoluteJointDef_setter_localAnchorA", ...);
		}

		public function get localAnchorA():b2Vec2
		{
			_localAnchorA = nativeContext.call("ane_b2RevoluteJointDef_getter_localAnchorA", ...);
			return _localAnchorA;
		}

		public function set localAnchorB(val:b2Vec2):void
		{
			if(_readOnly == true){
				return;
			}
			_localAnchorB = val;
			nativeContext.call("ane_b2RevoluteJointDef_setter_localAnchorB", ...);
		}

		public function get localAnchorB():b2Vec2
		{
			_localAnchorB = nativeContext.call("ane_b2RevoluteJointDef_getter_localAnchorB", ...);
			return _localAnchorB;
		}

		public function set referenceAngle(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_referenceAngle = val;
			nativeContext.call("ane_b2RevoluteJointDef_setter_referenceAngle", ...);
		}

		public function get referenceAngle():Number
		{
			_referenceAngle = nativeContext.call("ane_b2RevoluteJointDef_getter_referenceAngle", ...);
			return _referenceAngle;
		}

		public function set enableLimit(val:Boolean):void
		{
			if(_readOnly == true){
				return;
			}
			_enableLimit = val;
			nativeContext.call("ane_b2RevoluteJointDef_setter_enableLimit", ...);
		}

		public function get enableLimit():Boolean
		{
			_enableLimit = nativeContext.call("ane_b2RevoluteJointDef_getter_enableLimit", ...);
			return _enableLimit;
		}

		public function set lowerAngle(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_lowerAngle = val;
			nativeContext.call("ane_b2RevoluteJointDef_setter_lowerAngle", ...);
		}

		public function get lowerAngle():Number
		{
			_lowerAngle = nativeContext.call("ane_b2RevoluteJointDef_getter_lowerAngle", ...);
			return _lowerAngle;
		}

		public function set upperAngle(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_upperAngle = val;
			nativeContext.call("ane_b2RevoluteJointDef_setter_upperAngle", ...);
		}

		public function get upperAngle():Number
		{
			_upperAngle = nativeContext.call("ane_b2RevoluteJointDef_getter_upperAngle", ...);
			return _upperAngle;
		}

		public function set enableMotor(val:Boolean):void
		{
			if(_readOnly == true){
				return;
			}
			_enableMotor = val;
			nativeContext.call("ane_b2RevoluteJointDef_setter_enableMotor", ...);
		}

		public function get enableMotor():Boolean
		{
			_enableMotor = nativeContext.call("ane_b2RevoluteJointDef_getter_enableMotor", ...);
			return _enableMotor;
		}

		public function set motorSpeed(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_motorSpeed = val;
			nativeContext.call("ane_b2RevoluteJointDef_setter_motorSpeed", ...);
		}

		public function get motorSpeed():Number
		{
			_motorSpeed = nativeContext.call("ane_b2RevoluteJointDef_getter_motorSpeed", ...);
			return _motorSpeed;
		}

		public function set maxMotorTorque(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_maxMotorTorque = val;
			nativeContext.call("ane_b2RevoluteJointDef_setter_maxMotorTorque", ...);
		}

		public function get maxMotorTorque():Number
		{
			_maxMotorTorque = nativeContext.call("ane_b2RevoluteJointDef_getter_maxMotorTorque", ...);
			return _maxMotorTorque;
		}

	}
}