/*================================================================================
*
* File Name: b2Vec3.as
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
	
	public class b2Vec3 extends BaseNativeClass
	{

		private var _x:Number;
		private var _y:Number;
		private var _z:Number;

		public function b2Vec3()
		{
			nativeContext.call("ane_b2Vec3_constructor_b2Vec3", ...);
		}

		public function b2Vec3(x:Number, y:Number, z:Number)
		{
			nativeContext.call("ane_b2Vec3_constructor_b2Vec3", ...);
		}

		public function SetZero():void
		{
			nativeContext.call("ane_b2Vec3_callback_SetZero", ...);
		}

		public function Set(x_:Number, y_:Number, z_:Number):void
		{
			nativeContext.call("ane_b2Vec3_callback_Set", ...);
		}

		public function set x(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_x = val;
			nativeContext.call("ane_b2Vec3_setter_x", ...);
		}

		public function get x():Number
		{
			_x = nativeContext.call("ane_b2Vec3_getter_x", ...);
			return _x;
		}

		public function set y(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_y = val;
			nativeContext.call("ane_b2Vec3_setter_y", ...);
		}

		public function get y():Number
		{
			_y = nativeContext.call("ane_b2Vec3_getter_y", ...);
			return _y;
		}

		public function set z(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_z = val;
			nativeContext.call("ane_b2Vec3_setter_z", ...);
		}

		public function get z():Number
		{
			_z = nativeContext.call("ane_b2Vec3_getter_z", ...);
			return _z;
		}

	}
}