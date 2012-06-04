/*================================================================================
*
* File Name: b2QueryCallback.as
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
	
	public class b2QueryCallback extends BaseNativeClass
	{

		public b2QueryCallback(nativeMemoryAddress:String)
		{
			
		}

		public function ReportFixture(fixture:b2Fixture):Boolean
		{
			return nativeContext.call("ane_b2QueryCallback_callback_ReportFixture", ...);
		}

	}
}