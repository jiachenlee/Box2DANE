/*================================================================================
*
* File Name: b2Jacobian.as
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
	import ca.digitalarchitect.box2dane.common.b2Vec2;
	
	public class b2Jacobian extends BaseNativeClass
	{

		private var _linear:b2Vec2;
		private var _angularA:Number;
		private var _angularB:Number;

		public b2Jacobian(nativeMemoryAddress:String)
		{
			
		}

		public function set linear(val:b2Vec2):void
		{
			if(_readOnly == true){
				return;
			}
			_linear = val;
			nativeContext.call("ane_b2Jacobian_setter_linear", ...);
		}

		public function get linear():b2Vec2
		{
			_linear = nativeContext.call("ane_b2Jacobian_getter_linear", ...);
			return _linear;
		}

		public function set angularA(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_angularA = val;
			nativeContext.call("ane_b2Jacobian_setter_angularA", ...);
		}

		public function get angularA():Number
		{
			_angularA = nativeContext.call("ane_b2Jacobian_getter_angularA", ...);
			return _angularA;
		}

		public function set angularB(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_angularB = val;
			nativeContext.call("ane_b2Jacobian_setter_angularB", ...);
		}

		public function get angularB():Number
		{
			_angularB = nativeContext.call("ane_b2Jacobian_getter_angularB", ...);
			return _angularB;
		}

	}
}