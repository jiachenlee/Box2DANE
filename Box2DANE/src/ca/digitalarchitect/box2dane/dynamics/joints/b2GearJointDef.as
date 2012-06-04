/*================================================================================
*
* File Name: b2GearJointDef.as
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
	public class b2GearJointDef extends b2JointDef
	{

		private var _joint1:b2Joint;
		private var _joint2:b2Joint;
		private var _ratio:Number;

		public function b2GearJointDef()
		{
			nativeContext.call("ane_b2GearJointDef_constructor_b2GearJointDef", ...);
		}

		public function set joint1(val:b2Joint):void
		{
			if(_readOnly == true){
				return;
			}
			_joint1 = val;
			nativeContext.call("ane_b2GearJointDef_setter_joint1", ...);
		}

		public function get joint1():b2Joint
		{
			_joint1 = nativeContext.call("ane_b2GearJointDef_getter_joint1", ...);
			return _joint1;
		}

		public function set joint2(val:b2Joint):void
		{
			if(_readOnly == true){
				return;
			}
			_joint2 = val;
			nativeContext.call("ane_b2GearJointDef_setter_joint2", ...);
		}

		public function get joint2():b2Joint
		{
			_joint2 = nativeContext.call("ane_b2GearJointDef_getter_joint2", ...);
			return _joint2;
		}

		public function set ratio(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_ratio = val;
			nativeContext.call("ane_b2GearJointDef_setter_ratio", ...);
		}

		public function get ratio():Number
		{
			_ratio = nativeContext.call("ane_b2GearJointDef_getter_ratio", ...);
			return _ratio;
		}

	}
}