/*================================================================================
*
* File Name: b2Fixture.as
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

package ca.digitalarchitect.box2dane.dynamics
{
	import ca.digitalarchitect.box2dane.BaseNativeClass;
	import ca.digitalarchitect.box2dane.collision.b2AABB;
	import ca.digitalarchitect.box2dane.collision.b2RayCastInput;
	import ca.digitalarchitect.box2dane.collision.b2RayCastOutput;
	import ca.digitalarchitect.box2dane.collision.shapes.b2MassData;
	import ca.digitalarchitect.box2dane.collision.shapes.b2Shape;
	
	public class b2Fixture extends BaseNativeClass
	{

		public b2Fixture(nativeMemoryAddress:String)
		{
			
		}

		public function GetShape():b2Shape
		{
			return nativeContext.call("ane_b2Fixture_callback_GetShape", ...);
		}

		public function SetSensor(sensor:Boolean):void
		{
			nativeContext.call("ane_b2Fixture_callback_SetSensor", ...);
		}

		public function IsSensor():Boolean
		{
			return nativeContext.call("ane_b2Fixture_callback_IsSensor", ...);
		}

		public function SetFilterData(filter:b2Filter):void
		{
			nativeContext.call("ane_b2Fixture_callback_SetFilterData", ...);
		}

		public function GetFilterData():b2Filter
		{
			return nativeContext.call("ane_b2Fixture_callback_GetFilterData", ...);
		}

		public function Refilter():void
		{
			nativeContext.call("ane_b2Fixture_callback_Refilter", ...);
		}

		public function GetBody():b2Body
		{
			return nativeContext.call("ane_b2Fixture_callback_GetBody", ...);
		}

		public function GetNext():b2Fixture
		{
			return nativeContext.call("ane_b2Fixture_callback_GetNext", ...);
		}

		public function GetUserData():Object
		{
			return nativeContext.call("ane_b2Fixture_callback_GetUserData", ...);
		}

		public function SetUserData(data:Object):void
		{
			nativeContext.call("ane_b2Fixture_callback_SetUserData", ...);
		}

		public function TestPoint(p:b2Vec2):Boolean
		{
			return nativeContext.call("ane_b2Fixture_callback_TestPoint", ...);
		}

		public function RayCast(output:b2RayCastOutput, input:b2RayCastInput, childIndex:int):Boolean
		{
			return nativeContext.call("ane_b2Fixture_callback_RayCast", ...);
		}

		public function GetMassData(massData:b2MassData):void
		{
			nativeContext.call("ane_b2Fixture_callback_GetMassData", ...);
		}

		public function SetDensity(density:Number):void
		{
			nativeContext.call("ane_b2Fixture_callback_SetDensity", ...);
		}

		public function GetDensity():Number
		{
			return nativeContext.call("ane_b2Fixture_callback_GetDensity", ...);
		}

		public function GetFriction():Number
		{
			return nativeContext.call("ane_b2Fixture_callback_GetFriction", ...);
		}

		public function SetFriction(friction:Number):void
		{
			nativeContext.call("ane_b2Fixture_callback_SetFriction", ...);
		}

		public function GetRestitution():Number
		{
			return nativeContext.call("ane_b2Fixture_callback_GetRestitution", ...);
		}

		public function SetRestitution(restitution:Number):void
		{
			nativeContext.call("ane_b2Fixture_callback_SetRestitution", ...);
		}

		public function GetAABB(childIndex:int):b2AABB
		{
			return nativeContext.call("ane_b2Fixture_callback_GetAABB", ...);
		}

		public function Dump(bodyIndex:int):void
		{
			nativeContext.call("ane_b2Fixture_callback_Dump", ...);
		}

	}
}