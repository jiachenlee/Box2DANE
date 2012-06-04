/*================================================================================
*
* File Name: b2FixtureDef.as
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
	
	public class b2FixtureDef extends BaseNativeClass
	{

		private var _userData:Object;
		private var _friction:Number;
		private var _restitution:Number;
		private var _density:Number;
		private var _isSensor:Boolean;
		private var _filter:b2Filter;

		public function b2FixtureDef()
		{
			nativeContext.call("ane_b2FixtureDef_constructor_b2FixtureDef", ...);
		}

		public function set userData(val:Object):void
		{
			if(_readOnly == true){
				return;
			}
			_userData = val;
			nativeContext.call("ane_b2FixtureDef_setter_userData", ...);
		}

		public function get userData():Object
		{
			_userData = nativeContext.call("ane_b2FixtureDef_getter_userData", ...);
			return _userData;
		}

		public function set friction(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_friction = val;
			nativeContext.call("ane_b2FixtureDef_setter_friction", ...);
		}

		public function get friction():Number
		{
			_friction = nativeContext.call("ane_b2FixtureDef_getter_friction", ...);
			return _friction;
		}

		public function set restitution(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_restitution = val;
			nativeContext.call("ane_b2FixtureDef_setter_restitution", ...);
		}

		public function get restitution():Number
		{
			_restitution = nativeContext.call("ane_b2FixtureDef_getter_restitution", ...);
			return _restitution;
		}

		public function set density(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_density = val;
			nativeContext.call("ane_b2FixtureDef_setter_density", ...);
		}

		public function get density():Number
		{
			_density = nativeContext.call("ane_b2FixtureDef_getter_density", ...);
			return _density;
		}

		public function set isSensor(val:Boolean):void
		{
			if(_readOnly == true){
				return;
			}
			_isSensor = val;
			nativeContext.call("ane_b2FixtureDef_setter_isSensor", ...);
		}

		public function get isSensor():Boolean
		{
			_isSensor = nativeContext.call("ane_b2FixtureDef_getter_isSensor", ...);
			return _isSensor;
		}

		public function set filter(val:b2Filter):void
		{
			if(_readOnly == true){
				return;
			}
			_filter = val;
			nativeContext.call("ane_b2FixtureDef_setter_filter", ...);
		}

		public function get filter():b2Filter
		{
			_filter = nativeContext.call("ane_b2FixtureDef_getter_filter", ...);
			return _filter;
		}

	}
}