/*================================================================================
*
* File Name: b2AABB.as
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
	
	public class b2AABB extends BaseNativeClass
	{

		private var _lowerBound:b2Vec2;
		private var _upperBound:b2Vec2;

		public function b2AABB(nativeMemoryAddress:String)
		{
			initializeContext(this, nativeMemoryAddress);
		}

		public function IsValid():Boolean
		{
			return nativeContext.call("ane_b2AABB_callback_IsValid") as Boolean;
		}

		public function GetCenter():b2Vec2
		{
			return nativeContext.call("ane_b2AABB_callback_GetCenter") as b2Vec2;
		}

		public function GetExtents():b2Vec2
		{
			return nativeContext.call("ane_b2AABB_callback_GetExtents", ...);
		}

		public function GetPerimeter():Number
		{
			return nativeContext.call("ane_b2AABB_callback_GetPerimeter", ...);
		}

		public function Combine(aabb:b2AABB):void
		{
			nativeContext.call("ane_b2AABB_callback_Combine", ...);
		}

		public function Combine(aabb1:b2AABB, aabb2:b2AABB):void
		{
			nativeContext.call("ane_b2AABB_callback_Combine", ...);
		}

		public function Contains(aabb:b2AABB):Boolean
		{
			return nativeContext.call("ane_b2AABB_callback_Contains", ...);
		}

		public function RayCast(output:b2RayCastOutput, input:b2RayCastInput):Boolean
		{
			return nativeContext.call("ane_b2AABB_callback_RayCast", ...);
		}

		public function set lowerBound(val:b2Vec2):void
		{
			if(_readOnly == true){
				return;
			}
			_lowerBound = val;
			nativeContext.call("ane_b2AABB_setter_lowerBound", ...);
		}

		public function get lowerBound():b2Vec2
		{
			_lowerBound = nativeContext.call("ane_b2AABB_getter_lowerBound", ...);
			return _lowerBound;
		}

		public function set upperBound(val:b2Vec2):void
		{
			if(_readOnly == true){
				return;
			}
			_upperBound = val;
			nativeContext.call("ane_b2AABB_setter_upperBound", ...);
		}

		public function get upperBound():b2Vec2
		{
			_upperBound = nativeContext.call("ane_b2AABB_getter_upperBound", ...);
			return _upperBound;
		}

	}
}