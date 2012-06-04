/*================================================================================
*
* File Name: b2Color.as
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
	
	public class b2Color extends BaseNativeClass
	{

		private var _r:Number;
		private var _g:Number;
		private var _b:Number;

		public function b2Color()
		{
			nativeContext.call("ane_b2Color_constructor_b2Color", ...);
		}

		public function b2Color(r:Number, g:Number, b:Number)
		{
			nativeContext.call("ane_b2Color_constructor_b2Color", ...);
		}

		public function Set(ri:Number, gi:Number, bi:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_r = ri;
			_g = gi;
			_b = bi;
			nativeContext.call("ane_b2Color_callback_Set", ...);
		}

		public function set r(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_r = val;
			nativeContext.call("ane_b2Color_setter_r", ...);
		}

		public function get r():Number
		{
			_r = nativeContext.call("ane_b2Color_getter_r", ...);
			return _r;
		}

		public function set g(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_g = val;
			nativeContext.call("ane_b2Color_setter_g", ...);
		}

		public function get g():Number
		{
			_g = nativeContext.call("ane_b2Color_getter_g", ...);
			return _g;
		}

		public function set b(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_b = val;
			nativeContext.call("ane_b2Color_setter_b", ...);
		}

		public function get b():Number
		{
			_b = nativeContext.call("ane_b2Color_getter_b", ...);
			return _b;
		}

	}
}