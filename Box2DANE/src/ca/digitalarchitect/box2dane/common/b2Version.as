/*================================================================================
*
* File Name: b2Version.as
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
	
	public class b2Version extends BaseNativeClass
	{

		private var _major:int;
		private var _minor:int;
		private var _revision:int;

		public b2Version(nativeMemoryAddress:String)
		{
			
		}

		public function set major(val:int):void
		{
			if(_readOnly == true){
				return;
			}
			_major = val;
			nativeContext.call("ane_b2Version_setter_major", ...);
		}

		public function get major():int
		{
			_major = nativeContext.call("ane_b2Version_getter_major", ...);
			return _major;
		}

		public function set minor(val:int):void
		{
			if(_readOnly == true){
				return;
			}
			_minor = val;
			nativeContext.call("ane_b2Version_setter_minor", ...);
		}

		public function get minor():int
		{
			_minor = nativeContext.call("ane_b2Version_getter_minor", ...);
			return _minor;
		}

		public function set revision(val:int):void
		{
			if(_readOnly == true){
				return;
			}
			_revision = val;
			nativeContext.call("ane_b2Version_setter_revision", ...);
		}

		public function get revision():int
		{
			_revision = nativeContext.call("ane_b2Version_getter_revision", ...);
			return _revision;
		}

	}
}