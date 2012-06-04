/*================================================================================
*
* File Name: b2CircleShape.as
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

package ca.digitalarchitect.box2dane.collision.shapes
{
	import ca.digitalarchitect.box2dane.collision.b2AABB;
	import ca.digitalarchitect.box2dane.collision.b2RayCastInput;
	import ca.digitalarchitect.box2dane.collision.b2RayCastOutput;
	import ca.digitalarchitect.box2dane.common.b2BlockAllocator;
	import ca.digitalarchitect.box2dane.common.b2Transform;
	import ca.digitalarchitect.box2dane.common.b2Vec2;
	
	public class b2CircleShape extends b2Shape
	{

		private var _m_p:b2Vec2;

		public function b2CircleShape()
		{
			nativeContext.call("ane_b2CircleShape_constructor_b2CircleShape", ...);
		}

		public function Clone(allocator:b2BlockAllocator):b2Shape
		{
			return nativeContext.call("ane_b2CircleShape_callback_Clone", ...);
		}

		public function GetChildCount():int
		{
			return nativeContext.call("ane_b2CircleShape_callback_GetChildCount", ...);
		}

		public function TestPoint(transform:b2Transform, p:b2Vec2):Boolean
		{
			return nativeContext.call("ane_b2CircleShape_callback_TestPoint", ...);
		}

		public function RayCast(output:b2RayCastOutput, input:b2RayCastInput, transform:b2Transform, childIndex:int):Boolean
		{
			return nativeContext.call("ane_b2CircleShape_callback_RayCast", ...);
		}

		public function ComputeAABB(aabb:b2AABB, transform:b2Transform, childIndex:int):void
		{
			nativeContext.call("ane_b2CircleShape_callback_ComputeAABB", ...);
		}

		public function ComputeMass(massData:b2MassData, density:Number):void
		{
			nativeContext.call("ane_b2CircleShape_callback_ComputeMass", ...);
		}

		public function GetSupport(d:b2Vec2):int
		{
			return nativeContext.call("ane_b2CircleShape_callback_GetSupport", ...);
		}

		public function GetSupportVertex(d:b2Vec2):b2Vec2
		{
			return nativeContext.call("ane_b2CircleShape_callback_GetSupportVertex", ...);
		}

		public function GetVertexCount():int
		{
			return nativeContext.call("ane_b2CircleShape_callback_GetVertexCount", ...);
		}

		public function GetVertex(index:int):b2Vec2
		{
			return nativeContext.call("ane_b2CircleShape_callback_GetVertex", ...);
		}

		public function set m_p(val:b2Vec2):void
		{
			if(_readOnly == true){
				return;
			}
			_m_p = val;
			nativeContext.call("ane_b2CircleShape_setter_m_p", ...);
		}

		public function get m_p():b2Vec2
		{
			_m_p = nativeContext.call("ane_b2CircleShape_getter_m_p", ...);
			return _m_p;
		}

	}
}