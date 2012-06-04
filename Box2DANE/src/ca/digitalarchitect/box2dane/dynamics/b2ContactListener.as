/*================================================================================
*
* File Name: b2ContactListener.as
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
	import ca.digitalarchitect.box2dane.collision.b2Manifold;
	import ca.digitalarchitect.box2dane.dynamics.contacts.b2Contact;
	
	public class b2ContactListener extends BaseNativeClass
	{

		public b2ContactListener(nativeMemoryAddress:String)
		{
			
		}

		public function BeginContact(contact:b2Contact):void
		{
			nativeContext.call("ane_b2ContactListener_callback_BeginContact", ...);
		}

		public function EndContact(contact:b2Contact):void
		{
			nativeContext.call("ane_b2ContactListener_callback_EndContact", ...);
		}

		public function PreSolve(contact:b2Contact, oldManifold:b2Manifold):void
		{
			nativeContext.call("ane_b2ContactListener_callback_PreSolve", ...);
		}

		public function PostSolve(contact:b2Contact, impulse:b2ContactImpulse):void
		{
			nativeContext.call("ane_b2ContactListener_callback_PostSolve", ...);
		}

	}
}