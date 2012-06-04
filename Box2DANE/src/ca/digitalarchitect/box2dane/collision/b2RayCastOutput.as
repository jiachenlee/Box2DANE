/*================================================================================
*
* File Name: b2RayCastOutput.as
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
	
	public class b2RayCastOutput extends BaseNativeClass
	{

		private var _normal:b2Vec2;
		private var _fraction:Number;

		public b2RayCastOutput(nativeMemoryAddress:String)
		{
			
		}

		public function set normal(val:b2Vec2):void
		{
			if(_readOnly == true){
				return;
			}
			_normal = val;
			nativeContext.call("ane_b2RayCastOutput_setter_normal", ...);
		}

		public function get normal():b2Vec2
		{
			_normal = nativeContext.call("ane_b2RayCastOutput_getter_normal", ...);
			return _normal;
		}

		public function set fraction(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_fraction = val;
			nativeContext.call("ane_b2RayCastOutput_setter_fraction", ...);
		}

		public function get fraction():Number
		{
			_fraction = nativeContext.call("ane_b2RayCastOutput_getter_fraction", ...);
			return _fraction;
		}

	}
}