/*================================================================================
*
* File Name: b2SolverData.as
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
	
	public class b2SolverData extends BaseNativeClass
	{

		private var _step:b2TimeStep;
		private var _positions:b2Position;
		private var _velocities:b2Velocity;

		public b2SolverData(nativeMemoryAddress:String)
		{
			
		}

		public function set step(val:b2TimeStep):void
		{
			if(_readOnly == true){
				return;
			}
			_step = val;
			nativeContext.call("ane_b2SolverData_setter_step", ...);
		}

		public function get step():b2TimeStep
		{
			_step = nativeContext.call("ane_b2SolverData_getter_step", ...);
			return _step;
		}

		public function set positions(val:b2Position):void
		{
			if(_readOnly == true){
				return;
			}
			_positions = val;
			nativeContext.call("ane_b2SolverData_setter_positions", ...);
		}

		public function get positions():b2Position
		{
			_positions = nativeContext.call("ane_b2SolverData_getter_positions", ...);
			return _positions;
		}

		public function set velocities(val:b2Velocity):void
		{
			if(_readOnly == true){
				return;
			}
			_velocities = val;
			nativeContext.call("ane_b2SolverData_setter_velocities", ...);
		}

		public function get velocities():b2Velocity
		{
			_velocities = nativeContext.call("ane_b2SolverData_getter_velocities", ...);
			return _velocities;
		}

	}
}