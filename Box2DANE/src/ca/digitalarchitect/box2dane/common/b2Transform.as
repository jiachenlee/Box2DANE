/*================================================================================
*
* File Name: b2Transform.as
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

package ca.digitalarchitect.box2dane.common
{
	import ca.digitalarchitect.box2dane.BaseNativeClass;
	
	public class b2Transform extends BaseNativeClass
	{

		private var _p:b2Vec2;
		private var _q:b2Rot;

		public function b2Transform(position:b2Vec2, rotation:b2Rot, nativeMemoryAddress:String = null)
		{
			initializeContext(this, nativeMemoryAddress);
			
			if (position != null && rotation != null) {
				nativeContext.call("ane_b2Transform_constructor_b2Transform", position, rotation);
			}			
		}

		public function SetIdentity():void
		{
			nativeContext.call("ane_b2Transform_callback_SetIdentity", ...);
		}

		public function Set(position:b2Vec2, angle:Number):void
		{
			if(_readOnly == true){
				return;
			}
			
			nativeContext.call("ane_b2Transform_callback_Set", ...);
		}

		public function set p(val:b2Vec2):void
		{
			if(_readOnly == true){
				return;
			}
			_p = val;
			nativeContext.call("ane_b2Transform_setter_p", ...);
		}

		public function get p():b2Vec2
		{
			_p = nativeContext.call("ane_b2Transform_getter_p", ...);
			return _p;
		}

		public function set q(val:b2Rot):void
		{
			if(_readOnly == true){
				return;
			}
			_q = val;
			nativeContext.call("ane_b2Transform_setter_q", ...);
		}

		public function get q():b2Rot
		{
			_q = nativeContext.call("ane_b2Transform_getter_q", ...);
			return _q;
		}

	}
}