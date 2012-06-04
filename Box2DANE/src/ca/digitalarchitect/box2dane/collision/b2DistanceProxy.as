/*================================================================================
*
* File Name: b2DistanceProxy.as
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
	import ca.digitalarchitect.box2dane.collision.shapes.b2Shape;
	import ca.digitalarchitect.box2dane.common.b2Vec2;
	
	public class b2DistanceProxy extends BaseNativeClass
	{

		private var _m_count:int;
		private var _m_radius:Number;

		public function b2DistanceProxy()
		{
			nativeContext.call("ane_b2DistanceProxy_constructor_b2DistanceProxy", ...);
		}

		public function Set(shape:b2Shape, index:int):void
		{
			nativeContext.call("ane_b2DistanceProxy_callback_Set", ...);
		}

		public function GetSupport(d:b2Vec2):int
		{
			return nativeContext.call("ane_b2DistanceProxy_callback_GetSupport", ...);
		}

		public function GetSupportVertex(d:b2Vec2):b2Vec2
		{
			return nativeContext.call("ane_b2DistanceProxy_callback_GetSupportVertex", ...);
		}

		public function GetVertexCount():int
		{
			return nativeContext.call("ane_b2DistanceProxy_callback_GetVertexCount", ...);
		}

		public function GetVertex(index:int):b2Vec2
		{
			return nativeContext.call("ane_b2DistanceProxy_callback_GetVertex", ...);
		}

		public function set m_count(val:int):void
		{
			if(_readOnly == true){
				return;
			}
			_m_count = val;
			nativeContext.call("ane_b2DistanceProxy_setter_m_count", ...);
		}

		public function get m_count():int
		{
			_m_count = nativeContext.call("ane_b2DistanceProxy_getter_m_count", ...);
			return _m_count;
		}

		public function set m_radius(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_m_radius = val;
			nativeContext.call("ane_b2DistanceProxy_setter_m_radius", ...);
		}

		public function get m_radius():Number
		{
			_m_radius = nativeContext.call("ane_b2DistanceProxy_getter_m_radius", ...);
			return _m_radius;
		}

	}
}