/*================================================================================
*
* File Name: b2DistanceOutput.as
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
	
	public class b2DistanceOutput extends BaseNativeClass
	{

		private var _pointA:b2Vec2;
		private var _pointB:b2Vec2;
		private var _distance:Number;
		private var _iterations:int;

		public b2DistanceOutput(nativeMemoryAddress:String)
		{
			
		}

		public function set pointA(val:b2Vec2):void
		{
			if(_readOnly == true){
				return;
			}
			_pointA = val;
			nativeContext.call("ane_b2DistanceOutput_setter_pointA", ...);
		}

		public function get pointA():b2Vec2
		{
			_pointA = nativeContext.call("ane_b2DistanceOutput_getter_pointA", ...);
			return _pointA;
		}

		public function set pointB(val:b2Vec2):void
		{
			if(_readOnly == true){
				return;
			}
			_pointB = val;
			nativeContext.call("ane_b2DistanceOutput_setter_pointB", ...);
		}

		public function get pointB():b2Vec2
		{
			_pointB = nativeContext.call("ane_b2DistanceOutput_getter_pointB", ...);
			return _pointB;
		}

		public function set distance(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_distance = val;
			nativeContext.call("ane_b2DistanceOutput_setter_distance", ...);
		}

		public function get distance():Number
		{
			_distance = nativeContext.call("ane_b2DistanceOutput_getter_distance", ...);
			return _distance;
		}

		public function set iterations(val:int):void
		{
			if(_readOnly == true){
				return;
			}
			_iterations = val;
			nativeContext.call("ane_b2DistanceOutput_setter_iterations", ...);
		}

		public function get iterations():int
		{
			_iterations = nativeContext.call("ane_b2DistanceOutput_getter_iterations", ...);
			return _iterations;
		}

	}
}