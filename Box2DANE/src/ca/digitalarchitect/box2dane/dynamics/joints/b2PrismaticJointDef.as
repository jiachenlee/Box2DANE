/*================================================================================
*
* File Name: b2PrismaticJointDef.as
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
	
	public class b2PrismaticJointDef extends b2JointDef
	{

		private var _localAnchorA:b2Vec2;
		private var _localAnchorB:b2Vec2;
		private var _localAxisA:b2Vec2;
		private var _referenceAngle:Number;
		private var _enableLimit:Boolean;
		private var _lowerTranslation:Number;
		private var _upperTranslation:Number;
		private var _enableMotor:Boolean;
		private var _maxMotorForce:Number;
		private var _motorSpeed:Number;

		public function b2PrismaticJointDef()
		{
			nativeContext.call("ane_b2PrismaticJointDef_constructor_b2PrismaticJointDef", ...);
		}

		public function Initialize(bodyA:b2Body, bodyB:b2Body, anchor:b2Vec2, axis:b2Vec2):void
		{
			nativeContext.call("ane_b2PrismaticJointDef_callback_Initialize", ...);
		}

		public function set localAnchorA(val:b2Vec2):void
		{
			if(_readOnly == true){
				return;
			}
			_localAnchorA = val;
			nativeContext.call("ane_b2PrismaticJointDef_setter_localAnchorA", ...);
		}

		public function get localAnchorA():b2Vec2
		{
			_localAnchorA = nativeContext.call("ane_b2PrismaticJointDef_getter_localAnchorA", ...);
			return _localAnchorA;
		}

		public function set localAnchorB(val:b2Vec2):void
		{
			if(_readOnly == true){
				return;
			}
			_localAnchorB = val;
			nativeContext.call("ane_b2PrismaticJointDef_setter_localAnchorB", ...);
		}

		public function get localAnchorB():b2Vec2
		{
			_localAnchorB = nativeContext.call("ane_b2PrismaticJointDef_getter_localAnchorB", ...);
			return _localAnchorB;
		}

		public function set localAxisA(val:b2Vec2):void
		{
			if(_readOnly == true){
				return;
			}
			_localAxisA = val;
			nativeContext.call("ane_b2PrismaticJointDef_setter_localAxisA", ...);
		}

		public function get localAxisA():b2Vec2
		{
			_localAxisA = nativeContext.call("ane_b2PrismaticJointDef_getter_localAxisA", ...);
			return _localAxisA;
		}

		public function set referenceAngle(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_referenceAngle = val;
			nativeContext.call("ane_b2PrismaticJointDef_setter_referenceAngle", ...);
		}

		public function get referenceAngle():Number
		{
			_referenceAngle = nativeContext.call("ane_b2PrismaticJointDef_getter_referenceAngle", ...);
			return _referenceAngle;
		}

		public function set enableLimit(val:Boolean):void
		{
			if(_readOnly == true){
				return;
			}
			_enableLimit = val;
			nativeContext.call("ane_b2PrismaticJointDef_setter_enableLimit", ...);
		}

		public function get enableLimit():Boolean
		{
			_enableLimit = nativeContext.call("ane_b2PrismaticJointDef_getter_enableLimit", ...);
			return _enableLimit;
		}

		public function set lowerTranslation(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_lowerTranslation = val;
			nativeContext.call("ane_b2PrismaticJointDef_setter_lowerTranslation", ...);
		}

		public function get lowerTranslation():Number
		{
			_lowerTranslation = nativeContext.call("ane_b2PrismaticJointDef_getter_lowerTranslation", ...);
			return _lowerTranslation;
		}

		public function set upperTranslation(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_upperTranslation = val;
			nativeContext.call("ane_b2PrismaticJointDef_setter_upperTranslation", ...);
		}

		public function get upperTranslation():Number
		{
			_upperTranslation = nativeContext.call("ane_b2PrismaticJointDef_getter_upperTranslation", ...);
			return _upperTranslation;
		}

		public function set enableMotor(val:Boolean):void
		{
			if(_readOnly == true){
				return;
			}
			_enableMotor = val;
			nativeContext.call("ane_b2PrismaticJointDef_setter_enableMotor", ...);
		}

		public function get enableMotor():Boolean
		{
			_enableMotor = nativeContext.call("ane_b2PrismaticJointDef_getter_enableMotor", ...);
			return _enableMotor;
		}

		public function set maxMotorForce(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_maxMotorForce = val;
			nativeContext.call("ane_b2PrismaticJointDef_setter_maxMotorForce", ...);
		}

		public function get maxMotorForce():Number
		{
			_maxMotorForce = nativeContext.call("ane_b2PrismaticJointDef_getter_maxMotorForce", ...);
			return _maxMotorForce;
		}

		public function set motorSpeed(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_motorSpeed = val;
			nativeContext.call("ane_b2PrismaticJointDef_setter_motorSpeed", ...);
		}

		public function get motorSpeed():Number
		{
			_motorSpeed = nativeContext.call("ane_b2PrismaticJointDef_getter_motorSpeed", ...);
			return _motorSpeed;
		}

	}
}