/*================================================================================
*
* File Name: b2Rot.as
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
	
	public class b2Rot extends BaseNativeClass
	{

		private var _s:Number;
		private var _c:Number;

		public function b2Rot()
		{
			nativeContext.call("ane_b2Rot_constructor_b2Rot", ...);
		}

		public function b2Rot(angle:Number)
		{
			return nativeContext.call("ane_b2Rot_callback_b2Rot", ...);
		}

		public function Set(angle:Number):void
		{
			nativeContext.call("ane_b2Rot_callback_Set", ...);
		}

		public function SetIdentity():void
		{
			nativeContext.call("ane_b2Rot_callback_SetIdentity", ...);
		}

		public function GetAngle():Number
		{
			return nativeContext.call("ane_b2Rot_callback_GetAngle", ...);
		}

		public function GetXAxis():b2Vec2
		{
			return nativeContext.call("ane_b2Rot_callback_GetXAxis", ...);
		}

		public function GetYAxis():b2Vec2
		{
			return nativeContext.call("ane_b2Rot_callback_GetYAxis", ...);
		}

		public function set s(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_s = val;
			nativeContext.call("ane_b2Rot_setter_s", ...);
		}

		public function get s():Number
		{
			_s = nativeContext.call("ane_b2Rot_getter_s", ...);
			return _s;
		}

		public function set c(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_c = val;
			nativeContext.call("ane_b2Rot_setter_c", ...);
		}

		public function get c():Number
		{
			_c = nativeContext.call("ane_b2Rot_getter_c", ...);
			return _c;
		}

	}
}