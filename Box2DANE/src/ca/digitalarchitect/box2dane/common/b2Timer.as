/*================================================================================
*
* File Name: b2Timer.as
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
	
	public class b2Timer extends BaseNativeClass
	{

		public function b2Timer()
		{
			nativeContext.call("ane_b2Timer_constructor_b2Timer", ...);
		}

		public function Reset():void
		{
			nativeContext.call("ane_b2Timer_callback_Reset", ...);
		}

		public function GetMilliseconds():Number
		{
			return nativeContext.call("ane_b2Timer_callback_GetMilliseconds", ...);
		}

	}
}