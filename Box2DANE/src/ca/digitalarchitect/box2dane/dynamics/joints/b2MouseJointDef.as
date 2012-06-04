/*================================================================================
*
* File Name: b2MouseJointDef.as
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
	
	public class b2MouseJointDef extends b2JointDef
	{

		private var _target:b2Vec2;
		private var _maxForce:Number;
		private var _frequencyHz:Number;
		private var _dampingRatio:Number;

		public function b2MouseJointDef()
		{
			nativeContext.call("ane_b2MouseJointDef_constructor_b2MouseJointDef", ...);
		}

		public function set target(val:b2Vec2):void
		{
			if(_readOnly == true){
				return;
			}
			_target = val;
			nativeContext.call("ane_b2MouseJointDef_setter_target", ...);
		}

		public function get target():b2Vec2
		{
			_target = nativeContext.call("ane_b2MouseJointDef_getter_target", ...);
			return _target;
		}

		public function set maxForce(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_maxForce = val;
			nativeContext.call("ane_b2MouseJointDef_setter_maxForce", ...);
		}

		public function get maxForce():Number
		{
			_maxForce = nativeContext.call("ane_b2MouseJointDef_getter_maxForce", ...);
			return _maxForce;
		}

		public function set frequencyHz(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_frequencyHz = val;
			nativeContext.call("ane_b2MouseJointDef_setter_frequencyHz", ...);
		}

		public function get frequencyHz():Number
		{
			_frequencyHz = nativeContext.call("ane_b2MouseJointDef_getter_frequencyHz", ...);
			return _frequencyHz;
		}

		public function set dampingRatio(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_dampingRatio = val;
			nativeContext.call("ane_b2MouseJointDef_setter_dampingRatio", ...);
		}

		public function get dampingRatio():Number
		{
			_dampingRatio = nativeContext.call("ane_b2MouseJointDef_getter_dampingRatio", ...);
			return _dampingRatio;
		}

	}
}