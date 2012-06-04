/*================================================================================
*
* File Name: b2Sweep.as
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

package ca.digitalarchitect.box2dane.common
{
	import ca.digitalarchitect.box2dane.BaseNativeClass;
	
	public class b2Sweep extends BaseNativeClass
	{

		private var _localCenter:b2Vec2;
		private var _c0:b2Vec2;
		private var _c:b2Vec2;
		private var _a0:Number;
		private var _a:Number;
		private var _alpha0:Number;

		public b2Sweep(nativeMemoryAddress:String)
		{
			
		}

		public function GetTransform(xfb:b2Transform, beta:Number):void
		{
			nativeContext.call("ane_b2Sweep_callback_GetTransform", ...);
		}

		public function Advance(alpha:Number):void
		{
			nativeContext.call("ane_b2Sweep_callback_Advance", ...);
		}

		public function Normalize():void
		{
			nativeContext.call("ane_b2Sweep_callback_Normalize", ...);
		}

		public function set localCenter(val:b2Vec2):void
		{
			if(_readOnly == true){
				return;
			}
			_localCenter = val;
			nativeContext.call("ane_b2Sweep_setter_localCenter", ...);
		}

		public function get localCenter():b2Vec2
		{
			_localCenter = nativeContext.call("ane_b2Sweep_getter_localCenter", ...);
			return _localCenter;
		}

		public function set c0(val:b2Vec2):void
		{
			if(_readOnly == true){
				return;
			}
			_c0 = val;
			nativeContext.call("ane_b2Sweep_setter_c0", ...);
		}

		public function get c0():b2Vec2
		{
			_c0 = nativeContext.call("ane_b2Sweep_getter_c0", ...);
			return _c0;
		}

		public function set c(val:b2Vec2):void
		{
			if(_readOnly == true){
				return;
			}
			_c = val;
			nativeContext.call("ane_b2Sweep_setter_c", ...);
		}

		public function get c():b2Vec2
		{
			_c = nativeContext.call("ane_b2Sweep_getter_c", ...);
			return _c;
		}

		public function set a0(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_a0 = val;
			nativeContext.call("ane_b2Sweep_setter_a0", ...);
		}

		public function get a0():Number
		{
			_a0 = nativeContext.call("ane_b2Sweep_getter_a0", ...);
			return _a0;
		}

		public function set a(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_a = val;
			nativeContext.call("ane_b2Sweep_setter_a", ...);
		}

		public function get a():Number
		{
			_a = nativeContext.call("ane_b2Sweep_getter_a", ...);
			return _a;
		}

		public function set alpha0(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_alpha0 = val;
			nativeContext.call("ane_b2Sweep_setter_alpha0", ...);
		}

		public function get alpha0():Number
		{
			_alpha0 = nativeContext.call("ane_b2Sweep_getter_alpha0", ...);
			return _alpha0;
		}

	}
}