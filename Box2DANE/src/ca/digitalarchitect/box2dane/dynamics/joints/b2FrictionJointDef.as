/*================================================================================
*
* File Name: b2FrictionJointDef.as
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
	
	public class b2FrictionJointDef extends b2JointDef
	{

		private var _localAnchorA:b2Vec2;
		private var _localAnchorB:b2Vec2;
		private var _maxForce:Number;
		private var _maxTorque:Number;

		public function b2FrictionJointDef()
		{
			nativeContext.call("ane_b2FrictionJointDef_constructor_b2FrictionJointDef", ...);
		}

		public function Initialize(bodyA:b2Body, bodyB:b2Body, anchor:b2Vec2):void
		{
			nativeContext.call("ane_b2FrictionJointDef_callback_Initialize", ...);
		}

		public function set localAnchorA(val:b2Vec2):void
		{
			if(_readOnly == true){
				return;
			}
			_localAnchorA = val;
			nativeContext.call("ane_b2FrictionJointDef_setter_localAnchorA", ...);
		}

		public function get localAnchorA():b2Vec2
		{
			_localAnchorA = nativeContext.call("ane_b2FrictionJointDef_getter_localAnchorA", ...);
			return _localAnchorA;
		}

		public function set localAnchorB(val:b2Vec2):void
		{
			if(_readOnly == true){
				return;
			}
			_localAnchorB = val;
			nativeContext.call("ane_b2FrictionJointDef_setter_localAnchorB", ...);
		}

		public function get localAnchorB():b2Vec2
		{
			_localAnchorB = nativeContext.call("ane_b2FrictionJointDef_getter_localAnchorB", ...);
			return _localAnchorB;
		}

		public function set maxForce(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_maxForce = val;
			nativeContext.call("ane_b2FrictionJointDef_setter_maxForce", ...);
		}

		public function get maxForce():Number
		{
			_maxForce = nativeContext.call("ane_b2FrictionJointDef_getter_maxForce", ...);
			return _maxForce;
		}

		public function set maxTorque(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_maxTorque = val;
			nativeContext.call("ane_b2FrictionJointDef_setter_maxTorque", ...);
		}

		public function get maxTorque():Number
		{
			_maxTorque = nativeContext.call("ane_b2FrictionJointDef_getter_maxTorque", ...);
			return _maxTorque;
		}

	}
}