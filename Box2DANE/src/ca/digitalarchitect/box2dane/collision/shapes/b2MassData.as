/*================================================================================
*
* File Name: b2MassData.as
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
	import ca.digitalarchitect.box2dane.common.b2Vec2;
	
	public class b2MassData extends BaseNativeClass
	{

		private var _mass:Number;
		private var _center:b2Vec2;
		private var _I:Number;

		public b2MassData(nativeMemoryAddress:String)
		{
			
		}

		public function set mass(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_mass = val;
			nativeContext.call("ane_b2MassData_setter_mass", ...);
		}

		public function get mass():Number
		{
			_mass = nativeContext.call("ane_b2MassData_getter_mass", ...);
			return _mass;
		}

		public function set center(val:b2Vec2):void
		{
			if(_readOnly == true){
				return;
			}
			_center = val;
			nativeContext.call("ane_b2MassData_setter_center", ...);
		}

		public function get center():b2Vec2
		{
			_center = nativeContext.call("ane_b2MassData_getter_center", ...);
			return _center;
		}

		public function set I(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_I = val;
			nativeContext.call("ane_b2MassData_setter_I", ...);
		}

		public function get I():Number
		{
			_I = nativeContext.call("ane_b2MassData_getter_I", ...);
			return _I;
		}

	}
}