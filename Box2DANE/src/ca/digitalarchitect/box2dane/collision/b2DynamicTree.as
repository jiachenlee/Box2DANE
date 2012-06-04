/*================================================================================
*
* File Name: b2DynamicTree.as
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
	
	public class b2DynamicTree extends BaseNativeClass
	{

		public function b2DynamicTree()
		{
			nativeContext.call("ane_b2DynamicTree_constructor_b2DynamicTree", ...);
		}

		public function CreateProxy(aabb:b2AABB, userData:Object):int
		{
			return nativeContext.call("ane_b2DynamicTree_callback_CreateProxy", ...);
		}

		public function DestroyProxy(proxyId:int):void
		{
			nativeContext.call("ane_b2DynamicTree_callback_DestroyProxy", ...);
		}

		public function MoveProxy(proxyId:int, aabb1:b2AABB, displacement:b2Vec2):Boolean
		{
			return nativeContext.call("ane_b2DynamicTree_callback_MoveProxy", ...);
		}

		public function GetUserData(proxyId:int):Object
		{
			return nativeContext.call("ane_b2DynamicTree_callback_GetUserData", ...);
		}

		public function GetFatAABB(proxyId:int):b2AABB
		{
			return nativeContext.call("ane_b2DynamicTree_callback_GetFatAABB", ...);
		}

		public function Validate():void
		{
			nativeContext.call("ane_b2DynamicTree_callback_Validate", ...);
		}

		public function GetHeight():int
		{
			return nativeContext.call("ane_b2DynamicTree_callback_GetHeight", ...);
		}

		public function GetMaxBalance():int
		{
			return nativeContext.call("ane_b2DynamicTree_callback_GetMaxBalance", ...);
		}

		public function GetAreaRatio():Number
		{
			return nativeContext.call("ane_b2DynamicTree_callback_GetAreaRatio", ...);
		}

		public function RebuildBottomUp():void
		{
			nativeContext.call("ane_b2DynamicTree_callback_RebuildBottomUp", ...);
		}

		public function ShiftOrigin(newOrigin:b2Vec2):void
		{
			nativeContext.call("ane_b2DynamicTree_callback_ShiftOrigin", ...);
		}

	}
}