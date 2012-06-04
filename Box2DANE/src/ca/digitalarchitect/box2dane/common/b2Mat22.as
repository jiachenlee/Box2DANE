/*================================================================================
*
* File Name: b2Mat22.as
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
	
	public class b2Mat22 extends BaseNativeClass
	{

		private var _ex:b2Vec2;
		private var _ey:b2Vec2;

		public function b2Mat22()
		{
			nativeContext.call("ane_b2Mat22_constructor_b2Mat22", ...);
		}

		public function b2Mat22(c1:b2Vec2, c2:b2Vec2)
		{
			nativeContext.call("ane_b2Mat22_constructor_b2Mat22", ...);
		}

		public function b2Mat22(a11:Number, a12:Number, a21:Number, a22:Number)
		{
			nativeContext.call("ane_b2Mat22_constructor_b2Mat22", ...);
		}

		public function Set(c1:b2Vec2, c2:b2Vec2):void
		{
			nativeContext.call("ane_b2Mat22_callback_Set", ...);
		}

		public function SetIdentity():void
		{
			nativeContext.call("ane_b2Mat22_callback_SetIdentity", ...);
		}

		public function SetZero():void
		{
			nativeContext.call("ane_b2Mat22_callback_SetZero", ...);
		}

		public function GetInverse():b2Mat22
		{
			return nativeContext.call("ane_b2Mat22_callback_GetInverse", ...);
		}

		public function Solve(b:b2Vec2):b2Vec2
		{
			return nativeContext.call("ane_b2Mat22_callback_Solve", ...);
		}

		public function set ex(val:b2Vec2):void
		{
			if(_readOnly == true){
				return;
			}
			_ex = val;
			nativeContext.call("ane_b2Mat22_setter_ex", ...);
		}

		public function get ex():b2Vec2
		{
			_ex = nativeContext.call("ane_b2Mat22_getter_ex", ...);
			return _ex;
		}

		public function set ey(val:b2Vec2):void
		{
			if(_readOnly == true){
				return;
			}
			_ey = val;
			nativeContext.call("ane_b2Mat22_setter_ey", ...);
		}

		public function get ey():b2Vec2
		{
			_ey = nativeContext.call("ane_b2Mat22_getter_ey", ...);
			return _ey;
		}

	}
}