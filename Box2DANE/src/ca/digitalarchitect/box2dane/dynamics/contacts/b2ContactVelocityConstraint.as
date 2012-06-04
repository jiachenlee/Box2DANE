/*================================================================================
*
* File Name: b2ContactVelocityConstraint.as
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
	import ca.digitalarchitect.box2dane.common.b2Mat22;
	import ca.digitalarchitect.box2dane.common.b2Vec2;
	
	public class b2ContactVelocityConstraint extends BaseNativeClass
	{

		private var _normal:b2Vec2;
		private var _normalMass:b2Mat22;
		private var _K:b2Mat22;
		private var _indexA:int;
		private var _indexB:int;
		private var _invMassA:Number;
		private var _invMassB:Number;
		private var _invIA:Number;
		private var _invIB:Number;
		private var _friction:Number;
		private var _restitution:Number;
		private var _tangentSpeed:Number;
		private var _pointCount:int;
		private var _contactIndex:int;

		public b2ContactVelocityConstraint(nativeMemoryAddress:String)
		{
			
		}

		public function set normal(val:b2Vec2):void
		{
			if(_readOnly == true){
				return;
			}
			_normal = val;
			nativeContext.call("ane_b2ContactVelocityConstraint_setter_normal", ...);
		}

		public function get normal():b2Vec2
		{
			_normal = nativeContext.call("ane_b2ContactVelocityConstraint_getter_normal", ...);
			return _normal;
		}

		public function set normalMass(val:b2Mat22):void
		{
			if(_readOnly == true){
				return;
			}
			_normalMass = val;
			nativeContext.call("ane_b2ContactVelocityConstraint_setter_normalMass", ...);
		}

		public function get normalMass():b2Mat22
		{
			_normalMass = nativeContext.call("ane_b2ContactVelocityConstraint_getter_normalMass", ...);
			return _normalMass;
		}

		public function set K(val:b2Mat22):void
		{
			if(_readOnly == true){
				return;
			}
			_K = val;
			nativeContext.call("ane_b2ContactVelocityConstraint_setter_K", ...);
		}

		public function get K():b2Mat22
		{
			_K = nativeContext.call("ane_b2ContactVelocityConstraint_getter_K", ...);
			return _K;
		}

		public function set indexA(val:int):void
		{
			if(_readOnly == true){
				return;
			}
			_indexA = val;
			nativeContext.call("ane_b2ContactVelocityConstraint_setter_indexA", ...);
		}

		public function get indexA():int
		{
			_indexA = nativeContext.call("ane_b2ContactVelocityConstraint_getter_indexA", ...);
			return _indexA;
		}

		public function set indexB(val:int):void
		{
			if(_readOnly == true){
				return;
			}
			_indexB = val;
			nativeContext.call("ane_b2ContactVelocityConstraint_setter_indexB", ...);
		}

		public function get indexB():int
		{
			_indexB = nativeContext.call("ane_b2ContactVelocityConstraint_getter_indexB", ...);
			return _indexB;
		}

		public function set invMassA(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_invMassA = val;
			nativeContext.call("ane_b2ContactVelocityConstraint_setter_invMassA", ...);
		}

		public function get invMassA():Number
		{
			_invMassA = nativeContext.call("ane_b2ContactVelocityConstraint_getter_invMassA", ...);
			return _invMassA;
		}

		public function set invMassB(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_invMassB = val;
			nativeContext.call("ane_b2ContactVelocityConstraint_setter_invMassB", ...);
		}

		public function get invMassB():Number
		{
			_invMassB = nativeContext.call("ane_b2ContactVelocityConstraint_getter_invMassB", ...);
			return _invMassB;
		}

		public function set invIA(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_invIA = val;
			nativeContext.call("ane_b2ContactVelocityConstraint_setter_invIA", ...);
		}

		public function get invIA():Number
		{
			_invIA = nativeContext.call("ane_b2ContactVelocityConstraint_getter_invIA", ...);
			return _invIA;
		}

		public function set invIB(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_invIB = val;
			nativeContext.call("ane_b2ContactVelocityConstraint_setter_invIB", ...);
		}

		public function get invIB():Number
		{
			_invIB = nativeContext.call("ane_b2ContactVelocityConstraint_getter_invIB", ...);
			return _invIB;
		}

		public function set friction(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_friction = val;
			nativeContext.call("ane_b2ContactVelocityConstraint_setter_friction", ...);
		}

		public function get friction():Number
		{
			_friction = nativeContext.call("ane_b2ContactVelocityConstraint_getter_friction", ...);
			return _friction;
		}

		public function set restitution(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_restitution = val;
			nativeContext.call("ane_b2ContactVelocityConstraint_setter_restitution", ...);
		}

		public function get restitution():Number
		{
			_restitution = nativeContext.call("ane_b2ContactVelocityConstraint_getter_restitution", ...);
			return _restitution;
		}

		public function set tangentSpeed(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_tangentSpeed = val;
			nativeContext.call("ane_b2ContactVelocityConstraint_setter_tangentSpeed", ...);
		}

		public function get tangentSpeed():Number
		{
			_tangentSpeed = nativeContext.call("ane_b2ContactVelocityConstraint_getter_tangentSpeed", ...);
			return _tangentSpeed;
		}

		public function set pointCount(val:int):void
		{
			if(_readOnly == true){
				return;
			}
			_pointCount = val;
			nativeContext.call("ane_b2ContactVelocityConstraint_setter_pointCount", ...);
		}

		public function get pointCount():int
		{
			_pointCount = nativeContext.call("ane_b2ContactVelocityConstraint_getter_pointCount", ...);
			return _pointCount;
		}

		public function set contactIndex(val:int):void
		{
			if(_readOnly == true){
				return;
			}
			_contactIndex = val;
			nativeContext.call("ane_b2ContactVelocityConstraint_setter_contactIndex", ...);
		}

		public function get contactIndex():int
		{
			_contactIndex = nativeContext.call("ane_b2ContactVelocityConstraint_getter_contactIndex", ...);
			return _contactIndex;
		}

	}
}