/*================================================================================
*
* File Name: b2TimeStep.as
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
	
	public class b2TimeStep extends BaseNativeClass
	{

		private var _dt:Number;
		private var _inv_dt:Number;
		private var _dtRatio:Number;
		private var _velocityIterations:int;
		private var _positionIterations:int;
		private var _warmStarting:Boolean;

		public b2TimeStep(nativeMemoryAddress:String)
		{
			
		}

		public function set dt(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_dt = val;
			nativeContext.call("ane_b2TimeStep_setter_dt", ...);
		}

		public function get dt():Number
		{
			_dt = nativeContext.call("ane_b2TimeStep_getter_dt", ...);
			return _dt;
		}

		public function set inv_dt(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_inv_dt = val;
			nativeContext.call("ane_b2TimeStep_setter_inv_dt", ...);
		}

		public function get inv_dt():Number
		{
			_inv_dt = nativeContext.call("ane_b2TimeStep_getter_inv_dt", ...);
			return _inv_dt;
		}

		public function set dtRatio(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_dtRatio = val;
			nativeContext.call("ane_b2TimeStep_setter_dtRatio", ...);
		}

		public function get dtRatio():Number
		{
			_dtRatio = nativeContext.call("ane_b2TimeStep_getter_dtRatio", ...);
			return _dtRatio;
		}

		public function set velocityIterations(val:int):void
		{
			if(_readOnly == true){
				return;
			}
			_velocityIterations = val;
			nativeContext.call("ane_b2TimeStep_setter_velocityIterations", ...);
		}

		public function get velocityIterations():int
		{
			_velocityIterations = nativeContext.call("ane_b2TimeStep_getter_velocityIterations", ...);
			return _velocityIterations;
		}

		public function set positionIterations(val:int):void
		{
			if(_readOnly == true){
				return;
			}
			_positionIterations = val;
			nativeContext.call("ane_b2TimeStep_setter_positionIterations", ...);
		}

		public function get positionIterations():int
		{
			_positionIterations = nativeContext.call("ane_b2TimeStep_getter_positionIterations", ...);
			return _positionIterations;
		}

		public function set warmStarting(val:Boolean):void
		{
			if(_readOnly == true){
				return;
			}
			_warmStarting = val;
			nativeContext.call("ane_b2TimeStep_setter_warmStarting", ...);
		}

		public function get warmStarting():Boolean
		{
			_warmStarting = nativeContext.call("ane_b2TimeStep_getter_warmStarting", ...);
			return _warmStarting;
		}

	}
}