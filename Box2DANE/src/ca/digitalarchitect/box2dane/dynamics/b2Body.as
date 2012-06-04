/*================================================================================
*
* File Name: b2Body.as
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
	import ca.digitalarchitect.box2dane.collision.shapes.b2MassData;
	import ca.digitalarchitect.box2dane.collision.shapes.b2Shape;
	import ca.digitalarchitect.box2dane.common.b2Transform;
	import ca.digitalarchitect.box2dane.common.b2Vec2;
	import ca.digitalarchitect.box2dane.dynamics.contacts.b2ContactEdge;
	import ca.digitalarchitect.box2dane.dynamics.joints.b2JointEdge;
	
	public class b2Body extends BaseNativeClass
	{

		public b2Body(nativeMemoryAddress:String)
		{
			
		}

		public function CreateFixture(def:b2FixtureDef):b2Fixture
		{
			return nativeContext.call("ane_b2Body_callback_CreateFixture", ...);
		}

		public function CreateFixture(shape:b2Shape, density:Number):b2Fixture
		{
			return nativeContext.call("ane_b2Body_callback_CreateFixture", ...);
		}

		public function DestroyFixture(fixture:b2Fixture):void
		{
			nativeContext.call("ane_b2Body_callback_DestroyFixture", ...);
		}

		public function SetTransform(position:b2Vec2, angle:Number):void
		{
			nativeContext.call("ane_b2Body_callback_SetTransform", ...);
		}

		public function GetTransform():b2Transform
		{
			return nativeContext.call("ane_b2Body_callback_GetTransform", ...);
		}

		public function GetPosition():b2Vec2
		{
			return nativeContext.call("ane_b2Body_callback_GetPosition", ...);
		}

		public function GetAngle():Number
		{
			return nativeContext.call("ane_b2Body_callback_GetAngle", ...);
		}

		public function GetWorldCenter():b2Vec2
		{
			return nativeContext.call("ane_b2Body_callback_GetWorldCenter", ...);
		}

		public function GetLocalCenter():b2Vec2
		{
			return nativeContext.call("ane_b2Body_callback_GetLocalCenter", ...);
		}

		public function SetLinearVelocity(v:b2Vec2):void
		{
			nativeContext.call("ane_b2Body_callback_SetLinearVelocity", ...);
		}

		public function GetLinearVelocity():b2Vec2
		{
			return nativeContext.call("ane_b2Body_callback_GetLinearVelocity", ...);
		}

		public function SetAngularVelocity(omega:Number):void
		{
			nativeContext.call("ane_b2Body_callback_SetAngularVelocity", ...);
		}

		public function GetAngularVelocity():Number
		{
			return nativeContext.call("ane_b2Body_callback_GetAngularVelocity", ...);
		}

		public function ApplyForce(force:b2Vec2, point:b2Vec2):void
		{
			nativeContext.call("ane_b2Body_callback_ApplyForce", ...);
		}

		public function ApplyForceToCenter(force:b2Vec2):void
		{
			nativeContext.call("ane_b2Body_callback_ApplyForceToCenter", ...);
		}

		public function ApplyTorque(torque:Number):void
		{
			nativeContext.call("ane_b2Body_callback_ApplyTorque", ...);
		}

		public function ApplyLinearImpulse(impulse:b2Vec2, point:b2Vec2):void
		{
			nativeContext.call("ane_b2Body_callback_ApplyLinearImpulse", ...);
		}

		public function ApplyAngularImpulse(impulse:Number):void
		{
			nativeContext.call("ane_b2Body_callback_ApplyAngularImpulse", ...);
		}

		public function GetMass():Number
		{
			return nativeContext.call("ane_b2Body_callback_GetMass", ...);
		}

		public function GetInertia():Number
		{
			return nativeContext.call("ane_b2Body_callback_GetInertia", ...);
		}

		public function GetMassData(data:b2MassData):void
		{
			nativeContext.call("ane_b2Body_callback_GetMassData", ...);
		}

		public function SetMassData(data:b2MassData):void
		{
			nativeContext.call("ane_b2Body_callback_SetMassData", ...);
		}

		public function ResetMassData():void
		{
			nativeContext.call("ane_b2Body_callback_ResetMassData", ...);
		}

		public function GetWorldPoint(localPoint:b2Vec2):b2Vec2
		{
			return nativeContext.call("ane_b2Body_callback_GetWorldPoint", ...);
		}

		public function GetWorldVector(localVector:b2Vec2):b2Vec2
		{
			return nativeContext.call("ane_b2Body_callback_GetWorldVector", ...);
		}

		public function GetLocalPoint(worldPoint:b2Vec2):b2Vec2
		{
			return nativeContext.call("ane_b2Body_callback_GetLocalPoint", ...);
		}

		public function GetLocalVector(worldVector:b2Vec2):b2Vec2
		{
			return nativeContext.call("ane_b2Body_callback_GetLocalVector", ...);
		}

		public function GetLinearVelocityFromWorldPoint(worldPoint:b2Vec2):b2Vec2
		{
			return nativeContext.call("ane_b2Body_callback_GetLinearVelocityFromWorldPoint", ...);
		}

		public function GetLinearVelocityFromLocalPoint(localPoint:b2Vec2):b2Vec2
		{
			return nativeContext.call("ane_b2Body_callback_GetLinearVelocityFromLocalPoint", ...);
		}

		public function GetLinearDamping():Number
		{
			return nativeContext.call("ane_b2Body_callback_GetLinearDamping", ...);
		}

		public function SetLinearDamping(linearDamping:Number):void
		{
			nativeContext.call("ane_b2Body_callback_SetLinearDamping", ...);
		}

		public function GetAngularDamping():Number
		{
			return nativeContext.call("ane_b2Body_callback_GetAngularDamping", ...);
		}

		public function SetAngularDamping(angularDamping:Number):void
		{
			nativeContext.call("ane_b2Body_callback_SetAngularDamping", ...);
		}

		public function GetGravityScale():Number
		{
			return nativeContext.call("ane_b2Body_callback_GetGravityScale", ...);
		}

		public function SetGravityScale(scale:Number):void
		{
			nativeContext.call("ane_b2Body_callback_SetGravityScale", ...);
		}

		public function SetType(type:int):void
		{
			nativeContext.call("ane_b2Body_callback_SetType", ...);
		}

		public function GetType():int
		{
			return nativeContext.call("ane_b2Body_callback_GetType", ...);
		}

		public function SetBullet(flag:Boolean):void
		{
			nativeContext.call("ane_b2Body_callback_SetBullet", ...);
		}

		public function IsBullet():Boolean
		{
			return nativeContext.call("ane_b2Body_callback_IsBullet", ...);
		}

		public function SetSleepingAllowed(flag:Boolean):void
		{
			nativeContext.call("ane_b2Body_callback_SetSleepingAllowed", ...);
		}

		public function IsSleepingAllowed():Boolean
		{
			return nativeContext.call("ane_b2Body_callback_IsSleepingAllowed", ...);
		}

		public function SetAwake(flag:Boolean):void
		{
			nativeContext.call("ane_b2Body_callback_SetAwake", ...);
		}

		public function IsAwake():Boolean
		{
			return nativeContext.call("ane_b2Body_callback_IsAwake", ...);
		}

		public function SetActive(flag:Boolean):void
		{
			nativeContext.call("ane_b2Body_callback_SetActive", ...);
		}

		public function IsActive():Boolean
		{
			return nativeContext.call("ane_b2Body_callback_IsActive", ...);
		}

		public function SetFixedRotation(flag:Boolean):void
		{
			nativeContext.call("ane_b2Body_callback_SetFixedRotation", ...);
		}

		public function IsFixedRotation():Boolean
		{
			return nativeContext.call("ane_b2Body_callback_IsFixedRotation", ...);
		}

		public function GetFixtureList():b2Fixture
		{
			return nativeContext.call("ane_b2Body_callback_GetFixtureList", ...);
		}

		public function GetJointList():b2JointEdge
		{
			return nativeContext.call("ane_b2Body_callback_GetJointList", ...);
		}

		public function GetContactList():b2ContactEdge
		{
			return nativeContext.call("ane_b2Body_callback_GetContactList", ...);
		}

		public function GetNext():b2Body
		{
			return nativeContext.call("ane_b2Body_callback_GetNext", ...);
		}

		public function GetUserData():Object
		{
			return nativeContext.call("ane_b2Body_callback_GetUserData", ...);
		}

		public function SetUserData(data:Object):void
		{
			nativeContext.call("ane_b2Body_callback_SetUserData", ...);
		}

		public function GetWorld():b2World
		{
			return nativeContext.call("ane_b2Body_callback_GetWorld", ...);
		}

		public function Dump():void
		{
			nativeContext.call("ane_b2Body_callback_Dump", ...);
		}

	}
}