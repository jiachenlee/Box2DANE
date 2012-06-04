/*================================================================================
*
* File Name: b2JointDef.as
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
	import ca.digitalarchitect.box2dane.BaseNativeClass;
	import ca.digitalarchitect.box2dane.dynamics.b2Body;
	
	public class b2JointDef extends BaseNativeClass
	{

		private var _type:b2JointType;
		private var _userData:Object;
		private var _bodyA:b2Body;
		private var _bodyB:b2Body;
		private var _collideConnected:Boolean;

		public function b2JointDef()
		{
			nativeContext.call("ane_b2JointDef_constructor_b2JointDef", ...);
		}

		public function set type(val:b2JointType):void
		{
			if(_readOnly == true){
				return;
			}
			_type = val;
			nativeContext.call("ane_b2JointDef_setter_type", ...);
		}

		public function get type():b2JointType
		{
			_type = nativeContext.call("ane_b2JointDef_getter_type", ...);
			return _type;
		}

		public function set userData(val:Object):void
		{
			if(_readOnly == true){
				return;
			}
			_userData = val;
			nativeContext.call("ane_b2JointDef_setter_userData", ...);
		}

		public function get userData():Object
		{
			_userData = nativeContext.call("ane_b2JointDef_getter_userData", ...);
			return _userData;
		}

		public function set bodyA(val:b2Body):void
		{
			if(_readOnly == true){
				return;
			}
			_bodyA = val;
			nativeContext.call("ane_b2JointDef_setter_bodyA", ...);
		}

		public function get bodyA():b2Body
		{
			_bodyA = nativeContext.call("ane_b2JointDef_getter_bodyA", ...);
			return _bodyA;
		}

		public function set bodyB(val:b2Body):void
		{
			if(_readOnly == true){
				return;
			}
			_bodyB = val;
			nativeContext.call("ane_b2JointDef_setter_bodyB", ...);
		}

		public function get bodyB():b2Body
		{
			_bodyB = nativeContext.call("ane_b2JointDef_getter_bodyB", ...);
			return _bodyB;
		}

		public function set collideConnected(val:Boolean):void
		{
			if(_readOnly == true){
				return;
			}
			_collideConnected = val;
			nativeContext.call("ane_b2JointDef_setter_collideConnected", ...);
		}

		public function get collideConnected():Boolean
		{
			_collideConnected = nativeContext.call("ane_b2JointDef_getter_collideConnected", ...);
			return _collideConnected;
		}

	}
}