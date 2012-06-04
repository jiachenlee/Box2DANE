/*================================================================================
*
* File Name: b2BodyDef.as
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

package ca.digitalarchitect.box2dane.dynamics
{
	import ca.digitalarchitect.box2dane.BaseNativeClass;
	import ca.digitalarchitect.box2dane.common.b2Vec2;
	
	public class b2BodyDef extends BaseNativeClass
	{

		private var _type:b2BodyType;
		private var _position:b2Vec2;
		private var _angle:Number;
		private var _linearVelocity:b2Vec2;
		private var _angularVelocity:Number;
		private var _linearDamping:Number;
		private var _angularDamping:Number;
		private var _allowSleep:Boolean;
		private var _awake:Boolean;
		private var _fixedRotation:Boolean;
		private var _bullet:Boolean;
		private var _active:Boolean;
		private var _userData:Object;
		private var _gravityScale:Number;

		public function b2BodyDef()
		{
			nativeContext.call("ane_b2BodyDef_constructor_b2BodyDef", ...);
		}

		public function set type(val:int):void
		{
			if(_readOnly == true){
				return;
			}
			_type = val;
			nativeContext.call("ane_b2BodyDef_setter_type", ...);
		}

		public function get type():int
		{
			_type = nativeContext.call("ane_b2BodyDef_getter_type", ...);
			return _type;
		}

		public function set position(val:b2Vec2):void
		{
			if(_readOnly == true){
				return;
			}
			_position = val;
			nativeContext.call("ane_b2BodyDef_setter_position", ...);
		}

		public function get position():b2Vec2
		{
			_position = nativeContext.call("ane_b2BodyDef_getter_position", ...);
			return _position;
		}

		public function set angle(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_angle = val;
			nativeContext.call("ane_b2BodyDef_setter_angle", ...);
		}

		public function get angle():Number
		{
			_angle = nativeContext.call("ane_b2BodyDef_getter_angle", ...);
			return _angle;
		}

		public function set linearVelocity(val:b2Vec2):void
		{
			if(_readOnly == true){
				return;
			}
			_linearVelocity = val;
			nativeContext.call("ane_b2BodyDef_setter_linearVelocity", ...);
		}

		public function get linearVelocity():b2Vec2
		{
			_linearVelocity = nativeContext.call("ane_b2BodyDef_getter_linearVelocity", ...);
			return _linearVelocity;
		}

		public function set angularVelocity(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_angularVelocity = val;
			nativeContext.call("ane_b2BodyDef_setter_angularVelocity", ...);
		}

		public function get angularVelocity():Number
		{
			_angularVelocity = nativeContext.call("ane_b2BodyDef_getter_angularVelocity", ...);
			return _angularVelocity;
		}

		public function set linearDamping(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_linearDamping = val;
			nativeContext.call("ane_b2BodyDef_setter_linearDamping", ...);
		}

		public function get linearDamping():Number
		{
			_linearDamping = nativeContext.call("ane_b2BodyDef_getter_linearDamping", ...);
			return _linearDamping;
		}

		public function set angularDamping(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_angularDamping = val;
			nativeContext.call("ane_b2BodyDef_setter_angularDamping", ...);
		}

		public function get angularDamping():Number
		{
			_angularDamping = nativeContext.call("ane_b2BodyDef_getter_angularDamping", ...);
			return _angularDamping;
		}

		public function set allowSleep(val:Boolean):void
		{
			if(_readOnly == true){
				return;
			}
			_allowSleep = val;
			nativeContext.call("ane_b2BodyDef_setter_allowSleep", ...);
		}

		public function get allowSleep():Boolean
		{
			_allowSleep = nativeContext.call("ane_b2BodyDef_getter_allowSleep", ...);
			return _allowSleep;
		}

		public function set awake(val:Boolean):void
		{
			if(_readOnly == true){
				return;
			}
			_awake = val;
			nativeContext.call("ane_b2BodyDef_setter_awake", ...);
		}

		public function get awake():Boolean
		{
			_awake = nativeContext.call("ane_b2BodyDef_getter_awake", ...);
			return _awake;
		}

		public function set fixedRotation(val:Boolean):void
		{
			if(_readOnly == true){
				return;
			}
			_fixedRotation = val;
			nativeContext.call("ane_b2BodyDef_setter_fixedRotation", ...);
		}

		public function get fixedRotation():Boolean
		{
			_fixedRotation = nativeContext.call("ane_b2BodyDef_getter_fixedRotation", ...);
			return _fixedRotation;
		}

		public function set bullet(val:Boolean):void
		{
			if(_readOnly == true){
				return;
			}
			_bullet = val;
			nativeContext.call("ane_b2BodyDef_setter_bullet", ...);
		}

		public function get bullet():Boolean
		{
			_bullet = nativeContext.call("ane_b2BodyDef_getter_bullet", ...);
			return _bullet;
		}

		public function set active(val:Boolean):void
		{
			if(_readOnly == true){
				return;
			}
			_active = val;
			nativeContext.call("ane_b2BodyDef_setter_active", ...);
		}

		public function get active():Boolean
		{
			_active = nativeContext.call("ane_b2BodyDef_getter_active", ...);
			return _active;
		}

		public function set userData(val:Object):void
		{
			if(_readOnly == true){
				return;
			}
			_userData = val;
			nativeContext.call("ane_b2BodyDef_setter_userData", ...);
		}

		public function get userData():Object
		{
			_userData = nativeContext.call("ane_b2BodyDef_getter_userData", ...);
			return _userData;
		}

		public function set gravityScale(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_gravityScale = val;
			nativeContext.call("ane_b2BodyDef_setter_gravityScale", ...);
		}

		public function get gravityScale():Number
		{
			_gravityScale = nativeContext.call("ane_b2BodyDef_getter_gravityScale", ...);
			return _gravityScale;
		}

	}
}