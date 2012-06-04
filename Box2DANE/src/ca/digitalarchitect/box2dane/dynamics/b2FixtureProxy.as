/*================================================================================
*
* File Name: b2FixtureProxy.as
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
	import ca.digitalarchitect.box2dane.collision.b2AABB;
	
	public class b2FixtureProxy extends BaseNativeClass
	{

		private var _aabb:b2AABB;
		private var _fixture:b2Fixture;
		private var _childIndex:int;
		private var _proxyId:int;

		public b2FixtureProxy(nativeMemoryAddress:String)
		{
			
		}

		public function set aabb(val:b2AABB):void
		{
			if(_readOnly == true){
				return;
			}
			_aabb = val;
			nativeContext.call("ane_b2FixtureProxy_setter_aabb", ...);
		}

		public function get aabb():b2AABB
		{
			_aabb = nativeContext.call("ane_b2FixtureProxy_getter_aabb", ...);
			return _aabb;
		}

		public function set fixture(val:b2Fixture):void
		{
			if(_readOnly == true){
				return;
			}
			_fixture = val;
			nativeContext.call("ane_b2FixtureProxy_setter_fixture", ...);
		}

		public function get fixture():b2Fixture
		{
			_fixture = nativeContext.call("ane_b2FixtureProxy_getter_fixture", ...);
			return _fixture;
		}

		public function set childIndex(val:int):void
		{
			if(_readOnly == true){
				return;
			}
			_childIndex = val;
			nativeContext.call("ane_b2FixtureProxy_setter_childIndex", ...);
		}

		public function get childIndex():int
		{
			_childIndex = nativeContext.call("ane_b2FixtureProxy_getter_childIndex", ...);
			return _childIndex;
		}

		public function set proxyId(val:int):void
		{
			if(_readOnly == true){
				return;
			}
			_proxyId = val;
			nativeContext.call("ane_b2FixtureProxy_setter_proxyId", ...);
		}

		public function get proxyId():int
		{
			_proxyId = nativeContext.call("ane_b2FixtureProxy_getter_proxyId", ...);
			return _proxyId;
		}

	}
}