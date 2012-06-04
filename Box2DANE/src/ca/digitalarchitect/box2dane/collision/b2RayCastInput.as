/*================================================================================
*
* File Name: b2RayCastInput.as
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

package ca.digitalarchitect.box2dane.collision
{
	import ca.digitalarchitect.box2dane.BaseNativeClass;
	import ca.digitalarchitect.box2dane.common.b2Vec2;
	
	public class b2RayCastInput extends BaseNativeClass
	{

		private var _p1:b2Vec2;
		private var _p2:b2Vec2;
		private var _maxFraction:Number;

		public b2RayCastInput(nativeMemoryAddress:String)
		{
			
		}

		public function set p1(val:b2Vec2):void
		{
			if(_readOnly == true){
				return;
			}
			_p1 = val;
			nativeContext.call("ane_b2RayCastInput_setter_p1", ...);
		}

		public function get p1():b2Vec2
		{
			_p1 = nativeContext.call("ane_b2RayCastInput_getter_p1", ...);
			return _p1;
		}

		public function set p2(val:b2Vec2):void
		{
			if(_readOnly == true){
				return;
			}
			_p2 = val;
			nativeContext.call("ane_b2RayCastInput_setter_p2", ...);
		}

		public function get p2():b2Vec2
		{
			_p2 = nativeContext.call("ane_b2RayCastInput_getter_p2", ...);
			return _p2;
		}

		public function set maxFraction(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_maxFraction = val;
			nativeContext.call("ane_b2RayCastInput_setter_maxFraction", ...);
		}

		public function get maxFraction():Number
		{
			_maxFraction = nativeContext.call("ane_b2RayCastInput_getter_maxFraction", ...);
			return _maxFraction;
		}

	}
}