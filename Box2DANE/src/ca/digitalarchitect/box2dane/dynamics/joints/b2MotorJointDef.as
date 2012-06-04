/*================================================================================
*
* File Name: b2MotorJointDef.as
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
	
	public class b2MotorJointDef extends b2JointDef
	{

		private var _linearOffset:b2Vec2;
		private var _angularOffset:Number;
		private var _maxForce:Number;
		private var _maxTorque:Number;
		private var _correctionFactor:Number;

		public function b2MotorJointDef()
		{
			nativeContext.call("ane_b2MotorJointDef_constructor_b2MotorJointDef", ...);
		}

		public function Initialize(bodyA:b2Body, bodyB:b2Body):void
		{
			nativeContext.call("ane_b2MotorJointDef_callback_Initialize", ...);
		}

		public function set linearOffset(val:b2Vec2):void
		{
			if(_readOnly == true){
				return;
			}
			_linearOffset = val;
			nativeContext.call("ane_b2MotorJointDef_setter_linearOffset", ...);
		}

		public function get linearOffset():b2Vec2
		{
			_linearOffset = nativeContext.call("ane_b2MotorJointDef_getter_linearOffset", ...);
			return _linearOffset;
		}

		public function set angularOffset(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_angularOffset = val;
			nativeContext.call("ane_b2MotorJointDef_setter_angularOffset", ...);
		}

		public function get angularOffset():Number
		{
			_angularOffset = nativeContext.call("ane_b2MotorJointDef_getter_angularOffset", ...);
			return _angularOffset;
		}

		public function set maxForce(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_maxForce = val;
			nativeContext.call("ane_b2MotorJointDef_setter_maxForce", ...);
		}

		public function get maxForce():Number
		{
			_maxForce = nativeContext.call("ane_b2MotorJointDef_getter_maxForce", ...);
			return _maxForce;
		}

		public function set maxTorque(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_maxTorque = val;
			nativeContext.call("ane_b2MotorJointDef_setter_maxTorque", ...);
		}

		public function get maxTorque():Number
		{
			_maxTorque = nativeContext.call("ane_b2MotorJointDef_getter_maxTorque", ...);
			return _maxTorque;
		}

		public function set correctionFactor(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_correctionFactor = val;
			nativeContext.call("ane_b2MotorJointDef_setter_correctionFactor", ...);
		}

		public function get correctionFactor():Number
		{
			_correctionFactor = nativeContext.call("ane_b2MotorJointDef_getter_correctionFactor", ...);
			return _correctionFactor;
		}

	}
}