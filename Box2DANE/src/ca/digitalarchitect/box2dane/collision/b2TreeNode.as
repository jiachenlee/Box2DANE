/*================================================================================
*
* File Name: b2TreeNode.as
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

package ca.digitalarchitect.box2dane.collision
{
	import ca.digitalarchitect.box2dane.BaseNativeClass;
	
	public class b2TreeNode extends BaseNativeClass
	{

		private var _aabb:b2AABB;
		private var _userData:Object;

		public b2TreeNode(nativeMemoryAddress:String)
		{
			
		}

		public function IsLeaf():Boolean
		{
			return nativeContext.call("ane_b2TreeNode_callback_IsLeaf", ...);
		}

		public function set aabb(val:b2AABB):void
		{
			if(_readOnly == true){
				return;
			}
			_aabb = val;
			nativeContext.call("ane_b2TreeNode_setter_aabb", ...);
		}

		public function get aabb():b2AABB
		{
			_aabb = nativeContext.call("ane_b2TreeNode_getter_aabb", ...);
			return _aabb;
		}

		public function set userData(val:Object):void
		{
			if(_readOnly == true){
				return;
			}
			_userData = val;
			nativeContext.call("ane_b2TreeNode_setter_userData", ...);
		}

		public function get userData():Object
		{
			_userData = nativeContext.call("ane_b2TreeNode_getter_userData", ...);
			return _userData;
		}

	}
}