/*================================================================================
*
* File Name: b2Pair.as
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
	
	public class b2Pair extends BaseNativeClass
	{

		private var _proxyIdA:int;
		private var _proxyIdB:int;

		public b2Pair(nativeMemoryAddress:String)
		{
			
		}

		public function set proxyIdA(val:int):void
		{
			if(_readOnly == true){
				return;
			}
			_proxyIdA = val;
			nativeContext.call("ane_b2Pair_setter_proxyIdA", ...);
		}

		public function get proxyIdA():int
		{
			_proxyIdA = nativeContext.call("ane_b2Pair_getter_proxyIdA", ...);
			return _proxyIdA;
		}

		public function set proxyIdB(val:int):void
		{
			if(_readOnly == true){
				return;
			}
			_proxyIdB = val;
			nativeContext.call("ane_b2Pair_setter_proxyIdB", ...);
		}

		public function get proxyIdB():int
		{
			_proxyIdB = nativeContext.call("ane_b2Pair_getter_proxyIdB", ...);
			return _proxyIdB;
		}

	}
}