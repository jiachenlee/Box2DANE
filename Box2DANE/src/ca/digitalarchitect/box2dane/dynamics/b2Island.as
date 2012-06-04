/*================================================================================
*
* File Name: b2Island.as
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

package ca.digitalarchitect.box2dane.dynamics
{
	import ca.digitalarchitect.box2dane.BaseNativeClass;
	import ca.digitalarchitect.box2dane.common.b2StackAllocator;
	import ca.digitalarchitect.box2dane.dynamics.contacts.b2Contact;
	import ca.digitalarchitect.box2dane.dynamics.contacts.b2ContactVelocityConstraint;
	import ca.digitalarchitect.box2dane.dynamics.joints.b2Joint;
	
	public class b2Island extends BaseNativeClass
	{

		private var _m_allocator:b2StackAllocator;
		private var _m_listener:b2ContactListener;
		private var _m_bodies:b2Body;
		private var _m_contacts:b2Contact;
		private var _m_joints:b2Joint;
		private var _m_positions:b2Position;
		private var _m_velocities:b2Velocity;
		private var _m_bodyCount:int;
		private var _m_jointCount:int;
		private var _m_contactCount:int;
		private var _m_bodyCapacity:int;
		private var _m_contactCapacity:int;
		private var _m_jointCapacity:int;

		public function b2Island(bodyCapacity:int, contactCapacity:int, jointCapacity:int, allocator:b2StackAllocator, listener:b2ContactListener)
		{
			nativeContext.call("ane_b2Island_constructor_b2Island", ...);
		}

		public function Clear():void
		{
			nativeContext.call("ane_b2Island_callback_Clear", ...);
		}

		public function Solve(profile:b2Profile, step:b2TimeStep, gravity:b2Vec2, allowSleep:Boolean):void
		{
			nativeContext.call("ane_b2Island_callback_Solve", ...);
		}

		public function SolveTOI(subStep:b2TimeStep, toiIndexA:int, toiIndexB:int):void
		{
			nativeContext.call("ane_b2Island_callback_SolveTOI", ...);
		}

		public function Add(body:b2Body):void
		{
			nativeContext.call("ane_b2Island_callback_Add", ...);
		}

		public function Add(contact:b2Contact):void
		{
			nativeContext.call("ane_b2Island_callback_Add", ...);
		}

		public function Add(joint:b2Joint):void
		{
			nativeContext.call("ane_b2Island_callback_Add", ...);
		}

		public function Report(constraints:b2ContactVelocityConstraint):void
		{
			nativeContext.call("ane_b2Island_callback_Report", ...);
		}

		public function set m_allocator(val:b2StackAllocator):void
		{
			if(_readOnly == true){
				return;
			}
			_m_allocator = val;
			nativeContext.call("ane_b2Island_setter_m_allocator", ...);
		}

		public function get m_allocator():b2StackAllocator
		{
			_m_allocator = nativeContext.call("ane_b2Island_getter_m_allocator", ...);
			return _m_allocator;
		}

		public function set m_listener(val:b2ContactListener):void
		{
			if(_readOnly == true){
				return;
			}
			_m_listener = val;
			nativeContext.call("ane_b2Island_setter_m_listener", ...);
		}

		public function get m_listener():b2ContactListener
		{
			_m_listener = nativeContext.call("ane_b2Island_getter_m_listener", ...);
			return _m_listener;
		}

		public function set m_bodies(val:b2Body):void
		{
			if(_readOnly == true){
				return;
			}
			_m_bodies = val;
			nativeContext.call("ane_b2Island_setter_m_bodies", ...);
		}

		public function get m_bodies():b2Body
		{
			_m_bodies = nativeContext.call("ane_b2Island_getter_m_bodies", ...);
			return _m_bodies;
		}

		public function set m_contacts(val:b2Contact):void
		{
			if(_readOnly == true){
				return;
			}
			_m_contacts = val;
			nativeContext.call("ane_b2Island_setter_m_contacts", ...);
		}

		public function get m_contacts():b2Contact
		{
			_m_contacts = nativeContext.call("ane_b2Island_getter_m_contacts", ...);
			return _m_contacts;
		}

		public function set m_joints(val:b2Joint):void
		{
			if(_readOnly == true){
				return;
			}
			_m_joints = val;
			nativeContext.call("ane_b2Island_setter_m_joints", ...);
		}

		public function get m_joints():b2Joint
		{
			_m_joints = nativeContext.call("ane_b2Island_getter_m_joints", ...);
			return _m_joints;
		}

		public function set m_positions(val:b2Position):void
		{
			if(_readOnly == true){
				return;
			}
			_m_positions = val;
			nativeContext.call("ane_b2Island_setter_m_positions", ...);
		}

		public function get m_positions():b2Position
		{
			_m_positions = nativeContext.call("ane_b2Island_getter_m_positions", ...);
			return _m_positions;
		}

		public function set m_velocities(val:b2Velocity):void
		{
			if(_readOnly == true){
				return;
			}
			_m_velocities = val;
			nativeContext.call("ane_b2Island_setter_m_velocities", ...);
		}

		public function get m_velocities():b2Velocity
		{
			_m_velocities = nativeContext.call("ane_b2Island_getter_m_velocities", ...);
			return _m_velocities;
		}

		public function set m_bodyCount(val:int):void
		{
			if(_readOnly == true){
				return;
			}
			_m_bodyCount = val;
			nativeContext.call("ane_b2Island_setter_m_bodyCount", ...);
		}

		public function get m_bodyCount():int
		{
			_m_bodyCount = nativeContext.call("ane_b2Island_getter_m_bodyCount", ...);
			return _m_bodyCount;
		}

		public function set m_jointCount(val:int):void
		{
			if(_readOnly == true){
				return;
			}
			_m_jointCount = val;
			nativeContext.call("ane_b2Island_setter_m_jointCount", ...);
		}

		public function get m_jointCount():int
		{
			_m_jointCount = nativeContext.call("ane_b2Island_getter_m_jointCount", ...);
			return _m_jointCount;
		}

		public function set m_contactCount(val:int):void
		{
			if(_readOnly == true){
				return;
			}
			_m_contactCount = val;
			nativeContext.call("ane_b2Island_setter_m_contactCount", ...);
		}

		public function get m_contactCount():int
		{
			_m_contactCount = nativeContext.call("ane_b2Island_getter_m_contactCount", ...);
			return _m_contactCount;
		}

		public function set m_bodyCapacity(val:int):void
		{
			if(_readOnly == true){
				return;
			}
			_m_bodyCapacity = val;
			nativeContext.call("ane_b2Island_setter_m_bodyCapacity", ...);
		}

		public function get m_bodyCapacity():int
		{
			_m_bodyCapacity = nativeContext.call("ane_b2Island_getter_m_bodyCapacity", ...);
			return _m_bodyCapacity;
		}

		public function set m_contactCapacity(val:int):void
		{
			if(_readOnly == true){
				return;
			}
			_m_contactCapacity = val;
			nativeContext.call("ane_b2Island_setter_m_contactCapacity", ...);
		}

		public function get m_contactCapacity():int
		{
			_m_contactCapacity = nativeContext.call("ane_b2Island_getter_m_contactCapacity", ...);
			return _m_contactCapacity;
		}

		public function set m_jointCapacity(val:int):void
		{
			if(_readOnly == true){
				return;
			}
			_m_jointCapacity = val;
			nativeContext.call("ane_b2Island_setter_m_jointCapacity", ...);
		}

		public function get m_jointCapacity():int
		{
			_m_jointCapacity = nativeContext.call("ane_b2Island_getter_m_jointCapacity", ...);
			return _m_jointCapacity;
		}

	}
}