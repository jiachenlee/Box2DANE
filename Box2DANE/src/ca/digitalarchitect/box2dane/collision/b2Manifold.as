/*================================================================================
*
* File Name: b2Manifold.as
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
	
	public class b2Manifold extends BaseNativeClass
	{

		private var _localNormal:b2Vec2;
		private var _localPoint:b2Vec2;
		private var _type:int;
		private var _pointCount:int;

		public b2Manifold(nativeMemoryAddress:String)
		{
			
		}

		public function set localNormal(val:b2Vec2):void
		{
			if(_readOnly == true){
				return;
			}
			_localNormal = val;
			nativeContext.call("ane_b2Manifold_setter_localNormal", ...);
		}

		public function get localNormal():b2Vec2
		{
			_localNormal = nativeContext.call("ane_b2Manifold_getter_localNormal", ...);
			return _localNormal;
		}

		public function set localPoint(val:b2Vec2):void
		{
			if(_readOnly == true){
				return;
			}
			_localPoint = val;
			nativeContext.call("ane_b2Manifold_setter_localPoint", ...);
		}

		public function get localPoint():b2Vec2
		{
			_localPoint = nativeContext.call("ane_b2Manifold_getter_localPoint", ...);
			return _localPoint;
		}

		public function set pointCount(val:int):void
		{
			if(_readOnly == true){
				return;
			}
			_pointCount = val;
			nativeContext.call("ane_b2Manifold_setter_pointCount", ...);
		}

		public function get pointCount():int
		{
			_pointCount = nativeContext.call("ane_b2Manifold_getter_pointCount", ...);
			return _pointCount;
		}
	
		public function set type(val:int):void
		{
			if(_readOnly == true){
				return;
			}
			_type = val;
			nativeContext.call("ane_b2Manifold_setter_type", ...);
		}

		public function get type():int
		{
			_type = nativeContext.call("ane_b2Manifold_getter_type", ...);
			return _type;
		}
	}
}