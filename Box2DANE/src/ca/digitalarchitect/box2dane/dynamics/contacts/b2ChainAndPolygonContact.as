/*================================================================================
*
* File Name: b2ChainAndPolygonContact.as
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

package ca.digitalarchitect.box2dane.dynamics.contacts
{
	import ca.digitalarchitect.box2dane.collision.b2Manifold;
	import ca.digitalarchitect.box2dane.common.b2BlockAllocator;
	import ca.digitalarchitect.box2dane.common.b2Transform;
	import ca.digitalarchitect.box2dane.dynamics.b2Fixture;
	
	public class b2ChainAndPolygonContact extends b2Contact
	{

		public function b2ChainAndPolygonContact(fixtureA:b2Fixture, indexA:int, fixtureB:b2Fixture, indexB:int)
		{
			nativeContext.call("ane_b2ChainAndPolygonContact_constructor_b2ChainAndPolygonContact", ...);
		}
		
		public function Create(fixtureA:b2Fixture, indexA:int, fixtureB:b2Fixture, indexB:int, allocator:b2BlockAllocator):b2Contact
		{
			return nativeContext.call("ane_b2ChainAndPolygonContact_callback_Create", ...);
		}

		public function Destroy(contact:b2Contact, allocator:b2BlockAllocator):void
		{
			nativeContext.call("ane_b2ChainAndPolygonContact_callback_Destroy", ...);
		}

		public function Evaluate(manifold:b2Manifold, xfA:b2Transform, xfB:b2Transform):void
		{
			nativeContext.call("ane_b2ChainAndPolygonContact_callback_Evaluate", ...);
		}

	}
}