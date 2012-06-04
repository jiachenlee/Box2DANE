/*================================================================================
*
* File Name: b2ContactSolver.as
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

package ca.digitalarchitect.box2dane.dynamics.contacts
{
	import ca.digitalarchitect.box2dane.BaseNativeClass;
	import ca.digitalarchitect.box2dane.common.b2StackAllocator;
	import ca.digitalarchitect.box2dane.dynamics.b2Position;
	import ca.digitalarchitect.box2dane.dynamics.b2TimeStep;
	import ca.digitalarchitect.box2dane.dynamics.b2Velocity;
	
	public class b2ContactSolver extends BaseNativeClass
	{

		private var _m_step:b2TimeStep;
		private var _m_positions:b2Position;
		private var _m_velocities:b2Velocity;
		private var _m_allocator:b2StackAllocator;
		private var _m_positionConstraints:b2ContactPositionConstraint;
		private var _m_velocityConstraints:b2ContactVelocityConstraint;
		private var _m_contacts:b2Contact;
		private var _m_count:int;

		public function b2ContactSolver(def:b2ContactSolverDef)
		{
			nativeContext.call("ane_b2ContactSolver_constructor_b2ContactSolver", ...);
		}

		public function InitializeVelocityConstraints():void
		{
			nativeContext.call("ane_b2ContactSolver_callback_InitializeVelocityConstraints", ...);
		}

		public function WarmStart():void
		{
			nativeContext.call("ane_b2ContactSolver_callback_WarmStart", ...);
		}

		public function SolveVelocityConstraints():void
		{
			nativeContext.call("ane_b2ContactSolver_callback_SolveVelocityConstraints", ...);
		}

		public function StoreImpulses():void
		{
			nativeContext.call("ane_b2ContactSolver_callback_StoreImpulses", ...);
		}

		public function SolvePositionConstraints():Boolean
		{
			return nativeContext.call("ane_b2ContactSolver_callback_SolvePositionConstraints", ...);
		}

		public function SolveTOIPositionConstraints(toiIndexA:int, toiIndexB:int):Boolean
		{
			return nativeContext.call("ane_b2ContactSolver_callback_SolveTOIPositionConstraints", ...);
		}

		public function set m_step(val:b2TimeStep):void
		{
			if(_readOnly == true){
				return;
			}
			_m_step = val;
			nativeContext.call("ane_b2ContactSolver_setter_m_step", ...);
		}

		public function get m_step():b2TimeStep
		{
			_m_step = nativeContext.call("ane_b2ContactSolver_getter_m_step", ...);
			return _m_step;
		}

		public function set m_positions(val:b2Position):void
		{
			if(_readOnly == true){
				return;
			}
			_m_positions = val;
			nativeContext.call("ane_b2ContactSolver_setter_m_positions", ...);
		}

		public function get m_positions():b2Position
		{
			_m_positions = nativeContext.call("ane_b2ContactSolver_getter_m_positions", ...);
			return _m_positions;
		}

		public function set m_velocities(val:b2Velocity):void
		{
			if(_readOnly == true){
				return;
			}
			_m_velocities = val;
			nativeContext.call("ane_b2ContactSolver_setter_m_velocities", ...);
		}

		public function get m_velocities():b2Velocity
		{
			_m_velocities = nativeContext.call("ane_b2ContactSolver_getter_m_velocities", ...);
			return _m_velocities;
		}

		public function set m_allocator(val:b2StackAllocator):void
		{
			if(_readOnly == true){
				return;
			}
			_m_allocator = val;
			nativeContext.call("ane_b2ContactSolver_setter_m_allocator", ...);
		}

		public function get m_allocator():b2StackAllocator
		{
			_m_allocator = nativeContext.call("ane_b2ContactSolver_getter_m_allocator", ...);
			return _m_allocator;
		}

		public function set m_positionConstraints(val:b2ContactPositionConstraint):void
		{
			if(_readOnly == true){
				return;
			}
			_m_positionConstraints = val;
			nativeContext.call("ane_b2ContactSolver_setter_m_positionConstraints", ...);
		}

		public function get m_positionConstraints():b2ContactPositionConstraint
		{
			_m_positionConstraints = nativeContext.call("ane_b2ContactSolver_getter_m_positionConstraints", ...);
			return _m_positionConstraints;
		}

		public function set m_velocityConstraints(val:b2ContactVelocityConstraint):void
		{
			if(_readOnly == true){
				return;
			}
			_m_velocityConstraints = val;
			nativeContext.call("ane_b2ContactSolver_setter_m_velocityConstraints", ...);
		}

		public function get m_velocityConstraints():b2ContactVelocityConstraint
		{
			_m_velocityConstraints = nativeContext.call("ane_b2ContactSolver_getter_m_velocityConstraints", ...);
			return _m_velocityConstraints;
		}

		public function set m_contacts(val:b2Contact):void
		{
			if(_readOnly == true){
				return;
			}
			_m_contacts = val;
			nativeContext.call("ane_b2ContactSolver_setter_m_contacts", ...);
		}

		public function get m_contacts():b2Contact
		{
			_m_contacts = nativeContext.call("ane_b2ContactSolver_getter_m_contacts", ...);
			return _m_contacts;
		}

		public function set m_count(val:int):void
		{
			if(_readOnly == true){
				return;
			}
			_m_count = val;
			nativeContext.call("ane_b2ContactSolver_setter_m_count", ...);
		}

		public function get m_count():int
		{
			_m_count = nativeContext.call("ane_b2ContactSolver_getter_m_count", ...);
			return _m_count;
		}

	}
}