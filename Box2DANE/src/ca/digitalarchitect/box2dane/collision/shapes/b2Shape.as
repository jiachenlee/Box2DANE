/*================================================================================
*
* File Name: b2Shape.as
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
	import ca.digitalarchitect.box2dane.BaseNativeClass;
	import ca.digitalarchitect.box2dane.collision.b2AABB;
	import ca.digitalarchitect.box2dane.collision.b2RayCastInput;
	import ca.digitalarchitect.box2dane.collision.b2RayCastOutput;
	import ca.digitalarchitect.box2dane.common.b2BlockAllocator;
	import ca.digitalarchitect.box2dane.common.b2Transform;
	import ca.digitalarchitect.box2dane.common.b2Vec2;
	
	public class b2Shape extends BaseNativeClass
	{

		private var _m_type:int;
		private var _m_radius:Number;

		public b2Shape(nativeMemoryAddress:String)
		{
			
		}

		public function Clone(allocator:b2BlockAllocator):b2Shape
		{
			return nativeContext.call("ane_b2Shape_callback_Clone", ...);
		}

		public function GetChildCount():int
		{
			return nativeContext.call("ane_b2Shape_callback_GetChildCount", ...);
		}

		public function TestPoint(xf:b2Transform, p:b2Vec2):Boolean
		{
			return nativeContext.call("ane_b2Shape_callback_TestPoint", ...);
		}

		public function RayCast(output:b2RayCastOutput, input:b2RayCastInput, transform:b2Transform, childIndex:int):Boolean
		{
			return nativeContext.call("ane_b2Shape_callback_RayCast", ...);
		}

		public function ComputeAABB(aabb:b2AABB, xf:b2Transform, childIndex:int):void
		{
			nativeContext.call("ane_b2Shape_callback_ComputeAABB", ...);
		}

		public function ComputeMass(massData:b2MassData, density:Number):void
		{
			nativeContext.call("ane_b2Shape_callback_ComputeMass", ...);
		}

		public function set m_radius(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_m_radius = val;
			nativeContext.call("ane_b2Shape_setter_m_radius", ...);
		}

		public function get m_radius():Number
		{
			_m_radius = nativeContext.call("ane_b2Shape_getter_m_radius", ...);
			return _m_radius;
		}
		
		public function set m_type(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			m_type = val;
			nativeContext.call("ane_b2Shape_setter_m_type", ...);
		}

		public function get m_type():Number
		{
			m_type = nativeContext.call("ane_b2Shape_getter_m_type", ...);
			return _m_radius;
		}
	}
}