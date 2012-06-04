/*================================================================================
*
* File Name: b2Rope.as
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

package ca.digitalarchitect.box2dane.rope
{
	import ca.digitalarchitect.box2dane.BaseNativeClass;
	import ca.digitalarchitect.box2dane.common.b2Draw;
	import ca.digitalarchitect.box2dane.common.b2Vec2;
	
	public class b2Rope extends BaseNativeClass
	{
		
		public function b2Rope()
		{
			nativeContext.call("ane_b2Rope_constructor_b2Rope", ...);
		}

		public function Initialize(def:b2RopeDef):void
		{
			nativeContext.call("ane_b2Rope_callback_Initialize", ...);
		}

		public function Step(timeStep:Number, iterations:int):void
		{
			nativeContext.call("ane_b2Rope_callback_Step", ...);
		}

		public function GetVertexCount():int
		{
			return nativeContext.call("ane_b2Rope_callback_GetVertexCount", ...);
		}

		public function GetVertices():b2Vec2
		{
			return nativeContext.call("ane_b2Rope_callback_GetVertices", ...);
		}

		public function Draw(draw:b2Draw):void
		{
			nativeContext.call("ane_b2Rope_callback_Draw", ...);
		}

		public function SetAngle(angle:Number):void
		{
			nativeContext.call("ane_b2Rope_callback_SetAngle", ...);
		}

	}
}