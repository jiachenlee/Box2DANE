/*================================================================================
*
* File Name: b2Draw.as
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
	
	public class b2Draw extends BaseNativeClass
	{
		public static const e_shapeBit:uint = 0x0001;///< draw shapes
		public static const e_jointBit:uint = 0x0002;///< draw joint connections
		public static const e_aabbBit:uint = 0x0004;///< draw axis aligned bounding boxes
		public static const e_pairBit:uint = 0x0008;///< draw broad-phase pairs
		public static const e_centerOfMassBit:uint = 0x0010;///< draw center of mass frame

		public function b2Draw()
		{
			nativeContext.call("ane_b2Draw_constructor_b2Draw", ...);
		}

		public function SetFlags(flags:uint):void
		{
			nativeContext.call("ane_b2Draw_callback_SetFlags", ...);
		}

		public function GetFlags():uint
		{
			return nativeContext.call("ane_b2Draw_callback_GetFlags", ...);
		}

		public function AppendFlags(flags:uint):void
		{
			nativeContext.call("ane_b2Draw_callback_AppendFlags", ...);
		}

		public function ClearFlags(flags:uint):void
		{
			nativeContext.call("ane_b2Draw_callback_ClearFlags", ...);
		}

		public function DrawPolygon(vertices:b2Vec2, vertexCount:int, color:b2Color):void
		{
			nativeContext.call("ane_b2Draw_callback_DrawPolygon", ...);
		}

		public function DrawSolidPolygon(vertices:b2Vec2, vertexCount:int, color:b2Color):void
		{
			nativeContext.call("ane_b2Draw_callback_DrawSolidPolygon", ...);
		}

		public function DrawCircle(center:b2Vec2, radius:Number, color:b2Color):void
		{
			nativeContext.call("ane_b2Draw_callback_DrawCircle", ...);
		}

		public function DrawSolidCircle(center:b2Vec2, radius:Number, axis:b2Vec2, color:b2Color):void
		{
			nativeContext.call("ane_b2Draw_callback_DrawSolidCircle", ...);
		}

		public function DrawSegment(p1:b2Vec2, p2:b2Vec2, color:b2Color):void
		{
			nativeContext.call("ane_b2Draw_callback_DrawSegment", ...);
		}

		public function DrawTransform(xf:b2Transform):void
		{
			nativeContext.call("ane_b2Draw_callback_DrawTransform", ...);
		}

	}
}