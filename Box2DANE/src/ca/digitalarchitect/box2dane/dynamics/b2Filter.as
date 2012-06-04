/*================================================================================
*
* File Name: b2Filter.as
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
	
	public class b2Filter extends BaseNativeClass
	{

		private var _categoryBits:uint;
		private var _maskBits:uint;
		private var _groupIndex:int;

		public function b2Filter()
		{
			nativeContext.call("ane_b2Filter_constructor_b2Filter", ...);
		}

		public function set categoryBits(val:uint):void
		{
			if(_readOnly == true){
				return;
			}
			_categoryBits = val;
			nativeContext.call("ane_b2Filter_setter_categoryBits", ...);
		}

		public function get categoryBits():uint
		{
			_categoryBits = nativeContext.call("ane_b2Filter_getter_categoryBits", ...);
			return _categoryBits;
		}

		public function set maskBits(val:uint):void
		{
			if(_readOnly == true){
				return;
			}
			_maskBits = val;
			nativeContext.call("ane_b2Filter_setter_maskBits", ...);
		}

		public function get maskBits():uint
		{
			_maskBits = nativeContext.call("ane_b2Filter_getter_maskBits", ...);
			return _maskBits;
		}

		public function set groupIndex(val:int):void
		{
			if(_readOnly == true){
				return;
			}
			_groupIndex = val;
			nativeContext.call("ane_b2Filter_setter_groupIndex", ...);
		}

		public function get groupIndex():int
		{
			_groupIndex = nativeContext.call("ane_b2Filter_getter_groupIndex", ...);
			return _groupIndex;
		}

	}
}