/*================================================================================
*
* File Name: b2ContactRegister.as
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
	
	public class b2ContactRegister extends BaseNativeClass
	{

		private var _createFcn:Function;
		private var _destroyFcn:Function;
		private var _primary:Boolean;

		public b2ContactRegister(nativeMemoryAddress:String)
		{
			
		}

		public function set createFcn(val:Function):void
		{
			if(_readOnly == true){
				return;
			}
			_createFcn = val;
			nativeContext.call("ane_b2ContactRegister_setter_createFcn", ...);
		}

		public function get createFcn():Function
		{
			_createFcn = nativeContext.call("ane_b2ContactRegister_getter_createFcn", ...);
			return _createFcn;
		}

		public function set destroyFcn(val:Function):void
		{
			if(_readOnly == true){
				return;
			}
			_destroyFcn = val;
			nativeContext.call("ane_b2ContactRegister_setter_destroyFcn", ...);
		}

		public function get destroyFcn():Function
		{
			_destroyFcn = nativeContext.call("ane_b2ContactRegister_getter_destroyFcn", ...);
			return _destroyFcn;
		}

		public function set primary(val:Boolean):void
		{
			if(_readOnly == true){
				return;
			}
			_primary = val;
			nativeContext.call("ane_b2ContactRegister_setter_primary", ...);
		}

		public function get primary():Boolean
		{
			_primary = nativeContext.call("ane_b2ContactRegister_getter_primary", ...);
			return _primary;
		}

	}
}