/*================================================================================
*
* File Name: b2ContactSolverDef.as
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
	
	public class b2ContactSolverDef extends BaseNativeClass
	{

		private var _step:b2TimeStep;
		private var _contacts:b2Contact;
		private var _count:int;
		private var _positions:b2Position;
		private var _velocities:b2Velocity;
		private var _allocator:b2StackAllocator;

		public b2ContactSolverDef(nativeMemoryAddress:String)
		{
			
		}

		public function set step(val:b2TimeStep):void
		{
			if(_readOnly == true){
				return;
			}
			_step = val;
			nativeContext.call("ane_b2ContactSolverDef_setter_step", ...);
		}

		public function get step():b2TimeStep
		{
			_step = nativeContext.call("ane_b2ContactSolverDef_getter_step", ...);
			return _step;
		}

		public function set contacts(val:b2Contact):void
		{
			if(_readOnly == true){
				return;
			}
			_contacts = val;
			nativeContext.call("ane_b2ContactSolverDef_setter_contacts", ...);
		}

		public function get contacts():b2Contact
		{
			_contacts = nativeContext.call("ane_b2ContactSolverDef_getter_contacts", ...);
			return _contacts;
		}

		public function set count(val:int):void
		{
			if(_readOnly == true){
				return;
			}
			_count = val;
			nativeContext.call("ane_b2ContactSolverDef_setter_count", ...);
		}

		public function get count():int
		{
			_count = nativeContext.call("ane_b2ContactSolverDef_getter_count", ...);
			return _count;
		}

		public function set positions(val:b2Position):void
		{
			if(_readOnly == true){
				return;
			}
			_positions = val;
			nativeContext.call("ane_b2ContactSolverDef_setter_positions", ...);
		}

		public function get positions():b2Position
		{
			_positions = nativeContext.call("ane_b2ContactSolverDef_getter_positions", ...);
			return _positions;
		}

		public function set velocities(val:b2Velocity):void
		{
			if(_readOnly == true){
				return;
			}
			_velocities = val;
			nativeContext.call("ane_b2ContactSolverDef_setter_velocities", ...);
		}

		public function get velocities():b2Velocity
		{
			_velocities = nativeContext.call("ane_b2ContactSolverDef_getter_velocities", ...);
			return _velocities;
		}

		public function set allocator(val:b2StackAllocator):void
		{
			if(_readOnly == true){
				return;
			}
			_allocator = val;
			nativeContext.call("ane_b2ContactSolverDef_setter_allocator", ...);
		}

		public function get allocator():b2StackAllocator
		{
			_allocator = nativeContext.call("ane_b2ContactSolverDef_getter_allocator", ...);
			return _allocator;
		}

	}
}