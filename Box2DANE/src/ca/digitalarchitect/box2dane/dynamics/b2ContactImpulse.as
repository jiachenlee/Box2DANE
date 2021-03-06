/*================================================================================
*
* File Name: b2ContactImpulse.as
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
	
	public class b2ContactImpulse extends BaseNativeClass
	{

		private var _count:int;

		public b2ContactImpulse(nativeMemoryAddress:String)
		{
			
		}

		public function set count(val:int):void
		{
			if(_readOnly == true){
				return;
			}
			_count = val;
			nativeContext.call("ane_b2ContactImpulse_setter_count", ...);
		}

		public function get count():int
		{
			_count = nativeContext.call("ane_b2ContactImpulse_getter_count", ...);
			return _count;
		}

	}
}