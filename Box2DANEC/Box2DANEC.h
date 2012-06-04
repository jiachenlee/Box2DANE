/*================================================================================
*
* File Name: Box2DANEC.h
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

#ifndef BOX2DANEC_H
#define BOX2DANEC_H

//Used to retrieve the hex address of the native object associated with a FRE context and return it
FREObject ane_getNativeDataMemoryAddress(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);

	std::stringstream ss;
	ss << nativeData;
	std::string address = ss.str();

	FREObject result;

	FRENewObjectFromUTF8((uint32_t)address.size()+1, (const uint8_t*)address.c_str(), &result);

	return result;
}
//

//Collision
#include "Box2DANEC/Collision/b2AABB.h"										//Incomplete
#include "Box2DANEC/Collision/b2BroadPhase.h"									//Incomplete
#include "Box2DANEC/Collision/b2ClipVertex.h"									//Incomplete
#include "Box2DANEC/Collision/b2ContactFeature.h"								//Incomplete
#include "Box2DANEC/Collision/b2DistanceInput.h"								//Incomplete
#include "Box2DANEC/Collision/b2DistanceOutput.h"								//Incomplete
#include "Box2DANEC/Collision/b2DistanceProxy.h"								//Incomplete
#include "Box2DANEC/Collision/b2DynamicTree.h"									//Incomplete
#include "Box2DANEC/Collision/b2Manifold.h"									//Incomplete
#include "Box2DANEC/Collision/b2ManifoldPoint.h"								//Incomplete
#include "Box2DANEC/Collision/b2Pair.h"										//Incomplete
#include "Box2DANEC/Collision/b2RayCastInput.h"								//Incomplete
#include "Box2DANEC/Collision/b2RayCastOutput.h"								//Incomplete
#include "Box2DANEC/Collision/b2SimplexCache.h"								//Incomplete
#include "Box2DANEC/Collision/b2TOIInput.h"									//Incomplete
#include "Box2DANEC/Collision/b2TOIOutput.h"									//Incomplete
#include "Box2DANEC/Collision/b2TreeNode.h"									//Incomplete
#include "Box2DANEC/Collision/b2WorldManifold.h"								//Incomplete
#include <Box2DANEC/Collision/b2ContactID.h>									//Incomplete
//

//Shapes
#include "Box2DANEC/Collision/Shapes/b2ChainShape.h"							//Incomplete
#include "Box2DANEC/Collision/Shapes/b2CircleShape.h"							//Incomplete
#include "Box2DANEC/Collision/Shapes/b2EdgeShape.h"							//Incomplete
#include "Box2DANEC/Collision/Shapes/b2MassData.h"								//Incomplete
#include "Box2DANEC/Collision/Shapes/b2PolygonShape.h"							//Incomplete
#include "Box2DANEC/Collision/Shapes/b2Shape.h"								//Incomplete
//

//Common
#include "Box2DANEC/Common/b2BlockAllocator.h"									//Incomplete
#include "Box2DANEC/Common/b2Color.h"											//Incomplete
#include "Box2DANEC/Common/b2Draw.h"											//Incomplete
#include "Box2DANEC/Common/b2GrowableStack.h"									//Incomplete
#include "Box2DANEC/Common/b2Mat22.h"											//Incomplete
#include "Box2DANEC/Common/b2Mat33.h"											//Incomplete
#include "Box2DANEC/Common/b2Rot.h"											//Incomplete
#include "Box2DANEC/Common/b2StackAllocator.h"									//Incomplete
#include "Box2DANEC/Common/b2StackEntry.h"										//Incomplete
#include "Box2DANEC/Common/b2Sweep.h"											//Incomplete
#include "Box2DANEC/Common/b2Timer.h"											//Incomplete
#include "Box2DANEC/Common/b2Transform.h"										//Incomplete
#include "Box2DANEC/Common/b2Vec2.h"											//Incomplete
#include "Box2DANEC/Common/b2Vec3.h"											//Incomplete
#include "Box2DANEC/Common/b2Version.h"										//Incomplete
//

//Dynamics
#include "Box2DANEC/Dynamics/b2Body.h"											//Incomplete
#include "Box2DANEC/Dynamics/b2BodyDef.h"										//Incomplete
#include "Box2DANEC/Dynamics/b2ContactFilter.h"								//Incomplete
#include "Box2DANEC/Dynamics/b2ContactImpulse.h"								//Incomplete
#include "Box2DANEC/Dynamics/b2ContactListener.h"								//Incomplete
#include "Box2DANEC/Dynamics/b2ContactManager.h"								//Incomplete
#include "Box2DANEC/Dynamics/b2DestructionListener.h"							//Incomplete
#include "Box2DANEC/Dynamics/b2Filter.h"										//Incomplete
#include "Box2DANEC/Dynamics/b2Fixture.h"										//Incomplete
#include "Box2DANEC/Dynamics/b2FixtureDef.h"									//Incomplete
#include "Box2DANEC/Dynamics/b2FixtureProxy.h"									//Incomplete
#include "Box2DANEC/Dynamics/b2Island.h"										//Incomplete
#include "Box2DANEC/Dynamics/b2Position.h"										//Incomplete
#include "Box2DANEC/Dynamics/b2Profile.h"										//Incomplete
#include "Box2DANEC/Dynamics/b2QueryCallback.h"								//Incomplete
#include "Box2DANEC/Dynamics/b2RayCastCallback.h"								//Incomplete
#include "Box2DANEC/Dynamics/b2SolverData.h"									//Incomplete
#include "Box2DANEC/Dynamics/b2TimeStep.h"										//Incomplete
#include "Box2DANEC/Dynamics/b2Velocity.h"										//Incomplete
#include "Box2DANEC/Dynamics/b2World.h"										//Incomplete
//

//Contacts
#include "Box2DANEC/Dynamics/Contacts/b2ChainAndCircleContact.h"				//Incomplete
#include "Box2DANEC/Dynamics/Contacts/b2ChainAndPolygonContact.h"				//Incomplete
#include "Box2DANEC/Dynamics/Contacts/b2CircleContact.h"						//Incomplete
#include "Box2DANEC/Dynamics/Contacts/b2Contact.h"								//Incomplete
#include "Box2DANEC/Dynamics/Contacts/b2ContactEdge.h"							//Incomplete
#include "Box2DANEC/Dynamics/Contacts/b2ContactRegister.h"						//Incomplete
#include "Box2DANEC/Dynamics/Contacts/b2ContactSolver.h"						//Incomplete
#include "Box2DANEC/Dynamics/Contacts/b2ContactSolverDef.h"					//Incomplete
#include "Box2DANEC/Dynamics/Contacts/b2ContactVelocityConstraint.h"			//Incomplete
#include "Box2DANEC/Dynamics/Contacts/b2ContactPositionConstraint.h"			//Incomplete
#include "Box2DANEC/Dynamics/Contacts/b2EdgeAndCircleContact.h"				//Incomplete
#include "Box2DANEC/Dynamics/Contacts/b2EdgeAndPolygonContact.h"				//Incomplete
#include "Box2DANEC/Dynamics/Contacts/b2PolygonAndCircleContact.h"				//Incomplete
#include "Box2DANEC/Dynamics/Contacts/b2PolygonContact.h"						//Incomplete
#include "Box2DANEC/Dynamics/Contacts/b2VelocityConstraintPoint.h"				//Incomplete
//

//Joints
#include "Box2DANEC/Dynamics/Joints/b2DistanceJoint.h"							//Incomplete
#include "Box2DANEC/Dynamics/Joints/b2DistanceJointDef.h"						//Incomplete
#include "Box2DANEC/Dynamics/Joints/b2FrictionJoint.h"							//Incomplete
#include "Box2DANEC/Dynamics/Joints/b2FrictionJointDef.h"						//Incomplete
#include "Box2DANEC/Dynamics/Joints/b2GearJoint.h"								//Incomplete
#include "Box2DANEC/Dynamics/Joints/b2GearJointDef.h"							//Incomplete
#include "Box2DANEC/Dynamics/Joints/b2Jacobian.h"								//Incomplete
#include "Box2DANEC/Dynamics/Joints/b2Joint.h"									//Incomplete
#include "Box2DANEC/Dynamics/Joints/b2JointDef.h"								//Incomplete
#include "Box2DANEC/Dynamics/Joints/b2JointEdge.h"								//Incomplete
#include "Box2DANEC/Dynamics/Joints/b2MotorJoint.h"							//Incomplete
#include "Box2DANEC/Dynamics/Joints/b2MotorJointDef.h"							//Incomplete
#include "Box2DANEC/Dynamics/Joints/b2MouseJoint.h"							//Incomplete
#include "Box2DANEC/Dynamics/Joints/b2MouseJointDef.h"							//Incomplete
#include "Box2DANEC/Dynamics/Joints/b2PrismaticJoint.h"						//Incomplete
#include "Box2DANEC/Dynamics/Joints/b2PrismaticJointDef.h"						//Incomplete
#include "Box2DANEC/Dynamics/Joints/b2PulleyJoint.h"							//Incomplete
#include "Box2DANEC/Dynamics/Joints/b2PulleyJointDef.h"						//Incomplete
#include "Box2DANEC/Dynamics/Joints/b2RevoluteJoint.h"							//Incomplete
#include "Box2DANEC/Dynamics/Joints/b2RevoluteJointDef.h"						//Incomplete
#include "Box2DANEC/Dynamics/Joints/b2RopeJoint.h"								//Incomplete
#include "Box2DANEC/Dynamics/Joints/b2RopeJointDef.h"							//Incomplete
#include "Box2DANEC/Dynamics/Joints/b2WeldJoint.h"								//Incomplete
#include "Box2DANEC/Dynamics/Joints/b2WeldJointDef.h"							//Incomplete
#include "Box2DANEC/Dynamics/Joints/b2WheelJoint.h"							//Incomplete
#include "Box2DANEC/Dynamics/Joints/b2WheelJointDef.h"							//Incomplete
//

//Rope
#include "Box2DANEC/Rope/b2Rope.h"												//Incomplete
#include "Box2DANEC/Rope/b2RopeDef.h"											//Incomplete
//

#endif /*BOX2DANEC*/
