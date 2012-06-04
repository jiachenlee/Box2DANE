/*================================================================================
*
* File Name: b2DistanceJointDef.as
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
	
	public class b2DistanceJointDef extends b2JointDef
	{

		private var _localAnchorA:b2Vec2;
		private var _localAnchorB:b2Vec2;
		private var _length:Number;
		private var _frequencyHz:Number;
		private var _dampingRatio:Number;

		public function b2DistanceJointDef()
		{
			nativeContext.call("ane_b2DistanceJointDef_constructor_b2DistanceJointDef", ...);
		}

		public function Initialize(bodyA:b2Body, bodyB:b2Body, anchorA:b2Vec2, anchorB:b2Vec2):void
		{
			nativeContext.call("ane_b2DistanceJointDef_callback_Initialize", ...);
		}

		public function set localAnchorA(val:b2Vec2):void
		{
			if(_readOnly == true){
				return;
			}
			_localAnchorA = val;
			nativeContext.call("ane_b2DistanceJointDef_setter_localAnchorA", ...);
		}

		public function get localAnchorA():b2Vec2
		{
			_localAnchorA = nativeContext.call("ane_b2DistanceJointDef_getter_localAnchorA", ...);
			return _localAnchorA;
		}

		public function set localAnchorB(val:b2Vec2):void
		{
			if(_readOnly == true){
				return;
			}
			_localAnchorB = val;
			nativeContext.call("ane_b2DistanceJointDef_setter_localAnchorB", ...);
		}

		public function get localAnchorB():b2Vec2
		{
			_localAnchorB = nativeContext.call("ane_b2DistanceJointDef_getter_localAnchorB", ...);
			return _localAnchorB;
		}

		public function set length(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_length = val;
			nativeContext.call("ane_b2DistanceJointDef_setter_length", ...);
		}

		public function get length():Number
		{
			_length = nativeContext.call("ane_b2DistanceJointDef_getter_length", ...);
			return _length;
		}

		public function set frequencyHz(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_frequencyHz = val;
			nativeContext.call("ane_b2DistanceJointDef_setter_frequencyHz", ...);
		}

		public function get frequencyHz():Number
		{
			_frequencyHz = nativeContext.call("ane_b2DistanceJointDef_getter_frequencyHz", ...);
			return _frequencyHz;
		}

		public function set dampingRatio(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_dampingRatio = val;
			nativeContext.call("ane_b2DistanceJointDef_setter_dampingRatio", ...);
		}

		public function get dampingRatio():Number
		{
			_dampingRatio = nativeContext.call("ane_b2DistanceJointDef_getter_dampingRatio", ...);
			return _dampingRatio;
		}

	}
}