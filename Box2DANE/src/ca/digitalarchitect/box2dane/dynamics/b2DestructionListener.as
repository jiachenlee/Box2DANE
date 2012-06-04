/*================================================================================
*
* File Name: b2DestructionListener.as
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
	import ca.digitalarchitect.box2dane.dynamics.joints.b2Joint;
	
	public class b2DestructionListener extends BaseNativeClass
	{

		public b2DestructionListener(nativeMemoryAddress:String)
		{
			
		}

		public function SayGoodbye(joint:b2Joint):void
		{
			nativeContext.call("ane_b2DestructionListener_callback_SayGoodbye", ...);
		}

		public function SayGoodbye(fixture:b2Fixture):void
		{
			nativeContext.call("ane_b2DestructionListener_callback_SayGoodbye", ...);
		}

	}
}