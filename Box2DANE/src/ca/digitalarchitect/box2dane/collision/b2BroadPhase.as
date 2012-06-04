/*================================================================================
*
* File Name: b2BroadPhase.as
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
	import ca.digitalarchitect.box2dane.common.b2Vec2;
	
	public class b2BroadPhase extends BaseNativeClass
	{
		public static const e_nullProxy:int = -1;

		public function b2BroadPhase()
		{
			nativeContext.call("ane_b2BroadPhase_constructor_b2BroadPhase", ...);
		}

		public function CreateProxy(aabb:b2AABB, userData:Object):int
		{
			return nativeContext.call("ane_b2BroadPhase_callback_CreateProxy", ...);
		}

		public function DestroyProxy(proxyId:int):void
		{
			nativeContext.call("ane_b2BroadPhase_callback_DestroyProxy", ...);
		}

		public function MoveProxy(proxyId:int, aabb:b2AABB, displacement:b2Vec2):void
		{
			nativeContext.call("ane_b2BroadPhase_callback_MoveProxy", ...);
		}

		public function TouchProxy(proxyId:int):void
		{
			nativeContext.call("ane_b2BroadPhase_callback_TouchProxy", ...);
		}

		public function GetFatAABB(proxyId:int):b2AABB
		{
			return nativeContext.call("ane_b2BroadPhase_callback_GetFatAABB", ...);
		}

		public function GetUserData(proxyId:int):Object
		{
			return nativeContext.call("ane_b2BroadPhase_callback_GetUserData", ...);
		}

		public function TestOverlap(proxyIdA:int, proxyIdB:int):Boolean
		{
			return nativeContext.call("ane_b2BroadPhase_callback_TestOverlap", ...);
		}

		public function GetProxyCount():int
		{
			return nativeContext.call("ane_b2BroadPhase_callback_GetProxyCount", ...);
		}

		public function GetTreeHeight():int
		{
			return nativeContext.call("ane_b2BroadPhase_callback_GetTreeHeight", ...);
		}

		public function GetTreeBalance():int
		{
			return nativeContext.call("ane_b2BroadPhase_callback_GetTreeBalance", ...);
		}

		public function GetTreeQuality():Number
		{
			return nativeContext.call("ane_b2BroadPhase_callback_GetTreeQuality", ...);
		}

		public function ShiftOrigin(newOrigin:b2Vec2):void
		{
			nativeContext.call("ane_b2BroadPhase_callback_ShiftOrigin", ...);
		}

	}
}