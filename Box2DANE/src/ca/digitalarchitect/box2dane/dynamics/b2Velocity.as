/*================================================================================
*
* File Name: b2Velocity.as
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

package ca.digitalarchitect.box2dane.dynamics
{
	import ca.digitalarchitect.box2dane.BaseNativeClass;
	import ca.digitalarchitect.box2dane.common.b2Vec2;
	
	public class b2Velocity extends BaseNativeClass
	{

		private var _v:b2Vec2;
		private var _w:Number;

		public b2Velocity(nativeMemoryAddress:String)
		{
			
		}

		public function set v(val:b2Vec2):void
		{
			if(_readOnly == true){
				return;
			}
			_v = val;
			nativeContext.call("ane_b2Velocity_setter_v", ...);
		}

		public function get v():b2Vec2
		{
			_v = nativeContext.call("ane_b2Velocity_getter_v", ...);
			return _v;
		}

		public function set w(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_w = val;
			nativeContext.call("ane_b2Velocity_setter_w", ...);
		}

		public function get w():Number
		{
			_w = nativeContext.call("ane_b2Velocity_getter_w", ...);
			return _w;
		}

	}
}