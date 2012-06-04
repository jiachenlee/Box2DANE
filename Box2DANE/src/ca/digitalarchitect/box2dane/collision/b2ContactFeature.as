/*================================================================================
*
* File Name: b2ContactFeature.as
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
	
	public class b2ContactFeature extends BaseNativeClass
	{

		private var _indexA:uint;
		private var _indexB:uint;
		private var _typeA:uint;
		private var _typeB:uint;

		public b2ContactFeature(nativeMemoryAddress:String)
		{
			
		}

		public function set indexA(val:uint):void
		{
			if(_readOnly == true){
				return;
			}
			_indexA = val;
			nativeContext.call("ane_b2ContactFeature_setter_indexA", ...);
		}

		public function get indexA():uint
		{
			_indexA = nativeContext.call("ane_b2ContactFeature_getter_indexA", ...);
			return _indexA;
		}

		public function set indexB(val:uint):void
		{
			if(_readOnly == true){
				return;
			}
			_indexB = val;
			nativeContext.call("ane_b2ContactFeature_setter_indexB", ...);
		}

		public function get indexB():uint
		{
			_indexB = nativeContext.call("ane_b2ContactFeature_getter_indexB", ...);
			return _indexB;
		}

		public function set typeA(val:uint):void
		{
			if(_readOnly == true){
				return;
			}
			_typeA = val;
			nativeContext.call("ane_b2ContactFeature_setter_typeA", ...);
		}

		public function get typeA():uint
		{
			_typeA = nativeContext.call("ane_b2ContactFeature_getter_typeA", ...);
			return _typeA;
		}

		public function set typeB(val:uint):void
		{
			if(_readOnly == true){
				return;
			}
			_typeB = val;
			nativeContext.call("ane_b2ContactFeature_setter_typeB", ...);
		}

		public function get typeB():uint
		{
			_typeB = nativeContext.call("ane_b2ContactFeature_getter_typeB", ...);
			return _typeB;
		}

	}
}