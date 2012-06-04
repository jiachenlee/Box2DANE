/*================================================================================
*
* File Name: b2StackEntry.as
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
	
	public class b2StackEntry extends BaseNativeClass
	{

		private var _data:String;
		private var _size:int;
		private var _usedMalloc:Boolean;

		public b2StackEntry(nativeMemoryAddress:String)
		{
			
		}

		public function set data(val:String):void
		{
			if(_readOnly == true){
				return;
			}
			_data = val;
			nativeContext.call("ane_b2StackEntry_setter_data", ...);
		}

		public function get data():String
		{
			_data = nativeContext.call("ane_b2StackEntry_getter_data", ...);
			return _data;
		}

		public function set size(val:int):void
		{
			if(_readOnly == true){
				return;
			}
			_size = val;
			nativeContext.call("ane_b2StackEntry_setter_size", ...);
		}

		public function get size():int
		{
			_size = nativeContext.call("ane_b2StackEntry_getter_size", ...);
			return _size;
		}

		public function set usedMalloc(val:Boolean):void
		{
			if(_readOnly == true){
				return;
			}
			_usedMalloc = val;
			nativeContext.call("ane_b2StackEntry_setter_usedMalloc", ...);
		}

		public function get usedMalloc():Boolean
		{
			_usedMalloc = nativeContext.call("ane_b2StackEntry_getter_usedMalloc", ...);
			return _usedMalloc;
		}

	}
}