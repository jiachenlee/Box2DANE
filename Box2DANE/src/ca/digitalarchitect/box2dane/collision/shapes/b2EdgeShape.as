/*================================================================================
*
* File Name: b2EdgeShape.as
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
	
	public class b2EdgeShape extends b2Shape
	{

		private var _m_vertex1:b2Vec2;
		private var _m_vertex2:b2Vec2;
		private var _m_vertex0:b2Vec2;
		private var _m_vertex3:b2Vec2;
		private var _m_hasVertex0:Boolean;
		private var _m_hasVertex3:Boolean;

		public function b2EdgeShape()
		{
			nativeContext.call("ane_b2EdgeShape_constructor_b2EdgeShape", ...);
		}

		public function Set(v1:b2Vec2, v2:b2Vec2):void
		{
			nativeContext.call("ane_b2EdgeShape_callback_Set", ...);
		}

		public function Clone(allocator:b2BlockAllocator):b2Shape
		{
			return nativeContext.call("ane_b2EdgeShape_callback_Clone", ...);
		}

		public function GetChildCount():int
		{
			return nativeContext.call("ane_b2EdgeShape_callback_GetChildCount", ...);
		}

		public function TestPoint(transform:b2Transform, p:b2Vec2):Boolean
		{
			return nativeContext.call("ane_b2EdgeShape_callback_TestPoint", ...);
		}

		public function RayCast(output:b2RayCastOutput, input:b2RayCastInput, transform:b2Transform, childIndex:int):Boolean
		{
			return nativeContext.call("ane_b2EdgeShape_callback_RayCast", ...);
		}

		public function ComputeAABB(aabb:b2AABB, transform:b2Transform, childIndex:int):void
		{
			nativeContext.call("ane_b2EdgeShape_callback_ComputeAABB", ...);
		}

		public function ComputeMass(massData:b2MassData, density:Number):void
		{
			nativeContext.call("ane_b2EdgeShape_callback_ComputeMass", ...);
		}

		public function set m_vertex1(val:b2Vec2):void
		{
			if(_readOnly == true){
				return;
			}
			_m_vertex1 = val;
			nativeContext.call("ane_b2EdgeShape_setter_m_vertex1", ...);
		}

		public function get m_vertex1():b2Vec2
		{
			_m_vertex1 = nativeContext.call("ane_b2EdgeShape_getter_m_vertex1", ...);
			return _m_vertex1;
		}

		public function set m_vertex2(val:b2Vec2):void
		{
			if(_readOnly == true){
				return;
			}
			_m_vertex2 = val;
			nativeContext.call("ane_b2EdgeShape_setter_m_vertex2", ...);
		}

		public function get m_vertex2():b2Vec2
		{
			_m_vertex2 = nativeContext.call("ane_b2EdgeShape_getter_m_vertex2", ...);
			return _m_vertex2;
		}

		public function set m_vertex0(val:b2Vec2):void
		{
			if(_readOnly == true){
				return;
			}
			_m_vertex0 = val;
			nativeContext.call("ane_b2EdgeShape_setter_m_vertex0", ...);
		}

		public function get m_vertex0():b2Vec2
		{
			_m_vertex0 = nativeContext.call("ane_b2EdgeShape_getter_m_vertex0", ...);
			return _m_vertex0;
		}

		public function set m_vertex3(val:b2Vec2):void
		{
			if(_readOnly == true){
				return;
			}
			_m_vertex3 = val;
			nativeContext.call("ane_b2EdgeShape_setter_m_vertex3", ...);
		}

		public function get m_vertex3():b2Vec2
		{
			_m_vertex3 = nativeContext.call("ane_b2EdgeShape_getter_m_vertex3", ...);
			return _m_vertex3;
		}

		public function set m_hasVertex0(val:Boolean):void
		{
			if(_readOnly == true){
				return;
			}
			_m_hasVertex0 = val;
			nativeContext.call("ane_b2EdgeShape_setter_m_hasVertex0", ...);
		}

		public function get m_hasVertex0():Boolean
		{
			_m_hasVertex0 = nativeContext.call("ane_b2EdgeShape_getter_m_hasVertex0", ...);
			return _m_hasVertex0;
		}

		public function set m_hasVertex3(val:Boolean):void
		{
			if(_readOnly == true){
				return;
			}
			_m_hasVertex3 = val;
			nativeContext.call("ane_b2EdgeShape_setter_m_hasVertex3", ...);
		}

		public function get m_hasVertex3():Boolean
		{
			_m_hasVertex3 = nativeContext.call("ane_b2EdgeShape_getter_m_hasVertex3", ...);
			return _m_hasVertex3;
		}

	}
}