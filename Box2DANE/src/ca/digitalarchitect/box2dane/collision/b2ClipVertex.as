/*================================================================================
*
* File Name: b2ClipVertex.as
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
	import ca.digitalarchitect.box2dane.common.b2Vec2;
	
	public class b2ClipVertex extends BaseNativeClass
	{

		private var _v:b2Vec2;
		private var _id:b2ContactID;

		public b2ClipVertex(nativeMemoryAddress:String)
		{
			
		}

		public function set v(val:b2Vec2):void
		{
			if(_readOnly == true){
				return;
			}
			_v = val;
			nativeContext.call("ane_b2ClipVertex_setter_v", ...);
		}

		public function get v():b2Vec2
		{
			_v = nativeContext.call("ane_b2ClipVertex_getter_v", ...);
			return _v;
		}

		public function set id(val:b2ContactID):void
		{
			if(_readOnly == true){
				return;
			}
			_id = val;
			nativeContext.call("ane_b2ClipVertex_setter_id", ...);
		}

		public function get id():b2ContactID
		{
			_id = nativeContext.call("ane_b2ClipVertex_getter_id", ...);
			return _id;
		}

	}
}