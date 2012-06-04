/*================================================================================
*
* File Name: b2VelocityConstraintPoint.as
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

package ca.digitalarchitect.box2dane.dynamics.contacts
{
	import ca.digitalarchitect.box2dane.BaseNativeClass;
	import ca.digitalarchitect.box2dane.common.b2Vec2;
	
	public class b2VelocityConstraintPoint extends BaseNativeClass
	{

		private var _rA:b2Vec2;
		private var _rB:b2Vec2;
		private var _normalImpulse:Number;
		private var _tangentImpulse:Number;
		private var _normalMass:Number;
		private var _tangentMass:Number;
		private var _velocityBias:Number;

		public b2VelocityConstraintPoint(nativeMemoryAddress:String)
		{
			
		}

		public function set rA(val:b2Vec2):void
		{
			if(_readOnly == true){
				return;
			}
			_rA = val;
			nativeContext.call("ane_b2VelocityConstraintPoint_setter_rA", ...);
		}

		public function get rA():b2Vec2
		{
			_rA = nativeContext.call("ane_b2VelocityConstraintPoint_getter_rA", ...);
			return _rA;
		}

		public function set rB(val:b2Vec2):void
		{
			if(_readOnly == true){
				return;
			}
			_rB = val;
			nativeContext.call("ane_b2VelocityConstraintPoint_setter_rB", ...);
		}

		public function get rB():b2Vec2
		{
			_rB = nativeContext.call("ane_b2VelocityConstraintPoint_getter_rB", ...);
			return _rB;
		}

		public function set normalImpulse(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_normalImpulse = val;
			nativeContext.call("ane_b2VelocityConstraintPoint_setter_normalImpulse", ...);
		}

		public function get normalImpulse():Number
		{
			_normalImpulse = nativeContext.call("ane_b2VelocityConstraintPoint_getter_normalImpulse", ...);
			return _normalImpulse;
		}

		public function set tangentImpulse(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_tangentImpulse = val;
			nativeContext.call("ane_b2VelocityConstraintPoint_setter_tangentImpulse", ...);
		}

		public function get tangentImpulse():Number
		{
			_tangentImpulse = nativeContext.call("ane_b2VelocityConstraintPoint_getter_tangentImpulse", ...);
			return _tangentImpulse;
		}

		public function set normalMass(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_normalMass = val;
			nativeContext.call("ane_b2VelocityConstraintPoint_setter_normalMass", ...);
		}

		public function get normalMass():Number
		{
			_normalMass = nativeContext.call("ane_b2VelocityConstraintPoint_getter_normalMass", ...);
			return _normalMass;
		}

		public function set tangentMass(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_tangentMass = val;
			nativeContext.call("ane_b2VelocityConstraintPoint_setter_tangentMass", ...);
		}

		public function get tangentMass():Number
		{
			_tangentMass = nativeContext.call("ane_b2VelocityConstraintPoint_getter_tangentMass", ...);
			return _tangentMass;
		}

		public function set velocityBias(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_velocityBias = val;
			nativeContext.call("ane_b2VelocityConstraintPoint_setter_velocityBias", ...);
		}

		public function get velocityBias():Number
		{
			_velocityBias = nativeContext.call("ane_b2VelocityConstraintPoint_getter_velocityBias", ...);
			return _velocityBias;
		}

	}
}