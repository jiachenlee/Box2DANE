/*================================================================================
*
* File Name: b2Profile.as
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
	
	public class b2Profile extends BaseNativeClass
	{

		private var _step:Number;
		private var _collide:Number;
		private var _solve:Number;
		private var _solveInit:Number;
		private var _solveVelocity:Number;
		private var _solvePosition:Number;
		private var _broadphase:Number;
		private var _solveTOI:Number;

		public b2Profile(nativeMemoryAddress:String)
		{
			
		}

		public function set step(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_step = val;
			nativeContext.call("ane_b2Profile_setter_step", ...);
		}

		public function get step():Number
		{
			_step = nativeContext.call("ane_b2Profile_getter_step", ...);
			return _step;
		}

		public function set collide(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_collide = val;
			nativeContext.call("ane_b2Profile_setter_collide", ...);
		}

		public function get collide():Number
		{
			_collide = nativeContext.call("ane_b2Profile_getter_collide", ...);
			return _collide;
		}

		public function set solve(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_solve = val;
			nativeContext.call("ane_b2Profile_setter_solve", ...);
		}

		public function get solve():Number
		{
			_solve = nativeContext.call("ane_b2Profile_getter_solve", ...);
			return _solve;
		}

		public function set solveInit(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_solveInit = val;
			nativeContext.call("ane_b2Profile_setter_solveInit", ...);
		}

		public function get solveInit():Number
		{
			_solveInit = nativeContext.call("ane_b2Profile_getter_solveInit", ...);
			return _solveInit;
		}

		public function set solveVelocity(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_solveVelocity = val;
			nativeContext.call("ane_b2Profile_setter_solveVelocity", ...);
		}

		public function get solveVelocity():Number
		{
			_solveVelocity = nativeContext.call("ane_b2Profile_getter_solveVelocity", ...);
			return _solveVelocity;
		}

		public function set solvePosition(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_solvePosition = val;
			nativeContext.call("ane_b2Profile_setter_solvePosition", ...);
		}

		public function get solvePosition():Number
		{
			_solvePosition = nativeContext.call("ane_b2Profile_getter_solvePosition", ...);
			return _solvePosition;
		}

		public function set broadphase(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_broadphase = val;
			nativeContext.call("ane_b2Profile_setter_broadphase", ...);
		}

		public function get broadphase():Number
		{
			_broadphase = nativeContext.call("ane_b2Profile_getter_broadphase", ...);
			return _broadphase;
		}

		public function set solveTOI(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_solveTOI = val;
			nativeContext.call("ane_b2Profile_setter_solveTOI", ...);
		}

		public function get solveTOI():Number
		{
			_solveTOI = nativeContext.call("ane_b2Profile_getter_solveTOI", ...);
			return _solveTOI;
		}

	}
}