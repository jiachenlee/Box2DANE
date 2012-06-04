/*================================================================================
*
* File Name: b2Vec2.as
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
	
	public class b2Vec2 extends BaseNativeClass
	{

		private var _x:Number;
		private var _y:Number;

		public function b2Vec2(x:Number = 0, y:Number = 0, memAddress:String = null)
		{
			initializeContext(this, memAddress);
			
			nativeContext.call("ane_b2Vec2_constructor_b2Vec2", ...);
		}

		public function SetZero():void
		{
			nativeContext.call("ane_b2Vec2_callback_SetZero", ...);
		}

		public function Set(sx:Number, sy:Number):void
		{
			nativeContext.call("ane_b2Vec2_callback_Set", ...);
		}

		public function Length():Number
		{
			return nativeContext.call("ane_b2Vec2_callback_Length", ...);
		}

		public function LengthSquared():Number
		{
			return nativeContext.call("ane_b2Vec2_callback_LengthSquared", ...);
		}

		public function Normalize():Number
		{
			return nativeContext.call("ane_b2Vec2_callback_Normalize", ...);
		}

		public function IsValid():Boolean
		{
			return nativeContext.call("ane_b2Vec2_callback_IsValid", ...);
		}

		public function Skew():b2Vec2
		{
			return nativeContext.call("ane_b2Vec2_callback_Skew", ...);
		}

		public function set x(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_x = val;
			nativeContext.call("ane_b2Vec2_setter_x", ...);
		}

		public function get x():Number
		{
			_x = nativeContext.call("ane_b2Vec2_getter_x", ...);
			return _x;
		}

		public function set y(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_y = val;
			nativeContext.call("ane_b2Vec2_setter_y", ...);
		}

		public function get y():Number
		{
			_y = nativeContext.call("ane_b2Vec2_getter_y", ...);
			return _y;
		}

	}
}