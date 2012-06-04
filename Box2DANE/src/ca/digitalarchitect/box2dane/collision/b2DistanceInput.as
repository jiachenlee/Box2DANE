/*================================================================================
*
* File Name: b2DistanceInput.as
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
	import ca.digitalarchitect.box2dane.common.b2Transform;
	
	public class b2DistanceInput extends BaseNativeClass
	{

		private var _proxyA:b2DistanceProxy;
		private var _proxyB:b2DistanceProxy;
		private var _transformA:b2Transform;
		private var _transformB:b2Transform;
		private var _useRadii:Boolean;

		public b2DistanceInput(nativeMemoryAddress:String)
		{
			
		}

		public function set proxyA(val:b2DistanceProxy):void
		{
			if(_readOnly == true){
				return;
			}
			_proxyA = val;
			nativeContext.call("ane_b2DistanceInput_setter_proxyA", ...);
		}

		public function get proxyA():b2DistanceProxy
		{
			_proxyA = nativeContext.call("ane_b2DistanceInput_getter_proxyA", ...);
			return _proxyA;
		}

		public function set proxyB(val:b2DistanceProxy):void
		{
			if(_readOnly == true){
				return;
			}
			_proxyB = val;
			nativeContext.call("ane_b2DistanceInput_setter_proxyB", ...);
		}

		public function get proxyB():b2DistanceProxy
		{
			_proxyB = nativeContext.call("ane_b2DistanceInput_getter_proxyB", ...);
			return _proxyB;
		}

		public function set transformA(val:b2Transform):void
		{
			if(_readOnly == true){
				return;
			}
			_transformA = val;
			nativeContext.call("ane_b2DistanceInput_setter_transformA", ...);
		}

		public function get transformA():b2Transform
		{
			_transformA = nativeContext.call("ane_b2DistanceInput_getter_transformA", ...);
			return _transformA;
		}

		public function set transformB(val:b2Transform):void
		{
			if(_readOnly == true){
				return;
			}
			_transformB = val;
			nativeContext.call("ane_b2DistanceInput_setter_transformB", ...);
		}

		public function get transformB():b2Transform
		{
			_transformB = nativeContext.call("ane_b2DistanceInput_getter_transformB", ...);
			return _transformB;
		}

		public function set useRadii(val:Boolean):void
		{
			if(_readOnly == true){
				return;
			}
			_useRadii = val;
			nativeContext.call("ane_b2DistanceInput_setter_useRadii", ...);
		}

		public function get useRadii():Boolean
		{
			_useRadii = nativeContext.call("ane_b2DistanceInput_getter_useRadii", ...);
			return _useRadii;
		}

	}
}