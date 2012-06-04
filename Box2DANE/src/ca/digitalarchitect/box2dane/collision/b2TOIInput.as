/*================================================================================
*
* File Name: b2TOIInput.as
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

package ca.digitalarchitect.box2dane.collision
{
	import ca.digitalarchitect.box2dane.BaseNativeClass;
	import ca.digitalarchitect.box2dane.common.b2Sweep;
	
	public class b2TOIInput extends BaseNativeClass
	{

		private var _proxyA:b2DistanceProxy;
		private var _proxyB:b2DistanceProxy;
		private var _sweepA:b2Sweep;
		private var _sweepB:b2Sweep;
		private var _tMax:Number;

		public b2TOIInput(nativeMemoryAddress:String)
		{
			
		}

		public function set proxyA(val:b2DistanceProxy):void
		{
			if(_readOnly == true){
				return;
			}
			_proxyA = val;
			nativeContext.call("ane_b2TOIInput_setter_proxyA", ...);
		}

		public function get proxyA():b2DistanceProxy
		{
			_proxyA = nativeContext.call("ane_b2TOIInput_getter_proxyA", ...);
			return _proxyA;
		}

		public function set proxyB(val:b2DistanceProxy):void
		{
			if(_readOnly == true){
				return;
			}
			_proxyB = val;
			nativeContext.call("ane_b2TOIInput_setter_proxyB", ...);
		}

		public function get proxyB():b2DistanceProxy
		{
			_proxyB = nativeContext.call("ane_b2TOIInput_getter_proxyB", ...);
			return _proxyB;
		}

		public function set sweepA(val:b2Sweep):void
		{
			if(_readOnly == true){
				return;
			}
			_sweepA = val;
			nativeContext.call("ane_b2TOIInput_setter_sweepA", ...);
		}

		public function get sweepA():b2Sweep
		{
			_sweepA = nativeContext.call("ane_b2TOIInput_getter_sweepA", ...);
			return _sweepA;
		}

		public function set sweepB(val:b2Sweep):void
		{
			if(_readOnly == true){
				return;
			}
			_sweepB = val;
			nativeContext.call("ane_b2TOIInput_setter_sweepB", ...);
		}

		public function get sweepB():b2Sweep
		{
			_sweepB = nativeContext.call("ane_b2TOIInput_getter_sweepB", ...);
			return _sweepB;
		}

		public function set tMax(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_tMax = val;
			nativeContext.call("ane_b2TOIInput_setter_tMax", ...);
		}

		public function get tMax():Number
		{
			_tMax = nativeContext.call("ane_b2TOIInput_getter_tMax", ...);
			return _tMax;
		}

	}
}