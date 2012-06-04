/*================================================================================
*
* File Name: b2ManifoldPoint.as
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
	
	public class b2ManifoldPoint extends BaseNativeClass
	{

		private var _localPoint:b2Vec2;
		private var _normalImpulse:Number;
		private var _tangentImpulse:Number;
		private var _id:b2ContactID;

		public b2ManifoldPoint(nativeMemoryAddress:String)
		{
			
		}

		public function set localPoint(val:b2Vec2):void
		{
			if(_readOnly == true){
				return;
			}
			_localPoint = val;
			nativeContext.call("ane_b2ManifoldPoint_setter_localPoint", ...);
		}

		public function get localPoint():b2Vec2
		{
			_localPoint = nativeContext.call("ane_b2ManifoldPoint_getter_localPoint", ...);
			return _localPoint;
		}

		public function set normalImpulse(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_normalImpulse = val;
			nativeContext.call("ane_b2ManifoldPoint_setter_normalImpulse", ...);
		}

		public function get normalImpulse():Number
		{
			_normalImpulse = nativeContext.call("ane_b2ManifoldPoint_getter_normalImpulse", ...);
			return _normalImpulse;
		}

		public function set tangentImpulse(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_tangentImpulse = val;
			nativeContext.call("ane_b2ManifoldPoint_setter_tangentImpulse", ...);
		}

		public function get tangentImpulse():Number
		{
			_tangentImpulse = nativeContext.call("ane_b2ManifoldPoint_getter_tangentImpulse", ...);
			return _tangentImpulse;
		}

		public function set id(val:b2ContactID):void
		{
			if(_readOnly == true){
				return;
			}
			_id = val;
			nativeContext.call("ane_b2ManifoldPoint_setter_id", ...);
		}

		public function get id():b2ContactID
		{
			_id = nativeContext.call("ane_b2ManifoldPoint_getter_id", ...);
			return _id;
		}

	}
}