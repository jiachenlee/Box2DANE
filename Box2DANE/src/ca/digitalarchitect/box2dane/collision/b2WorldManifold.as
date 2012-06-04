/*================================================================================
*
* File Name: b2WorldManifold.as
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
	
	public class b2WorldManifold extends BaseNativeClass
	{

		private var _normal:b2Vec2;

		public b2WorldManifold(nativeMemoryAddress:String)
		{
			
		}

		public function Initialize(manifold:b2Manifold, xfA:b2Transform, radiusA:Number, xfB:b2Transform, radiusB:Number):void
		{
			nativeContext.call("ane_b2WorldManifold_callback_Initialize", ...);
		}

		public function set normal(val:b2Vec2):void
		{
			if(_readOnly == true){
				return;
			}
			_normal = val;
			nativeContext.call("ane_b2WorldManifold_setter_normal", ...);
		}

		public function get normal():b2Vec2
		{
			_normal = nativeContext.call("ane_b2WorldManifold_getter_normal", ...);
			return _normal;
		}

	}
}