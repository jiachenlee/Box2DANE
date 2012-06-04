/*================================================================================
*
* File Name: b2World.as
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
	import ca.digitalarchitect.box2dane.common.b2Draw;
	import ca.digitalarchitect.box2dane.common.b2Vec2;
	import ca.digitalarchitect.box2dane.dynamics.contacts.b2Contact;
	import ca.digitalarchitect.box2dane.dynamics.joints.b2Joint;
	import ca.digitalarchitect.box2dane.dynamics.joints.b2JointDef;
	
	public class b2World extends BaseNativeClass
	{


		public function b2World(gravity:b2Vec2)
		{
			nativeContext.call("ane_b2World_constructor_b2World", ...);
		}

		public function SetDestructionListener(listener:b2DestructionListener):void
		{
			nativeContext.call("ane_b2World_callback_SetDestructionListener", ...);
		}

		public function SetContactFilter(filter:b2ContactFilter):void
		{
			nativeContext.call("ane_b2World_callback_SetContactFilter", ...);
		}

		public function SetContactListener(listener:b2ContactListener):void
		{
			nativeContext.call("ane_b2World_callback_SetContactListener", ...);
		}

		public function SetDebugDraw(debugDraw:b2Draw):void
		{
			nativeContext.call("ane_b2World_callback_SetDebugDraw", ...);
		}

		public function CreateBody(def:b2BodyDef):b2Body
		{
			return nativeContext.call("ane_b2World_callback_CreateBody", ...);
		}

		public function DestroyBody(body:b2Body):void
		{
			nativeContext.call("ane_b2World_callback_DestroyBody", ...);
		}

		public function CreateJoint(def:b2JointDef):b2Joint
		{
			return nativeContext.call("ane_b2World_callback_CreateJoint", ...);
		}

		public function DestroyJoint(joint:b2Joint):void
		{
			nativeContext.call("ane_b2World_callback_DestroyJoint", ...);
		}

		public function Step(timeStep:Number, velocityIterations:int, positionIterations:int):void
		{
			nativeContext.call("ane_b2World_callback_Step", ...);
		}

		public function ClearForces():void
		{
			nativeContext.call("ane_b2World_callback_ClearForces", ...);
		}

		public function DrawDebugData():void
		{
			nativeContext.call("ane_b2World_callback_DrawDebugData", ...);
		}

		public function QueryAABB(callback:b2QueryCallback, aabb:b2AABB):void
		{
			nativeContext.call("ane_b2World_callback_QueryAABB", ...);
		}

		public function RayCast(callback:b2RayCastCallback, point1:b2Vec2, point2:b2Vec2):void
		{
			nativeContext.call("ane_b2World_callback_RayCast", ...);
		}

		public function GetBodyList():b2Body
		{
			return nativeContext.call("ane_b2World_callback_GetBodyList", ...);
		}

		public function GetJointList():b2Joint
		{
			return nativeContext.call("ane_b2World_callback_GetJointList", ...);
		}

		public function GetContactList():b2Contact
		{
			return nativeContext.call("ane_b2World_callback_GetContactList", ...);
		}

		public function SetAllowSleeping(flag:Boolean):void
		{
			nativeContext.call("ane_b2World_callback_SetAllowSleeping", ...);
		}

		public function GetAllowSleeping():Boolean
		{
			return nativeContext.call("ane_b2World_callback_GetAllowSleeping", ...);
		}

		public function SetWarmStarting(flag:Boolean):void
		{
			nativeContext.call("ane_b2World_callback_SetWarmStarting", ...);
		}

		public function GetWarmStarting():Boolean
		{
			return nativeContext.call("ane_b2World_callback_GetWarmStarting", ...);
		}

		public function SetContinuousPhysics(flag:Boolean):void
		{
			nativeContext.call("ane_b2World_callback_SetContinuousPhysics", ...);
		}

		public function GetContinuousPhysics():Boolean
		{
			return nativeContext.call("ane_b2World_callback_GetContinuousPhysics", ...);
		}

		public function SetSubStepping(flag:Boolean):void
		{
			nativeContext.call("ane_b2World_callback_SetSubStepping", ...);
		}

		public function GetSubStepping():Boolean
		{
			return nativeContext.call("ane_b2World_callback_GetSubStepping", ...);
		}

		public function GetProxyCount():int
		{
			return nativeContext.call("ane_b2World_callback_GetProxyCount", ...);
		}

		public function GetBodyCount():int
		{
			return nativeContext.call("ane_b2World_callback_GetBodyCount", ...);
		}

		public function GetJointCount():int
		{
			return nativeContext.call("ane_b2World_callback_GetJointCount", ...);
		}

		public function GetContactCount():int
		{
			return nativeContext.call("ane_b2World_callback_GetContactCount", ...);
		}

		public function GetTreeHeight():int
		{
			return nativeContext.call("ane_b2World_callback_GetTreeHeight", ...);
		}

		public function GetTreeBalance():int
		{
			return nativeContext.call("ane_b2World_callback_GetTreeBalance", ...);
		}

		public function GetTreeQuality():Number
		{
			return nativeContext.call("ane_b2World_callback_GetTreeQuality", ...);
		}

		public function SetGravity(gravity:b2Vec2):void
		{
			nativeContext.call("ane_b2World_callback_SetGravity", ...);
		}

		public function GetGravity():b2Vec2
		{
			return nativeContext.call("ane_b2World_callback_GetGravity", ...);
		}

		public function IsLocked():Boolean
		{
			return nativeContext.call("ane_b2World_callback_IsLocked", ...);
		}

		public function SetAutoClearForces(flag:Boolean):void
		{
			nativeContext.call("ane_b2World_callback_SetAutoClearForces", ...);
		}

		public function GetAutoClearForces():Boolean
		{
			return nativeContext.call("ane_b2World_callback_GetAutoClearForces", ...);
		}

		public function ShiftOrigin(newOrigin:b2Vec2):void
		{
			nativeContext.call("ane_b2World_callback_ShiftOrigin", ...);
		}

		public function GetContactManager():b2ContactManager
		{
			return nativeContext.call("ane_b2World_callback_GetContactManager", ...);
		}

		public function GetProfile():b2Profile
		{
			return nativeContext.call("ane_b2World_callback_GetProfile", ...);
		}

		public function Dump():void
		{
			nativeContext.call("ane_b2World_callback_Dump", ...);
		}

	}
}