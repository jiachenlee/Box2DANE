/*================================================================================
*
* File Name: b2PolygonShape.as
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
	
	public class b2PolygonShape extends b2Shape
	{

		private var _m_centroid:b2Vec2;
		private var _m_count:int;

		public function b2PolygonShape()
		{
			nativeContext.call("ane_b2PolygonShape_constructor_b2PolygonShape", ...);
		}

		public function Clone(allocator:b2BlockAllocator):b2Shape
		{
			return nativeContext.call("ane_b2PolygonShape_callback_Clone", ...);
		}

		public function GetChildCount():int
		{
			return nativeContext.call("ane_b2PolygonShape_callback_GetChildCount", ...);
		}

		public function Set(points:b2Vec2, count:int):void
		{
			nativeContext.call("ane_b2PolygonShape_callback_Set", ...);
		}

		public function SetAsBox(hx:Number, hy:Number):void
		{
			nativeContext.call("ane_b2PolygonShape_callback_SetAsBox", ...);
		}

		public function SetAsBox(hx:Number, hy:Number, center:b2Vec2, angle:Number):void
		{
			nativeContext.call("ane_b2PolygonShape_callback_SetAsBox", ...);
		}

		public function TestPoint(transform:b2Transform, p:b2Vec2):Boolean
		{
			return nativeContext.call("ane_b2PolygonShape_callback_TestPoint", ...);
		}

		public function RayCast(output:b2RayCastOutput, input:b2RayCastInput, transform:b2Transform, childIndex:int):Boolean
		{
			return nativeContext.call("ane_b2PolygonShape_callback_RayCast", ...);
		}

		public function ComputeAABB(aabb:b2AABB, transform:b2Transform, childIndex:int):void
		{
			nativeContext.call("ane_b2PolygonShape_callback_ComputeAABB", ...);
		}

		public function ComputeMass(massData:b2MassData, density:Number):void
		{
			nativeContext.call("ane_b2PolygonShape_callback_ComputeMass", ...);
		}

		public function GetVertexCount():int
		{
			return nativeContext.call("ane_b2PolygonShape_callback_GetVertexCount", ...);
		}

		public function GetVertex(index:int):b2Vec2
		{
			return nativeContext.call("ane_b2PolygonShape_callback_GetVertex", ...);
		}

		public function Validate():Boolean
		{
			return nativeContext.call("ane_b2PolygonShape_callback_Validate", ...);
		}

		public function set m_centroid(val:b2Vec2):void
		{
			if(_readOnly == true){
				return;
			}
			_m_centroid = val;
			nativeContext.call("ane_b2PolygonShape_setter_m_centroid", ...);
		}

		public function get m_centroid():b2Vec2
		{
			_m_centroid = nativeContext.call("ane_b2PolygonShape_getter_m_centroid", ...);
			return _m_centroid;
		}

		public function set m_count(val:int):void
		{
			if(_readOnly == true){
				return;
			}
			_m_count = val;
			nativeContext.call("ane_b2PolygonShape_setter_m_count", ...);
		}

		public function get m_count():int
		{
			_m_count = nativeContext.call("ane_b2PolygonShape_getter_m_count", ...);
			return _m_count;
		}

	}
}