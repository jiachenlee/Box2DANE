/*================================================================================
*
* File Name: b2BlockAllocator.as
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
	
	public class b2BlockAllocator extends BaseNativeClass
	{

		public function b2BlockAllocator()
		{
			nativeContext.call("ane_b2BlockAllocator_constructor_b2BlockAllocator", ...);
		}

		public function Allocate(size:int):Object
		{
			return nativeContext.call("ane_b2BlockAllocator_callback_Allocate", ...);
		}

		public function Free(p:Object, size:int):void
		{
			nativeContext.call("ane_b2BlockAllocator_callback_Free", ...);
		}

		public function Clear():void
		{
			nativeContext.call("ane_b2BlockAllocator_callback_Clear", ...);
		}

	}
}