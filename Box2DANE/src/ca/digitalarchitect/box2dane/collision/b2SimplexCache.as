/*================================================================================
*
* File Name: b2SimplexCache.as
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
	
	public class b2SimplexCache extends BaseNativeClass
	{

		private var _metric:Number;
		private var _count:uint;

		public b2SimplexCache(nativeMemoryAddress:String)
		{
			
		}

		public function set metric(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_metric = val;
			nativeContext.call("ane_b2SimplexCache_setter_metric", ...);
		}

		public function get metric():Number
		{
			_metric = nativeContext.call("ane_b2SimplexCache_getter_metric", ...);
			return _metric;
		}

		public function set count(val:uint):void
		{
			if(_readOnly == true){
				return;
			}
			_count = val;
			nativeContext.call("ane_b2SimplexCache_setter_count", ...);
		}

		public function get count():uint
		{
			_count = nativeContext.call("ane_b2SimplexCache_getter_count", ...);
			return _count;
		}

	}
}