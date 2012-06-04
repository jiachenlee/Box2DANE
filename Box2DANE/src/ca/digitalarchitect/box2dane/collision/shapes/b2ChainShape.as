/*================================================================================
*
* File Name: b2ChainShape.as
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
	import ca.digitalarchitect.box2dane.common.b2Transform;
	import ca.digitalarchitect.box2dane.common.b2Vec2;
	
	public class b2ChainShape extends b2Shape
	{

		private var _m_vertices:b2Vec2;
		private var _m_count:int;
		private var _m_prevVertex:b2Vec2;
		private var _m_nextVertex:b2Vec2;
		private var _m_hasPrevVertex:Boolean;
		private var _m_hasNextVertex:Boolean;

		public function b2ChainShape()
		{
			nativeContext.call("ane_b2ChainShape_constructor_b2ChainShape", ...);
		}

		public function CreateLoop(vertices:b2Vec2, count:int):void
		{
			nativeContext.call("ane_b2ChainShape_callback_CreateLoop", ...);
		}

		public function CreateChain(vertices:b2Vec2, count:int):void
		{
			nativeContext.call("ane_b2ChainShape_callback_CreateChain", ...);
		}

		public function SetPrevVertex(prevVertex:b2Vec2):void
		{
			nativeContext.call("ane_b2ChainShape_callback_SetPrevVertex", ...);
		}

		public function SetNextVertex(nextVertex:b2Vec2):void
		{
			nativeContext.call("ane_b2ChainShape_callback_SetNextVertex", ...);
		}

		public function Clone(allocator:b2BlockAllocator):b2Shape
		{
			return nativeContext.call("ane_b2ChainShape_callback_Clone", ...);
		}

		public function GetChildCount():int
		{
			return nativeContext.call("ane_b2ChainShape_callback_GetChildCount", ...);
		}

		public function GetChildEdge(edge:b2EdgeShape, index:int):void
		{
			nativeContext.call("ane_b2ChainShape_callback_GetChildEdge", ...);
		}

		public function TestPoint(transform:b2Transform, p:b2Vec2):Boolean
		{
			return nativeContext.call("ane_b2ChainShape_callback_TestPoint", ...);
		}

		public function RayCast(output:b2RayCastOutput, input:b2RayCastInput, transform:b2Transform, childIndex:int):Boolean
		{
			return nativeContext.call("ane_b2ChainShape_callback_RayCast", ...);
		}

		public function ComputeAABB(aabb:b2AABB, transform:b2Transform, childIndex:int):void
		{
			nativeContext.call("ane_b2ChainShape_callback_ComputeAABB", ...);
		}

		public function ComputeMass(massData:b2MassData, density:Number):void
		{
			nativeContext.call("ane_b2ChainShape_callback_ComputeMass", ...);
		}

		public function set m_vertices(val:b2Vec2):void
		{
			if(_readOnly == true){
				return;
			}
			_m_vertices = val;
			nativeContext.call("ane_b2ChainShape_setter_m_vertices", ...);
		}

		public function get m_vertices():b2Vec2
		{
			_m_vertices = nativeContext.call("ane_b2ChainShape_getter_m_vertices", ...);
			return _m_vertices;
		}

		public function set m_count(val:int):void
		{
			if(_readOnly == true){
				return;
			}
			_m_count = val;
			nativeContext.call("ane_b2ChainShape_setter_m_count", ...);
		}

		public function get m_count():int
		{
			_m_count = nativeContext.call("ane_b2ChainShape_getter_m_count", ...);
			return _m_count;
		}

		public function set m_prevVertex(val:b2Vec2):void
		{
			if(_readOnly == true){
				return;
			}
			_m_prevVertex = val;
			nativeContext.call("ane_b2ChainShape_setter_m_prevVertex", ...);
		}

		public function get m_prevVertex():b2Vec2
		{
			_m_prevVertex = nativeContext.call("ane_b2ChainShape_getter_m_prevVertex", ...);
			return _m_prevVertex;
		}

		public function set m_nextVertex(val:b2Vec2):void
		{
			if(_readOnly == true){
				return;
			}
			_m_nextVertex = val;
			nativeContext.call("ane_b2ChainShape_setter_m_nextVertex", ...);
		}

		public function get m_nextVertex():b2Vec2
		{
			_m_nextVertex = nativeContext.call("ane_b2ChainShape_getter_m_nextVertex", ...);
			return _m_nextVertex;
		}

		public function set m_hasPrevVertex(val:Boolean):void
		{
			if(_readOnly == true){
				return;
			}
			_m_hasPrevVertex = val;
			nativeContext.call("ane_b2ChainShape_setter_m_hasPrevVertex", ...);
		}

		public function get m_hasPrevVertex():Boolean
		{
			_m_hasPrevVertex = nativeContext.call("ane_b2ChainShape_getter_m_hasPrevVertex", ...);
			return _m_hasPrevVertex;
		}

		public function set m_hasNextVertex(val:Boolean):void
		{
			if(_readOnly == true){
				return;
			}
			_m_hasNextVertex = val;
			nativeContext.call("ane_b2ChainShape_setter_m_hasNextVertex", ...);
		}

		public function get m_hasNextVertex():Boolean
		{
			_m_hasNextVertex = nativeContext.call("ane_b2ChainShape_getter_m_hasNextVertex", ...);
			return _m_hasNextVertex;
		}

	}
}