/*================================================================================
*
* File Name: b2Mat33.as
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
	
	public class b2Mat33 extends BaseNativeClass
	{

		private var _ex:b2Vec3;
		private var _ey:b2Vec3;
		private var _ez:b2Vec3;

		public function b2Mat33()
		{
			nativeContext.call("ane_b2Mat33_constructor_b2Mat33", ...);
		}

		public function b2Mat33(c1:b2Vec3, c2:b2Vec3, c3:b2Vec3)
		{
			nativeContext.call("ane_b2Mat33_constructor_b2Mat33", ...);
		}

		public function SetZero():void
		{
			nativeContext.call("ane_b2Mat33_callback_SetZero", ...);
		}

		public function Solve33(b:b2Vec3):b2Vec3
		{
			return nativeContext.call("ane_b2Mat33_callback_Solve33", ...);
		}

		public function Solve22(b:b2Vec2):b2Vec2
		{
			return nativeContext.call("ane_b2Mat33_callback_Solve22", ...);
		}

		public function GetInverse22(M:b2Mat33):void
		{
			nativeContext.call("ane_b2Mat33_callback_GetInverse22", ...);
		}

		public function GetSymInverse33(M:b2Mat33):void
		{
			nativeContext.call("ane_b2Mat33_callback_GetSymInverse33", ...);
		}

		public function set ex(val:b2Vec3):void
		{
			if(_readOnly == true){
				return;
			}
			_ex = val;
			nativeContext.call("ane_b2Mat33_setter_ex", ...);
		}

		public function get ex():b2Vec3
		{
			_ex = nativeContext.call("ane_b2Mat33_getter_ex", ...);
			return _ex;
		}

		public function set ey(val:b2Vec3):void
		{
			if(_readOnly == true){
				return;
			}
			_ey = val;
			nativeContext.call("ane_b2Mat33_setter_ey", ...);
		}

		public function get ey():b2Vec3
		{
			_ey = nativeContext.call("ane_b2Mat33_getter_ey", ...);
			return _ey;
		}

		public function set ez(val:b2Vec3):void
		{
			if(_readOnly == true){
				return;
			}
			_ez = val;
			nativeContext.call("ane_b2Mat33_setter_ez", ...);
		}

		public function get ez():b2Vec3
		{
			_ez = nativeContext.call("ane_b2Mat33_getter_ez", ...);
			return _ez;
		}

	}
}