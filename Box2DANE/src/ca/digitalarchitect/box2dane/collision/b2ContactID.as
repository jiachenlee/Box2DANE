/*================================================================================
*
* File Name: b2ContactID.as
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

	public class b2ContactID extends BaseNativeClass 
	{
		private var _cf:b2ContactFeature;
		private var _key:int;
		
		public function b2ContactID(nativeMemoryAddress:String) 
		{
			
		}
		
		public function set cf(value:b2ContactFeature):void 
		{
			if(_readOnly == true){
				return;
			}			
			_cf = value;
			nativeContext.call("ane_b2ClipVertex_setter_v", ...);			
		}
	
		public function get cf():b2ContactFeature 
		{
			return _cf;
		}
		
		public function set key(value:int):void 
		{
			if(_readOnly == true){
				return;
			}			
			_key = value;
			nativeContext.call("ane_b2ClipVertex_setter_v", ...);				
		}
		
		public function get key():int 
		{
			return _key;
		}
		
	}

}