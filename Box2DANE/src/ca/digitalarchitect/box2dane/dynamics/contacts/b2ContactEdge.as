/*================================================================================
*
* File Name: b2ContactEdge.as
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
	import ca.digitalarchitect.box2dane.BaseNativeClass;
	import ca.digitalarchitect.box2dane.dynamics.b2Body;
	
	public class b2ContactEdge extends BaseNativeClass
	{

		private var _other:b2Body;
		private var _contact:b2Contact;
		private var _prev:b2ContactEdge;
		private var _next:b2ContactEdge;

		public b2ContactEdge(nativeMemoryAddress:String)
		{
			
		}

		public function set other(val:b2Body):void
		{
			if(_readOnly == true){
				return;
			}
			_other = val;
			nativeContext.call("ane_b2ContactEdge_setter_other", ...);
		}

		public function get other():b2Body
		{
			_other = nativeContext.call("ane_b2ContactEdge_getter_other", ...);
			return _other;
		}

		public function set contact(val:b2Contact):void
		{
			if(_readOnly == true){
				return;
			}
			_contact = val;
			nativeContext.call("ane_b2ContactEdge_setter_contact", ...);
		}

		public function get contact():b2Contact
		{
			_contact = nativeContext.call("ane_b2ContactEdge_getter_contact", ...);
			return _contact;
		}

		public function set prev(val:b2ContactEdge):void
		{
			if(_readOnly == true){
				return;
			}
			_prev = val;
			nativeContext.call("ane_b2ContactEdge_setter_prev", ...);
		}

		public function get prev():b2ContactEdge
		{
			_prev = nativeContext.call("ane_b2ContactEdge_getter_prev", ...);
			return _prev;
		}

		public function set next(val:b2ContactEdge):void
		{
			if(_readOnly == true){
				return;
			}
			_next = val;
			nativeContext.call("ane_b2ContactEdge_setter_next", ...);
		}

		public function get next():b2ContactEdge
		{
			_next = nativeContext.call("ane_b2ContactEdge_getter_next", ...);
			return _next;
		}

	}
}