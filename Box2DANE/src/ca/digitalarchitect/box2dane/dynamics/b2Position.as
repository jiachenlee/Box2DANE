/*================================================================================
*
* File Name: b2Position.as
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
	
	public class b2Position extends BaseNativeClass
	{

		private var _c:b2Vec2;
		private var _a:Number;

		public b2Position(nativeMemoryAddress:String)
		{
			
		}

		public function set c(val:b2Vec2):void
		{
			if(_readOnly == true){
				return;
			}
			_c = val;
			nativeContext.call("ane_b2Position_setter_c", ...);
		}

		public function get c():b2Vec2
		{
			_c = nativeContext.call("ane_b2Position_getter_c", ...);
			return _c;
		}

		public function set a(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_a = val;
			nativeContext.call("ane_b2Position_setter_a", ...);
		}

		public function get a():Number
		{
			_a = nativeContext.call("ane_b2Position_getter_a", ...);
			return _a;
		}

	}
}