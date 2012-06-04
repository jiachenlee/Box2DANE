/*================================================================================
*
* File Name: b2JointEdge.as
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

package ca.digitalarchitect.box2dane.dynamics.joints
{
	import ca.digitalarchitect.box2dane.BaseNativeClass;
	import ca.digitalarchitect.box2dane.dynamics.b2Body;
	
	public class b2JointEdge extends BaseNativeClass
	{

		private var _other:b2Body;
		private var _joint:b2Joint;
		private var _prev:b2JointEdge;
		private var _next:b2JointEdge;

		public b2JointEdge(nativeMemoryAddress:String)
		{
			
		}

		public function set other(val:b2Body):void
		{
			if(_readOnly == true){
				return;
			}
			_other = val;
			nativeContext.call("ane_b2JointEdge_setter_other", ...);
		}

		public function get other():b2Body
		{
			_other = nativeContext.call("ane_b2JointEdge_getter_other", ...);
			return _other;
		}

		public function set joint(val:b2Joint):void
		{
			if(_readOnly == true){
				return;
			}
			_joint = val;
			nativeContext.call("ane_b2JointEdge_setter_joint", ...);
		}

		public function get joint():b2Joint
		{
			_joint = nativeContext.call("ane_b2JointEdge_getter_joint", ...);
			return _joint;
		}

		public function set prev(val:b2JointEdge):void
		{
			if(_readOnly == true){
				return;
			}
			_prev = val;
			nativeContext.call("ane_b2JointEdge_setter_prev", ...);
		}

		public function get prev():b2JointEdge
		{
			_prev = nativeContext.call("ane_b2JointEdge_getter_prev", ...);
			return _prev;
		}

		public function set next(val:b2JointEdge):void
		{
			if(_readOnly == true){
				return;
			}
			_next = val;
			nativeContext.call("ane_b2JointEdge_setter_next", ...);
		}

		public function get next():b2JointEdge
		{
			_next = nativeContext.call("ane_b2JointEdge_getter_next", ...);
			return _next;
		}

	}
}