/*================================================================================
*
* File Name: b2ContactManager.as
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
	import ca.digitalarchitect.box2dane.collision.b2BroadPhase;
	import ca.digitalarchitect.box2dane.common.b2BlockAllocator;
	import ca.digitalarchitect.box2dane.dynamics.contacts.b2Contact;
	
	public class b2ContactManager extends BaseNativeClass
	{

		private var _m_broadPhase:b2BroadPhase;
		private var _m_contactList:b2Contact;
		private var _m_contactCount:int;
		private var _m_contactFilter:b2ContactFilter;
		private var _m_contactListener:b2ContactListener;
		private var _m_allocator:b2BlockAllocator;

		public function b2ContactManager()
		{
			nativeContext.call("ane_b2ContactManager_constructor_b2ContactManager", ...);
		}

		public function AddPair(proxyUserDataA:Object, proxyUserDataB:Object):void
		{
			nativeContext.call("ane_b2ContactManager_callback_AddPair", ...);
		}

		public function FindNewContacts():void
		{
			nativeContext.call("ane_b2ContactManager_callback_FindNewContacts", ...);
		}

		public function Destroy(c:b2Contact):void
		{
			nativeContext.call("ane_b2ContactManager_callback_Destroy", ...);
		}

		public function Collide():void
		{
			nativeContext.call("ane_b2ContactManager_callback_Collide", ...);
		}

		public function set m_broadPhase(val:b2BroadPhase):void
		{
			if(_readOnly == true){
				return;
			}
			_m_broadPhase = val;
			nativeContext.call("ane_b2ContactManager_setter_m_broadPhase", ...);
		}

		public function get m_broadPhase():b2BroadPhase
		{
			_m_broadPhase = nativeContext.call("ane_b2ContactManager_getter_m_broadPhase", ...);
			return _m_broadPhase;
		}

		public function set m_contactList(val:b2Contact):void
		{
			if(_readOnly == true){
				return;
			}
			_m_contactList = val;
			nativeContext.call("ane_b2ContactManager_setter_m_contactList", ...);
		}

		public function get m_contactList():b2Contact
		{
			_m_contactList = nativeContext.call("ane_b2ContactManager_getter_m_contactList", ...);
			return _m_contactList;
		}

		public function set m_contactCount(val:int):void
		{
			if(_readOnly == true){
				return;
			}
			_m_contactCount = val;
			nativeContext.call("ane_b2ContactManager_setter_m_contactCount", ...);
		}

		public function get m_contactCount():int
		{
			_m_contactCount = nativeContext.call("ane_b2ContactManager_getter_m_contactCount", ...);
			return _m_contactCount;
		}

		public function set m_contactFilter(val:b2ContactFilter):void
		{
			if(_readOnly == true){
				return;
			}
			_m_contactFilter = val;
			nativeContext.call("ane_b2ContactManager_setter_m_contactFilter", ...);
		}

		public function get m_contactFilter():b2ContactFilter
		{
			_m_contactFilter = nativeContext.call("ane_b2ContactManager_getter_m_contactFilter", ...);
			return _m_contactFilter;
		}

		public function set m_contactListener(val:b2ContactListener):void
		{
			if(_readOnly == true){
				return;
			}
			_m_contactListener = val;
			nativeContext.call("ane_b2ContactManager_setter_m_contactListener", ...);
		}

		public function get m_contactListener():b2ContactListener
		{
			_m_contactListener = nativeContext.call("ane_b2ContactManager_getter_m_contactListener", ...);
			return _m_contactListener;
		}

		public function set m_allocator(val:b2BlockAllocator):void
		{
			if(_readOnly == true){
				return;
			}
			_m_allocator = val;
			nativeContext.call("ane_b2ContactManager_setter_m_allocator", ...);
		}

		public function get m_allocator():b2BlockAllocator
		{
			_m_allocator = nativeContext.call("ane_b2ContactManager_getter_m_allocator", ...);
			return _m_allocator;
		}

	}
}