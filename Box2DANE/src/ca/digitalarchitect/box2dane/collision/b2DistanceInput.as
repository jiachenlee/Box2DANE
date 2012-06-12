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

		public b2DistanceInput(nativeMemoryAddress:String = null)
		{
			initializeContext(this, nativeMemoryAddress);
		}

		public function set proxyA(val:b2DistanceProxy):void
		{
			if(_readOnly == true){
				return;
			}
			_proxyA = val;
			nativeContext.call("ane_b2DistanceInput_setter_proxyA", _proxyA);
		}

		public function get proxyA():b2DistanceProxy
		{
			if (_proxyA != null) {
				nativeContext.call("ane_b2DistanceInput_getter_proxyA", _proxyA);
			}else {
				_proxyA = nativeContext.call("ane_b2DistanceInput_getter_proxyA") as b2DistanceProxy;
			}

			return _proxyA;
		}

		public function set proxyB(val:b2DistanceProxy):void
		{
			if(_readOnly == true){
				return;
			}
			_proxyB = val;
			nativeContext.call("ane_b2DistanceInput_setter_proxyB", _proxyB);
		}

		public function get proxyB():b2DistanceProxy
		{
			if (_proxyB != null) {
				nativeContext.call("ane_b2DistanceInput_getter_proxyB", _proxyB);
			}else {
				_proxyB = nativeContext.call("ane_b2DistanceInput_getter_proxyB") as b2DistanceProxy;
			}
			
			return _proxyB;
		}

		public function set transformA(val:b2Transform):void
		{
			if(_readOnly == true){
				return;
			}
			_transformA = val;
			nativeContext.call("ane_b2DistanceInput_setter_transformA", _transformA);
		}

		public function get transformA():b2Transform
		{
			if (_transformA != null) {
				nativeContext.call("ane_b2DistanceInput_getter_transformA", _transformA);
			}else {
				_transformA = nativeContext.call("ane_b2DistanceInput_getter_transformA") as b2Transform;
			}
			
			return _transformA;
		}

		public function set transformB(val:b2Transform):void
		{
			if(_readOnly == true){
				return;
			}
			_transformB = val;
			nativeContext.call("ane_b2DistanceInput_setter_transformB", _transformB);
		}

		public function get transformB():b2Transform
		{
			if (_transformB != null) {
				nativeContext.call("ane_b2DistanceInput_getter_transformB", _transformB);
			}else {
				_transformB = nativeContext.call("ane_b2DistanceInput_getter_transformB") as b2Transform;
			}

			return _transformB;
		}

		public function set useRadii(val:Boolean):void
		{
			if(_readOnly == true){
				return;
			}
			_useRadii = val;
			nativeContext.call("ane_b2DistanceInput_setter_useRadii", _useRadii);
		}

		public function get useRadii():Boolean
		{
			_useRadii = nativeContext.call("ane_b2DistanceInput_getter_useRadii") as Boolean;
			return _useRadii;
		}

	}
}