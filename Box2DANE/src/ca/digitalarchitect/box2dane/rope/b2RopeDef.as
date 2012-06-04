/*================================================================================
*
* File Name: b2RopeDef.as
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

package ca.digitalarchitect.box2dane.rope
{
	import ca.digitalarchitect.box2dane.BaseNativeClass;
	import ca.digitalarchitect.box2dane.common.b2Vec2;
	
	public class b2RopeDef extends BaseNativeClass
	{

		private var _vertices:b2Vec2;
		private var _count:int;
		private var _masses:Number;
		private var _gravity:b2Vec2;
		private var _damping:Number;
		private var _k2:Number;
		private var _k3:Number;

		public function b2RopeDef()
		{
			nativeContext.call("ane_b2RopeDef_constructor_b2RopeDef", ...);
		}

		public function set vertices(val:b2Vec2):void
		{
			if(_readOnly == true){
				return;
			}
			_vertices = val;
			nativeContext.call("ane_b2RopeDef_setter_vertices", ...);
		}

		public function get vertices():b2Vec2
		{
			_vertices = nativeContext.call("ane_b2RopeDef_getter_vertices", ...);
			return _vertices;
		}

		public function set count(val:int):void
		{
			if(_readOnly == true){
				return;
			}
			_count = val;
			nativeContext.call("ane_b2RopeDef_setter_count", ...);
		}

		public function get count():int
		{
			_count = nativeContext.call("ane_b2RopeDef_getter_count", ...);
			return _count;
		}

		public function set masses(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_masses = val;
			nativeContext.call("ane_b2RopeDef_setter_masses", ...);
		}

		public function get masses():Number
		{
			_masses = nativeContext.call("ane_b2RopeDef_getter_masses", ...);
			return _masses;
		}

		public function set gravity(val:b2Vec2):void
		{
			if(_readOnly == true){
				return;
			}
			_gravity = val;
			nativeContext.call("ane_b2RopeDef_setter_gravity", ...);
		}

		public function get gravity():b2Vec2
		{
			_gravity = nativeContext.call("ane_b2RopeDef_getter_gravity", ...);
			return _gravity;
		}

		public function set damping(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_damping = val;
			nativeContext.call("ane_b2RopeDef_setter_damping", ...);
		}

		public function get damping():Number
		{
			_damping = nativeContext.call("ane_b2RopeDef_getter_damping", ...);
			return _damping;
		}

		public function set k2(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_k2 = val;
			nativeContext.call("ane_b2RopeDef_setter_k2", ...);
		}

		public function get k2():Number
		{
			_k2 = nativeContext.call("ane_b2RopeDef_getter_k2", ...);
			return _k2;
		}

		public function set k3(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_k3 = val;
			nativeContext.call("ane_b2RopeDef_setter_k3", ...);
		}

		public function get k3():Number
		{
			_k3 = nativeContext.call("ane_b2RopeDef_getter_k3", ...);
			return _k3;
		}

	}
}