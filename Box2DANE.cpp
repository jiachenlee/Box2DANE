/*================================================================================
*
* File Name: Box2DANE.cpp
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

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <sstream>
#include <map>

#include <Box2D/Box2D.h>
#include <Box2D/Dynamics/Contacts/b2ChainAndCircleContact.h>
#include <Box2D/Dynamics/Contacts/b2ChainAndPolygonContact.h>
#include <Box2D/Dynamics/Contacts/b2CircleContact.h>
#include <Box2D/Dynamics/Contacts/b2ContactSolver.h>
#include <Box2D/Dynamics/Contacts/b2EdgeAndCircleContact.h>
#include <Box2D/Dynamics/Contacts/b2EdgeAndPolygonContact.h>
#include <Box2D/Dynamics/Contacts/b2PolygonAndCircleContact.h>
#include <Box2D/Dynamics/Contacts/b2PolygonContact.h>
#include <Box2D/Dynamics/b2Island.h>
#include <Box2D/Common/b2GrowableStack.h>
#include <Box2D/Rope/b2Rope.h>

//These two vars are used to link unique INT ID's to each B2D Class/Type
std::map<std::string, int> classMapping;
typedef std::pair<std::string, int> ClassMapPair;
//

void* convertStringToPointer(const uint8_t* address) {
	std::stringstream ss;
	ss << *address;
	void* pointer;
	ss >> std::hex >> pointer;

	return pointer;
}

void* convertStringToPointer(uint8_t* address) {
	std::stringstream ss;
	ss << *address;
	void* pointer;
	ss >> std::hex >> pointer;

	return pointer;
}

#ifdef __cplusplus
extern "C" {
#endif

#include "FlashRuntimeExtensions.h"
#include "Box2DANEC/Box2DANEC.h"

//Function declarations
__declspec(dllexport) void initializer(void**, FREContextInitializer*, FREContextFinalizer*);
__declspec(dllexport) void finalizer(void* extData);
void contextInitializer(void*, const uint8_t*, FREContext, uint32_t*, const FRENamedFunction**);
void contextFinalizer(FREContext);
//

bool mapInitialized = false;

void initObjectMappings() {
	mapInitialized = true;

	classMapping.insert(ClassMapPair("b2Pair", 0));
	classMapping.insert(ClassMapPair("b2BroadPhase", 1));
	classMapping.insert(ClassMapPair("b2ContactFeature", 2));
	classMapping.insert(ClassMapPair("b2ManifoldPoint", 3));
	classMapping.insert(ClassMapPair("b2Manifold", 4));
	classMapping.insert(ClassMapPair("b2WorldManifold", 5));
	classMapping.insert(ClassMapPair("b2ClipVertex", 6));
	classMapping.insert(ClassMapPair("b2RayCastInput", 7));
	classMapping.insert(ClassMapPair("b2RayCastOutput", 8));
	classMapping.insert(ClassMapPair("b2AABB", 9));
	classMapping.insert(ClassMapPair("b2DistanceProxy", 10));
	classMapping.insert(ClassMapPair("b2SimplexCache", 11));
	classMapping.insert(ClassMapPair("b2DistanceInput", 12));
	classMapping.insert(ClassMapPair("b2DistanceOutput", 13));
	classMapping.insert(ClassMapPair("b2TreeNode", 14));
	classMapping.insert(ClassMapPair("b2DynamicTree", 15));
	classMapping.insert(ClassMapPair("b2TOIInput", 16));
	classMapping.insert(ClassMapPair("b2TOIOutput", 17));
	classMapping.insert(ClassMapPair("b2BlockAllocator", 18));
	classMapping.insert(ClassMapPair("b2Color", 19));
	classMapping.insert(ClassMapPair("b2Draw", 20));
	classMapping.insert(ClassMapPair("b2GrowableStack", 21));
	classMapping.insert(ClassMapPair("b2Vec2", 22));
	classMapping.insert(ClassMapPair("b2Vec3", 23));
	classMapping.insert(ClassMapPair("b2Mat22", 24));
	classMapping.insert(ClassMapPair("b2Mat33", 25));
	classMapping.insert(ClassMapPair("b2Rot", 26));
	classMapping.insert(ClassMapPair("b2Transform", 27));
	classMapping.insert(ClassMapPair("b2Sweep", 28));
	classMapping.insert(ClassMapPair("b2Version", 29));
	classMapping.insert(ClassMapPair("b2StackEntry", 30));
	classMapping.insert(ClassMapPair("b2StackAllocator", 31));
	classMapping.insert(ClassMapPair("b2Timer", 32));
	classMapping.insert(ClassMapPair("b2BodyDef", 33));
	classMapping.insert(ClassMapPair("b2Body", 34));
	classMapping.insert(ClassMapPair("b2ContactManager", 35));
	classMapping.insert(ClassMapPair("b2Filter", 36));
	classMapping.insert(ClassMapPair("b2FixtureDef", 37));
	classMapping.insert(ClassMapPair("b2FixtureProxy", 38));
	classMapping.insert(ClassMapPair("b2Fixture", 39));
	classMapping.insert(ClassMapPair("b2Island", 40));
	classMapping.insert(ClassMapPair("b2Profile", 41));
	classMapping.insert(ClassMapPair("b2TimeStep", 42));
	classMapping.insert(ClassMapPair("b2Position", 43));
	classMapping.insert(ClassMapPair("b2Velocity", 44));
	classMapping.insert(ClassMapPair("b2SolverData", 45));
	classMapping.insert(ClassMapPair("b2World", 46));
	classMapping.insert(ClassMapPair("b2DestructionListener", 47));
	classMapping.insert(ClassMapPair("b2ContactFilter", 48));
	classMapping.insert(ClassMapPair("b2ContactImpulse", 49));
	classMapping.insert(ClassMapPair("b2ContactListener", 50));
	classMapping.insert(ClassMapPair("b2QueryCallback", 51));
	classMapping.insert(ClassMapPair("b2RayCastCallback", 52));
	classMapping.insert(ClassMapPair("b2RopeDef", 53));
	classMapping.insert(ClassMapPair("b2Rope", 54));
	classMapping.insert(ClassMapPair("b2ChainShape", 55));
	classMapping.insert(ClassMapPair("b2CircleShape", 56));
	classMapping.insert(ClassMapPair("b2EdgeShape", 57));
	classMapping.insert(ClassMapPair("b2PolygonShape", 58));
	classMapping.insert(ClassMapPair("b2MassData", 59));
	classMapping.insert(ClassMapPair("b2Shape", 60));
	classMapping.insert(ClassMapPair("b2ChainAndCircleContact", 61));
	classMapping.insert(ClassMapPair("b2ChainAndPolygonContact", 62));
	classMapping.insert(ClassMapPair("b2CircleContact", 63));
	classMapping.insert(ClassMapPair("b2ContactRegister", 64));
	classMapping.insert(ClassMapPair("b2ContactEdge", 65));
	classMapping.insert(ClassMapPair("b2Contact", 66));
	classMapping.insert(ClassMapPair("b2VelocityConstraintPoint", 67));
	classMapping.insert(ClassMapPair("b2ContactVelocityConstraint", 68));
	classMapping.insert(ClassMapPair("b2ContactSolverDef", 69));
	classMapping.insert(ClassMapPair("b2ContactSolver", 70));
	classMapping.insert(ClassMapPair("b2EdgeAndCircleContact", 71));
	classMapping.insert(ClassMapPair("b2EdgeAndPolygonContact", 72));
	classMapping.insert(ClassMapPair("b2PolygonAndCircleContact", 73));
	classMapping.insert(ClassMapPair("b2PolygonContact", 74));
	classMapping.insert(ClassMapPair("b2DistanceJointDef", 75));
	classMapping.insert(ClassMapPair("b2DistanceJoint", 76));
	classMapping.insert(ClassMapPair("b2FrictionJointDef", 77));
	classMapping.insert(ClassMapPair("b2FrictionJoint", 78));
	classMapping.insert(ClassMapPair("b2GearJointDef", 79));
	classMapping.insert(ClassMapPair("b2GearJoint", 80));
	classMapping.insert(ClassMapPair("b2Jacobian", 81));
	classMapping.insert(ClassMapPair("b2JointEdge", 82));
	classMapping.insert(ClassMapPair("b2JointDef", 83));
	classMapping.insert(ClassMapPair("b2Joint", 84));
	classMapping.insert(ClassMapPair("b2MotorJointDef", 85));
	classMapping.insert(ClassMapPair("b2MotorJoint", 86));
	classMapping.insert(ClassMapPair("b2MouseJointDef", 87));
	classMapping.insert(ClassMapPair("b2MouseJoint", 88));
	classMapping.insert(ClassMapPair("b2PrismaticJointDef", 89));
	classMapping.insert(ClassMapPair("b2PrismaticJoint", 90));
	classMapping.insert(ClassMapPair("b2PulleyJointDef", 91));
	classMapping.insert(ClassMapPair("b2PulleyJoint", 92));
	classMapping.insert(ClassMapPair("b2RevoluteJointDef", 93));
	classMapping.insert(ClassMapPair("b2RevoluteJoint", 94));
	classMapping.insert(ClassMapPair("b2RopeJointDef", 95));
	classMapping.insert(ClassMapPair("b2RopeJoint", 96));
	classMapping.insert(ClassMapPair("b2WeldJointDef", 97));
	classMapping.insert(ClassMapPair("b2WeldJoint", 98));
	classMapping.insert(ClassMapPair("b2WheelJointDef", 99));
	classMapping.insert(ClassMapPair("b2WheelJoint", 100));
	classMapping.insert(ClassMapPair("b2ContactID", 101));
	classMapping.insert(ClassMapPair("b2ContactPositionConstraint", 102));
}

void initializer(void** extData, FREContextInitializer* ctxInitializer, FREContextFinalizer* ctxFinalizer)
{
	*ctxInitializer = &contextInitializer;
	*ctxFinalizer = &contextFinalizer;

	if(!mapInitialized) {
		initObjectMappings();
	}
}

void finalizer(void* extData)
{
	//extData should be null, since we don't set it anywhere. If it is not, you're a bad, bad kid.
}

void contextInitializer(void* extData, const uint8_t* ctxType, FREContext ctx, uint32_t* numFunctions, const FRENamedFunction** functions)
{
	/*  The format the the ctxType string can vary. It can either be an exact name of a class, or a name of a class combined with a
	 * specific memory address. If the address is specified, that means that the object already exists and we simply need to
	 * then associate the new context with the already-existing object in memory. We know the type so we can statically cast the
	 * address space, which is good because we then avoid any overhead of other casts like dynamic casting.
	 *
	 * An example of where the class type combined with an address is the b2Body class. This class has a private constructor and is
	 * designed explicitly to have it's creation and destruction entirely managed by the b2World object that it belongs to. As such
	 * we need to first create the b2Body address in world-createBody(), then return that address as a string to Actionscript. Then,
	 * within Actionscript, we take this address and pass it to the constructor of the B2Body AS3 Class instance. Within the constructor,
	 * ExtensionContext.create(..) will invoke this function and define the ctxType as "b2Body::0x12345678", aka "class::memoryAddress/"
	 *
	 * From what I understand, C++ is meant to guaratee pointer stability, so this method of looking up previously allocated address is
	 * as safe as it gets.
	 */

	//The raw context type pushed into a std::string. This may contain a memory address.
	std::string rawContextType;
	rawContextType.append(reinterpret_cast<const char*>(ctxType));
	//

	//Position of the "::" identifier that separates the object type from the existing object memory address, if any.
	size_t findMemoryAddress = rawContextType.find("::", (size_t)0);
	//

	//Gets set to true if "::" is found in the context type name
	bool hasMemoryAddress = false;
	//

	//Actual name of the context, aka the class object we want created here. We can be sure that this does not contain a memory address.
	std::string finalContextType;
	//

	//Only gets populated if hasMemoryAddress == true. Check hasMemoryAddress before reading this.
	std::stringstream address;
	//

	if(findMemoryAddress != std::string::npos) {
		//There is a memory address attached to this type. We need to look it up.
		hasMemoryAddress = true;

		address << rawContextType.substr(findMemoryAddress+2, rawContextType.length());

		finalContextType.append(rawContextType.substr(0, findMemoryAddress));
	}else{
		//There is no memory address attached to this type. Therefore, we must create a new object.

		finalContextType.append(rawContextType);
	}

	//An array of functions we're going to pass back for whatever object we're creating or referencing here
	FRENamedFunction* memberFunctions;
	//

	int classType = classMapping[finalContextType];

	switch(classType) {
		case 0:		//b2Pair
		{
			b2Pair* b2Pair_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 5;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2Pair_setter_proxyIdA";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2Pair_setter_proxyIdA;

			memberFunctions[1].name = (const uint8_t*)"ane_b2Pair_getter_proxyIdA";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2Pair_getter_proxyIdA;

			memberFunctions[2].name = (const uint8_t*)"ane_b2Pair_setter_proxyIdB";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2Pair_setter_proxyIdB;

			memberFunctions[3].name = (const uint8_t*)"ane_b2Pair_getter_proxyIdB";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2Pair_getter_proxyIdB;

			memberFunctions[4].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2Pair_instance);
		}
		break;

		case 1:		//b2BroadPhase
		{
			b2BroadPhase* b2BroadPhase_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 17;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2BroadPhase_constructor_b2BroadPhase";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2BroadPhase_constructor_b2BroadPhase;

			memberFunctions[1].name = (const uint8_t*)"ane_b2BroadPhase_callback_CreateProxy";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2BroadPhase_callback_CreateProxy;

			memberFunctions[2].name = (const uint8_t*)"ane_b2BroadPhase_callback_DestroyProxy";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2BroadPhase_callback_DestroyProxy;

			memberFunctions[3].name = (const uint8_t*)"ane_b2BroadPhase_callback_MoveProxy";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2BroadPhase_callback_MoveProxy;

			memberFunctions[4].name = (const uint8_t*)"ane_b2BroadPhase_callback_TouchProxy";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_b2BroadPhase_callback_TouchProxy;

			memberFunctions[5].name = (const uint8_t*)"ane_b2BroadPhase_callback_GetFatAABB";
			memberFunctions[5].functionData = NULL;
			memberFunctions[5].function = &ane_b2BroadPhase_callback_GetFatAABB;

			memberFunctions[6].name = (const uint8_t*)"ane_b2BroadPhase_callback_GetUserData";
			memberFunctions[6].functionData = NULL;
			memberFunctions[6].function = &ane_b2BroadPhase_callback_GetUserData;

			memberFunctions[7].name = (const uint8_t*)"ane_b2BroadPhase_callback_TestOverlap";
			memberFunctions[7].functionData = NULL;
			memberFunctions[7].function = &ane_b2BroadPhase_callback_TestOverlap;

			memberFunctions[8].name = (const uint8_t*)"ane_b2BroadPhase_callback_GetProxyCount";
			memberFunctions[8].functionData = NULL;
			memberFunctions[8].function = &ane_b2BroadPhase_callback_GetProxyCount;

			memberFunctions[9].name = (const uint8_t*)"ane_b2BroadPhase_callback_UpdatePairs";
			memberFunctions[9].functionData = NULL;
			memberFunctions[9].function = &ane_b2BroadPhase_callback_UpdatePairs;

			memberFunctions[10].name = (const uint8_t*)"ane_b2BroadPhase_callback_Query";
			memberFunctions[10].functionData = NULL;
			memberFunctions[10].function = &ane_b2BroadPhase_callback_Query;

			memberFunctions[11].name = (const uint8_t*)"ane_b2BroadPhase_callback_RayCast";
			memberFunctions[11].functionData = NULL;
			memberFunctions[11].function = &ane_b2BroadPhase_callback_RayCast;

			memberFunctions[12].name = (const uint8_t*)"ane_b2BroadPhase_callback_GetTreeHeight";
			memberFunctions[12].functionData = NULL;
			memberFunctions[12].function = &ane_b2BroadPhase_callback_GetTreeHeight;

			memberFunctions[13].name = (const uint8_t*)"ane_b2BroadPhase_callback_GetTreeBalance";
			memberFunctions[13].functionData = NULL;
			memberFunctions[13].function = &ane_b2BroadPhase_callback_GetTreeBalance;

			memberFunctions[14].name = (const uint8_t*)"ane_b2BroadPhase_callback_GetTreeQuality";
			memberFunctions[14].functionData = NULL;
			memberFunctions[14].function = &ane_b2BroadPhase_callback_GetTreeQuality;

			memberFunctions[15].name = (const uint8_t*)"ane_b2BroadPhase_callback_ShiftOrigin";
			memberFunctions[15].functionData = NULL;
			memberFunctions[15].function = &ane_b2BroadPhase_callback_ShiftOrigin;

			memberFunctions[16].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[16].functionData = NULL;
			memberFunctions[16].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2BroadPhase_instance);
		}
		break;

		case 2:		//b2ContactFeature
		{
			b2ContactFeature* b2ContactFeature_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 9;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2ContactFeature_setter_indexA";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2ContactFeature_setter_indexA;

			memberFunctions[1].name = (const uint8_t*)"ane_b2ContactFeature_getter_indexA";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2ContactFeature_getter_indexA;

			memberFunctions[2].name = (const uint8_t*)"ane_b2ContactFeature_setter_indexB";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2ContactFeature_setter_indexB;

			memberFunctions[3].name = (const uint8_t*)"ane_b2ContactFeature_getter_indexB";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2ContactFeature_getter_indexB;

			memberFunctions[4].name = (const uint8_t*)"ane_b2ContactFeature_setter_typeA";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_b2ContactFeature_setter_typeA;

			memberFunctions[5].name = (const uint8_t*)"ane_b2ContactFeature_getter_typeA";
			memberFunctions[5].functionData = NULL;
			memberFunctions[5].function = &ane_b2ContactFeature_getter_typeA;

			memberFunctions[6].name = (const uint8_t*)"ane_b2ContactFeature_setter_typeB";
			memberFunctions[6].functionData = NULL;
			memberFunctions[6].function = &ane_b2ContactFeature_setter_typeB;

			memberFunctions[7].name = (const uint8_t*)"ane_b2ContactFeature_getter_typeB";
			memberFunctions[7].functionData = NULL;
			memberFunctions[7].function = &ane_b2ContactFeature_getter_typeB;

			memberFunctions[8].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[8].functionData = NULL;
			memberFunctions[8].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2ContactFeature_instance);
		}
		break;

		case 3:		//b2ManifoldPoint
		{
			b2ManifoldPoint* b2ManifoldPoint_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 9;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2ManifoldPoint_setter_localPoint";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2ManifoldPoint_setter_localPoint;

			memberFunctions[1].name = (const uint8_t*)"ane_b2ManifoldPoint_getter_localPoint";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2ManifoldPoint_getter_localPoint;

			memberFunctions[2].name = (const uint8_t*)"ane_b2ManifoldPoint_setter_normalImpulse";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2ManifoldPoint_setter_normalImpulse;

			memberFunctions[3].name = (const uint8_t*)"ane_b2ManifoldPoint_getter_normalImpulse";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2ManifoldPoint_getter_normalImpulse;

			memberFunctions[4].name = (const uint8_t*)"ane_b2ManifoldPoint_setter_tangentImpulse";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_b2ManifoldPoint_setter_tangentImpulse;

			memberFunctions[5].name = (const uint8_t*)"ane_b2ManifoldPoint_getter_tangentImpulse";
			memberFunctions[5].functionData = NULL;
			memberFunctions[5].function = &ane_b2ManifoldPoint_getter_tangentImpulse;

			memberFunctions[6].name = (const uint8_t*)"ane_b2ManifoldPoint_setter_id";
			memberFunctions[6].functionData = NULL;
			memberFunctions[6].function = &ane_b2ManifoldPoint_setter_id;

			memberFunctions[7].name = (const uint8_t*)"ane_b2ManifoldPoint_getter_id";
			memberFunctions[7].functionData = NULL;
			memberFunctions[7].function = &ane_b2ManifoldPoint_getter_id;

			memberFunctions[8].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[8].functionData = NULL;
			memberFunctions[8].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2ManifoldPoint_instance);
		}
		break;

		case 4:		//b2Manifold
		{
			b2Manifold* b2Manifold_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 9;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2Manifold_setter_localNormal";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2Manifold_setter_localNormal;

			memberFunctions[1].name = (const uint8_t*)"ane_b2Manifold_getter_localNormal";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2Manifold_getter_localNormal;

			memberFunctions[2].name = (const uint8_t*)"ane_b2Manifold_setter_localPoint";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2Manifold_setter_localPoint;

			memberFunctions[3].name = (const uint8_t*)"ane_b2Manifold_getter_localPoint";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2Manifold_getter_localPoint;

			memberFunctions[4].name = (const uint8_t*)"ane_b2Manifold_setter_type";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_b2Manifold_setter_type;

			memberFunctions[5].name = (const uint8_t*)"ane_b2Manifold_getter_type";
			memberFunctions[5].functionData = NULL;
			memberFunctions[5].function = &ane_b2Manifold_getter_type;

			memberFunctions[6].name = (const uint8_t*)"ane_b2Manifold_setter_pointCount";
			memberFunctions[6].functionData = NULL;
			memberFunctions[6].function = &ane_b2Manifold_setter_pointCount;

			memberFunctions[7].name = (const uint8_t*)"ane_b2Manifold_getter_pointCount";
			memberFunctions[7].functionData = NULL;
			memberFunctions[7].function = &ane_b2Manifold_getter_pointCount;

			memberFunctions[8].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[8].functionData = NULL;
			memberFunctions[8].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2Manifold_instance);
		}
		break;

		case 5:		//b2WorldManifold
		{
			b2WorldManifold* b2WorldManifold_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 4;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2WorldManifold_callback_Initialize";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2WorldManifold_callback_Initialize;

			memberFunctions[1].name = (const uint8_t*)"ane_b2WorldManifold_setter_normal";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2WorldManifold_setter_normal;

			memberFunctions[2].name = (const uint8_t*)"ane_b2WorldManifold_getter_normal";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2WorldManifold_getter_normal;

			memberFunctions[3].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2WorldManifold_instance);
		}
		break;

		case 6:		//b2ClipVertex
		{
			b2ClipVertex* b2ClipVertex_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 5;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2ClipVertex_setter_v";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2ClipVertex_setter_v;

			memberFunctions[1].name = (const uint8_t*)"ane_b2ClipVertex_getter_v";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2ClipVertex_getter_v;

			memberFunctions[2].name = (const uint8_t*)"ane_b2ClipVertex_setter_id";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2ClipVertex_setter_id;

			memberFunctions[3].name = (const uint8_t*)"ane_b2ClipVertex_getter_id";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2ClipVertex_getter_id;

			memberFunctions[4].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2ClipVertex_instance);
		}
		break;

		case 7:		//b2RayCastInput
		{
			b2RayCastInput* b2RayCastInput_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 7;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2RayCastInput_setter_p1";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2RayCastInput_setter_p1;

			memberFunctions[1].name = (const uint8_t*)"ane_b2RayCastInput_getter_p1";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2RayCastInput_getter_p1;

			memberFunctions[2].name = (const uint8_t*)"ane_b2RayCastInput_setter_p2";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2RayCastInput_setter_p2;

			memberFunctions[3].name = (const uint8_t*)"ane_b2RayCastInput_getter_p2";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2RayCastInput_getter_p2;

			memberFunctions[4].name = (const uint8_t*)"ane_b2RayCastInput_setter_maxFraction";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_b2RayCastInput_setter_maxFraction;

			memberFunctions[5].name = (const uint8_t*)"ane_b2RayCastInput_getter_maxFraction";
			memberFunctions[5].functionData = NULL;
			memberFunctions[5].function = &ane_b2RayCastInput_getter_maxFraction;

			memberFunctions[6].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[6].functionData = NULL;
			memberFunctions[6].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2RayCastInput_instance);
		}
		break;

		case 8:		//b2RayCastOutput
		{
			b2RayCastOutput* b2RayCastOutput_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 5;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2RayCastOutput_setter_normal";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2RayCastOutput_setter_normal;

			memberFunctions[1].name = (const uint8_t*)"ane_b2RayCastOutput_getter_normal";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2RayCastOutput_getter_normal;

			memberFunctions[2].name = (const uint8_t*)"ane_b2RayCastOutput_setter_fraction";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2RayCastOutput_setter_fraction;

			memberFunctions[3].name = (const uint8_t*)"ane_b2RayCastOutput_getter_fraction";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2RayCastOutput_getter_fraction;

			memberFunctions[4].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2RayCastOutput_instance);
		}
		break;

		case 9:		//b2AABB
		{
			b2AABB* b2AABB_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 12;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2AABB_callback_IsValid";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2AABB_callback_IsValid;

			memberFunctions[1].name = (const uint8_t*)"ane_b2AABB_callback_GetCenter";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2AABB_callback_GetCenter;

			memberFunctions[2].name = (const uint8_t*)"ane_b2AABB_callback_GetExtents";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2AABB_callback_GetExtents;

			memberFunctions[3].name = (const uint8_t*)"ane_b2AABB_callback_GetPerimeter";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2AABB_callback_GetPerimeter;

			memberFunctions[4].name = (const uint8_t*)"ane_b2AABB_callback_Combine";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_b2AABB_callback_Combine;

			memberFunctions[5].name = (const uint8_t*)"ane_b2AABB_callback_Contains";
			memberFunctions[5].functionData = NULL;
			memberFunctions[5].function = &ane_b2AABB_callback_Contains;

			memberFunctions[6].name = (const uint8_t*)"ane_b2AABB_callback_RayCast";
			memberFunctions[6].functionData = NULL;
			memberFunctions[6].function = &ane_b2AABB_callback_RayCast;

			memberFunctions[7].name = (const uint8_t*)"ane_b2AABB_setter_lowerBound";
			memberFunctions[7].functionData = NULL;
			memberFunctions[7].function = &ane_b2AABB_setter_lowerBound;

			memberFunctions[8].name = (const uint8_t*)"ane_b2AABB_getter_lowerBound";
			memberFunctions[8].functionData = NULL;
			memberFunctions[8].function = &ane_b2AABB_getter_lowerBound;

			memberFunctions[9].name = (const uint8_t*)"ane_b2AABB_setter_upperBound";
			memberFunctions[9].functionData = NULL;
			memberFunctions[9].function = &ane_b2AABB_setter_upperBound;

			memberFunctions[10].name = (const uint8_t*)"ane_b2AABB_getter_upperBound";
			memberFunctions[10].functionData = NULL;
			memberFunctions[10].function = &ane_b2AABB_getter_upperBound;

			memberFunctions[11].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[11].functionData = NULL;
			memberFunctions[11].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2AABB_instance);
		}
		break;

		case 10:		//b2DistanceProxy
		{
			b2DistanceProxy* b2DistanceProxy_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 11;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2DistanceProxy_constructor_b2DistanceProxy";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2DistanceProxy_constructor_b2DistanceProxy;

			memberFunctions[1].name = (const uint8_t*)"ane_b2DistanceProxy_callback_Set";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2DistanceProxy_callback_Set;

			memberFunctions[2].name = (const uint8_t*)"ane_b2DistanceProxy_callback_GetSupport";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2DistanceProxy_callback_GetSupport;

			memberFunctions[3].name = (const uint8_t*)"ane_b2DistanceProxy_callback_GetSupportVertex";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2DistanceProxy_callback_GetSupportVertex;

			memberFunctions[4].name = (const uint8_t*)"ane_b2DistanceProxy_callback_GetVertexCount";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_b2DistanceProxy_callback_GetVertexCount;

			memberFunctions[5].name = (const uint8_t*)"ane_b2DistanceProxy_callback_GetVertex";
			memberFunctions[5].functionData = NULL;
			memberFunctions[5].function = &ane_b2DistanceProxy_callback_GetVertex;

			memberFunctions[6].name = (const uint8_t*)"ane_b2DistanceProxy_setter_m_count";
			memberFunctions[6].functionData = NULL;
			memberFunctions[6].function = &ane_b2DistanceProxy_setter_m_count;

			memberFunctions[7].name = (const uint8_t*)"ane_b2DistanceProxy_getter_m_count";
			memberFunctions[7].functionData = NULL;
			memberFunctions[7].function = &ane_b2DistanceProxy_getter_m_count;

			memberFunctions[8].name = (const uint8_t*)"ane_b2DistanceProxy_setter_m_radius";
			memberFunctions[8].functionData = NULL;
			memberFunctions[8].function = &ane_b2DistanceProxy_setter_m_radius;

			memberFunctions[9].name = (const uint8_t*)"ane_b2DistanceProxy_getter_m_radius";
			memberFunctions[9].functionData = NULL;
			memberFunctions[9].function = &ane_b2DistanceProxy_getter_m_radius;

			memberFunctions[10].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[10].functionData = NULL;
			memberFunctions[10].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2DistanceProxy_instance);
		}
		break;

		case 11:		//b2SimplexCache
		{
			b2SimplexCache* b2SimplexCache_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 5;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2SimplexCache_setter_metric";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2SimplexCache_setter_metric;

			memberFunctions[1].name = (const uint8_t*)"ane_b2SimplexCache_getter_metric";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2SimplexCache_getter_metric;

			memberFunctions[2].name = (const uint8_t*)"ane_b2SimplexCache_setter_count";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2SimplexCache_setter_count;

			memberFunctions[3].name = (const uint8_t*)"ane_b2SimplexCache_getter_count";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2SimplexCache_getter_count;

			memberFunctions[4].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2SimplexCache_instance);
		}
		break;

		case 12:		//b2DistanceInput
		{
			b2DistanceInput* b2DistanceInput_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 11;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2DistanceInput_setter_proxyA";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2DistanceInput_setter_proxyA;

			memberFunctions[1].name = (const uint8_t*)"ane_b2DistanceInput_getter_proxyA";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2DistanceInput_getter_proxyA;

			memberFunctions[2].name = (const uint8_t*)"ane_b2DistanceInput_setter_proxyB";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2DistanceInput_setter_proxyB;

			memberFunctions[3].name = (const uint8_t*)"ane_b2DistanceInput_getter_proxyB";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2DistanceInput_getter_proxyB;

			memberFunctions[4].name = (const uint8_t*)"ane_b2DistanceInput_setter_transformA";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_b2DistanceInput_setter_transformA;

			memberFunctions[5].name = (const uint8_t*)"ane_b2DistanceInput_getter_transformA";
			memberFunctions[5].functionData = NULL;
			memberFunctions[5].function = &ane_b2DistanceInput_getter_transformA;

			memberFunctions[6].name = (const uint8_t*)"ane_b2DistanceInput_setter_transformB";
			memberFunctions[6].functionData = NULL;
			memberFunctions[6].function = &ane_b2DistanceInput_setter_transformB;

			memberFunctions[7].name = (const uint8_t*)"ane_b2DistanceInput_getter_transformB";
			memberFunctions[7].functionData = NULL;
			memberFunctions[7].function = &ane_b2DistanceInput_getter_transformB;

			memberFunctions[8].name = (const uint8_t*)"ane_b2DistanceInput_setter_useRadii";
			memberFunctions[8].functionData = NULL;
			memberFunctions[8].function = &ane_b2DistanceInput_setter_useRadii;

			memberFunctions[9].name = (const uint8_t*)"ane_b2DistanceInput_getter_useRadii";
			memberFunctions[9].functionData = NULL;
			memberFunctions[9].function = &ane_b2DistanceInput_getter_useRadii;

			memberFunctions[10].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[10].functionData = NULL;
			memberFunctions[10].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2DistanceInput_instance);
		}
		break;

		case 13:		//b2DistanceOutput
		{
			b2DistanceOutput* b2DistanceOutput_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 9;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2DistanceOutput_setter_pointA";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2DistanceOutput_setter_pointA;

			memberFunctions[1].name = (const uint8_t*)"ane_b2DistanceOutput_getter_pointA";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2DistanceOutput_getter_pointA;

			memberFunctions[2].name = (const uint8_t*)"ane_b2DistanceOutput_setter_pointB";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2DistanceOutput_setter_pointB;

			memberFunctions[3].name = (const uint8_t*)"ane_b2DistanceOutput_getter_pointB";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2DistanceOutput_getter_pointB;

			memberFunctions[4].name = (const uint8_t*)"ane_b2DistanceOutput_setter_distance";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_b2DistanceOutput_setter_distance;

			memberFunctions[5].name = (const uint8_t*)"ane_b2DistanceOutput_getter_distance";
			memberFunctions[5].functionData = NULL;
			memberFunctions[5].function = &ane_b2DistanceOutput_getter_distance;

			memberFunctions[6].name = (const uint8_t*)"ane_b2DistanceOutput_setter_iterations";
			memberFunctions[6].functionData = NULL;
			memberFunctions[6].function = &ane_b2DistanceOutput_setter_iterations;

			memberFunctions[7].name = (const uint8_t*)"ane_b2DistanceOutput_getter_iterations";
			memberFunctions[7].functionData = NULL;
			memberFunctions[7].function = &ane_b2DistanceOutput_getter_iterations;

			memberFunctions[8].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[8].functionData = NULL;
			memberFunctions[8].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2DistanceOutput_instance);
		}
		break;

		case 14:		//b2TreeNode
		{
			b2TreeNode* b2TreeNode_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 6;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2TreeNode_callback_IsLeaf";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2TreeNode_callback_IsLeaf;

			memberFunctions[1].name = (const uint8_t*)"ane_b2TreeNode_setter_aabb";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2TreeNode_setter_aabb;

			memberFunctions[2].name = (const uint8_t*)"ane_b2TreeNode_getter_aabb";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2TreeNode_getter_aabb;

			memberFunctions[3].name = (const uint8_t*)"ane_b2TreeNode_setter_userData";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2TreeNode_setter_userData;

			memberFunctions[4].name = (const uint8_t*)"ane_b2TreeNode_getter_userData";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_b2TreeNode_getter_userData;

			memberFunctions[5].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[5].functionData = NULL;
			memberFunctions[5].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2TreeNode_instance);
		}
		break;

		case 15:		//b2DynamicTree
		{
			b2DynamicTree* b2DynamicTree_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 15;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2DynamicTree_constructor_b2DynamicTree";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2DynamicTree_constructor_b2DynamicTree;

			memberFunctions[1].name = (const uint8_t*)"ane_b2DynamicTree_callback_CreateProxy";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2DynamicTree_callback_CreateProxy;

			memberFunctions[2].name = (const uint8_t*)"ane_b2DynamicTree_callback_DestroyProxy";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2DynamicTree_callback_DestroyProxy;

			memberFunctions[3].name = (const uint8_t*)"ane_b2DynamicTree_callback_MoveProxy";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2DynamicTree_callback_MoveProxy;

			memberFunctions[4].name = (const uint8_t*)"ane_b2DynamicTree_callback_GetUserData";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_b2DynamicTree_callback_GetUserData;

			memberFunctions[5].name = (const uint8_t*)"ane_b2DynamicTree_callback_GetFatAABB";
			memberFunctions[5].functionData = NULL;
			memberFunctions[5].function = &ane_b2DynamicTree_callback_GetFatAABB;

			memberFunctions[6].name = (const uint8_t*)"ane_b2DynamicTree_callback_Query";
			memberFunctions[6].functionData = NULL;
			memberFunctions[6].function = &ane_b2DynamicTree_callback_Query;

			memberFunctions[7].name = (const uint8_t*)"ane_b2DynamicTree_callback_RayCast";
			memberFunctions[7].functionData = NULL;
			memberFunctions[7].function = &ane_b2DynamicTree_callback_RayCast;

			memberFunctions[8].name = (const uint8_t*)"ane_b2DynamicTree_callback_Validate";
			memberFunctions[8].functionData = NULL;
			memberFunctions[8].function = &ane_b2DynamicTree_callback_Validate;

			memberFunctions[9].name = (const uint8_t*)"ane_b2DynamicTree_callback_GetHeight";
			memberFunctions[9].functionData = NULL;
			memberFunctions[9].function = &ane_b2DynamicTree_callback_GetHeight;

			memberFunctions[10].name = (const uint8_t*)"ane_b2DynamicTree_callback_GetMaxBalance";
			memberFunctions[10].functionData = NULL;
			memberFunctions[10].function = &ane_b2DynamicTree_callback_GetMaxBalance;

			memberFunctions[11].name = (const uint8_t*)"ane_b2DynamicTree_callback_GetAreaRatio";
			memberFunctions[11].functionData = NULL;
			memberFunctions[11].function = &ane_b2DynamicTree_callback_GetAreaRatio;

			memberFunctions[12].name = (const uint8_t*)"ane_b2DynamicTree_callback_RebuildBottomUp";
			memberFunctions[12].functionData = NULL;
			memberFunctions[12].function = &ane_b2DynamicTree_callback_RebuildBottomUp;

			memberFunctions[13].name = (const uint8_t*)"ane_b2DynamicTree_callback_ShiftOrigin";
			memberFunctions[13].functionData = NULL;
			memberFunctions[13].function = &ane_b2DynamicTree_callback_ShiftOrigin;

			memberFunctions[14].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[14].functionData = NULL;
			memberFunctions[14].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2DynamicTree_instance);
		}
		break;

		case 16:		//b2TOIInput
		{
			b2TOIInput* b2TOIInput_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 11;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2TOIInput_setter_proxyA";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2TOIInput_setter_proxyA;

			memberFunctions[1].name = (const uint8_t*)"ane_b2TOIInput_getter_proxyA";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2TOIInput_getter_proxyA;

			memberFunctions[2].name = (const uint8_t*)"ane_b2TOIInput_setter_proxyB";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2TOIInput_setter_proxyB;

			memberFunctions[3].name = (const uint8_t*)"ane_b2TOIInput_getter_proxyB";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2TOIInput_getter_proxyB;

			memberFunctions[4].name = (const uint8_t*)"ane_b2TOIInput_setter_sweepA";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_b2TOIInput_setter_sweepA;

			memberFunctions[5].name = (const uint8_t*)"ane_b2TOIInput_getter_sweepA";
			memberFunctions[5].functionData = NULL;
			memberFunctions[5].function = &ane_b2TOIInput_getter_sweepA;

			memberFunctions[6].name = (const uint8_t*)"ane_b2TOIInput_setter_sweepB";
			memberFunctions[6].functionData = NULL;
			memberFunctions[6].function = &ane_b2TOIInput_setter_sweepB;

			memberFunctions[7].name = (const uint8_t*)"ane_b2TOIInput_getter_sweepB";
			memberFunctions[7].functionData = NULL;
			memberFunctions[7].function = &ane_b2TOIInput_getter_sweepB;

			memberFunctions[8].name = (const uint8_t*)"ane_b2TOIInput_setter_tMax";
			memberFunctions[8].functionData = NULL;
			memberFunctions[8].function = &ane_b2TOIInput_setter_tMax;

			memberFunctions[9].name = (const uint8_t*)"ane_b2TOIInput_getter_tMax";
			memberFunctions[9].functionData = NULL;
			memberFunctions[9].function = &ane_b2TOIInput_getter_tMax;

			memberFunctions[10].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[10].functionData = NULL;
			memberFunctions[10].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2TOIInput_instance);
		}
		break;

		case 17:		//b2TOIOutput
		{
			b2TOIOutput* b2TOIOutput_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 5;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2TOIOutput_setter_state";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2TOIOutput_setter_state;

			memberFunctions[1].name = (const uint8_t*)"ane_b2TOIOutput_getter_state";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2TOIOutput_getter_state;

			memberFunctions[2].name = (const uint8_t*)"ane_b2TOIOutput_setter_t";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2TOIOutput_setter_t;

			memberFunctions[3].name = (const uint8_t*)"ane_b2TOIOutput_getter_t";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2TOIOutput_getter_t;

			memberFunctions[4].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2TOIOutput_instance);
		}
		break;

		case 18:		//b2BlockAllocator
		{
			b2BlockAllocator* b2BlockAllocator_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 5;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2BlockAllocator_constructor_b2BlockAllocator";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2BlockAllocator_constructor_b2BlockAllocator;

			memberFunctions[1].name = (const uint8_t*)"ane_b2BlockAllocator_callback_Allocate";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2BlockAllocator_callback_Allocate;

			memberFunctions[2].name = (const uint8_t*)"ane_b2BlockAllocator_callback_Free";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2BlockAllocator_callback_Free;

			memberFunctions[3].name = (const uint8_t*)"ane_b2BlockAllocator_callback_Clear";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2BlockAllocator_callback_Clear;

			memberFunctions[4].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2BlockAllocator_instance);
		}
		break;

		case 19:		//b2Color
		{
			b2Color* b2Color_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 10;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2Color_constructor_b2Color";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2Color_constructor_b2Color;

			memberFunctions[1].name = (const uint8_t*)"ane_b2Color_constructor_b2Color";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2Color_constructor_b2Color;

			memberFunctions[2].name = (const uint8_t*)"ane_b2Color_callback_Set";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2Color_callback_Set;

			memberFunctions[3].name = (const uint8_t*)"ane_b2Color_setter_r";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2Color_setter_r;

			memberFunctions[4].name = (const uint8_t*)"ane_b2Color_getter_r";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_b2Color_getter_r;

			memberFunctions[5].name = (const uint8_t*)"ane_b2Color_setter_g";
			memberFunctions[5].functionData = NULL;
			memberFunctions[5].function = &ane_b2Color_setter_g;

			memberFunctions[6].name = (const uint8_t*)"ane_b2Color_getter_g";
			memberFunctions[6].functionData = NULL;
			memberFunctions[6].function = &ane_b2Color_getter_g;

			memberFunctions[7].name = (const uint8_t*)"ane_b2Color_setter_b";
			memberFunctions[7].functionData = NULL;
			memberFunctions[7].function = &ane_b2Color_setter_b;

			memberFunctions[8].name = (const uint8_t*)"ane_b2Color_getter_b";
			memberFunctions[8].functionData = NULL;
			memberFunctions[8].function = &ane_b2Color_getter_b;

			memberFunctions[9].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[9].functionData = NULL;
			memberFunctions[9].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2Color_instance);
		}
		break;

		case 20:		//b2Draw
		{
			b2Draw* b2Draw_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 12;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2Draw_constructor_b2Draw";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2Draw_constructor_b2Draw;

			memberFunctions[1].name = (const uint8_t*)"ane_b2Draw_callback_SetFlags";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2Draw_callback_SetFlags;

			memberFunctions[2].name = (const uint8_t*)"ane_b2Draw_callback_GetFlags";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2Draw_callback_GetFlags;

			memberFunctions[3].name = (const uint8_t*)"ane_b2Draw_callback_AppendFlags";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2Draw_callback_AppendFlags;

			memberFunctions[4].name = (const uint8_t*)"ane_b2Draw_callback_ClearFlags";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_b2Draw_callback_ClearFlags;

			memberFunctions[5].name = (const uint8_t*)"ane_b2Draw_callback_DrawPolygon";
			memberFunctions[5].functionData = NULL;
			memberFunctions[5].function = &ane_b2Draw_callback_DrawPolygon;

			memberFunctions[6].name = (const uint8_t*)"ane_b2Draw_callback_DrawSolidPolygon";
			memberFunctions[6].functionData = NULL;
			memberFunctions[6].function = &ane_b2Draw_callback_DrawSolidPolygon;

			memberFunctions[7].name = (const uint8_t*)"ane_b2Draw_callback_DrawCircle";
			memberFunctions[7].functionData = NULL;
			memberFunctions[7].function = &ane_b2Draw_callback_DrawCircle;

			memberFunctions[8].name = (const uint8_t*)"ane_b2Draw_callback_DrawSolidCircle";
			memberFunctions[8].functionData = NULL;
			memberFunctions[8].function = &ane_b2Draw_callback_DrawSolidCircle;

			memberFunctions[9].name = (const uint8_t*)"ane_b2Draw_callback_DrawSegment";
			memberFunctions[9].functionData = NULL;
			memberFunctions[9].function = &ane_b2Draw_callback_DrawSegment;

			memberFunctions[10].name = (const uint8_t*)"ane_b2Draw_callback_DrawTransform";
			memberFunctions[10].functionData = NULL;
			memberFunctions[10].function = &ane_b2Draw_callback_DrawTransform;

			memberFunctions[11].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[11].functionData = NULL;
			memberFunctions[11].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2Draw_instance);
		}
		break;

		case 21:		//b2GrowableStack
		{
			//Unimplemented because it's problematic for being template based. Too lazy and care too little to bother with it

			/*
			b2GrowableStack* b2GrowableStack_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 7;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2GrowableStack_constructor_b2GrowableStack";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2GrowableStack_constructor_b2GrowableStack;

			memberFunctions[1].name = (const uint8_t*)"ane_b2GrowableStack_callback_Push";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2GrowableStack_callback_Push;

			memberFunctions[2].name = (const uint8_t*)"ane_b2GrowableStack_callback_sizeof";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2GrowableStack_callback_sizeof;

			memberFunctions[3].name = (const uint8_t*)"ane_b2GrowableStack_callback_sizeof";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2GrowableStack_callback_sizeof;

			memberFunctions[4].name = (const uint8_t*)"ane_b2GrowableStack_callback_Pop";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_b2GrowableStack_callback_Pop;

			memberFunctions[5].name = (const uint8_t*)"ane_b2GrowableStack_callback_GetCount";
			memberFunctions[5].functionData = NULL;
			memberFunctions[5].function = &ane_b2GrowableStack_callback_GetCount;

			memberFunctions[6].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[6].functionData = NULL;
			memberFunctions[6].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2GrowableStack_instance);
			*/
		}
		break;

		case 22:		//b2Vec2
		{
			b2Vec2* b2Vec2_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 14;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2Vec2_constructor_b2Vec2";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2Vec2_constructor_b2Vec2;

			memberFunctions[1].name = (const uint8_t*)"ane_b2Vec2_constructor_b2Vec2";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2Vec2_constructor_b2Vec2;

			memberFunctions[2].name = (const uint8_t*)"ane_b2Vec2_callback_SetZero";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2Vec2_callback_SetZero;

			memberFunctions[3].name = (const uint8_t*)"ane_b2Vec2_callback_Set";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2Vec2_callback_Set;

			memberFunctions[4].name = (const uint8_t*)"ane_b2Vec2_callback_Length";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_b2Vec2_callback_Length;

			memberFunctions[5].name = (const uint8_t*)"ane_b2Vec2_callback_LengthSquared";
			memberFunctions[5].functionData = NULL;
			memberFunctions[5].function = &ane_b2Vec2_callback_LengthSquared;

			memberFunctions[6].name = (const uint8_t*)"ane_b2Vec2_callback_Normalize";
			memberFunctions[6].functionData = NULL;
			memberFunctions[6].function = &ane_b2Vec2_callback_Normalize;

			memberFunctions[7].name = (const uint8_t*)"ane_b2Vec2_callback_IsValid";
			memberFunctions[7].functionData = NULL;
			memberFunctions[7].function = &ane_b2Vec2_callback_IsValid;

			memberFunctions[8].name = (const uint8_t*)"ane_b2Vec2_callback_Skew";
			memberFunctions[8].functionData = NULL;
			memberFunctions[8].function = &ane_b2Vec2_callback_Skew;

			memberFunctions[9].name = (const uint8_t*)"ane_b2Vec2_setter_x";
			memberFunctions[9].functionData = NULL;
			memberFunctions[9].function = &ane_b2Vec2_setter_x;

			memberFunctions[10].name = (const uint8_t*)"ane_b2Vec2_getter_x";
			memberFunctions[10].functionData = NULL;
			memberFunctions[10].function = &ane_b2Vec2_getter_x;

			memberFunctions[11].name = (const uint8_t*)"ane_b2Vec2_setter_y";
			memberFunctions[11].functionData = NULL;
			memberFunctions[11].function = &ane_b2Vec2_setter_y;

			memberFunctions[12].name = (const uint8_t*)"ane_b2Vec2_getter_y";
			memberFunctions[12].functionData = NULL;
			memberFunctions[12].function = &ane_b2Vec2_getter_y;

			memberFunctions[13].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[13].functionData = NULL;
			memberFunctions[13].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2Vec2_instance);
		}
		break;

		case 23:		//b2Vec3
		{
			b2Vec3* b2Vec3_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 11;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2Vec3_constructor_b2Vec3";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2Vec3_constructor_b2Vec3;

			memberFunctions[1].name = (const uint8_t*)"ane_b2Vec3_constructor_b2Vec3";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2Vec3_constructor_b2Vec3;

			memberFunctions[2].name = (const uint8_t*)"ane_b2Vec3_callback_SetZero";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2Vec3_callback_SetZero;

			memberFunctions[3].name = (const uint8_t*)"ane_b2Vec3_callback_Set";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2Vec3_callback_Set;

			memberFunctions[4].name = (const uint8_t*)"ane_b2Vec3_setter_x";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_b2Vec3_setter_x;

			memberFunctions[5].name = (const uint8_t*)"ane_b2Vec3_getter_x";
			memberFunctions[5].functionData = NULL;
			memberFunctions[5].function = &ane_b2Vec3_getter_x;

			memberFunctions[6].name = (const uint8_t*)"ane_b2Vec3_setter_y";
			memberFunctions[6].functionData = NULL;
			memberFunctions[6].function = &ane_b2Vec3_setter_y;

			memberFunctions[7].name = (const uint8_t*)"ane_b2Vec3_getter_y";
			memberFunctions[7].functionData = NULL;
			memberFunctions[7].function = &ane_b2Vec3_getter_y;

			memberFunctions[8].name = (const uint8_t*)"ane_b2Vec3_setter_z";
			memberFunctions[8].functionData = NULL;
			memberFunctions[8].function = &ane_b2Vec3_setter_z;

			memberFunctions[9].name = (const uint8_t*)"ane_b2Vec3_getter_z";
			memberFunctions[9].functionData = NULL;
			memberFunctions[9].function = &ane_b2Vec3_getter_z;

			memberFunctions[10].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[10].functionData = NULL;
			memberFunctions[10].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2Vec3_instance);
		}
		break;

		case 24:		//b2Mat22
		{
			b2Mat22* b2Mat22_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 13;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2Mat22_constructor_b2Mat22";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2Mat22_constructor_b2Mat22;

			memberFunctions[1].name = (const uint8_t*)"ane_b2Mat22_constructor_b2Mat22";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2Mat22_constructor_b2Mat22;

			memberFunctions[2].name = (const uint8_t*)"ane_b2Mat22_constructor_b2Mat22";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2Mat22_constructor_b2Mat22;

			memberFunctions[3].name = (const uint8_t*)"ane_b2Mat22_callback_Set";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2Mat22_callback_Set;

			memberFunctions[4].name = (const uint8_t*)"ane_b2Mat22_callback_SetIdentity";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_b2Mat22_callback_SetIdentity;

			memberFunctions[5].name = (const uint8_t*)"ane_b2Mat22_callback_SetZero";
			memberFunctions[5].functionData = NULL;
			memberFunctions[5].function = &ane_b2Mat22_callback_SetZero;

			memberFunctions[6].name = (const uint8_t*)"ane_b2Mat22_callback_GetInverse";
			memberFunctions[6].functionData = NULL;
			memberFunctions[6].function = &ane_b2Mat22_callback_GetInverse;

			memberFunctions[7].name = (const uint8_t*)"ane_b2Mat22_callback_Solve";
			memberFunctions[7].functionData = NULL;
			memberFunctions[7].function = &ane_b2Mat22_callback_Solve;

			memberFunctions[8].name = (const uint8_t*)"ane_b2Mat22_setter_ex";
			memberFunctions[8].functionData = NULL;
			memberFunctions[8].function = &ane_b2Mat22_setter_ex;

			memberFunctions[9].name = (const uint8_t*)"ane_b2Mat22_getter_ex";
			memberFunctions[9].functionData = NULL;
			memberFunctions[9].function = &ane_b2Mat22_getter_ex;

			memberFunctions[10].name = (const uint8_t*)"ane_b2Mat22_setter_ey";
			memberFunctions[10].functionData = NULL;
			memberFunctions[10].function = &ane_b2Mat22_setter_ey;

			memberFunctions[11].name = (const uint8_t*)"ane_b2Mat22_getter_ey";
			memberFunctions[11].functionData = NULL;
			memberFunctions[11].function = &ane_b2Mat22_getter_ey;

			memberFunctions[12].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[12].functionData = NULL;
			memberFunctions[12].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2Mat22_instance);
		}
		break;

		case 25:		//b2Mat33
		{
			b2Mat33* b2Mat33_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 14;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2Mat33_constructor_b2Mat33";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2Mat33_constructor_b2Mat33;

			memberFunctions[1].name = (const uint8_t*)"ane_b2Mat33_constructor_b2Mat33";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2Mat33_constructor_b2Mat33;

			memberFunctions[2].name = (const uint8_t*)"ane_b2Mat33_callback_SetZero";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2Mat33_callback_SetZero;

			memberFunctions[3].name = (const uint8_t*)"ane_b2Mat33_callback_Solve33";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2Mat33_callback_Solve33;

			memberFunctions[4].name = (const uint8_t*)"ane_b2Mat33_callback_Solve22";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_b2Mat33_callback_Solve22;

			memberFunctions[5].name = (const uint8_t*)"ane_b2Mat33_callback_GetInverse22";
			memberFunctions[5].functionData = NULL;
			memberFunctions[5].function = &ane_b2Mat33_callback_GetInverse22;

			memberFunctions[6].name = (const uint8_t*)"ane_b2Mat33_callback_GetSymInverse33";
			memberFunctions[6].functionData = NULL;
			memberFunctions[6].function = &ane_b2Mat33_callback_GetSymInverse33;

			memberFunctions[7].name = (const uint8_t*)"ane_b2Mat33_setter_ex";
			memberFunctions[7].functionData = NULL;
			memberFunctions[7].function = &ane_b2Mat33_setter_ex;

			memberFunctions[8].name = (const uint8_t*)"ane_b2Mat33_getter_ex";
			memberFunctions[8].functionData = NULL;
			memberFunctions[8].function = &ane_b2Mat33_getter_ex;

			memberFunctions[9].name = (const uint8_t*)"ane_b2Mat33_setter_ey";
			memberFunctions[9].functionData = NULL;
			memberFunctions[9].function = &ane_b2Mat33_setter_ey;

			memberFunctions[10].name = (const uint8_t*)"ane_b2Mat33_getter_ey";
			memberFunctions[10].functionData = NULL;
			memberFunctions[10].function = &ane_b2Mat33_getter_ey;

			memberFunctions[11].name = (const uint8_t*)"ane_b2Mat33_setter_ez";
			memberFunctions[11].functionData = NULL;
			memberFunctions[11].function = &ane_b2Mat33_setter_ez;

			memberFunctions[12].name = (const uint8_t*)"ane_b2Mat33_getter_ez";
			memberFunctions[12].functionData = NULL;
			memberFunctions[12].function = &ane_b2Mat33_getter_ez;

			memberFunctions[13].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[13].functionData = NULL;
			memberFunctions[13].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2Mat33_instance);
		}
		break;

		case 26:		//b2Rot
		{
			b2Rot* b2Rot_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 11;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2Rot_constructor_b2Rot";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2Rot_constructor_b2Rot;

			memberFunctions[1].name = (const uint8_t*)"ane_b2Rot_callback_b2Rot";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2Rot_callback_b2Rot;

			memberFunctions[2].name = (const uint8_t*)"ane_b2Rot_callback_Set";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2Rot_callback_Set;

			memberFunctions[3].name = (const uint8_t*)"ane_b2Rot_callback_SetIdentity";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2Rot_callback_SetIdentity;

			memberFunctions[4].name = (const uint8_t*)"ane_b2Rot_callback_GetAngle";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_b2Rot_callback_GetAngle;

			memberFunctions[5].name = (const uint8_t*)"ane_b2Rot_callback_GetXAxis";
			memberFunctions[5].functionData = NULL;
			memberFunctions[5].function = &ane_b2Rot_callback_GetXAxis;

			memberFunctions[6].name = (const uint8_t*)"ane_b2Rot_callback_GetYAxis";
			memberFunctions[6].functionData = NULL;
			memberFunctions[6].function = &ane_b2Rot_callback_GetYAxis;

			memberFunctions[7].name = (const uint8_t*)"ane_b2Rot_setter_s";
			memberFunctions[7].functionData = NULL;
			memberFunctions[7].function = &ane_b2Rot_setter_s;

			memberFunctions[8].name = (const uint8_t*)"ane_b2Rot_getter_s";
			memberFunctions[8].functionData = NULL;
			memberFunctions[8].function = &ane_b2Rot_getter_s;

			memberFunctions[9].name = (const uint8_t*)"ane_b2Rot_setter_c";
			memberFunctions[9].functionData = NULL;
			memberFunctions[9].function = &ane_b2Rot_setter_c;

			memberFunctions[10].name = (const uint8_t*)"ane_b2Rot_getter_c";
			memberFunctions[10].functionData = NULL;
			memberFunctions[10].function = &ane_b2Rot_getter_c;

			memberFunctions[11].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[11].functionData = NULL;
			memberFunctions[11].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2Rot_instance);
		}
		break;

		case 27:		//b2Transform
		{
			b2Transform* b2Transform_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 9;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2Transform_constructor_b2Transform";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2Transform_constructor_b2Transform;

			memberFunctions[1].name = (const uint8_t*)"ane_b2Transform_constructor_b2Transform";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2Transform_constructor_b2Transform;

			memberFunctions[2].name = (const uint8_t*)"ane_b2Transform_callback_SetIdentity";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2Transform_callback_SetIdentity;

			memberFunctions[3].name = (const uint8_t*)"ane_b2Transform_callback_Set";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2Transform_callback_Set;

			memberFunctions[4].name = (const uint8_t*)"ane_b2Transform_setter_p";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_b2Transform_setter_p;

			memberFunctions[5].name = (const uint8_t*)"ane_b2Transform_getter_p";
			memberFunctions[5].functionData = NULL;
			memberFunctions[5].function = &ane_b2Transform_getter_p;

			memberFunctions[6].name = (const uint8_t*)"ane_b2Transform_setter_q";
			memberFunctions[6].functionData = NULL;
			memberFunctions[6].function = &ane_b2Transform_setter_q;

			memberFunctions[7].name = (const uint8_t*)"ane_b2Transform_getter_q";
			memberFunctions[7].functionData = NULL;
			memberFunctions[7].function = &ane_b2Transform_getter_q;

			memberFunctions[8].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[8].functionData = NULL;
			memberFunctions[8].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2Transform_instance);
		}
		break;

		case 28:		//b2Sweep
		{
			b2Sweep* b2Sweep_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 16;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2Sweep_callback_GetTransform";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2Sweep_callback_GetTransform;

			memberFunctions[1].name = (const uint8_t*)"ane_b2Sweep_callback_Advance";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2Sweep_callback_Advance;

			memberFunctions[2].name = (const uint8_t*)"ane_b2Sweep_callback_Normalize";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2Sweep_callback_Normalize;

			memberFunctions[3].name = (const uint8_t*)"ane_b2Sweep_setter_localCenter";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2Sweep_setter_localCenter;

			memberFunctions[4].name = (const uint8_t*)"ane_b2Sweep_getter_localCenter";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_b2Sweep_getter_localCenter;

			memberFunctions[5].name = (const uint8_t*)"ane_b2Sweep_setter_c0";
			memberFunctions[5].functionData = NULL;
			memberFunctions[5].function = &ane_b2Sweep_setter_c0;

			memberFunctions[6].name = (const uint8_t*)"ane_b2Sweep_getter_c0";
			memberFunctions[6].functionData = NULL;
			memberFunctions[6].function = &ane_b2Sweep_getter_c0;

			memberFunctions[7].name = (const uint8_t*)"ane_b2Sweep_setter_c";
			memberFunctions[7].functionData = NULL;
			memberFunctions[7].function = &ane_b2Sweep_setter_c;

			memberFunctions[8].name = (const uint8_t*)"ane_b2Sweep_getter_c";
			memberFunctions[8].functionData = NULL;
			memberFunctions[8].function = &ane_b2Sweep_getter_c;

			memberFunctions[9].name = (const uint8_t*)"ane_b2Sweep_setter_a0";
			memberFunctions[9].functionData = NULL;
			memberFunctions[9].function = &ane_b2Sweep_setter_a0;

			memberFunctions[10].name = (const uint8_t*)"ane_b2Sweep_getter_a0";
			memberFunctions[10].functionData = NULL;
			memberFunctions[10].function = &ane_b2Sweep_getter_a0;

			memberFunctions[11].name = (const uint8_t*)"ane_b2Sweep_setter_a";
			memberFunctions[11].functionData = NULL;
			memberFunctions[11].function = &ane_b2Sweep_setter_a;

			memberFunctions[12].name = (const uint8_t*)"ane_b2Sweep_getter_a";
			memberFunctions[12].functionData = NULL;
			memberFunctions[12].function = &ane_b2Sweep_getter_a;

			memberFunctions[13].name = (const uint8_t*)"ane_b2Sweep_setter_alpha0";
			memberFunctions[13].functionData = NULL;
			memberFunctions[13].function = &ane_b2Sweep_setter_alpha0;

			memberFunctions[14].name = (const uint8_t*)"ane_b2Sweep_getter_alpha0";
			memberFunctions[14].functionData = NULL;
			memberFunctions[14].function = &ane_b2Sweep_getter_alpha0;

			memberFunctions[15].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[15].functionData = NULL;
			memberFunctions[15].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2Sweep_instance);
		}
		break;

		case 29:		//b2Version
		{
			b2Version* b2Version_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 7;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2Version_setter_major";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2Version_setter_major;

			memberFunctions[1].name = (const uint8_t*)"ane_b2Version_getter_major";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2Version_getter_major;

			memberFunctions[2].name = (const uint8_t*)"ane_b2Version_setter_minor";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2Version_setter_minor;

			memberFunctions[3].name = (const uint8_t*)"ane_b2Version_getter_minor";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2Version_getter_minor;

			memberFunctions[4].name = (const uint8_t*)"ane_b2Version_setter_revision";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_b2Version_setter_revision;

			memberFunctions[5].name = (const uint8_t*)"ane_b2Version_getter_revision";
			memberFunctions[5].functionData = NULL;
			memberFunctions[5].function = &ane_b2Version_getter_revision;

			memberFunctions[6].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[6].functionData = NULL;
			memberFunctions[6].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2Version_instance);
		}
		break;

		case 30:		//b2StackEntry
		{
			b2StackEntry* b2StackEntry_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 7;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2StackEntry_setter_data";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2StackEntry_setter_data;

			memberFunctions[1].name = (const uint8_t*)"ane_b2StackEntry_getter_data";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2StackEntry_getter_data;

			memberFunctions[2].name = (const uint8_t*)"ane_b2StackEntry_setter_size";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2StackEntry_setter_size;

			memberFunctions[3].name = (const uint8_t*)"ane_b2StackEntry_getter_size";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2StackEntry_getter_size;

			memberFunctions[4].name = (const uint8_t*)"ane_b2StackEntry_setter_usedMalloc";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_b2StackEntry_setter_usedMalloc;

			memberFunctions[5].name = (const uint8_t*)"ane_b2StackEntry_getter_usedMalloc";
			memberFunctions[5].functionData = NULL;
			memberFunctions[5].function = &ane_b2StackEntry_getter_usedMalloc;

			memberFunctions[6].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[6].functionData = NULL;
			memberFunctions[6].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2StackEntry_instance);
		}
		break;

		case 31:		//b2StackAllocator
		{
			b2StackAllocator* b2StackAllocator_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 5;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2StackAllocator_constructor_b2StackAllocator";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2StackAllocator_constructor_b2StackAllocator;

			memberFunctions[1].name = (const uint8_t*)"ane_b2StackAllocator_callback_Allocate";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2StackAllocator_callback_Allocate;

			memberFunctions[2].name = (const uint8_t*)"ane_b2StackAllocator_callback_Free";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2StackAllocator_callback_Free;

			memberFunctions[3].name = (const uint8_t*)"ane_b2StackAllocator_callback_GetMaxAllocation";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2StackAllocator_callback_GetMaxAllocation;

			memberFunctions[4].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2StackAllocator_instance);
		}
		break;

		case 32:		//b2Timer
		{
			b2Timer* b2Timer_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 4;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2Timer_constructor_b2Timer";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2Timer_constructor_b2Timer;

			memberFunctions[1].name = (const uint8_t*)"ane_b2Timer_callback_Reset";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2Timer_callback_Reset;

			memberFunctions[2].name = (const uint8_t*)"ane_b2Timer_callback_GetMilliseconds";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2Timer_callback_GetMilliseconds;

			memberFunctions[3].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2Timer_instance);
		}
		break;

		case 33:		//b2BodyDef
		{
			b2BodyDef* b2BodyDef_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 30;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2BodyDef_constructor_b2BodyDef";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2BodyDef_constructor_b2BodyDef;

			memberFunctions[1].name = (const uint8_t*)"ane_b2BodyDef_setter_type";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2BodyDef_setter_type;

			memberFunctions[2].name = (const uint8_t*)"ane_b2BodyDef_getter_type";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2BodyDef_getter_type;

			memberFunctions[3].name = (const uint8_t*)"ane_b2BodyDef_setter_position";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2BodyDef_setter_position;

			memberFunctions[4].name = (const uint8_t*)"ane_b2BodyDef_getter_position";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_b2BodyDef_getter_position;

			memberFunctions[5].name = (const uint8_t*)"ane_b2BodyDef_setter_angle";
			memberFunctions[5].functionData = NULL;
			memberFunctions[5].function = &ane_b2BodyDef_setter_angle;

			memberFunctions[6].name = (const uint8_t*)"ane_b2BodyDef_getter_angle";
			memberFunctions[6].functionData = NULL;
			memberFunctions[6].function = &ane_b2BodyDef_getter_angle;

			memberFunctions[7].name = (const uint8_t*)"ane_b2BodyDef_setter_linearVelocity";
			memberFunctions[7].functionData = NULL;
			memberFunctions[7].function = &ane_b2BodyDef_setter_linearVelocity;

			memberFunctions[8].name = (const uint8_t*)"ane_b2BodyDef_getter_linearVelocity";
			memberFunctions[8].functionData = NULL;
			memberFunctions[8].function = &ane_b2BodyDef_getter_linearVelocity;

			memberFunctions[9].name = (const uint8_t*)"ane_b2BodyDef_setter_angularVelocity";
			memberFunctions[9].functionData = NULL;
			memberFunctions[9].function = &ane_b2BodyDef_setter_angularVelocity;

			memberFunctions[10].name = (const uint8_t*)"ane_b2BodyDef_getter_angularVelocity";
			memberFunctions[10].functionData = NULL;
			memberFunctions[10].function = &ane_b2BodyDef_getter_angularVelocity;

			memberFunctions[11].name = (const uint8_t*)"ane_b2BodyDef_setter_linearDamping";
			memberFunctions[11].functionData = NULL;
			memberFunctions[11].function = &ane_b2BodyDef_setter_linearDamping;

			memberFunctions[12].name = (const uint8_t*)"ane_b2BodyDef_getter_linearDamping";
			memberFunctions[12].functionData = NULL;
			memberFunctions[12].function = &ane_b2BodyDef_getter_linearDamping;

			memberFunctions[13].name = (const uint8_t*)"ane_b2BodyDef_setter_angularDamping";
			memberFunctions[13].functionData = NULL;
			memberFunctions[13].function = &ane_b2BodyDef_setter_angularDamping;

			memberFunctions[14].name = (const uint8_t*)"ane_b2BodyDef_getter_angularDamping";
			memberFunctions[14].functionData = NULL;
			memberFunctions[14].function = &ane_b2BodyDef_getter_angularDamping;

			memberFunctions[15].name = (const uint8_t*)"ane_b2BodyDef_setter_allowSleep";
			memberFunctions[15].functionData = NULL;
			memberFunctions[15].function = &ane_b2BodyDef_setter_allowSleep;

			memberFunctions[16].name = (const uint8_t*)"ane_b2BodyDef_getter_allowSleep";
			memberFunctions[16].functionData = NULL;
			memberFunctions[16].function = &ane_b2BodyDef_getter_allowSleep;

			memberFunctions[17].name = (const uint8_t*)"ane_b2BodyDef_setter_awake";
			memberFunctions[17].functionData = NULL;
			memberFunctions[17].function = &ane_b2BodyDef_setter_awake;

			memberFunctions[18].name = (const uint8_t*)"ane_b2BodyDef_getter_awake";
			memberFunctions[18].functionData = NULL;
			memberFunctions[18].function = &ane_b2BodyDef_getter_awake;

			memberFunctions[19].name = (const uint8_t*)"ane_b2BodyDef_setter_fixedRotation";
			memberFunctions[19].functionData = NULL;
			memberFunctions[19].function = &ane_b2BodyDef_setter_fixedRotation;

			memberFunctions[20].name = (const uint8_t*)"ane_b2BodyDef_getter_fixedRotation";
			memberFunctions[20].functionData = NULL;
			memberFunctions[20].function = &ane_b2BodyDef_getter_fixedRotation;

			memberFunctions[21].name = (const uint8_t*)"ane_b2BodyDef_setter_bullet";
			memberFunctions[21].functionData = NULL;
			memberFunctions[21].function = &ane_b2BodyDef_setter_bullet;

			memberFunctions[22].name = (const uint8_t*)"ane_b2BodyDef_getter_bullet";
			memberFunctions[22].functionData = NULL;
			memberFunctions[22].function = &ane_b2BodyDef_getter_bullet;

			memberFunctions[23].name = (const uint8_t*)"ane_b2BodyDef_setter_active";
			memberFunctions[23].functionData = NULL;
			memberFunctions[23].function = &ane_b2BodyDef_setter_active;

			memberFunctions[24].name = (const uint8_t*)"ane_b2BodyDef_getter_active";
			memberFunctions[24].functionData = NULL;
			memberFunctions[24].function = &ane_b2BodyDef_getter_active;

			memberFunctions[25].name = (const uint8_t*)"ane_b2BodyDef_setter_userData";
			memberFunctions[25].functionData = NULL;
			memberFunctions[25].function = &ane_b2BodyDef_setter_userData;

			memberFunctions[26].name = (const uint8_t*)"ane_b2BodyDef_getter_userData";
			memberFunctions[26].functionData = NULL;
			memberFunctions[26].function = &ane_b2BodyDef_getter_userData;

			memberFunctions[27].name = (const uint8_t*)"ane_b2BodyDef_setter_gravityScale";
			memberFunctions[27].functionData = NULL;
			memberFunctions[27].function = &ane_b2BodyDef_setter_gravityScale;

			memberFunctions[28].name = (const uint8_t*)"ane_b2BodyDef_getter_gravityScale";
			memberFunctions[28].functionData = NULL;
			memberFunctions[28].function = &ane_b2BodyDef_getter_gravityScale;

			memberFunctions[29].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[29].functionData = NULL;
			memberFunctions[29].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2BodyDef_instance);
		}
		break;

		case 34:		//b2Body
		{
			b2Body* b2Body_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 61;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2Body_callback_CreateFixture";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2Body_callback_CreateFixture;

			memberFunctions[1].name = (const uint8_t*)"ane_b2Body_callback_CreateFixture";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2Body_callback_CreateFixture;

			memberFunctions[2].name = (const uint8_t*)"ane_b2Body_callback_DestroyFixture";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2Body_callback_DestroyFixture;

			memberFunctions[3].name = (const uint8_t*)"ane_b2Body_callback_SetTransform";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2Body_callback_SetTransform;

			memberFunctions[4].name = (const uint8_t*)"ane_b2Body_callback_GetTransform";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_b2Body_callback_GetTransform;

			memberFunctions[5].name = (const uint8_t*)"ane_b2Body_callback_GetPosition";
			memberFunctions[5].functionData = NULL;
			memberFunctions[5].function = &ane_b2Body_callback_GetPosition;

			memberFunctions[6].name = (const uint8_t*)"ane_b2Body_callback_GetAngle";
			memberFunctions[6].functionData = NULL;
			memberFunctions[6].function = &ane_b2Body_callback_GetAngle;

			memberFunctions[7].name = (const uint8_t*)"ane_b2Body_callback_GetWorldCenter";
			memberFunctions[7].functionData = NULL;
			memberFunctions[7].function = &ane_b2Body_callback_GetWorldCenter;

			memberFunctions[8].name = (const uint8_t*)"ane_b2Body_callback_GetLocalCenter";
			memberFunctions[8].functionData = NULL;
			memberFunctions[8].function = &ane_b2Body_callback_GetLocalCenter;

			memberFunctions[9].name = (const uint8_t*)"ane_b2Body_callback_SetLinearVelocity";
			memberFunctions[9].functionData = NULL;
			memberFunctions[9].function = &ane_b2Body_callback_SetLinearVelocity;

			memberFunctions[10].name = (const uint8_t*)"ane_b2Body_callback_GetLinearVelocity";
			memberFunctions[10].functionData = NULL;
			memberFunctions[10].function = &ane_b2Body_callback_GetLinearVelocity;

			memberFunctions[11].name = (const uint8_t*)"ane_b2Body_callback_SetAngularVelocity";
			memberFunctions[11].functionData = NULL;
			memberFunctions[11].function = &ane_b2Body_callback_SetAngularVelocity;

			memberFunctions[12].name = (const uint8_t*)"ane_b2Body_callback_GetAngularVelocity";
			memberFunctions[12].functionData = NULL;
			memberFunctions[12].function = &ane_b2Body_callback_GetAngularVelocity;

			memberFunctions[13].name = (const uint8_t*)"ane_b2Body_callback_ApplyForce";
			memberFunctions[13].functionData = NULL;
			memberFunctions[13].function = &ane_b2Body_callback_ApplyForce;

			memberFunctions[14].name = (const uint8_t*)"ane_b2Body_callback_ApplyForceToCenter";
			memberFunctions[14].functionData = NULL;
			memberFunctions[14].function = &ane_b2Body_callback_ApplyForceToCenter;

			memberFunctions[15].name = (const uint8_t*)"ane_b2Body_callback_ApplyTorque";
			memberFunctions[15].functionData = NULL;
			memberFunctions[15].function = &ane_b2Body_callback_ApplyTorque;

			memberFunctions[16].name = (const uint8_t*)"ane_b2Body_callback_ApplyLinearImpulse";
			memberFunctions[16].functionData = NULL;
			memberFunctions[16].function = &ane_b2Body_callback_ApplyLinearImpulse;

			memberFunctions[17].name = (const uint8_t*)"ane_b2Body_callback_ApplyAngularImpulse";
			memberFunctions[17].functionData = NULL;
			memberFunctions[17].function = &ane_b2Body_callback_ApplyAngularImpulse;

			memberFunctions[18].name = (const uint8_t*)"ane_b2Body_callback_GetMass";
			memberFunctions[18].functionData = NULL;
			memberFunctions[18].function = &ane_b2Body_callback_GetMass;

			memberFunctions[19].name = (const uint8_t*)"ane_b2Body_callback_GetInertia";
			memberFunctions[19].functionData = NULL;
			memberFunctions[19].function = &ane_b2Body_callback_GetInertia;

			memberFunctions[20].name = (const uint8_t*)"ane_b2Body_callback_GetMassData";
			memberFunctions[20].functionData = NULL;
			memberFunctions[20].function = &ane_b2Body_callback_GetMassData;

			memberFunctions[21].name = (const uint8_t*)"ane_b2Body_callback_SetMassData";
			memberFunctions[21].functionData = NULL;
			memberFunctions[21].function = &ane_b2Body_callback_SetMassData;

			memberFunctions[22].name = (const uint8_t*)"ane_b2Body_callback_ResetMassData";
			memberFunctions[22].functionData = NULL;
			memberFunctions[22].function = &ane_b2Body_callback_ResetMassData;

			memberFunctions[23].name = (const uint8_t*)"ane_b2Body_callback_GetWorldPoint";
			memberFunctions[23].functionData = NULL;
			memberFunctions[23].function = &ane_b2Body_callback_GetWorldPoint;

			memberFunctions[24].name = (const uint8_t*)"ane_b2Body_callback_GetWorldVector";
			memberFunctions[24].functionData = NULL;
			memberFunctions[24].function = &ane_b2Body_callback_GetWorldVector;

			memberFunctions[25].name = (const uint8_t*)"ane_b2Body_callback_GetLocalPoint";
			memberFunctions[25].functionData = NULL;
			memberFunctions[25].function = &ane_b2Body_callback_GetLocalPoint;

			memberFunctions[26].name = (const uint8_t*)"ane_b2Body_callback_GetLocalVector";
			memberFunctions[26].functionData = NULL;
			memberFunctions[26].function = &ane_b2Body_callback_GetLocalVector;

			memberFunctions[27].name = (const uint8_t*)"ane_b2Body_callback_GetLinearVelocityFromWorldPoint";
			memberFunctions[27].functionData = NULL;
			memberFunctions[27].function = &ane_b2Body_callback_GetLinearVelocityFromWorldPoint;

			memberFunctions[28].name = (const uint8_t*)"ane_b2Body_callback_GetLinearVelocityFromLocalPoint";
			memberFunctions[28].functionData = NULL;
			memberFunctions[28].function = &ane_b2Body_callback_GetLinearVelocityFromLocalPoint;

			memberFunctions[29].name = (const uint8_t*)"ane_b2Body_callback_GetLinearDamping";
			memberFunctions[29].functionData = NULL;
			memberFunctions[29].function = &ane_b2Body_callback_GetLinearDamping;

			memberFunctions[30].name = (const uint8_t*)"ane_b2Body_callback_SetLinearDamping";
			memberFunctions[30].functionData = NULL;
			memberFunctions[30].function = &ane_b2Body_callback_SetLinearDamping;

			memberFunctions[31].name = (const uint8_t*)"ane_b2Body_callback_GetAngularDamping";
			memberFunctions[31].functionData = NULL;
			memberFunctions[31].function = &ane_b2Body_callback_GetAngularDamping;

			memberFunctions[32].name = (const uint8_t*)"ane_b2Body_callback_SetAngularDamping";
			memberFunctions[32].functionData = NULL;
			memberFunctions[32].function = &ane_b2Body_callback_SetAngularDamping;

			memberFunctions[33].name = (const uint8_t*)"ane_b2Body_callback_GetGravityScale";
			memberFunctions[33].functionData = NULL;
			memberFunctions[33].function = &ane_b2Body_callback_GetGravityScale;

			memberFunctions[34].name = (const uint8_t*)"ane_b2Body_callback_SetGravityScale";
			memberFunctions[34].functionData = NULL;
			memberFunctions[34].function = &ane_b2Body_callback_SetGravityScale;

			memberFunctions[35].name = (const uint8_t*)"ane_b2Body_callback_SetType";
			memberFunctions[35].functionData = NULL;
			memberFunctions[35].function = &ane_b2Body_callback_SetType;

			memberFunctions[36].name = (const uint8_t*)"ane_b2Body_callback_GetType";
			memberFunctions[36].functionData = NULL;
			memberFunctions[36].function = &ane_b2Body_callback_GetType;

			memberFunctions[37].name = (const uint8_t*)"ane_b2Body_callback_SetBullet";
			memberFunctions[37].functionData = NULL;
			memberFunctions[37].function = &ane_b2Body_callback_SetBullet;

			memberFunctions[38].name = (const uint8_t*)"ane_b2Body_callback_IsBullet";
			memberFunctions[38].functionData = NULL;
			memberFunctions[38].function = &ane_b2Body_callback_IsBullet;

			memberFunctions[39].name = (const uint8_t*)"ane_b2Body_callback_SetSleepingAllowed";
			memberFunctions[39].functionData = NULL;
			memberFunctions[39].function = &ane_b2Body_callback_SetSleepingAllowed;

			memberFunctions[40].name = (const uint8_t*)"ane_b2Body_callback_IsSleepingAllowed";
			memberFunctions[40].functionData = NULL;
			memberFunctions[40].function = &ane_b2Body_callback_IsSleepingAllowed;

			memberFunctions[41].name = (const uint8_t*)"ane_b2Body_callback_SetAwake";
			memberFunctions[41].functionData = NULL;
			memberFunctions[41].function = &ane_b2Body_callback_SetAwake;

			memberFunctions[42].name = (const uint8_t*)"ane_b2Body_callback_IsAwake";
			memberFunctions[42].functionData = NULL;
			memberFunctions[42].function = &ane_b2Body_callback_IsAwake;

			memberFunctions[43].name = (const uint8_t*)"ane_b2Body_callback_SetActive";
			memberFunctions[43].functionData = NULL;
			memberFunctions[43].function = &ane_b2Body_callback_SetActive;

			memberFunctions[44].name = (const uint8_t*)"ane_b2Body_callback_IsActive";
			memberFunctions[44].functionData = NULL;
			memberFunctions[44].function = &ane_b2Body_callback_IsActive;

			memberFunctions[45].name = (const uint8_t*)"ane_b2Body_callback_SetFixedRotation";
			memberFunctions[45].functionData = NULL;
			memberFunctions[45].function = &ane_b2Body_callback_SetFixedRotation;

			memberFunctions[46].name = (const uint8_t*)"ane_b2Body_callback_IsFixedRotation";
			memberFunctions[46].functionData = NULL;
			memberFunctions[46].function = &ane_b2Body_callback_IsFixedRotation;

			memberFunctions[47].name = (const uint8_t*)"ane_b2Body_callback_GetFixtureList";
			memberFunctions[47].functionData = NULL;
			memberFunctions[47].function = &ane_b2Body_callback_GetFixtureList;

			memberFunctions[48].name = (const uint8_t*)"ane_b2Body_callback_GetFixtureList";
			memberFunctions[48].functionData = NULL;
			memberFunctions[48].function = &ane_b2Body_callback_GetFixtureList;

			memberFunctions[49].name = (const uint8_t*)"ane_b2Body_callback_GetJointList";
			memberFunctions[49].functionData = NULL;
			memberFunctions[49].function = &ane_b2Body_callback_GetJointList;

			memberFunctions[50].name = (const uint8_t*)"ane_b2Body_callback_GetJointList";
			memberFunctions[50].functionData = NULL;
			memberFunctions[50].function = &ane_b2Body_callback_GetJointList;

			memberFunctions[51].name = (const uint8_t*)"ane_b2Body_callback_GetContactList";
			memberFunctions[51].functionData = NULL;
			memberFunctions[51].function = &ane_b2Body_callback_GetContactList;

			memberFunctions[52].name = (const uint8_t*)"ane_b2Body_callback_GetContactList";
			memberFunctions[52].functionData = NULL;
			memberFunctions[52].function = &ane_b2Body_callback_GetContactList;

			memberFunctions[53].name = (const uint8_t*)"ane_b2Body_callback_GetNext";
			memberFunctions[53].functionData = NULL;
			memberFunctions[53].function = &ane_b2Body_callback_GetNext;

			memberFunctions[54].name = (const uint8_t*)"ane_b2Body_callback_GetNext";
			memberFunctions[54].functionData = NULL;
			memberFunctions[54].function = &ane_b2Body_callback_GetNext;

			memberFunctions[55].name = (const uint8_t*)"ane_b2Body_callback_GetUserData";
			memberFunctions[55].functionData = NULL;
			memberFunctions[55].function = &ane_b2Body_callback_GetUserData;

			memberFunctions[56].name = (const uint8_t*)"ane_b2Body_callback_SetUserData";
			memberFunctions[56].functionData = NULL;
			memberFunctions[56].function = &ane_b2Body_callback_SetUserData;

			memberFunctions[57].name = (const uint8_t*)"ane_b2Body_callback_GetWorld";
			memberFunctions[57].functionData = NULL;
			memberFunctions[57].function = &ane_b2Body_callback_GetWorld;

			memberFunctions[58].name = (const uint8_t*)"ane_b2Body_callback_GetWorld";
			memberFunctions[58].functionData = NULL;
			memberFunctions[58].function = &ane_b2Body_callback_GetWorld;

			memberFunctions[59].name = (const uint8_t*)"ane_b2Body_callback_Dump";
			memberFunctions[59].functionData = NULL;
			memberFunctions[59].function = &ane_b2Body_callback_Dump;

			memberFunctions[60].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[60].functionData = NULL;
			memberFunctions[60].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2Body_instance);
		}
		break;

		case 35:		//b2ContactManager
		{
			b2ContactManager* b2ContactManager_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 18;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2ContactManager_constructor_b2ContactManager";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2ContactManager_constructor_b2ContactManager;

			memberFunctions[1].name = (const uint8_t*)"ane_b2ContactManager_callback_AddPair";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2ContactManager_callback_AddPair;

			memberFunctions[2].name = (const uint8_t*)"ane_b2ContactManager_callback_FindNewContacts";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2ContactManager_callback_FindNewContacts;

			memberFunctions[3].name = (const uint8_t*)"ane_b2ContactManager_callback_Destroy";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2ContactManager_callback_Destroy;

			memberFunctions[4].name = (const uint8_t*)"ane_b2ContactManager_callback_Collide";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_b2ContactManager_callback_Collide;

			memberFunctions[5].name = (const uint8_t*)"ane_b2ContactManager_setter_m_broadPhase";
			memberFunctions[5].functionData = NULL;
			memberFunctions[5].function = &ane_b2ContactManager_setter_m_broadPhase;

			memberFunctions[6].name = (const uint8_t*)"ane_b2ContactManager_getter_m_broadPhase";
			memberFunctions[6].functionData = NULL;
			memberFunctions[6].function = &ane_b2ContactManager_getter_m_broadPhase;

			memberFunctions[7].name = (const uint8_t*)"ane_b2ContactManager_setter_m_contactList";
			memberFunctions[7].functionData = NULL;
			memberFunctions[7].function = &ane_b2ContactManager_setter_m_contactList;

			memberFunctions[8].name = (const uint8_t*)"ane_b2ContactManager_getter_m_contactList";
			memberFunctions[8].functionData = NULL;
			memberFunctions[8].function = &ane_b2ContactManager_getter_m_contactList;

			memberFunctions[9].name = (const uint8_t*)"ane_b2ContactManager_setter_m_contactCount";
			memberFunctions[9].functionData = NULL;
			memberFunctions[9].function = &ane_b2ContactManager_setter_m_contactCount;

			memberFunctions[10].name = (const uint8_t*)"ane_b2ContactManager_getter_m_contactCount";
			memberFunctions[10].functionData = NULL;
			memberFunctions[10].function = &ane_b2ContactManager_getter_m_contactCount;

			memberFunctions[11].name = (const uint8_t*)"ane_b2ContactManager_setter_m_contactFilter";
			memberFunctions[11].functionData = NULL;
			memberFunctions[11].function = &ane_b2ContactManager_setter_m_contactFilter;

			memberFunctions[12].name = (const uint8_t*)"ane_b2ContactManager_getter_m_contactFilter";
			memberFunctions[12].functionData = NULL;
			memberFunctions[12].function = &ane_b2ContactManager_getter_m_contactFilter;

			memberFunctions[13].name = (const uint8_t*)"ane_b2ContactManager_setter_m_contactListener";
			memberFunctions[13].functionData = NULL;
			memberFunctions[13].function = &ane_b2ContactManager_setter_m_contactListener;

			memberFunctions[14].name = (const uint8_t*)"ane_b2ContactManager_getter_m_contactListener";
			memberFunctions[14].functionData = NULL;
			memberFunctions[14].function = &ane_b2ContactManager_getter_m_contactListener;

			memberFunctions[15].name = (const uint8_t*)"ane_b2ContactManager_setter_m_allocator";
			memberFunctions[15].functionData = NULL;
			memberFunctions[15].function = &ane_b2ContactManager_setter_m_allocator;

			memberFunctions[16].name = (const uint8_t*)"ane_b2ContactManager_getter_m_allocator";
			memberFunctions[16].functionData = NULL;
			memberFunctions[16].function = &ane_b2ContactManager_getter_m_allocator;

			memberFunctions[17].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[17].functionData = NULL;
			memberFunctions[17].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2ContactManager_instance);
		}
		break;

		case 36:		//b2Filter
		{
			b2Filter* b2Filter_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 8;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2Filter_constructor_b2Filter";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2Filter_constructor_b2Filter;

			memberFunctions[1].name = (const uint8_t*)"ane_b2Filter_setter_categoryBits";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2Filter_setter_categoryBits;

			memberFunctions[2].name = (const uint8_t*)"ane_b2Filter_getter_categoryBits";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2Filter_getter_categoryBits;

			memberFunctions[3].name = (const uint8_t*)"ane_b2Filter_setter_maskBits";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2Filter_setter_maskBits;

			memberFunctions[4].name = (const uint8_t*)"ane_b2Filter_getter_maskBits";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_b2Filter_getter_maskBits;

			memberFunctions[5].name = (const uint8_t*)"ane_b2Filter_setter_groupIndex";
			memberFunctions[5].functionData = NULL;
			memberFunctions[5].function = &ane_b2Filter_setter_groupIndex;

			memberFunctions[6].name = (const uint8_t*)"ane_b2Filter_getter_groupIndex";
			memberFunctions[6].functionData = NULL;
			memberFunctions[6].function = &ane_b2Filter_getter_groupIndex;

			memberFunctions[7].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[7].functionData = NULL;
			memberFunctions[7].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2Filter_instance);
		}
		break;

		case 37:		//b2FixtureDef
		{
			b2FixtureDef* b2FixtureDef_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 14;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2FixtureDef_constructor_b2FixtureDef";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2FixtureDef_constructor_b2FixtureDef;

			memberFunctions[1].name = (const uint8_t*)"ane_b2FixtureDef_setter_userData";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2FixtureDef_setter_userData;

			memberFunctions[2].name = (const uint8_t*)"ane_b2FixtureDef_getter_userData";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2FixtureDef_getter_userData;

			memberFunctions[3].name = (const uint8_t*)"ane_b2FixtureDef_setter_friction";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2FixtureDef_setter_friction;

			memberFunctions[4].name = (const uint8_t*)"ane_b2FixtureDef_getter_friction";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_b2FixtureDef_getter_friction;

			memberFunctions[5].name = (const uint8_t*)"ane_b2FixtureDef_setter_restitution";
			memberFunctions[5].functionData = NULL;
			memberFunctions[5].function = &ane_b2FixtureDef_setter_restitution;

			memberFunctions[6].name = (const uint8_t*)"ane_b2FixtureDef_getter_restitution";
			memberFunctions[6].functionData = NULL;
			memberFunctions[6].function = &ane_b2FixtureDef_getter_restitution;

			memberFunctions[7].name = (const uint8_t*)"ane_b2FixtureDef_setter_density";
			memberFunctions[7].functionData = NULL;
			memberFunctions[7].function = &ane_b2FixtureDef_setter_density;

			memberFunctions[8].name = (const uint8_t*)"ane_b2FixtureDef_getter_density";
			memberFunctions[8].functionData = NULL;
			memberFunctions[8].function = &ane_b2FixtureDef_getter_density;

			memberFunctions[9].name = (const uint8_t*)"ane_b2FixtureDef_setter_isSensor";
			memberFunctions[9].functionData = NULL;
			memberFunctions[9].function = &ane_b2FixtureDef_setter_isSensor;

			memberFunctions[10].name = (const uint8_t*)"ane_b2FixtureDef_getter_isSensor";
			memberFunctions[10].functionData = NULL;
			memberFunctions[10].function = &ane_b2FixtureDef_getter_isSensor;

			memberFunctions[11].name = (const uint8_t*)"ane_b2FixtureDef_setter_filter";
			memberFunctions[11].functionData = NULL;
			memberFunctions[11].function = &ane_b2FixtureDef_setter_filter;

			memberFunctions[12].name = (const uint8_t*)"ane_b2FixtureDef_getter_filter";
			memberFunctions[12].functionData = NULL;
			memberFunctions[12].function = &ane_b2FixtureDef_getter_filter;

			memberFunctions[13].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[13].functionData = NULL;
			memberFunctions[13].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2FixtureDef_instance);
		}
		break;

		case 38:		//b2FixtureProxy
		{
			b2FixtureProxy* b2FixtureProxy_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 9;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2FixtureProxy_setter_aabb";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2FixtureProxy_setter_aabb;

			memberFunctions[1].name = (const uint8_t*)"ane_b2FixtureProxy_getter_aabb";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2FixtureProxy_getter_aabb;

			memberFunctions[2].name = (const uint8_t*)"ane_b2FixtureProxy_setter_fixture";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2FixtureProxy_setter_fixture;

			memberFunctions[3].name = (const uint8_t*)"ane_b2FixtureProxy_getter_fixture";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2FixtureProxy_getter_fixture;

			memberFunctions[4].name = (const uint8_t*)"ane_b2FixtureProxy_setter_childIndex";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_b2FixtureProxy_setter_childIndex;

			memberFunctions[5].name = (const uint8_t*)"ane_b2FixtureProxy_getter_childIndex";
			memberFunctions[5].functionData = NULL;
			memberFunctions[5].function = &ane_b2FixtureProxy_getter_childIndex;

			memberFunctions[6].name = (const uint8_t*)"ane_b2FixtureProxy_setter_proxyId";
			memberFunctions[6].functionData = NULL;
			memberFunctions[6].function = &ane_b2FixtureProxy_setter_proxyId;

			memberFunctions[7].name = (const uint8_t*)"ane_b2FixtureProxy_getter_proxyId";
			memberFunctions[7].functionData = NULL;
			memberFunctions[7].function = &ane_b2FixtureProxy_getter_proxyId;

			memberFunctions[8].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[8].functionData = NULL;
			memberFunctions[8].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2FixtureProxy_instance);
		}
		break;

		case 39:		//b2Fixture
		{
			b2Fixture* b2Fixture_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 26;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2Fixture_callback_GetType";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2Fixture_callback_GetType;

			memberFunctions[1].name = (const uint8_t*)"ane_b2Fixture_callback_GetShape";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2Fixture_callback_GetShape;

			memberFunctions[2].name = (const uint8_t*)"ane_b2Fixture_callback_GetShape";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2Fixture_callback_GetShape;

			memberFunctions[3].name = (const uint8_t*)"ane_b2Fixture_callback_SetSensor";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2Fixture_callback_SetSensor;

			memberFunctions[4].name = (const uint8_t*)"ane_b2Fixture_callback_IsSensor";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_b2Fixture_callback_IsSensor;

			memberFunctions[5].name = (const uint8_t*)"ane_b2Fixture_callback_SetFilterData";
			memberFunctions[5].functionData = NULL;
			memberFunctions[5].function = &ane_b2Fixture_callback_SetFilterData;

			memberFunctions[6].name = (const uint8_t*)"ane_b2Fixture_callback_GetFilterData";
			memberFunctions[6].functionData = NULL;
			memberFunctions[6].function = &ane_b2Fixture_callback_GetFilterData;

			memberFunctions[7].name = (const uint8_t*)"ane_b2Fixture_callback_Refilter";
			memberFunctions[7].functionData = NULL;
			memberFunctions[7].function = &ane_b2Fixture_callback_Refilter;

			memberFunctions[8].name = (const uint8_t*)"ane_b2Fixture_callback_GetBody";
			memberFunctions[8].functionData = NULL;
			memberFunctions[8].function = &ane_b2Fixture_callback_GetBody;

			memberFunctions[9].name = (const uint8_t*)"ane_b2Fixture_callback_GetBody";
			memberFunctions[9].functionData = NULL;
			memberFunctions[9].function = &ane_b2Fixture_callback_GetBody;

			memberFunctions[10].name = (const uint8_t*)"ane_b2Fixture_callback_GetNext";
			memberFunctions[10].functionData = NULL;
			memberFunctions[10].function = &ane_b2Fixture_callback_GetNext;

			memberFunctions[11].name = (const uint8_t*)"ane_b2Fixture_callback_GetNext";
			memberFunctions[11].functionData = NULL;
			memberFunctions[11].function = &ane_b2Fixture_callback_GetNext;

			memberFunctions[12].name = (const uint8_t*)"ane_b2Fixture_callback_GetUserData";
			memberFunctions[12].functionData = NULL;
			memberFunctions[12].function = &ane_b2Fixture_callback_GetUserData;

			memberFunctions[13].name = (const uint8_t*)"ane_b2Fixture_callback_SetUserData";
			memberFunctions[13].functionData = NULL;
			memberFunctions[13].function = &ane_b2Fixture_callback_SetUserData;

			memberFunctions[14].name = (const uint8_t*)"ane_b2Fixture_callback_TestPoint";
			memberFunctions[14].functionData = NULL;
			memberFunctions[14].function = &ane_b2Fixture_callback_TestPoint;

			memberFunctions[15].name = (const uint8_t*)"ane_b2Fixture_callback_RayCast";
			memberFunctions[15].functionData = NULL;
			memberFunctions[15].function = &ane_b2Fixture_callback_RayCast;

			memberFunctions[16].name = (const uint8_t*)"ane_b2Fixture_callback_GetMassData";
			memberFunctions[16].functionData = NULL;
			memberFunctions[16].function = &ane_b2Fixture_callback_GetMassData;

			memberFunctions[17].name = (const uint8_t*)"ane_b2Fixture_callback_SetDensity";
			memberFunctions[17].functionData = NULL;
			memberFunctions[17].function = &ane_b2Fixture_callback_SetDensity;

			memberFunctions[18].name = (const uint8_t*)"ane_b2Fixture_callback_GetDensity";
			memberFunctions[18].functionData = NULL;
			memberFunctions[18].function = &ane_b2Fixture_callback_GetDensity;

			memberFunctions[19].name = (const uint8_t*)"ane_b2Fixture_callback_GetFriction";
			memberFunctions[19].functionData = NULL;
			memberFunctions[19].function = &ane_b2Fixture_callback_GetFriction;

			memberFunctions[20].name = (const uint8_t*)"ane_b2Fixture_callback_SetFriction";
			memberFunctions[20].functionData = NULL;
			memberFunctions[20].function = &ane_b2Fixture_callback_SetFriction;

			memberFunctions[21].name = (const uint8_t*)"ane_b2Fixture_callback_GetRestitution";
			memberFunctions[21].functionData = NULL;
			memberFunctions[21].function = &ane_b2Fixture_callback_GetRestitution;

			memberFunctions[22].name = (const uint8_t*)"ane_b2Fixture_callback_SetRestitution";
			memberFunctions[22].functionData = NULL;
			memberFunctions[22].function = &ane_b2Fixture_callback_SetRestitution;

			memberFunctions[23].name = (const uint8_t*)"ane_b2Fixture_callback_GetAABB";
			memberFunctions[23].functionData = NULL;
			memberFunctions[23].function = &ane_b2Fixture_callback_GetAABB;

			memberFunctions[24].name = (const uint8_t*)"ane_b2Fixture_callback_Dump";
			memberFunctions[24].functionData = NULL;
			memberFunctions[24].function = &ane_b2Fixture_callback_Dump;

			memberFunctions[25].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[25].functionData = NULL;
			memberFunctions[25].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2Fixture_instance);
		}
		break;

		case 40:		//b2Island
		{
			b2Island* b2Island_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 35;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2Island_constructor_b2Island";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2Island_constructor_b2Island;

			memberFunctions[1].name = (const uint8_t*)"ane_b2Island_callback_Clear";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2Island_callback_Clear;

			memberFunctions[2].name = (const uint8_t*)"ane_b2Island_callback_Solve";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2Island_callback_Solve;

			memberFunctions[3].name = (const uint8_t*)"ane_b2Island_callback_SolveTOI";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2Island_callback_SolveTOI;

			memberFunctions[4].name = (const uint8_t*)"ane_b2Island_callback_Add";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_b2Island_callback_Add;

			memberFunctions[5].name = (const uint8_t*)"ane_b2Island_callback_Add";
			memberFunctions[5].functionData = NULL;
			memberFunctions[5].function = &ane_b2Island_callback_Add;

			memberFunctions[6].name = (const uint8_t*)"ane_b2Island_callback_Add";
			memberFunctions[6].functionData = NULL;
			memberFunctions[6].function = &ane_b2Island_callback_Add;

			memberFunctions[7].name = (const uint8_t*)"ane_b2Island_callback_Report";
			memberFunctions[7].functionData = NULL;
			memberFunctions[7].function = &ane_b2Island_callback_Report;

			memberFunctions[8].name = (const uint8_t*)"ane_b2Island_setter_m_allocator";
			memberFunctions[8].functionData = NULL;
			memberFunctions[8].function = &ane_b2Island_setter_m_allocator;

			memberFunctions[9].name = (const uint8_t*)"ane_b2Island_getter_m_allocator";
			memberFunctions[9].functionData = NULL;
			memberFunctions[9].function = &ane_b2Island_getter_m_allocator;

			memberFunctions[10].name = (const uint8_t*)"ane_b2Island_setter_m_listener";
			memberFunctions[10].functionData = NULL;
			memberFunctions[10].function = &ane_b2Island_setter_m_listener;

			memberFunctions[11].name = (const uint8_t*)"ane_b2Island_getter_m_listener";
			memberFunctions[11].functionData = NULL;
			memberFunctions[11].function = &ane_b2Island_getter_m_listener;

			memberFunctions[12].name = (const uint8_t*)"ane_b2Island_setter_m_bodies";
			memberFunctions[12].functionData = NULL;
			memberFunctions[12].function = &ane_b2Island_setter_m_bodies;

			memberFunctions[13].name = (const uint8_t*)"ane_b2Island_getter_m_bodies";
			memberFunctions[13].functionData = NULL;
			memberFunctions[13].function = &ane_b2Island_getter_m_bodies;

			memberFunctions[14].name = (const uint8_t*)"ane_b2Island_setter_m_contacts";
			memberFunctions[14].functionData = NULL;
			memberFunctions[14].function = &ane_b2Island_setter_m_contacts;

			memberFunctions[15].name = (const uint8_t*)"ane_b2Island_getter_m_contacts";
			memberFunctions[15].functionData = NULL;
			memberFunctions[15].function = &ane_b2Island_getter_m_contacts;

			memberFunctions[16].name = (const uint8_t*)"ane_b2Island_setter_m_joints";
			memberFunctions[16].functionData = NULL;
			memberFunctions[16].function = &ane_b2Island_setter_m_joints;

			memberFunctions[17].name = (const uint8_t*)"ane_b2Island_getter_m_joints";
			memberFunctions[17].functionData = NULL;
			memberFunctions[17].function = &ane_b2Island_getter_m_joints;

			memberFunctions[18].name = (const uint8_t*)"ane_b2Island_setter_m_positions";
			memberFunctions[18].functionData = NULL;
			memberFunctions[18].function = &ane_b2Island_setter_m_positions;

			memberFunctions[19].name = (const uint8_t*)"ane_b2Island_getter_m_positions";
			memberFunctions[19].functionData = NULL;
			memberFunctions[19].function = &ane_b2Island_getter_m_positions;

			memberFunctions[20].name = (const uint8_t*)"ane_b2Island_setter_m_velocities";
			memberFunctions[20].functionData = NULL;
			memberFunctions[20].function = &ane_b2Island_setter_m_velocities;

			memberFunctions[21].name = (const uint8_t*)"ane_b2Island_getter_m_velocities";
			memberFunctions[21].functionData = NULL;
			memberFunctions[21].function = &ane_b2Island_getter_m_velocities;

			memberFunctions[22].name = (const uint8_t*)"ane_b2Island_setter_m_bodyCount";
			memberFunctions[22].functionData = NULL;
			memberFunctions[22].function = &ane_b2Island_setter_m_bodyCount;

			memberFunctions[23].name = (const uint8_t*)"ane_b2Island_getter_m_bodyCount";
			memberFunctions[23].functionData = NULL;
			memberFunctions[23].function = &ane_b2Island_getter_m_bodyCount;

			memberFunctions[24].name = (const uint8_t*)"ane_b2Island_setter_m_jointCount";
			memberFunctions[24].functionData = NULL;
			memberFunctions[24].function = &ane_b2Island_setter_m_jointCount;

			memberFunctions[25].name = (const uint8_t*)"ane_b2Island_getter_m_jointCount";
			memberFunctions[25].functionData = NULL;
			memberFunctions[25].function = &ane_b2Island_getter_m_jointCount;

			memberFunctions[26].name = (const uint8_t*)"ane_b2Island_setter_m_contactCount";
			memberFunctions[26].functionData = NULL;
			memberFunctions[26].function = &ane_b2Island_setter_m_contactCount;

			memberFunctions[27].name = (const uint8_t*)"ane_b2Island_getter_m_contactCount";
			memberFunctions[27].functionData = NULL;
			memberFunctions[27].function = &ane_b2Island_getter_m_contactCount;

			memberFunctions[28].name = (const uint8_t*)"ane_b2Island_setter_m_bodyCapacity";
			memberFunctions[28].functionData = NULL;
			memberFunctions[28].function = &ane_b2Island_setter_m_bodyCapacity;

			memberFunctions[29].name = (const uint8_t*)"ane_b2Island_getter_m_bodyCapacity";
			memberFunctions[29].functionData = NULL;
			memberFunctions[29].function = &ane_b2Island_getter_m_bodyCapacity;

			memberFunctions[30].name = (const uint8_t*)"ane_b2Island_setter_m_contactCapacity";
			memberFunctions[30].functionData = NULL;
			memberFunctions[30].function = &ane_b2Island_setter_m_contactCapacity;

			memberFunctions[31].name = (const uint8_t*)"ane_b2Island_getter_m_contactCapacity";
			memberFunctions[31].functionData = NULL;
			memberFunctions[31].function = &ane_b2Island_getter_m_contactCapacity;

			memberFunctions[32].name = (const uint8_t*)"ane_b2Island_setter_m_jointCapacity";
			memberFunctions[32].functionData = NULL;
			memberFunctions[32].function = &ane_b2Island_setter_m_jointCapacity;

			memberFunctions[33].name = (const uint8_t*)"ane_b2Island_getter_m_jointCapacity";
			memberFunctions[33].functionData = NULL;
			memberFunctions[33].function = &ane_b2Island_getter_m_jointCapacity;

			memberFunctions[34].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[34].functionData = NULL;
			memberFunctions[34].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2Island_instance);
		}
		break;

		case 41:		//b2Profile
		{
			b2Profile* b2Profile_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 17;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2Profile_setter_step";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2Profile_setter_step;

			memberFunctions[1].name = (const uint8_t*)"ane_b2Profile_getter_step";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2Profile_getter_step;

			memberFunctions[2].name = (const uint8_t*)"ane_b2Profile_setter_collide";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2Profile_setter_collide;

			memberFunctions[3].name = (const uint8_t*)"ane_b2Profile_getter_collide";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2Profile_getter_collide;

			memberFunctions[4].name = (const uint8_t*)"ane_b2Profile_setter_solve";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_b2Profile_setter_solve;

			memberFunctions[5].name = (const uint8_t*)"ane_b2Profile_getter_solve";
			memberFunctions[5].functionData = NULL;
			memberFunctions[5].function = &ane_b2Profile_getter_solve;

			memberFunctions[6].name = (const uint8_t*)"ane_b2Profile_setter_solveInit";
			memberFunctions[6].functionData = NULL;
			memberFunctions[6].function = &ane_b2Profile_setter_solveInit;

			memberFunctions[7].name = (const uint8_t*)"ane_b2Profile_getter_solveInit";
			memberFunctions[7].functionData = NULL;
			memberFunctions[7].function = &ane_b2Profile_getter_solveInit;

			memberFunctions[8].name = (const uint8_t*)"ane_b2Profile_setter_solveVelocity";
			memberFunctions[8].functionData = NULL;
			memberFunctions[8].function = &ane_b2Profile_setter_solveVelocity;

			memberFunctions[9].name = (const uint8_t*)"ane_b2Profile_getter_solveVelocity";
			memberFunctions[9].functionData = NULL;
			memberFunctions[9].function = &ane_b2Profile_getter_solveVelocity;

			memberFunctions[10].name = (const uint8_t*)"ane_b2Profile_setter_solvePosition";
			memberFunctions[10].functionData = NULL;
			memberFunctions[10].function = &ane_b2Profile_setter_solvePosition;

			memberFunctions[11].name = (const uint8_t*)"ane_b2Profile_getter_solvePosition";
			memberFunctions[11].functionData = NULL;
			memberFunctions[11].function = &ane_b2Profile_getter_solvePosition;

			memberFunctions[12].name = (const uint8_t*)"ane_b2Profile_setter_broadphase";
			memberFunctions[12].functionData = NULL;
			memberFunctions[12].function = &ane_b2Profile_setter_broadphase;

			memberFunctions[13].name = (const uint8_t*)"ane_b2Profile_getter_broadphase";
			memberFunctions[13].functionData = NULL;
			memberFunctions[13].function = &ane_b2Profile_getter_broadphase;

			memberFunctions[14].name = (const uint8_t*)"ane_b2Profile_setter_solveTOI";
			memberFunctions[14].functionData = NULL;
			memberFunctions[14].function = &ane_b2Profile_setter_solveTOI;

			memberFunctions[15].name = (const uint8_t*)"ane_b2Profile_getter_solveTOI";
			memberFunctions[15].functionData = NULL;
			memberFunctions[15].function = &ane_b2Profile_getter_solveTOI;

			memberFunctions[16].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[16].functionData = NULL;
			memberFunctions[16].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2Profile_instance);
		}
		break;

		case 42:		//b2TimeStep
		{
			b2TimeStep* b2TimeStep_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 13;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2TimeStep_setter_dt";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2TimeStep_setter_dt;

			memberFunctions[1].name = (const uint8_t*)"ane_b2TimeStep_getter_dt";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2TimeStep_getter_dt;

			memberFunctions[2].name = (const uint8_t*)"ane_b2TimeStep_setter_inv_dt";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2TimeStep_setter_inv_dt;

			memberFunctions[3].name = (const uint8_t*)"ane_b2TimeStep_getter_inv_dt";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2TimeStep_getter_inv_dt;

			memberFunctions[4].name = (const uint8_t*)"ane_b2TimeStep_setter_dtRatio";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_b2TimeStep_setter_dtRatio;

			memberFunctions[5].name = (const uint8_t*)"ane_b2TimeStep_getter_dtRatio";
			memberFunctions[5].functionData = NULL;
			memberFunctions[5].function = &ane_b2TimeStep_getter_dtRatio;

			memberFunctions[6].name = (const uint8_t*)"ane_b2TimeStep_setter_velocityIterations";
			memberFunctions[6].functionData = NULL;
			memberFunctions[6].function = &ane_b2TimeStep_setter_velocityIterations;

			memberFunctions[7].name = (const uint8_t*)"ane_b2TimeStep_getter_velocityIterations";
			memberFunctions[7].functionData = NULL;
			memberFunctions[7].function = &ane_b2TimeStep_getter_velocityIterations;

			memberFunctions[8].name = (const uint8_t*)"ane_b2TimeStep_setter_positionIterations";
			memberFunctions[8].functionData = NULL;
			memberFunctions[8].function = &ane_b2TimeStep_setter_positionIterations;

			memberFunctions[9].name = (const uint8_t*)"ane_b2TimeStep_getter_positionIterations";
			memberFunctions[9].functionData = NULL;
			memberFunctions[9].function = &ane_b2TimeStep_getter_positionIterations;

			memberFunctions[10].name = (const uint8_t*)"ane_b2TimeStep_setter_warmStarting";
			memberFunctions[10].functionData = NULL;
			memberFunctions[10].function = &ane_b2TimeStep_setter_warmStarting;

			memberFunctions[11].name = (const uint8_t*)"ane_b2TimeStep_getter_warmStarting";
			memberFunctions[11].functionData = NULL;
			memberFunctions[11].function = &ane_b2TimeStep_getter_warmStarting;

			memberFunctions[12].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[12].functionData = NULL;
			memberFunctions[12].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2TimeStep_instance);
		}
		break;

		case 43:		//b2Position
		{
			b2Position* b2Position_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 5;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2Position_setter_c";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2Position_setter_c;

			memberFunctions[1].name = (const uint8_t*)"ane_b2Position_getter_c";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2Position_getter_c;

			memberFunctions[2].name = (const uint8_t*)"ane_b2Position_setter_a";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2Position_setter_a;

			memberFunctions[3].name = (const uint8_t*)"ane_b2Position_getter_a";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2Position_getter_a;

			memberFunctions[4].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2Position_instance);
		}
		break;

		case 44:		//b2Velocity
		{
			b2Velocity* b2Velocity_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 5;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2Velocity_setter_v";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2Velocity_setter_v;

			memberFunctions[1].name = (const uint8_t*)"ane_b2Velocity_getter_v";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2Velocity_getter_v;

			memberFunctions[2].name = (const uint8_t*)"ane_b2Velocity_setter_w";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2Velocity_setter_w;

			memberFunctions[3].name = (const uint8_t*)"ane_b2Velocity_getter_w";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2Velocity_getter_w;

			memberFunctions[4].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2Velocity_instance);
		}
		break;

		case 45:		//b2SolverData
		{
			b2SolverData* b2SolverData_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 7;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2SolverData_setter_step";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2SolverData_setter_step;

			memberFunctions[1].name = (const uint8_t*)"ane_b2SolverData_getter_step";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2SolverData_getter_step;

			memberFunctions[2].name = (const uint8_t*)"ane_b2SolverData_setter_positions";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2SolverData_setter_positions;

			memberFunctions[3].name = (const uint8_t*)"ane_b2SolverData_getter_positions";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2SolverData_getter_positions;

			memberFunctions[4].name = (const uint8_t*)"ane_b2SolverData_setter_velocities";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_b2SolverData_setter_velocities;

			memberFunctions[5].name = (const uint8_t*)"ane_b2SolverData_getter_velocities";
			memberFunctions[5].functionData = NULL;
			memberFunctions[5].function = &ane_b2SolverData_getter_velocities;

			memberFunctions[6].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[6].functionData = NULL;
			memberFunctions[6].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2SolverData_instance);
		}
		break;

		case 46:		//b2World
		{
			b2World* b2World_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 45;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2World_constructor_b2World";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2World_constructor_b2World;

			memberFunctions[1].name = (const uint8_t*)"ane_b2World_callback_SetDestructionListener";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2World_callback_SetDestructionListener;

			memberFunctions[2].name = (const uint8_t*)"ane_b2World_callback_SetContactFilter";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2World_callback_SetContactFilter;

			memberFunctions[3].name = (const uint8_t*)"ane_b2World_callback_SetContactListener";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2World_callback_SetContactListener;

			memberFunctions[4].name = (const uint8_t*)"ane_b2World_callback_SetDebugDraw";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_b2World_callback_SetDebugDraw;

			memberFunctions[5].name = (const uint8_t*)"ane_b2World_callback_CreateBody";
			memberFunctions[5].functionData = NULL;
			memberFunctions[5].function = &ane_b2World_callback_CreateBody;

			memberFunctions[6].name = (const uint8_t*)"ane_b2World_callback_DestroyBody";
			memberFunctions[6].functionData = NULL;
			memberFunctions[6].function = &ane_b2World_callback_DestroyBody;

			memberFunctions[7].name = (const uint8_t*)"ane_b2World_callback_CreateJoint";
			memberFunctions[7].functionData = NULL;
			memberFunctions[7].function = &ane_b2World_callback_CreateJoint;

			memberFunctions[8].name = (const uint8_t*)"ane_b2World_callback_DestroyJoint";
			memberFunctions[8].functionData = NULL;
			memberFunctions[8].function = &ane_b2World_callback_DestroyJoint;

			memberFunctions[9].name = (const uint8_t*)"ane_b2World_callback_Step";
			memberFunctions[9].functionData = NULL;
			memberFunctions[9].function = &ane_b2World_callback_Step;

			memberFunctions[10].name = (const uint8_t*)"ane_b2World_callback_ClearForces";
			memberFunctions[10].functionData = NULL;
			memberFunctions[10].function = &ane_b2World_callback_ClearForces;

			memberFunctions[11].name = (const uint8_t*)"ane_b2World_callback_DrawDebugData";
			memberFunctions[11].functionData = NULL;
			memberFunctions[11].function = &ane_b2World_callback_DrawDebugData;

			memberFunctions[12].name = (const uint8_t*)"ane_b2World_callback_QueryAABB";
			memberFunctions[12].functionData = NULL;
			memberFunctions[12].function = &ane_b2World_callback_QueryAABB;

			memberFunctions[13].name = (const uint8_t*)"ane_b2World_callback_RayCast";
			memberFunctions[13].functionData = NULL;
			memberFunctions[13].function = &ane_b2World_callback_RayCast;

			memberFunctions[14].name = (const uint8_t*)"ane_b2World_callback_GetBodyList";
			memberFunctions[14].functionData = NULL;
			memberFunctions[14].function = &ane_b2World_callback_GetBodyList;

			memberFunctions[15].name = (const uint8_t*)"ane_b2World_callback_GetBodyList";
			memberFunctions[15].functionData = NULL;
			memberFunctions[15].function = &ane_b2World_callback_GetBodyList;

			memberFunctions[16].name = (const uint8_t*)"ane_b2World_callback_GetJointList";
			memberFunctions[16].functionData = NULL;
			memberFunctions[16].function = &ane_b2World_callback_GetJointList;

			memberFunctions[17].name = (const uint8_t*)"ane_b2World_callback_GetJointList";
			memberFunctions[17].functionData = NULL;
			memberFunctions[17].function = &ane_b2World_callback_GetJointList;

			memberFunctions[18].name = (const uint8_t*)"ane_b2World_callback_GetContactList";
			memberFunctions[18].functionData = NULL;
			memberFunctions[18].function = &ane_b2World_callback_GetContactList;

			memberFunctions[19].name = (const uint8_t*)"ane_b2World_callback_GetContactList";
			memberFunctions[19].functionData = NULL;
			memberFunctions[19].function = &ane_b2World_callback_GetContactList;

			memberFunctions[20].name = (const uint8_t*)"ane_b2World_callback_SetAllowSleeping";
			memberFunctions[20].functionData = NULL;
			memberFunctions[20].function = &ane_b2World_callback_SetAllowSleeping;

			memberFunctions[21].name = (const uint8_t*)"ane_b2World_callback_GetAllowSleeping";
			memberFunctions[21].functionData = NULL;
			memberFunctions[21].function = &ane_b2World_callback_GetAllowSleeping;

			memberFunctions[22].name = (const uint8_t*)"ane_b2World_callback_SetWarmStarting";
			memberFunctions[22].functionData = NULL;
			memberFunctions[22].function = &ane_b2World_callback_SetWarmStarting;

			memberFunctions[23].name = (const uint8_t*)"ane_b2World_callback_GetWarmStarting";
			memberFunctions[23].functionData = NULL;
			memberFunctions[23].function = &ane_b2World_callback_GetWarmStarting;

			memberFunctions[24].name = (const uint8_t*)"ane_b2World_callback_SetContinuousPhysics";
			memberFunctions[24].functionData = NULL;
			memberFunctions[24].function = &ane_b2World_callback_SetContinuousPhysics;

			memberFunctions[25].name = (const uint8_t*)"ane_b2World_callback_GetContinuousPhysics";
			memberFunctions[25].functionData = NULL;
			memberFunctions[25].function = &ane_b2World_callback_GetContinuousPhysics;

			memberFunctions[26].name = (const uint8_t*)"ane_b2World_callback_SetSubStepping";
			memberFunctions[26].functionData = NULL;
			memberFunctions[26].function = &ane_b2World_callback_SetSubStepping;

			memberFunctions[27].name = (const uint8_t*)"ane_b2World_callback_GetSubStepping";
			memberFunctions[27].functionData = NULL;
			memberFunctions[27].function = &ane_b2World_callback_GetSubStepping;

			memberFunctions[28].name = (const uint8_t*)"ane_b2World_callback_GetProxyCount";
			memberFunctions[28].functionData = NULL;
			memberFunctions[28].function = &ane_b2World_callback_GetProxyCount;

			memberFunctions[29].name = (const uint8_t*)"ane_b2World_callback_GetBodyCount";
			memberFunctions[29].functionData = NULL;
			memberFunctions[29].function = &ane_b2World_callback_GetBodyCount;

			memberFunctions[30].name = (const uint8_t*)"ane_b2World_callback_GetJointCount";
			memberFunctions[30].functionData = NULL;
			memberFunctions[30].function = &ane_b2World_callback_GetJointCount;

			memberFunctions[31].name = (const uint8_t*)"ane_b2World_callback_GetContactCount";
			memberFunctions[31].functionData = NULL;
			memberFunctions[31].function = &ane_b2World_callback_GetContactCount;

			memberFunctions[32].name = (const uint8_t*)"ane_b2World_callback_GetTreeHeight";
			memberFunctions[32].functionData = NULL;
			memberFunctions[32].function = &ane_b2World_callback_GetTreeHeight;

			memberFunctions[33].name = (const uint8_t*)"ane_b2World_callback_GetTreeBalance";
			memberFunctions[33].functionData = NULL;
			memberFunctions[33].function = &ane_b2World_callback_GetTreeBalance;

			memberFunctions[34].name = (const uint8_t*)"ane_b2World_callback_GetTreeQuality";
			memberFunctions[34].functionData = NULL;
			memberFunctions[34].function = &ane_b2World_callback_GetTreeQuality;

			memberFunctions[35].name = (const uint8_t*)"ane_b2World_callback_SetGravity";
			memberFunctions[35].functionData = NULL;
			memberFunctions[35].function = &ane_b2World_callback_SetGravity;

			memberFunctions[36].name = (const uint8_t*)"ane_b2World_callback_GetGravity";
			memberFunctions[36].functionData = NULL;
			memberFunctions[36].function = &ane_b2World_callback_GetGravity;

			memberFunctions[37].name = (const uint8_t*)"ane_b2World_callback_IsLocked";
			memberFunctions[37].functionData = NULL;
			memberFunctions[37].function = &ane_b2World_callback_IsLocked;

			memberFunctions[38].name = (const uint8_t*)"ane_b2World_callback_SetAutoClearForces";
			memberFunctions[38].functionData = NULL;
			memberFunctions[38].function = &ane_b2World_callback_SetAutoClearForces;

			memberFunctions[39].name = (const uint8_t*)"ane_b2World_callback_GetAutoClearForces";
			memberFunctions[39].functionData = NULL;
			memberFunctions[39].function = &ane_b2World_callback_GetAutoClearForces;

			memberFunctions[40].name = (const uint8_t*)"ane_b2World_callback_ShiftOrigin";
			memberFunctions[40].functionData = NULL;
			memberFunctions[40].function = &ane_b2World_callback_ShiftOrigin;

			memberFunctions[41].name = (const uint8_t*)"ane_b2World_callback_GetContactManager";
			memberFunctions[41].functionData = NULL;
			memberFunctions[41].function = &ane_b2World_callback_GetContactManager;

			memberFunctions[42].name = (const uint8_t*)"ane_b2World_callback_GetProfile";
			memberFunctions[42].functionData = NULL;
			memberFunctions[42].function = &ane_b2World_callback_GetProfile;

			memberFunctions[43].name = (const uint8_t*)"ane_b2World_callback_Dump";
			memberFunctions[43].functionData = NULL;
			memberFunctions[43].function = &ane_b2World_callback_Dump;

			memberFunctions[44].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[44].functionData = NULL;
			memberFunctions[44].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2World_instance);
		}
		break;

		case 47:		//b2DestructionListener
		{
			b2DestructionListener* b2DestructionListener_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 3;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2DestructionListener_callback_SayGoodbye";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2DestructionListener_callback_SayGoodbye;

			memberFunctions[1].name = (const uint8_t*)"ane_b2DestructionListener_callback_SayGoodbye";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2DestructionListener_callback_SayGoodbye;

			memberFunctions[2].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2DestructionListener_instance);
		}
		break;

		case 48:		//b2ContactFilter
		{
			b2ContactFilter* b2ContactFilter_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 2;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2ContactFilter_callback_ShouldCollide";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2ContactFilter_callback_ShouldCollide;

			memberFunctions[1].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2ContactFilter_instance);
		}
		break;

		case 49:		//b2ContactImpulse
		{
			b2ContactImpulse* b2ContactImpulse_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 3;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2ContactImpulse_setter_count";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2ContactImpulse_setter_count;

			memberFunctions[1].name = (const uint8_t*)"ane_b2ContactImpulse_getter_count";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2ContactImpulse_getter_count;

			memberFunctions[2].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2ContactImpulse_instance);
		}
		break;

		case 50:		//b2ContactListener
		{
			b2ContactListener* b2ContactListener_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 5;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2ContactListener_callback_BeginContact";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2ContactListener_callback_BeginContact;

			memberFunctions[1].name = (const uint8_t*)"ane_b2ContactListener_callback_EndContact";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2ContactListener_callback_EndContact;

			memberFunctions[2].name = (const uint8_t*)"ane_b2ContactListener_callback_PreSolve";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2ContactListener_callback_PreSolve;

			memberFunctions[3].name = (const uint8_t*)"ane_b2ContactListener_callback_PostSolve";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2ContactListener_callback_PostSolve;

			memberFunctions[4].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2ContactListener_instance);
		}
		break;

		case 51:		//b2QueryCallback
		{
			b2QueryCallback* b2QueryCallback_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 2;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2QueryCallback_callback_ReportFixture";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2QueryCallback_callback_ReportFixture;

			memberFunctions[1].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2QueryCallback_instance);
		}
		break;

		case 52:		//b2RayCastCallback
		{
			b2RayCastCallback* b2RayCastCallback_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 2;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2RayCastCallback_callback_ReportFixture";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2RayCastCallback_callback_ReportFixture;

			memberFunctions[1].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2RayCastCallback_instance);
		}
		break;

		case 53:		//b2RopeDef
		{
			b2RopeDef* b2RopeDef_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 16;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2RopeDef_constructor_b2RopeDef";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2RopeDef_constructor_b2RopeDef;

			memberFunctions[1].name = (const uint8_t*)"ane_b2RopeDef_setter_vertices";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2RopeDef_setter_vertices;

			memberFunctions[2].name = (const uint8_t*)"ane_b2RopeDef_getter_vertices";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2RopeDef_getter_vertices;

			memberFunctions[3].name = (const uint8_t*)"ane_b2RopeDef_setter_count";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2RopeDef_setter_count;

			memberFunctions[4].name = (const uint8_t*)"ane_b2RopeDef_getter_count";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_b2RopeDef_getter_count;

			memberFunctions[5].name = (const uint8_t*)"ane_b2RopeDef_setter_masses";
			memberFunctions[5].functionData = NULL;
			memberFunctions[5].function = &ane_b2RopeDef_setter_masses;

			memberFunctions[6].name = (const uint8_t*)"ane_b2RopeDef_getter_masses";
			memberFunctions[6].functionData = NULL;
			memberFunctions[6].function = &ane_b2RopeDef_getter_masses;

			memberFunctions[7].name = (const uint8_t*)"ane_b2RopeDef_setter_gravity";
			memberFunctions[7].functionData = NULL;
			memberFunctions[7].function = &ane_b2RopeDef_setter_gravity;

			memberFunctions[8].name = (const uint8_t*)"ane_b2RopeDef_getter_gravity";
			memberFunctions[8].functionData = NULL;
			memberFunctions[8].function = &ane_b2RopeDef_getter_gravity;

			memberFunctions[9].name = (const uint8_t*)"ane_b2RopeDef_setter_damping";
			memberFunctions[9].functionData = NULL;
			memberFunctions[9].function = &ane_b2RopeDef_setter_damping;

			memberFunctions[10].name = (const uint8_t*)"ane_b2RopeDef_getter_damping";
			memberFunctions[10].functionData = NULL;
			memberFunctions[10].function = &ane_b2RopeDef_getter_damping;

			memberFunctions[11].name = (const uint8_t*)"ane_b2RopeDef_setter_k2";
			memberFunctions[11].functionData = NULL;
			memberFunctions[11].function = &ane_b2RopeDef_setter_k2;

			memberFunctions[12].name = (const uint8_t*)"ane_b2RopeDef_getter_k2";
			memberFunctions[12].functionData = NULL;
			memberFunctions[12].function = &ane_b2RopeDef_getter_k2;

			memberFunctions[13].name = (const uint8_t*)"ane_b2RopeDef_setter_k3";
			memberFunctions[13].functionData = NULL;
			memberFunctions[13].function = &ane_b2RopeDef_setter_k3;

			memberFunctions[14].name = (const uint8_t*)"ane_b2RopeDef_getter_k3";
			memberFunctions[14].functionData = NULL;
			memberFunctions[14].function = &ane_b2RopeDef_getter_k3;

			memberFunctions[15].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[15].functionData = NULL;
			memberFunctions[15].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2RopeDef_instance);
		}
		break;

		case 54:		//b2Rope
		{
			b2Rope* b2Rope_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 8;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2Rope_constructor_b2Rope";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2Rope_constructor_b2Rope;

			memberFunctions[1].name = (const uint8_t*)"ane_b2Rope_callback_Initialize";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2Rope_callback_Initialize;

			memberFunctions[2].name = (const uint8_t*)"ane_b2Rope_callback_Step";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2Rope_callback_Step;

			memberFunctions[3].name = (const uint8_t*)"ane_b2Rope_callback_GetVertexCount";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2Rope_callback_GetVertexCount;

			memberFunctions[4].name = (const uint8_t*)"ane_b2Rope_callback_GetVertices";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_b2Rope_callback_GetVertices;

			memberFunctions[5].name = (const uint8_t*)"ane_b2Rope_callback_Draw";
			memberFunctions[5].functionData = NULL;
			memberFunctions[5].function = &ane_b2Rope_callback_Draw;

			memberFunctions[6].name = (const uint8_t*)"ane_b2Rope_callback_SetAngle";
			memberFunctions[6].functionData = NULL;
			memberFunctions[6].function = &ane_b2Rope_callback_SetAngle;

			memberFunctions[7].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[7].functionData = NULL;
			memberFunctions[7].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2Rope_instance);
		}
		break;

		case 55:		//b2ChainShape
		{
			b2ChainShape* b2ChainShape_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 25;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2ChainShape_constructor_b2ChainShape";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2ChainShape_constructor_b2ChainShape;

			memberFunctions[1].name = (const uint8_t*)"ane_b2ChainShape_callback_CreateLoop";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2ChainShape_callback_CreateLoop;

			memberFunctions[2].name = (const uint8_t*)"ane_b2ChainShape_callback_CreateChain";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2ChainShape_callback_CreateChain;

			memberFunctions[3].name = (const uint8_t*)"ane_b2ChainShape_callback_SetPrevVertex";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2ChainShape_callback_SetPrevVertex;

			memberFunctions[4].name = (const uint8_t*)"ane_b2ChainShape_callback_SetNextVertex";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_b2ChainShape_callback_SetNextVertex;

			memberFunctions[5].name = (const uint8_t*)"ane_b2ChainShape_callback_Clone";
			memberFunctions[5].functionData = NULL;
			memberFunctions[5].function = &ane_b2ChainShape_callback_Clone;

			memberFunctions[6].name = (const uint8_t*)"ane_b2ChainShape_callback_GetChildCount";
			memberFunctions[6].functionData = NULL;
			memberFunctions[6].function = &ane_b2ChainShape_callback_GetChildCount;

			memberFunctions[7].name = (const uint8_t*)"ane_b2ChainShape_callback_GetChildEdge";
			memberFunctions[7].functionData = NULL;
			memberFunctions[7].function = &ane_b2ChainShape_callback_GetChildEdge;

			memberFunctions[8].name = (const uint8_t*)"ane_b2ChainShape_callback_TestPoint";
			memberFunctions[8].functionData = NULL;
			memberFunctions[8].function = &ane_b2ChainShape_callback_TestPoint;

			memberFunctions[9].name = (const uint8_t*)"ane_b2ChainShape_callback_RayCast";
			memberFunctions[9].functionData = NULL;
			memberFunctions[9].function = &ane_b2ChainShape_callback_RayCast;

			memberFunctions[10].name = (const uint8_t*)"ane_b2ChainShape_callback_ComputeAABB";
			memberFunctions[10].functionData = NULL;
			memberFunctions[10].function = &ane_b2ChainShape_callback_ComputeAABB;

			memberFunctions[11].name = (const uint8_t*)"ane_b2ChainShape_callback_ComputeMass";
			memberFunctions[11].functionData = NULL;
			memberFunctions[11].function = &ane_b2ChainShape_callback_ComputeMass;

			memberFunctions[12].name = (const uint8_t*)"ane_b2ChainShape_setter_m_vertices";
			memberFunctions[12].functionData = NULL;
			memberFunctions[12].function = &ane_b2ChainShape_setter_m_vertices;

			memberFunctions[13].name = (const uint8_t*)"ane_b2ChainShape_getter_m_vertices";
			memberFunctions[13].functionData = NULL;
			memberFunctions[13].function = &ane_b2ChainShape_getter_m_vertices;

			memberFunctions[14].name = (const uint8_t*)"ane_b2ChainShape_setter_m_count";
			memberFunctions[14].functionData = NULL;
			memberFunctions[14].function = &ane_b2ChainShape_setter_m_count;

			memberFunctions[15].name = (const uint8_t*)"ane_b2ChainShape_getter_m_count";
			memberFunctions[15].functionData = NULL;
			memberFunctions[15].function = &ane_b2ChainShape_getter_m_count;

			memberFunctions[16].name = (const uint8_t*)"ane_b2ChainShape_setter_m_prevVertex";
			memberFunctions[16].functionData = NULL;
			memberFunctions[16].function = &ane_b2ChainShape_setter_m_prevVertex;

			memberFunctions[17].name = (const uint8_t*)"ane_b2ChainShape_getter_m_prevVertex";
			memberFunctions[17].functionData = NULL;
			memberFunctions[17].function = &ane_b2ChainShape_getter_m_prevVertex;

			memberFunctions[18].name = (const uint8_t*)"ane_b2ChainShape_setter_m_nextVertex";
			memberFunctions[18].functionData = NULL;
			memberFunctions[18].function = &ane_b2ChainShape_setter_m_nextVertex;

			memberFunctions[19].name = (const uint8_t*)"ane_b2ChainShape_getter_m_nextVertex";
			memberFunctions[19].functionData = NULL;
			memberFunctions[19].function = &ane_b2ChainShape_getter_m_nextVertex;

			memberFunctions[20].name = (const uint8_t*)"ane_b2ChainShape_setter_m_hasPrevVertex";
			memberFunctions[20].functionData = NULL;
			memberFunctions[20].function = &ane_b2ChainShape_setter_m_hasPrevVertex;

			memberFunctions[21].name = (const uint8_t*)"ane_b2ChainShape_getter_m_hasPrevVertex";
			memberFunctions[21].functionData = NULL;
			memberFunctions[21].function = &ane_b2ChainShape_getter_m_hasPrevVertex;

			memberFunctions[22].name = (const uint8_t*)"ane_b2ChainShape_setter_m_hasNextVertex";
			memberFunctions[22].functionData = NULL;
			memberFunctions[22].function = &ane_b2ChainShape_setter_m_hasNextVertex;

			memberFunctions[23].name = (const uint8_t*)"ane_b2ChainShape_getter_m_hasNextVertex";
			memberFunctions[23].functionData = NULL;
			memberFunctions[23].function = &ane_b2ChainShape_getter_m_hasNextVertex;

			memberFunctions[24].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[24].functionData = NULL;
			memberFunctions[24].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2ChainShape_instance);
		}
		break;

		case 56:		//b2CircleShape
		{
			b2CircleShape* b2CircleShape_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 14;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2CircleShape_constructor_b2CircleShape";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2CircleShape_constructor_b2CircleShape;

			memberFunctions[1].name = (const uint8_t*)"ane_b2CircleShape_callback_Clone";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2CircleShape_callback_Clone;

			memberFunctions[2].name = (const uint8_t*)"ane_b2CircleShape_callback_GetChildCount";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2CircleShape_callback_GetChildCount;

			memberFunctions[3].name = (const uint8_t*)"ane_b2CircleShape_callback_TestPoint";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2CircleShape_callback_TestPoint;

			memberFunctions[4].name = (const uint8_t*)"ane_b2CircleShape_callback_RayCast";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_b2CircleShape_callback_RayCast;

			memberFunctions[5].name = (const uint8_t*)"ane_b2CircleShape_callback_ComputeAABB";
			memberFunctions[5].functionData = NULL;
			memberFunctions[5].function = &ane_b2CircleShape_callback_ComputeAABB;

			memberFunctions[6].name = (const uint8_t*)"ane_b2CircleShape_callback_ComputeMass";
			memberFunctions[6].functionData = NULL;
			memberFunctions[6].function = &ane_b2CircleShape_callback_ComputeMass;

			memberFunctions[7].name = (const uint8_t*)"ane_b2CircleShape_callback_GetSupport";
			memberFunctions[7].functionData = NULL;
			memberFunctions[7].function = &ane_b2CircleShape_callback_GetSupport;

			memberFunctions[8].name = (const uint8_t*)"ane_b2CircleShape_callback_GetSupportVertex";
			memberFunctions[8].functionData = NULL;
			memberFunctions[8].function = &ane_b2CircleShape_callback_GetSupportVertex;

			memberFunctions[9].name = (const uint8_t*)"ane_b2CircleShape_callback_GetVertexCount";
			memberFunctions[9].functionData = NULL;
			memberFunctions[9].function = &ane_b2CircleShape_callback_GetVertexCount;

			memberFunctions[10].name = (const uint8_t*)"ane_b2CircleShape_callback_GetVertex";
			memberFunctions[10].functionData = NULL;
			memberFunctions[10].function = &ane_b2CircleShape_callback_GetVertex;

			memberFunctions[11].name = (const uint8_t*)"ane_b2CircleShape_setter_m_p";
			memberFunctions[11].functionData = NULL;
			memberFunctions[11].function = &ane_b2CircleShape_setter_m_p;

			memberFunctions[12].name = (const uint8_t*)"ane_b2CircleShape_getter_m_p";
			memberFunctions[12].functionData = NULL;
			memberFunctions[12].function = &ane_b2CircleShape_getter_m_p;

			memberFunctions[13].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[13].functionData = NULL;
			memberFunctions[13].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2CircleShape_instance);
		}
		break;

		case 57:		//b2EdgeShape
		{
			b2EdgeShape* b2EdgeShape_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 21;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2EdgeShape_constructor_b2EdgeShape";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2EdgeShape_constructor_b2EdgeShape;

			memberFunctions[1].name = (const uint8_t*)"ane_b2EdgeShape_callback_Set";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2EdgeShape_callback_Set;

			memberFunctions[2].name = (const uint8_t*)"ane_b2EdgeShape_callback_Clone";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2EdgeShape_callback_Clone;

			memberFunctions[3].name = (const uint8_t*)"ane_b2EdgeShape_callback_GetChildCount";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2EdgeShape_callback_GetChildCount;

			memberFunctions[4].name = (const uint8_t*)"ane_b2EdgeShape_callback_TestPoint";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_b2EdgeShape_callback_TestPoint;

			memberFunctions[5].name = (const uint8_t*)"ane_b2EdgeShape_callback_RayCast";
			memberFunctions[5].functionData = NULL;
			memberFunctions[5].function = &ane_b2EdgeShape_callback_RayCast;

			memberFunctions[6].name = (const uint8_t*)"ane_b2EdgeShape_callback_ComputeAABB";
			memberFunctions[6].functionData = NULL;
			memberFunctions[6].function = &ane_b2EdgeShape_callback_ComputeAABB;

			memberFunctions[7].name = (const uint8_t*)"ane_b2EdgeShape_callback_ComputeMass";
			memberFunctions[7].functionData = NULL;
			memberFunctions[7].function = &ane_b2EdgeShape_callback_ComputeMass;

			memberFunctions[8].name = (const uint8_t*)"ane_b2EdgeShape_setter_m_vertex1";
			memberFunctions[8].functionData = NULL;
			memberFunctions[8].function = &ane_b2EdgeShape_setter_m_vertex1;

			memberFunctions[9].name = (const uint8_t*)"ane_b2EdgeShape_getter_m_vertex1";
			memberFunctions[9].functionData = NULL;
			memberFunctions[9].function = &ane_b2EdgeShape_getter_m_vertex1;

			memberFunctions[10].name = (const uint8_t*)"ane_b2EdgeShape_setter_m_vertex2";
			memberFunctions[10].functionData = NULL;
			memberFunctions[10].function = &ane_b2EdgeShape_setter_m_vertex2;

			memberFunctions[11].name = (const uint8_t*)"ane_b2EdgeShape_getter_m_vertex2";
			memberFunctions[11].functionData = NULL;
			memberFunctions[11].function = &ane_b2EdgeShape_getter_m_vertex2;

			memberFunctions[12].name = (const uint8_t*)"ane_b2EdgeShape_setter_m_vertex0";
			memberFunctions[12].functionData = NULL;
			memberFunctions[12].function = &ane_b2EdgeShape_setter_m_vertex0;

			memberFunctions[13].name = (const uint8_t*)"ane_b2EdgeShape_getter_m_vertex0";
			memberFunctions[13].functionData = NULL;
			memberFunctions[13].function = &ane_b2EdgeShape_getter_m_vertex0;

			memberFunctions[14].name = (const uint8_t*)"ane_b2EdgeShape_setter_m_vertex3";
			memberFunctions[14].functionData = NULL;
			memberFunctions[14].function = &ane_b2EdgeShape_setter_m_vertex3;

			memberFunctions[15].name = (const uint8_t*)"ane_b2EdgeShape_getter_m_vertex3";
			memberFunctions[15].functionData = NULL;
			memberFunctions[15].function = &ane_b2EdgeShape_getter_m_vertex3;

			memberFunctions[16].name = (const uint8_t*)"ane_b2EdgeShape_setter_m_hasVertex0";
			memberFunctions[16].functionData = NULL;
			memberFunctions[16].function = &ane_b2EdgeShape_setter_m_hasVertex0;

			memberFunctions[17].name = (const uint8_t*)"ane_b2EdgeShape_getter_m_hasVertex0";
			memberFunctions[17].functionData = NULL;
			memberFunctions[17].function = &ane_b2EdgeShape_getter_m_hasVertex0;

			memberFunctions[18].name = (const uint8_t*)"ane_b2EdgeShape_setter_m_hasVertex3";
			memberFunctions[18].functionData = NULL;
			memberFunctions[18].function = &ane_b2EdgeShape_setter_m_hasVertex3;

			memberFunctions[19].name = (const uint8_t*)"ane_b2EdgeShape_getter_m_hasVertex3";
			memberFunctions[19].functionData = NULL;
			memberFunctions[19].function = &ane_b2EdgeShape_getter_m_hasVertex3;

			memberFunctions[20].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[20].functionData = NULL;
			memberFunctions[20].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2EdgeShape_instance);
		}
		break;

		case 58:		//b2PolygonShape
		{
			b2PolygonShape* b2PolygonShape_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 18;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2PolygonShape_constructor_b2PolygonShape";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2PolygonShape_constructor_b2PolygonShape;

			memberFunctions[1].name = (const uint8_t*)"ane_b2PolygonShape_callback_Clone";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2PolygonShape_callback_Clone;

			memberFunctions[2].name = (const uint8_t*)"ane_b2PolygonShape_callback_GetChildCount";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2PolygonShape_callback_GetChildCount;

			memberFunctions[3].name = (const uint8_t*)"ane_b2PolygonShape_callback_Set";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2PolygonShape_callback_Set;

			memberFunctions[4].name = (const uint8_t*)"ane_b2PolygonShape_callback_SetAsBox";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_b2PolygonShape_callback_SetAsBox;

			memberFunctions[5].name = (const uint8_t*)"ane_b2PolygonShape_callback_SetAsBox";
			memberFunctions[5].functionData = NULL;
			memberFunctions[5].function = &ane_b2PolygonShape_callback_SetAsBox;

			memberFunctions[6].name = (const uint8_t*)"ane_b2PolygonShape_callback_TestPoint";
			memberFunctions[6].functionData = NULL;
			memberFunctions[6].function = &ane_b2PolygonShape_callback_TestPoint;

			memberFunctions[7].name = (const uint8_t*)"ane_b2PolygonShape_callback_RayCast";
			memberFunctions[7].functionData = NULL;
			memberFunctions[7].function = &ane_b2PolygonShape_callback_RayCast;

			memberFunctions[8].name = (const uint8_t*)"ane_b2PolygonShape_callback_ComputeAABB";
			memberFunctions[8].functionData = NULL;
			memberFunctions[8].function = &ane_b2PolygonShape_callback_ComputeAABB;

			memberFunctions[9].name = (const uint8_t*)"ane_b2PolygonShape_callback_ComputeMass";
			memberFunctions[9].functionData = NULL;
			memberFunctions[9].function = &ane_b2PolygonShape_callback_ComputeMass;

			memberFunctions[10].name = (const uint8_t*)"ane_b2PolygonShape_callback_GetVertexCount";
			memberFunctions[10].functionData = NULL;
			memberFunctions[10].function = &ane_b2PolygonShape_callback_GetVertexCount;

			memberFunctions[11].name = (const uint8_t*)"ane_b2PolygonShape_callback_GetVertex";
			memberFunctions[11].functionData = NULL;
			memberFunctions[11].function = &ane_b2PolygonShape_callback_GetVertex;

			memberFunctions[12].name = (const uint8_t*)"ane_b2PolygonShape_callback_Validate";
			memberFunctions[12].functionData = NULL;
			memberFunctions[12].function = &ane_b2PolygonShape_callback_Validate;

			memberFunctions[13].name = (const uint8_t*)"ane_b2PolygonShape_setter_m_centroid";
			memberFunctions[13].functionData = NULL;
			memberFunctions[13].function = &ane_b2PolygonShape_setter_m_centroid;

			memberFunctions[14].name = (const uint8_t*)"ane_b2PolygonShape_getter_m_centroid";
			memberFunctions[14].functionData = NULL;
			memberFunctions[14].function = &ane_b2PolygonShape_getter_m_centroid;

			memberFunctions[15].name = (const uint8_t*)"ane_b2PolygonShape_setter_m_count";
			memberFunctions[15].functionData = NULL;
			memberFunctions[15].function = &ane_b2PolygonShape_setter_m_count;

			memberFunctions[16].name = (const uint8_t*)"ane_b2PolygonShape_getter_m_count";
			memberFunctions[16].functionData = NULL;
			memberFunctions[16].function = &ane_b2PolygonShape_getter_m_count;

			memberFunctions[17].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[17].functionData = NULL;
			memberFunctions[17].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2PolygonShape_instance);
		}
		break;

		case 59:		//b2MassData
		{
			b2MassData* b2MassData_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 7;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2MassData_setter_mass";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2MassData_setter_mass;

			memberFunctions[1].name = (const uint8_t*)"ane_b2MassData_getter_mass";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2MassData_getter_mass;

			memberFunctions[2].name = (const uint8_t*)"ane_b2MassData_setter_center";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2MassData_setter_center;

			memberFunctions[3].name = (const uint8_t*)"ane_b2MassData_getter_center";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2MassData_getter_center;

			memberFunctions[4].name = (const uint8_t*)"ane_b2MassData_setter_I";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_b2MassData_setter_I;

			memberFunctions[5].name = (const uint8_t*)"ane_b2MassData_getter_I";
			memberFunctions[5].functionData = NULL;
			memberFunctions[5].function = &ane_b2MassData_getter_I;

			memberFunctions[6].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[6].functionData = NULL;
			memberFunctions[6].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2MassData_instance);
		}
		break;

		case 60:		//b2Shape
		{
			b2Shape* b2Shape_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 12;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2Shape_callback_Clone";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2Shape_callback_Clone;

			memberFunctions[1].name = (const uint8_t*)"ane_b2Shape_callback_GetType";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2Shape_callback_GetType;

			memberFunctions[2].name = (const uint8_t*)"ane_b2Shape_callback_GetChildCount";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2Shape_callback_GetChildCount;

			memberFunctions[3].name = (const uint8_t*)"ane_b2Shape_callback_TestPoint";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2Shape_callback_TestPoint;

			memberFunctions[4].name = (const uint8_t*)"ane_b2Shape_callback_RayCast";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_b2Shape_callback_RayCast;

			memberFunctions[5].name = (const uint8_t*)"ane_b2Shape_callback_ComputeAABB";
			memberFunctions[5].functionData = NULL;
			memberFunctions[5].function = &ane_b2Shape_callback_ComputeAABB;

			memberFunctions[6].name = (const uint8_t*)"ane_b2Shape_callback_ComputeMass";
			memberFunctions[6].functionData = NULL;
			memberFunctions[6].function = &ane_b2Shape_callback_ComputeMass;

			memberFunctions[7].name = (const uint8_t*)"ane_b2Shape_setter_m_type";
			memberFunctions[7].functionData = NULL;
			memberFunctions[7].function = &ane_b2Shape_setter_m_type;

			memberFunctions[8].name = (const uint8_t*)"ane_b2Shape_getter_m_type";
			memberFunctions[8].functionData = NULL;
			memberFunctions[8].function = &ane_b2Shape_getter_m_type;

			memberFunctions[9].name = (const uint8_t*)"ane_b2Shape_setter_m_radius";
			memberFunctions[9].functionData = NULL;
			memberFunctions[9].function = &ane_b2Shape_setter_m_radius;

			memberFunctions[10].name = (const uint8_t*)"ane_b2Shape_getter_m_radius";
			memberFunctions[10].functionData = NULL;
			memberFunctions[10].function = &ane_b2Shape_getter_m_radius;

			memberFunctions[11].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[11].functionData = NULL;
			memberFunctions[11].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2Shape_instance);
		}
		break;

		case 61:		//b2ChainAndCircleContact
		{
			b2ChainAndCircleContact* b2ChainAndCircleContact_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 5;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2ChainAndCircleContact_callback_Create";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2ChainAndCircleContact_callback_Create;

			memberFunctions[1].name = (const uint8_t*)"ane_b2ChainAndCircleContact_callback_Destroy";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2ChainAndCircleContact_callback_Destroy;

			memberFunctions[2].name = (const uint8_t*)"ane_b2ChainAndCircleContact_constructor_b2ChainAndCircleContact";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2ChainAndCircleContact_constructor_b2ChainAndCircleContact;

			memberFunctions[3].name = (const uint8_t*)"ane_b2ChainAndCircleContact_callback_Evaluate";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2ChainAndCircleContact_callback_Evaluate;

			memberFunctions[4].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2ChainAndCircleContact_instance);
		}
		break;

		case 62:		//b2ChainAndPolygonContact
		{
			b2ChainAndPolygonContact* b2ChainAndPolygonContact_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 5;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2ChainAndPolygonContact_callback_Create";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2ChainAndPolygonContact_callback_Create;

			memberFunctions[1].name = (const uint8_t*)"ane_b2ChainAndPolygonContact_callback_Destroy";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2ChainAndPolygonContact_callback_Destroy;

			memberFunctions[2].name = (const uint8_t*)"ane_b2ChainAndPolygonContact_constructor_b2ChainAndPolygonContact";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2ChainAndPolygonContact_constructor_b2ChainAndPolygonContact;

			memberFunctions[3].name = (const uint8_t*)"ane_b2ChainAndPolygonContact_callback_Evaluate";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2ChainAndPolygonContact_callback_Evaluate;

			memberFunctions[4].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2ChainAndPolygonContact_instance);
		}
		break;

		case 63:		//b2CircleContact
		{
			b2CircleContact* b2CircleContact_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 5;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2CircleContact_callback_Create";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2CircleContact_callback_Create;

			memberFunctions[1].name = (const uint8_t*)"ane_b2CircleContact_callback_Destroy";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2CircleContact_callback_Destroy;

			memberFunctions[2].name = (const uint8_t*)"ane_b2CircleContact_constructor_b2CircleContact";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2CircleContact_constructor_b2CircleContact;

			memberFunctions[3].name = (const uint8_t*)"ane_b2CircleContact_callback_Evaluate";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2CircleContact_callback_Evaluate;

			memberFunctions[4].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2CircleContact_instance);
		}
		break;

		case 64:		//b2ContactRegister
		{
			b2ContactRegister* b2ContactRegister_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 7;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2ContactRegister_setter_createFcn";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2ContactRegister_setter_createFcn;

			memberFunctions[1].name = (const uint8_t*)"ane_b2ContactRegister_getter_createFcn";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2ContactRegister_getter_createFcn;

			memberFunctions[2].name = (const uint8_t*)"ane_b2ContactRegister_setter_destroyFcn";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2ContactRegister_setter_destroyFcn;

			memberFunctions[3].name = (const uint8_t*)"ane_b2ContactRegister_getter_destroyFcn";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2ContactRegister_getter_destroyFcn;

			memberFunctions[4].name = (const uint8_t*)"ane_b2ContactRegister_setter_primary";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_b2ContactRegister_setter_primary;

			memberFunctions[5].name = (const uint8_t*)"ane_b2ContactRegister_getter_primary";
			memberFunctions[5].functionData = NULL;
			memberFunctions[5].function = &ane_b2ContactRegister_getter_primary;

			memberFunctions[6].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[6].functionData = NULL;
			memberFunctions[6].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2ContactRegister_instance);
		}
		break;

		case 65:		//b2ContactEdge
		{
			b2ContactEdge* b2ContactEdge_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 9;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2ContactEdge_setter_other";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2ContactEdge_setter_other;

			memberFunctions[1].name = (const uint8_t*)"ane_b2ContactEdge_getter_other";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2ContactEdge_getter_other;

			memberFunctions[2].name = (const uint8_t*)"ane_b2ContactEdge_setter_contact";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2ContactEdge_setter_contact;

			memberFunctions[3].name = (const uint8_t*)"ane_b2ContactEdge_getter_contact";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2ContactEdge_getter_contact;

			memberFunctions[4].name = (const uint8_t*)"ane_b2ContactEdge_setter_prev";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_b2ContactEdge_setter_prev;

			memberFunctions[5].name = (const uint8_t*)"ane_b2ContactEdge_getter_prev";
			memberFunctions[5].functionData = NULL;
			memberFunctions[5].function = &ane_b2ContactEdge_getter_prev;

			memberFunctions[6].name = (const uint8_t*)"ane_b2ContactEdge_setter_next";
			memberFunctions[6].functionData = NULL;
			memberFunctions[6].function = &ane_b2ContactEdge_setter_next;

			memberFunctions[7].name = (const uint8_t*)"ane_b2ContactEdge_getter_next";
			memberFunctions[7].functionData = NULL;
			memberFunctions[7].function = &ane_b2ContactEdge_getter_next;

			memberFunctions[8].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[8].functionData = NULL;
			memberFunctions[8].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2ContactEdge_instance);
		}
		break;

		case 66:		//b2Contact
		{
			b2Contact* b2Contact_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 24;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2Contact_callback_GetManifold";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2Contact_callback_GetManifold;

			memberFunctions[1].name = (const uint8_t*)"ane_b2Contact_callback_GetManifold";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2Contact_callback_GetManifold;

			memberFunctions[2].name = (const uint8_t*)"ane_b2Contact_callback_GetWorldManifold";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2Contact_callback_GetWorldManifold;

			memberFunctions[3].name = (const uint8_t*)"ane_b2Contact_callback_IsTouching";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2Contact_callback_IsTouching;

			memberFunctions[4].name = (const uint8_t*)"ane_b2Contact_callback_SetEnabled";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_b2Contact_callback_SetEnabled;

			memberFunctions[5].name = (const uint8_t*)"ane_b2Contact_callback_IsEnabled";
			memberFunctions[5].functionData = NULL;
			memberFunctions[5].function = &ane_b2Contact_callback_IsEnabled;

			memberFunctions[6].name = (const uint8_t*)"ane_b2Contact_callback_GetNext";
			memberFunctions[6].functionData = NULL;
			memberFunctions[6].function = &ane_b2Contact_callback_GetNext;

			memberFunctions[7].name = (const uint8_t*)"ane_b2Contact_callback_GetNext";
			memberFunctions[7].functionData = NULL;
			memberFunctions[7].function = &ane_b2Contact_callback_GetNext;

			memberFunctions[8].name = (const uint8_t*)"ane_b2Contact_callback_GetFixtureA";
			memberFunctions[8].functionData = NULL;
			memberFunctions[8].function = &ane_b2Contact_callback_GetFixtureA;

			memberFunctions[9].name = (const uint8_t*)"ane_b2Contact_callback_GetFixtureA";
			memberFunctions[9].functionData = NULL;
			memberFunctions[9].function = &ane_b2Contact_callback_GetFixtureA;

			memberFunctions[10].name = (const uint8_t*)"ane_b2Contact_callback_GetChildIndexA";
			memberFunctions[10].functionData = NULL;
			memberFunctions[10].function = &ane_b2Contact_callback_GetChildIndexA;

			memberFunctions[11].name = (const uint8_t*)"ane_b2Contact_callback_GetFixtureB";
			memberFunctions[11].functionData = NULL;
			memberFunctions[11].function = &ane_b2Contact_callback_GetFixtureB;

			memberFunctions[12].name = (const uint8_t*)"ane_b2Contact_callback_GetFixtureB";
			memberFunctions[12].functionData = NULL;
			memberFunctions[12].function = &ane_b2Contact_callback_GetFixtureB;

			memberFunctions[13].name = (const uint8_t*)"ane_b2Contact_callback_GetChildIndexB";
			memberFunctions[13].functionData = NULL;
			memberFunctions[13].function = &ane_b2Contact_callback_GetChildIndexB;

			memberFunctions[14].name = (const uint8_t*)"ane_b2Contact_callback_SetFriction";
			memberFunctions[14].functionData = NULL;
			memberFunctions[14].function = &ane_b2Contact_callback_SetFriction;

			memberFunctions[15].name = (const uint8_t*)"ane_b2Contact_callback_GetFriction";
			memberFunctions[15].functionData = NULL;
			memberFunctions[15].function = &ane_b2Contact_callback_GetFriction;

			memberFunctions[16].name = (const uint8_t*)"ane_b2Contact_callback_ResetFriction";
			memberFunctions[16].functionData = NULL;
			memberFunctions[16].function = &ane_b2Contact_callback_ResetFriction;

			memberFunctions[17].name = (const uint8_t*)"ane_b2Contact_callback_SetRestitution";
			memberFunctions[17].functionData = NULL;
			memberFunctions[17].function = &ane_b2Contact_callback_SetRestitution;

			memberFunctions[18].name = (const uint8_t*)"ane_b2Contact_callback_GetRestitution";
			memberFunctions[18].functionData = NULL;
			memberFunctions[18].function = &ane_b2Contact_callback_GetRestitution;

			memberFunctions[19].name = (const uint8_t*)"ane_b2Contact_callback_ResetRestitution";
			memberFunctions[19].functionData = NULL;
			memberFunctions[19].function = &ane_b2Contact_callback_ResetRestitution;

			memberFunctions[20].name = (const uint8_t*)"ane_b2Contact_callback_SetTangentSpeed";
			memberFunctions[20].functionData = NULL;
			memberFunctions[20].function = &ane_b2Contact_callback_SetTangentSpeed;

			memberFunctions[21].name = (const uint8_t*)"ane_b2Contact_callback_GetTangentSpeed";
			memberFunctions[21].functionData = NULL;
			memberFunctions[21].function = &ane_b2Contact_callback_GetTangentSpeed;

			memberFunctions[22].name = (const uint8_t*)"ane_b2Contact_callback_Evaluate";
			memberFunctions[22].functionData = NULL;
			memberFunctions[22].function = &ane_b2Contact_callback_Evaluate;

			memberFunctions[23].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[23].functionData = NULL;
			memberFunctions[23].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2Contact_instance);
		}
		break;

		case 67:		//b2VelocityConstraintPoint
		{
			b2VelocityConstraintPoint* b2VelocityConstraintPoint_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 15;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2VelocityConstraintPoint_setter_rA";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2VelocityConstraintPoint_setter_rA;

			memberFunctions[1].name = (const uint8_t*)"ane_b2VelocityConstraintPoint_getter_rA";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2VelocityConstraintPoint_getter_rA;

			memberFunctions[2].name = (const uint8_t*)"ane_b2VelocityConstraintPoint_setter_rB";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2VelocityConstraintPoint_setter_rB;

			memberFunctions[3].name = (const uint8_t*)"ane_b2VelocityConstraintPoint_getter_rB";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2VelocityConstraintPoint_getter_rB;

			memberFunctions[4].name = (const uint8_t*)"ane_b2VelocityConstraintPoint_setter_normalImpulse";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_b2VelocityConstraintPoint_setter_normalImpulse;

			memberFunctions[5].name = (const uint8_t*)"ane_b2VelocityConstraintPoint_getter_normalImpulse";
			memberFunctions[5].functionData = NULL;
			memberFunctions[5].function = &ane_b2VelocityConstraintPoint_getter_normalImpulse;

			memberFunctions[6].name = (const uint8_t*)"ane_b2VelocityConstraintPoint_setter_tangentImpulse";
			memberFunctions[6].functionData = NULL;
			memberFunctions[6].function = &ane_b2VelocityConstraintPoint_setter_tangentImpulse;

			memberFunctions[7].name = (const uint8_t*)"ane_b2VelocityConstraintPoint_getter_tangentImpulse";
			memberFunctions[7].functionData = NULL;
			memberFunctions[7].function = &ane_b2VelocityConstraintPoint_getter_tangentImpulse;

			memberFunctions[8].name = (const uint8_t*)"ane_b2VelocityConstraintPoint_setter_normalMass";
			memberFunctions[8].functionData = NULL;
			memberFunctions[8].function = &ane_b2VelocityConstraintPoint_setter_normalMass;

			memberFunctions[9].name = (const uint8_t*)"ane_b2VelocityConstraintPoint_getter_normalMass";
			memberFunctions[9].functionData = NULL;
			memberFunctions[9].function = &ane_b2VelocityConstraintPoint_getter_normalMass;

			memberFunctions[10].name = (const uint8_t*)"ane_b2VelocityConstraintPoint_setter_tangentMass";
			memberFunctions[10].functionData = NULL;
			memberFunctions[10].function = &ane_b2VelocityConstraintPoint_setter_tangentMass;

			memberFunctions[11].name = (const uint8_t*)"ane_b2VelocityConstraintPoint_getter_tangentMass";
			memberFunctions[11].functionData = NULL;
			memberFunctions[11].function = &ane_b2VelocityConstraintPoint_getter_tangentMass;

			memberFunctions[12].name = (const uint8_t*)"ane_b2VelocityConstraintPoint_setter_velocityBias";
			memberFunctions[12].functionData = NULL;
			memberFunctions[12].function = &ane_b2VelocityConstraintPoint_setter_velocityBias;

			memberFunctions[13].name = (const uint8_t*)"ane_b2VelocityConstraintPoint_getter_velocityBias";
			memberFunctions[13].functionData = NULL;
			memberFunctions[13].function = &ane_b2VelocityConstraintPoint_getter_velocityBias;

			memberFunctions[14].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[14].functionData = NULL;
			memberFunctions[14].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2VelocityConstraintPoint_instance);
		}
		break;

		case 68:		//b2ContactVelocityConstraint
		{
			b2ContactVelocityConstraint* b2ContactVelocityConstraint_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 29;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2ContactVelocityConstraint_setter_normal";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2ContactVelocityConstraint_setter_normal;

			memberFunctions[1].name = (const uint8_t*)"ane_b2ContactVelocityConstraint_getter_normal";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2ContactVelocityConstraint_getter_normal;

			memberFunctions[2].name = (const uint8_t*)"ane_b2ContactVelocityConstraint_setter_normalMass";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2ContactVelocityConstraint_setter_normalMass;

			memberFunctions[3].name = (const uint8_t*)"ane_b2ContactVelocityConstraint_getter_normalMass";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2ContactVelocityConstraint_getter_normalMass;

			memberFunctions[4].name = (const uint8_t*)"ane_b2ContactVelocityConstraint_setter_K";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_b2ContactVelocityConstraint_setter_K;

			memberFunctions[5].name = (const uint8_t*)"ane_b2ContactVelocityConstraint_getter_K";
			memberFunctions[5].functionData = NULL;
			memberFunctions[5].function = &ane_b2ContactVelocityConstraint_getter_K;

			memberFunctions[6].name = (const uint8_t*)"ane_b2ContactVelocityConstraint_setter_indexA";
			memberFunctions[6].functionData = NULL;
			memberFunctions[6].function = &ane_b2ContactVelocityConstraint_setter_indexA;

			memberFunctions[7].name = (const uint8_t*)"ane_b2ContactVelocityConstraint_getter_indexA";
			memberFunctions[7].functionData = NULL;
			memberFunctions[7].function = &ane_b2ContactVelocityConstraint_getter_indexA;

			memberFunctions[8].name = (const uint8_t*)"ane_b2ContactVelocityConstraint_setter_indexB";
			memberFunctions[8].functionData = NULL;
			memberFunctions[8].function = &ane_b2ContactVelocityConstraint_setter_indexB;

			memberFunctions[9].name = (const uint8_t*)"ane_b2ContactVelocityConstraint_getter_indexB";
			memberFunctions[9].functionData = NULL;
			memberFunctions[9].function = &ane_b2ContactVelocityConstraint_getter_indexB;

			memberFunctions[10].name = (const uint8_t*)"ane_b2ContactVelocityConstraint_setter_invMassA";
			memberFunctions[10].functionData = NULL;
			memberFunctions[10].function = &ane_b2ContactVelocityConstraint_setter_invMassA;

			memberFunctions[11].name = (const uint8_t*)"ane_b2ContactVelocityConstraint_getter_invMassA";
			memberFunctions[11].functionData = NULL;
			memberFunctions[11].function = &ane_b2ContactVelocityConstraint_getter_invMassA;

			memberFunctions[12].name = (const uint8_t*)"ane_b2ContactVelocityConstraint_setter_invMassB";
			memberFunctions[12].functionData = NULL;
			memberFunctions[12].function = &ane_b2ContactVelocityConstraint_setter_invMassB;

			memberFunctions[13].name = (const uint8_t*)"ane_b2ContactVelocityConstraint_getter_invMassB";
			memberFunctions[13].functionData = NULL;
			memberFunctions[13].function = &ane_b2ContactVelocityConstraint_getter_invMassB;

			memberFunctions[14].name = (const uint8_t*)"ane_b2ContactVelocityConstraint_setter_invIA";
			memberFunctions[14].functionData = NULL;
			memberFunctions[14].function = &ane_b2ContactVelocityConstraint_setter_invIA;

			memberFunctions[15].name = (const uint8_t*)"ane_b2ContactVelocityConstraint_getter_invIA";
			memberFunctions[15].functionData = NULL;
			memberFunctions[15].function = &ane_b2ContactVelocityConstraint_getter_invIA;

			memberFunctions[16].name = (const uint8_t*)"ane_b2ContactVelocityConstraint_setter_invIB";
			memberFunctions[16].functionData = NULL;
			memberFunctions[16].function = &ane_b2ContactVelocityConstraint_setter_invIB;

			memberFunctions[17].name = (const uint8_t*)"ane_b2ContactVelocityConstraint_getter_invIB";
			memberFunctions[17].functionData = NULL;
			memberFunctions[17].function = &ane_b2ContactVelocityConstraint_getter_invIB;

			memberFunctions[18].name = (const uint8_t*)"ane_b2ContactVelocityConstraint_setter_friction";
			memberFunctions[18].functionData = NULL;
			memberFunctions[18].function = &ane_b2ContactVelocityConstraint_setter_friction;

			memberFunctions[19].name = (const uint8_t*)"ane_b2ContactVelocityConstraint_getter_friction";
			memberFunctions[19].functionData = NULL;
			memberFunctions[19].function = &ane_b2ContactVelocityConstraint_getter_friction;

			memberFunctions[20].name = (const uint8_t*)"ane_b2ContactVelocityConstraint_setter_restitution";
			memberFunctions[20].functionData = NULL;
			memberFunctions[20].function = &ane_b2ContactVelocityConstraint_setter_restitution;

			memberFunctions[21].name = (const uint8_t*)"ane_b2ContactVelocityConstraint_getter_restitution";
			memberFunctions[21].functionData = NULL;
			memberFunctions[21].function = &ane_b2ContactVelocityConstraint_getter_restitution;

			memberFunctions[22].name = (const uint8_t*)"ane_b2ContactVelocityConstraint_setter_tangentSpeed";
			memberFunctions[22].functionData = NULL;
			memberFunctions[22].function = &ane_b2ContactVelocityConstraint_setter_tangentSpeed;

			memberFunctions[23].name = (const uint8_t*)"ane_b2ContactVelocityConstraint_getter_tangentSpeed";
			memberFunctions[23].functionData = NULL;
			memberFunctions[23].function = &ane_b2ContactVelocityConstraint_getter_tangentSpeed;

			memberFunctions[24].name = (const uint8_t*)"ane_b2ContactVelocityConstraint_setter_pointCount";
			memberFunctions[24].functionData = NULL;
			memberFunctions[24].function = &ane_b2ContactVelocityConstraint_setter_pointCount;

			memberFunctions[25].name = (const uint8_t*)"ane_b2ContactVelocityConstraint_getter_pointCount";
			memberFunctions[25].functionData = NULL;
			memberFunctions[25].function = &ane_b2ContactVelocityConstraint_getter_pointCount;

			memberFunctions[26].name = (const uint8_t*)"ane_b2ContactVelocityConstraint_setter_contactIndex";
			memberFunctions[26].functionData = NULL;
			memberFunctions[26].function = &ane_b2ContactVelocityConstraint_setter_contactIndex;

			memberFunctions[27].name = (const uint8_t*)"ane_b2ContactVelocityConstraint_getter_contactIndex";
			memberFunctions[27].functionData = NULL;
			memberFunctions[27].function = &ane_b2ContactVelocityConstraint_getter_contactIndex;

			memberFunctions[28].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[28].functionData = NULL;
			memberFunctions[28].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2ContactVelocityConstraint_instance);
		}
		break;

		case 69:		//b2ContactSolverDef
		{
			b2ContactSolverDef* b2ContactSolverDef_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 13;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2ContactSolverDef_setter_step";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2ContactSolverDef_setter_step;

			memberFunctions[1].name = (const uint8_t*)"ane_b2ContactSolverDef_getter_step";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2ContactSolverDef_getter_step;

			memberFunctions[2].name = (const uint8_t*)"ane_b2ContactSolverDef_setter_contacts";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2ContactSolverDef_setter_contacts;

			memberFunctions[3].name = (const uint8_t*)"ane_b2ContactSolverDef_getter_contacts";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2ContactSolverDef_getter_contacts;

			memberFunctions[4].name = (const uint8_t*)"ane_b2ContactSolverDef_setter_count";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_b2ContactSolverDef_setter_count;

			memberFunctions[5].name = (const uint8_t*)"ane_b2ContactSolverDef_getter_count";
			memberFunctions[5].functionData = NULL;
			memberFunctions[5].function = &ane_b2ContactSolverDef_getter_count;

			memberFunctions[6].name = (const uint8_t*)"ane_b2ContactSolverDef_setter_positions";
			memberFunctions[6].functionData = NULL;
			memberFunctions[6].function = &ane_b2ContactSolverDef_setter_positions;

			memberFunctions[7].name = (const uint8_t*)"ane_b2ContactSolverDef_getter_positions";
			memberFunctions[7].functionData = NULL;
			memberFunctions[7].function = &ane_b2ContactSolverDef_getter_positions;

			memberFunctions[8].name = (const uint8_t*)"ane_b2ContactSolverDef_setter_velocities";
			memberFunctions[8].functionData = NULL;
			memberFunctions[8].function = &ane_b2ContactSolverDef_setter_velocities;

			memberFunctions[9].name = (const uint8_t*)"ane_b2ContactSolverDef_getter_velocities";
			memberFunctions[9].functionData = NULL;
			memberFunctions[9].function = &ane_b2ContactSolverDef_getter_velocities;

			memberFunctions[10].name = (const uint8_t*)"ane_b2ContactSolverDef_setter_allocator";
			memberFunctions[10].functionData = NULL;
			memberFunctions[10].function = &ane_b2ContactSolverDef_setter_allocator;

			memberFunctions[11].name = (const uint8_t*)"ane_b2ContactSolverDef_getter_allocator";
			memberFunctions[11].functionData = NULL;
			memberFunctions[11].function = &ane_b2ContactSolverDef_getter_allocator;

			memberFunctions[12].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[12].functionData = NULL;
			memberFunctions[12].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2ContactSolverDef_instance);
		}
		break;

		case 70:		//b2ContactSolver
		{
			b2ContactSolver* b2ContactSolver_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 24;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2ContactSolver_constructor_b2ContactSolver";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2ContactSolver_constructor_b2ContactSolver;

			memberFunctions[1].name = (const uint8_t*)"ane_b2ContactSolver_callback_InitializeVelocityConstraints";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2ContactSolver_callback_InitializeVelocityConstraints;

			memberFunctions[2].name = (const uint8_t*)"ane_b2ContactSolver_callback_WarmStart";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2ContactSolver_callback_WarmStart;

			memberFunctions[3].name = (const uint8_t*)"ane_b2ContactSolver_callback_SolveVelocityConstraints";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2ContactSolver_callback_SolveVelocityConstraints;

			memberFunctions[4].name = (const uint8_t*)"ane_b2ContactSolver_callback_StoreImpulses";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_b2ContactSolver_callback_StoreImpulses;

			memberFunctions[5].name = (const uint8_t*)"ane_b2ContactSolver_callback_SolvePositionConstraints";
			memberFunctions[5].functionData = NULL;
			memberFunctions[5].function = &ane_b2ContactSolver_callback_SolvePositionConstraints;

			memberFunctions[6].name = (const uint8_t*)"ane_b2ContactSolver_callback_SolveTOIPositionConstraints";
			memberFunctions[6].functionData = NULL;
			memberFunctions[6].function = &ane_b2ContactSolver_callback_SolveTOIPositionConstraints;

			memberFunctions[7].name = (const uint8_t*)"ane_b2ContactSolver_setter_m_step";
			memberFunctions[7].functionData = NULL;
			memberFunctions[7].function = &ane_b2ContactSolver_setter_m_step;

			memberFunctions[8].name = (const uint8_t*)"ane_b2ContactSolver_getter_m_step";
			memberFunctions[8].functionData = NULL;
			memberFunctions[8].function = &ane_b2ContactSolver_getter_m_step;

			memberFunctions[9].name = (const uint8_t*)"ane_b2ContactSolver_setter_m_positions";
			memberFunctions[9].functionData = NULL;
			memberFunctions[9].function = &ane_b2ContactSolver_setter_m_positions;

			memberFunctions[10].name = (const uint8_t*)"ane_b2ContactSolver_getter_m_positions";
			memberFunctions[10].functionData = NULL;
			memberFunctions[10].function = &ane_b2ContactSolver_getter_m_positions;

			memberFunctions[11].name = (const uint8_t*)"ane_b2ContactSolver_setter_m_velocities";
			memberFunctions[11].functionData = NULL;
			memberFunctions[11].function = &ane_b2ContactSolver_setter_m_velocities;

			memberFunctions[12].name = (const uint8_t*)"ane_b2ContactSolver_getter_m_velocities";
			memberFunctions[12].functionData = NULL;
			memberFunctions[12].function = &ane_b2ContactSolver_getter_m_velocities;

			memberFunctions[13].name = (const uint8_t*)"ane_b2ContactSolver_setter_m_allocator";
			memberFunctions[13].functionData = NULL;
			memberFunctions[13].function = &ane_b2ContactSolver_setter_m_allocator;

			memberFunctions[14].name = (const uint8_t*)"ane_b2ContactSolver_getter_m_allocator";
			memberFunctions[14].functionData = NULL;
			memberFunctions[14].function = &ane_b2ContactSolver_getter_m_allocator;

			memberFunctions[15].name = (const uint8_t*)"ane_b2ContactSolver_setter_m_positionConstraints";
			memberFunctions[15].functionData = NULL;
			memberFunctions[15].function = &ane_b2ContactSolver_setter_m_positionConstraints;

			memberFunctions[16].name = (const uint8_t*)"ane_b2ContactSolver_getter_m_positionConstraints";
			memberFunctions[16].functionData = NULL;
			memberFunctions[16].function = &ane_b2ContactSolver_getter_m_positionConstraints;

			memberFunctions[17].name = (const uint8_t*)"ane_b2ContactSolver_setter_m_velocityConstraints";
			memberFunctions[17].functionData = NULL;
			memberFunctions[17].function = &ane_b2ContactSolver_setter_m_velocityConstraints;

			memberFunctions[18].name = (const uint8_t*)"ane_b2ContactSolver_getter_m_velocityConstraints";
			memberFunctions[18].functionData = NULL;
			memberFunctions[18].function = &ane_b2ContactSolver_getter_m_velocityConstraints;

			memberFunctions[19].name = (const uint8_t*)"ane_b2ContactSolver_setter_m_contacts";
			memberFunctions[19].functionData = NULL;
			memberFunctions[19].function = &ane_b2ContactSolver_setter_m_contacts;

			memberFunctions[20].name = (const uint8_t*)"ane_b2ContactSolver_getter_m_contacts";
			memberFunctions[20].functionData = NULL;
			memberFunctions[20].function = &ane_b2ContactSolver_getter_m_contacts;

			memberFunctions[21].name = (const uint8_t*)"ane_b2ContactSolver_setter_m_count";
			memberFunctions[21].functionData = NULL;
			memberFunctions[21].function = &ane_b2ContactSolver_setter_m_count;

			memberFunctions[22].name = (const uint8_t*)"ane_b2ContactSolver_getter_m_count";
			memberFunctions[22].functionData = NULL;
			memberFunctions[22].function = &ane_b2ContactSolver_getter_m_count;

			memberFunctions[23].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[23].functionData = NULL;
			memberFunctions[23].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2ContactSolver_instance);
		}
		break;

		case 71:		//b2EdgeAndCircleContact
		{
			b2EdgeAndCircleContact* b2EdgeAndCircleContact_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 5;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2EdgeAndCircleContact_callback_Create";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2EdgeAndCircleContact_callback_Create;

			memberFunctions[1].name = (const uint8_t*)"ane_b2EdgeAndCircleContact_callback_Destroy";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2EdgeAndCircleContact_callback_Destroy;

			memberFunctions[2].name = (const uint8_t*)"ane_b2EdgeAndCircleContact_constructor_b2EdgeAndCircleContact";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2EdgeAndCircleContact_constructor_b2EdgeAndCircleContact;

			memberFunctions[3].name = (const uint8_t*)"ane_b2EdgeAndCircleContact_callback_Evaluate";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2EdgeAndCircleContact_callback_Evaluate;

			memberFunctions[4].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2EdgeAndCircleContact_instance);
		}
		break;

		case 72:		//b2EdgeAndPolygonContact
		{
			b2EdgeAndPolygonContact* b2EdgeAndPolygonContact_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 5;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2EdgeAndPolygonContact_callback_Create";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2EdgeAndPolygonContact_callback_Create;

			memberFunctions[1].name = (const uint8_t*)"ane_b2EdgeAndPolygonContact_callback_Destroy";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2EdgeAndPolygonContact_callback_Destroy;

			memberFunctions[2].name = (const uint8_t*)"ane_b2EdgeAndPolygonContact_constructor_b2EdgeAndPolygonContact";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2EdgeAndPolygonContact_constructor_b2EdgeAndPolygonContact;

			memberFunctions[3].name = (const uint8_t*)"ane_b2EdgeAndPolygonContact_callback_Evaluate";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2EdgeAndPolygonContact_callback_Evaluate;

			memberFunctions[4].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2EdgeAndPolygonContact_instance);
		}
		break;

		case 73:		//b2PolygonAndCircleContact
		{
			b2PolygonAndCircleContact* b2PolygonAndCircleContact_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 5;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2PolygonAndCircleContact_callback_Create";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2PolygonAndCircleContact_callback_Create;

			memberFunctions[1].name = (const uint8_t*)"ane_b2PolygonAndCircleContact_callback_Destroy";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2PolygonAndCircleContact_callback_Destroy;

			memberFunctions[2].name = (const uint8_t*)"ane_b2PolygonAndCircleContact_constructor_b2PolygonAndCircleContact";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2PolygonAndCircleContact_constructor_b2PolygonAndCircleContact;

			memberFunctions[3].name = (const uint8_t*)"ane_b2PolygonAndCircleContact_callback_Evaluate";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2PolygonAndCircleContact_callback_Evaluate;

			memberFunctions[4].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2PolygonAndCircleContact_instance);
		}
		break;

		case 74:		//b2PolygonContact
		{
			b2PolygonContact* b2PolygonContact_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 5;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2PolygonContact_callback_Create";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2PolygonContact_callback_Create;

			memberFunctions[1].name = (const uint8_t*)"ane_b2PolygonContact_callback_Destroy";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2PolygonContact_callback_Destroy;

			memberFunctions[2].name = (const uint8_t*)"ane_b2PolygonContact_constructor_b2PolygonContact";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2PolygonContact_constructor_b2PolygonContact;

			memberFunctions[3].name = (const uint8_t*)"ane_b2PolygonContact_callback_Evaluate";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2PolygonContact_callback_Evaluate;

			memberFunctions[4].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2PolygonContact_instance);
		}
		break;

		case 75:		//b2DistanceJointDef
		{
			b2DistanceJointDef* b2DistanceJointDef_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 13;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2DistanceJointDef_constructor_b2DistanceJointDef";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2DistanceJointDef_constructor_b2DistanceJointDef;

			memberFunctions[1].name = (const uint8_t*)"ane_b2DistanceJointDef_callback_Initialize";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2DistanceJointDef_callback_Initialize;

			memberFunctions[2].name = (const uint8_t*)"ane_b2DistanceJointDef_setter_localAnchorA";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2DistanceJointDef_setter_localAnchorA;

			memberFunctions[3].name = (const uint8_t*)"ane_b2DistanceJointDef_getter_localAnchorA";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2DistanceJointDef_getter_localAnchorA;

			memberFunctions[4].name = (const uint8_t*)"ane_b2DistanceJointDef_setter_localAnchorB";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_b2DistanceJointDef_setter_localAnchorB;

			memberFunctions[5].name = (const uint8_t*)"ane_b2DistanceJointDef_getter_localAnchorB";
			memberFunctions[5].functionData = NULL;
			memberFunctions[5].function = &ane_b2DistanceJointDef_getter_localAnchorB;

			memberFunctions[6].name = (const uint8_t*)"ane_b2DistanceJointDef_setter_length";
			memberFunctions[6].functionData = NULL;
			memberFunctions[6].function = &ane_b2DistanceJointDef_setter_length;

			memberFunctions[7].name = (const uint8_t*)"ane_b2DistanceJointDef_getter_length";
			memberFunctions[7].functionData = NULL;
			memberFunctions[7].function = &ane_b2DistanceJointDef_getter_length;

			memberFunctions[8].name = (const uint8_t*)"ane_b2DistanceJointDef_setter_frequencyHz";
			memberFunctions[8].functionData = NULL;
			memberFunctions[8].function = &ane_b2DistanceJointDef_setter_frequencyHz;

			memberFunctions[9].name = (const uint8_t*)"ane_b2DistanceJointDef_getter_frequencyHz";
			memberFunctions[9].functionData = NULL;
			memberFunctions[9].function = &ane_b2DistanceJointDef_getter_frequencyHz;

			memberFunctions[10].name = (const uint8_t*)"ane_b2DistanceJointDef_setter_dampingRatio";
			memberFunctions[10].functionData = NULL;
			memberFunctions[10].function = &ane_b2DistanceJointDef_setter_dampingRatio;

			memberFunctions[11].name = (const uint8_t*)"ane_b2DistanceJointDef_getter_dampingRatio";
			memberFunctions[11].functionData = NULL;
			memberFunctions[11].function = &ane_b2DistanceJointDef_getter_dampingRatio;

			memberFunctions[12].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[12].functionData = NULL;
			memberFunctions[12].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2DistanceJointDef_instance);
		}
		break;

		case 76:		//b2DistanceJoint
		{
			b2DistanceJoint* b2DistanceJoint_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 14;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2DistanceJoint_callback_GetAnchorA";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2DistanceJoint_callback_GetAnchorA;

			memberFunctions[1].name = (const uint8_t*)"ane_b2DistanceJoint_callback_GetAnchorB";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2DistanceJoint_callback_GetAnchorB;

			memberFunctions[2].name = (const uint8_t*)"ane_b2DistanceJoint_callback_GetReactionForce";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2DistanceJoint_callback_GetReactionForce;

			memberFunctions[3].name = (const uint8_t*)"ane_b2DistanceJoint_callback_GetReactionTorque";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2DistanceJoint_callback_GetReactionTorque;

			memberFunctions[4].name = (const uint8_t*)"ane_b2DistanceJoint_callback_GetLocalAnchorA";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_b2DistanceJoint_callback_GetLocalAnchorA;

			memberFunctions[5].name = (const uint8_t*)"ane_b2DistanceJoint_callback_GetLocalAnchorB";
			memberFunctions[5].functionData = NULL;
			memberFunctions[5].function = &ane_b2DistanceJoint_callback_GetLocalAnchorB;

			memberFunctions[6].name = (const uint8_t*)"ane_b2DistanceJoint_callback_SetLength";
			memberFunctions[6].functionData = NULL;
			memberFunctions[6].function = &ane_b2DistanceJoint_callback_SetLength;

			memberFunctions[7].name = (const uint8_t*)"ane_b2DistanceJoint_callback_GetLength";
			memberFunctions[7].functionData = NULL;
			memberFunctions[7].function = &ane_b2DistanceJoint_callback_GetLength;

			memberFunctions[8].name = (const uint8_t*)"ane_b2DistanceJoint_callback_SetFrequency";
			memberFunctions[8].functionData = NULL;
			memberFunctions[8].function = &ane_b2DistanceJoint_callback_SetFrequency;

			memberFunctions[9].name = (const uint8_t*)"ane_b2DistanceJoint_callback_GetFrequency";
			memberFunctions[9].functionData = NULL;
			memberFunctions[9].function = &ane_b2DistanceJoint_callback_GetFrequency;

			memberFunctions[10].name = (const uint8_t*)"ane_b2DistanceJoint_callback_SetDampingRatio";
			memberFunctions[10].functionData = NULL;
			memberFunctions[10].function = &ane_b2DistanceJoint_callback_SetDampingRatio;

			memberFunctions[11].name = (const uint8_t*)"ane_b2DistanceJoint_callback_GetDampingRatio";
			memberFunctions[11].functionData = NULL;
			memberFunctions[11].function = &ane_b2DistanceJoint_callback_GetDampingRatio;

			memberFunctions[12].name = (const uint8_t*)"ane_b2DistanceJoint_callback_Dump";
			memberFunctions[12].functionData = NULL;
			memberFunctions[12].function = &ane_b2DistanceJoint_callback_Dump;

			memberFunctions[13].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[13].functionData = NULL;
			memberFunctions[13].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2DistanceJoint_instance);
		}
		break;

		case 77:		//b2FrictionJointDef
		{
			b2FrictionJointDef* b2FrictionJointDef_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 11;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2FrictionJointDef_constructor_b2FrictionJointDef";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2FrictionJointDef_constructor_b2FrictionJointDef;

			memberFunctions[1].name = (const uint8_t*)"ane_b2FrictionJointDef_callback_Initialize";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2FrictionJointDef_callback_Initialize;

			memberFunctions[2].name = (const uint8_t*)"ane_b2FrictionJointDef_setter_localAnchorA";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2FrictionJointDef_setter_localAnchorA;

			memberFunctions[3].name = (const uint8_t*)"ane_b2FrictionJointDef_getter_localAnchorA";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2FrictionJointDef_getter_localAnchorA;

			memberFunctions[4].name = (const uint8_t*)"ane_b2FrictionJointDef_setter_localAnchorB";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_b2FrictionJointDef_setter_localAnchorB;

			memberFunctions[5].name = (const uint8_t*)"ane_b2FrictionJointDef_getter_localAnchorB";
			memberFunctions[5].functionData = NULL;
			memberFunctions[5].function = &ane_b2FrictionJointDef_getter_localAnchorB;

			memberFunctions[6].name = (const uint8_t*)"ane_b2FrictionJointDef_setter_maxForce";
			memberFunctions[6].functionData = NULL;
			memberFunctions[6].function = &ane_b2FrictionJointDef_setter_maxForce;

			memberFunctions[7].name = (const uint8_t*)"ane_b2FrictionJointDef_getter_maxForce";
			memberFunctions[7].functionData = NULL;
			memberFunctions[7].function = &ane_b2FrictionJointDef_getter_maxForce;

			memberFunctions[8].name = (const uint8_t*)"ane_b2FrictionJointDef_setter_maxTorque";
			memberFunctions[8].functionData = NULL;
			memberFunctions[8].function = &ane_b2FrictionJointDef_setter_maxTorque;

			memberFunctions[9].name = (const uint8_t*)"ane_b2FrictionJointDef_getter_maxTorque";
			memberFunctions[9].functionData = NULL;
			memberFunctions[9].function = &ane_b2FrictionJointDef_getter_maxTorque;

			memberFunctions[10].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[10].functionData = NULL;
			memberFunctions[10].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2FrictionJointDef_instance);
		}
		break;

		case 78:		//b2FrictionJoint
		{
			b2FrictionJoint* b2FrictionJoint_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 12;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2FrictionJoint_callback_GetAnchorA";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2FrictionJoint_callback_GetAnchorA;

			memberFunctions[1].name = (const uint8_t*)"ane_b2FrictionJoint_callback_GetAnchorB";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2FrictionJoint_callback_GetAnchorB;

			memberFunctions[2].name = (const uint8_t*)"ane_b2FrictionJoint_callback_GetReactionForce";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2FrictionJoint_callback_GetReactionForce;

			memberFunctions[3].name = (const uint8_t*)"ane_b2FrictionJoint_callback_GetReactionTorque";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2FrictionJoint_callback_GetReactionTorque;

			memberFunctions[4].name = (const uint8_t*)"ane_b2FrictionJoint_callback_GetLocalAnchorA";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_b2FrictionJoint_callback_GetLocalAnchorA;

			memberFunctions[5].name = (const uint8_t*)"ane_b2FrictionJoint_callback_GetLocalAnchorB";
			memberFunctions[5].functionData = NULL;
			memberFunctions[5].function = &ane_b2FrictionJoint_callback_GetLocalAnchorB;

			memberFunctions[6].name = (const uint8_t*)"ane_b2FrictionJoint_callback_SetMaxForce";
			memberFunctions[6].functionData = NULL;
			memberFunctions[6].function = &ane_b2FrictionJoint_callback_SetMaxForce;

			memberFunctions[7].name = (const uint8_t*)"ane_b2FrictionJoint_callback_GetMaxForce";
			memberFunctions[7].functionData = NULL;
			memberFunctions[7].function = &ane_b2FrictionJoint_callback_GetMaxForce;

			memberFunctions[8].name = (const uint8_t*)"ane_b2FrictionJoint_callback_SetMaxTorque";
			memberFunctions[8].functionData = NULL;
			memberFunctions[8].function = &ane_b2FrictionJoint_callback_SetMaxTorque;

			memberFunctions[9].name = (const uint8_t*)"ane_b2FrictionJoint_callback_GetMaxTorque";
			memberFunctions[9].functionData = NULL;
			memberFunctions[9].function = &ane_b2FrictionJoint_callback_GetMaxTorque;

			memberFunctions[10].name = (const uint8_t*)"ane_b2FrictionJoint_callback_Dump";
			memberFunctions[10].functionData = NULL;
			memberFunctions[10].function = &ane_b2FrictionJoint_callback_Dump;

			memberFunctions[11].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[11].functionData = NULL;
			memberFunctions[11].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2FrictionJoint_instance);
		}
		break;

		case 79:		//b2GearJointDef
		{
			b2GearJointDef* b2GearJointDef_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 8;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2GearJointDef_constructor_b2GearJointDef";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2GearJointDef_constructor_b2GearJointDef;

			memberFunctions[1].name = (const uint8_t*)"ane_b2GearJointDef_setter_joint1";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2GearJointDef_setter_joint1;

			memberFunctions[2].name = (const uint8_t*)"ane_b2GearJointDef_getter_joint1";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2GearJointDef_getter_joint1;

			memberFunctions[3].name = (const uint8_t*)"ane_b2GearJointDef_setter_joint2";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2GearJointDef_setter_joint2;

			memberFunctions[4].name = (const uint8_t*)"ane_b2GearJointDef_getter_joint2";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_b2GearJointDef_getter_joint2;

			memberFunctions[5].name = (const uint8_t*)"ane_b2GearJointDef_setter_ratio";
			memberFunctions[5].functionData = NULL;
			memberFunctions[5].function = &ane_b2GearJointDef_setter_ratio;

			memberFunctions[6].name = (const uint8_t*)"ane_b2GearJointDef_getter_ratio";
			memberFunctions[6].functionData = NULL;
			memberFunctions[6].function = &ane_b2GearJointDef_getter_ratio;

			memberFunctions[7].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[7].functionData = NULL;
			memberFunctions[7].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2GearJointDef_instance);
		}
		break;

		case 80:		//b2GearJoint
		{
			b2GearJoint* b2GearJoint_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 10;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2GearJoint_callback_GetAnchorA";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2GearJoint_callback_GetAnchorA;

			memberFunctions[1].name = (const uint8_t*)"ane_b2GearJoint_callback_GetAnchorB";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2GearJoint_callback_GetAnchorB;

			memberFunctions[2].name = (const uint8_t*)"ane_b2GearJoint_callback_GetReactionForce";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2GearJoint_callback_GetReactionForce;

			memberFunctions[3].name = (const uint8_t*)"ane_b2GearJoint_callback_GetReactionTorque";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2GearJoint_callback_GetReactionTorque;

			memberFunctions[4].name = (const uint8_t*)"ane_b2GearJoint_callback_GetJoint1";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_b2GearJoint_callback_GetJoint1;

			memberFunctions[5].name = (const uint8_t*)"ane_b2GearJoint_callback_GetJoint2";
			memberFunctions[5].functionData = NULL;
			memberFunctions[5].function = &ane_b2GearJoint_callback_GetJoint2;

			memberFunctions[6].name = (const uint8_t*)"ane_b2GearJoint_callback_SetRatio";
			memberFunctions[6].functionData = NULL;
			memberFunctions[6].function = &ane_b2GearJoint_callback_SetRatio;

			memberFunctions[7].name = (const uint8_t*)"ane_b2GearJoint_callback_GetRatio";
			memberFunctions[7].functionData = NULL;
			memberFunctions[7].function = &ane_b2GearJoint_callback_GetRatio;

			memberFunctions[8].name = (const uint8_t*)"ane_b2GearJoint_callback_Dump";
			memberFunctions[8].functionData = NULL;
			memberFunctions[8].function = &ane_b2GearJoint_callback_Dump;

			memberFunctions[9].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[9].functionData = NULL;
			memberFunctions[9].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2GearJoint_instance);
		}
		break;

		case 81:		//b2Jacobian
		{
			b2Jacobian* b2Jacobian_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 7;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2Jacobian_setter_linear";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2Jacobian_setter_linear;

			memberFunctions[1].name = (const uint8_t*)"ane_b2Jacobian_getter_linear";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2Jacobian_getter_linear;

			memberFunctions[2].name = (const uint8_t*)"ane_b2Jacobian_setter_angularA";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2Jacobian_setter_angularA;

			memberFunctions[3].name = (const uint8_t*)"ane_b2Jacobian_getter_angularA";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2Jacobian_getter_angularA;

			memberFunctions[4].name = (const uint8_t*)"ane_b2Jacobian_setter_angularB";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_b2Jacobian_setter_angularB;

			memberFunctions[5].name = (const uint8_t*)"ane_b2Jacobian_getter_angularB";
			memberFunctions[5].functionData = NULL;
			memberFunctions[5].function = &ane_b2Jacobian_getter_angularB;

			memberFunctions[6].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[6].functionData = NULL;
			memberFunctions[6].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2Jacobian_instance);
		}
		break;

		case 82:		//b2JointEdge
		{
			b2JointEdge* b2JointEdge_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 9;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2JointEdge_setter_other";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2JointEdge_setter_other;

			memberFunctions[1].name = (const uint8_t*)"ane_b2JointEdge_getter_other";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2JointEdge_getter_other;

			memberFunctions[2].name = (const uint8_t*)"ane_b2JointEdge_setter_joint";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2JointEdge_setter_joint;

			memberFunctions[3].name = (const uint8_t*)"ane_b2JointEdge_getter_joint";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2JointEdge_getter_joint;

			memberFunctions[4].name = (const uint8_t*)"ane_b2JointEdge_setter_prev";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_b2JointEdge_setter_prev;

			memberFunctions[5].name = (const uint8_t*)"ane_b2JointEdge_getter_prev";
			memberFunctions[5].functionData = NULL;
			memberFunctions[5].function = &ane_b2JointEdge_getter_prev;

			memberFunctions[6].name = (const uint8_t*)"ane_b2JointEdge_setter_next";
			memberFunctions[6].functionData = NULL;
			memberFunctions[6].function = &ane_b2JointEdge_setter_next;

			memberFunctions[7].name = (const uint8_t*)"ane_b2JointEdge_getter_next";
			memberFunctions[7].functionData = NULL;
			memberFunctions[7].function = &ane_b2JointEdge_getter_next;

			memberFunctions[8].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[8].functionData = NULL;
			memberFunctions[8].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2JointEdge_instance);
		}
		break;

		case 83:		//b2JointDef
		{
			b2JointDef* b2JointDef_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 12;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2JointDef_constructor_b2JointDef";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2JointDef_constructor_b2JointDef;

			memberFunctions[1].name = (const uint8_t*)"ane_b2JointDef_setter_type";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2JointDef_setter_type;

			memberFunctions[2].name = (const uint8_t*)"ane_b2JointDef_getter_type";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2JointDef_getter_type;

			memberFunctions[3].name = (const uint8_t*)"ane_b2JointDef_setter_userData";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2JointDef_setter_userData;

			memberFunctions[4].name = (const uint8_t*)"ane_b2JointDef_getter_userData";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_b2JointDef_getter_userData;

			memberFunctions[5].name = (const uint8_t*)"ane_b2JointDef_setter_bodyA";
			memberFunctions[5].functionData = NULL;
			memberFunctions[5].function = &ane_b2JointDef_setter_bodyA;

			memberFunctions[6].name = (const uint8_t*)"ane_b2JointDef_getter_bodyA";
			memberFunctions[6].functionData = NULL;
			memberFunctions[6].function = &ane_b2JointDef_getter_bodyA;

			memberFunctions[7].name = (const uint8_t*)"ane_b2JointDef_setter_bodyB";
			memberFunctions[7].functionData = NULL;
			memberFunctions[7].function = &ane_b2JointDef_setter_bodyB;

			memberFunctions[8].name = (const uint8_t*)"ane_b2JointDef_getter_bodyB";
			memberFunctions[8].functionData = NULL;
			memberFunctions[8].function = &ane_b2JointDef_getter_bodyB;

			memberFunctions[9].name = (const uint8_t*)"ane_b2JointDef_setter_collideConnected";
			memberFunctions[9].functionData = NULL;
			memberFunctions[9].function = &ane_b2JointDef_setter_collideConnected;

			memberFunctions[10].name = (const uint8_t*)"ane_b2JointDef_getter_collideConnected";
			memberFunctions[10].functionData = NULL;
			memberFunctions[10].function = &ane_b2JointDef_getter_collideConnected;

			memberFunctions[11].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[11].functionData = NULL;
			memberFunctions[11].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2JointDef_instance);
		}
		break;

		case 84:		//b2Joint
		{
			b2Joint* b2Joint_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 16;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2Joint_callback_GetType";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2Joint_callback_GetType;

			memberFunctions[1].name = (const uint8_t*)"ane_b2Joint_callback_GetBodyA";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2Joint_callback_GetBodyA;

			memberFunctions[2].name = (const uint8_t*)"ane_b2Joint_callback_GetBodyB";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2Joint_callback_GetBodyB;

			memberFunctions[3].name = (const uint8_t*)"ane_b2Joint_callback_GetAnchorA";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2Joint_callback_GetAnchorA;

			memberFunctions[4].name = (const uint8_t*)"ane_b2Joint_callback_GetAnchorB";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_b2Joint_callback_GetAnchorB;

			memberFunctions[5].name = (const uint8_t*)"ane_b2Joint_callback_GetReactionForce";
			memberFunctions[5].functionData = NULL;
			memberFunctions[5].function = &ane_b2Joint_callback_GetReactionForce;

			memberFunctions[6].name = (const uint8_t*)"ane_b2Joint_callback_GetReactionTorque";
			memberFunctions[6].functionData = NULL;
			memberFunctions[6].function = &ane_b2Joint_callback_GetReactionTorque;

			memberFunctions[7].name = (const uint8_t*)"ane_b2Joint_callback_GetNext";
			memberFunctions[7].functionData = NULL;
			memberFunctions[7].function = &ane_b2Joint_callback_GetNext;

			memberFunctions[8].name = (const uint8_t*)"ane_b2Joint_callback_GetNext";
			memberFunctions[8].functionData = NULL;
			memberFunctions[8].function = &ane_b2Joint_callback_GetNext;

			memberFunctions[9].name = (const uint8_t*)"ane_b2Joint_callback_GetUserData";
			memberFunctions[9].functionData = NULL;
			memberFunctions[9].function = &ane_b2Joint_callback_GetUserData;

			memberFunctions[10].name = (const uint8_t*)"ane_b2Joint_callback_SetUserData";
			memberFunctions[10].functionData = NULL;
			memberFunctions[10].function = &ane_b2Joint_callback_SetUserData;

			memberFunctions[11].name = (const uint8_t*)"ane_b2Joint_callback_IsActive";
			memberFunctions[11].functionData = NULL;
			memberFunctions[11].function = &ane_b2Joint_callback_IsActive;

			memberFunctions[12].name = (const uint8_t*)"ane_b2Joint_callback_GetCollideConnected";
			memberFunctions[12].functionData = NULL;
			memberFunctions[12].function = &ane_b2Joint_callback_GetCollideConnected;

			memberFunctions[13].name = (const uint8_t*)"ane_b2Joint_callback_Dump";
			memberFunctions[13].functionData = NULL;
			memberFunctions[13].function = &ane_b2Joint_callback_Dump;

			memberFunctions[14].name = (const uint8_t*)"ane_b2Joint_callback_ShiftOrigin";
			memberFunctions[14].functionData = NULL;
			memberFunctions[14].function = &ane_b2Joint_callback_ShiftOrigin;

			memberFunctions[15].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[15].functionData = NULL;
			memberFunctions[15].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2Joint_instance);
		}
		break;

		case 85:		//b2MotorJointDef
		{
			b2MotorJointDef* b2MotorJointDef_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 13;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2MotorJointDef_constructor_b2MotorJointDef";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2MotorJointDef_constructor_b2MotorJointDef;

			memberFunctions[1].name = (const uint8_t*)"ane_b2MotorJointDef_callback_Initialize";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2MotorJointDef_callback_Initialize;

			memberFunctions[2].name = (const uint8_t*)"ane_b2MotorJointDef_setter_linearOffset";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2MotorJointDef_setter_linearOffset;

			memberFunctions[3].name = (const uint8_t*)"ane_b2MotorJointDef_getter_linearOffset";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2MotorJointDef_getter_linearOffset;

			memberFunctions[4].name = (const uint8_t*)"ane_b2MotorJointDef_setter_angularOffset";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_b2MotorJointDef_setter_angularOffset;

			memberFunctions[5].name = (const uint8_t*)"ane_b2MotorJointDef_getter_angularOffset";
			memberFunctions[5].functionData = NULL;
			memberFunctions[5].function = &ane_b2MotorJointDef_getter_angularOffset;

			memberFunctions[6].name = (const uint8_t*)"ane_b2MotorJointDef_setter_maxForce";
			memberFunctions[6].functionData = NULL;
			memberFunctions[6].function = &ane_b2MotorJointDef_setter_maxForce;

			memberFunctions[7].name = (const uint8_t*)"ane_b2MotorJointDef_getter_maxForce";
			memberFunctions[7].functionData = NULL;
			memberFunctions[7].function = &ane_b2MotorJointDef_getter_maxForce;

			memberFunctions[8].name = (const uint8_t*)"ane_b2MotorJointDef_setter_maxTorque";
			memberFunctions[8].functionData = NULL;
			memberFunctions[8].function = &ane_b2MotorJointDef_setter_maxTorque;

			memberFunctions[9].name = (const uint8_t*)"ane_b2MotorJointDef_getter_maxTorque";
			memberFunctions[9].functionData = NULL;
			memberFunctions[9].function = &ane_b2MotorJointDef_getter_maxTorque;

			memberFunctions[10].name = (const uint8_t*)"ane_b2MotorJointDef_setter_correctionFactor";
			memberFunctions[10].functionData = NULL;
			memberFunctions[10].function = &ane_b2MotorJointDef_setter_correctionFactor;

			memberFunctions[11].name = (const uint8_t*)"ane_b2MotorJointDef_getter_correctionFactor";
			memberFunctions[11].functionData = NULL;
			memberFunctions[11].function = &ane_b2MotorJointDef_getter_correctionFactor;

			memberFunctions[12].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[12].functionData = NULL;
			memberFunctions[12].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2MotorJointDef_instance);
		}
		break;

		case 86:		//b2MotorJoint
		{
			b2MotorJoint* b2MotorJoint_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 14;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2MotorJoint_callback_GetAnchorA";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2MotorJoint_callback_GetAnchorA;

			memberFunctions[1].name = (const uint8_t*)"ane_b2MotorJoint_callback_GetAnchorB";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2MotorJoint_callback_GetAnchorB;

			memberFunctions[2].name = (const uint8_t*)"ane_b2MotorJoint_callback_GetReactionForce";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2MotorJoint_callback_GetReactionForce;

			memberFunctions[3].name = (const uint8_t*)"ane_b2MotorJoint_callback_GetReactionTorque";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2MotorJoint_callback_GetReactionTorque;

			memberFunctions[4].name = (const uint8_t*)"ane_b2MotorJoint_callback_SetLinearOffset";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_b2MotorJoint_callback_SetLinearOffset;

			memberFunctions[5].name = (const uint8_t*)"ane_b2MotorJoint_callback_GetLinearOffset";
			memberFunctions[5].functionData = NULL;
			memberFunctions[5].function = &ane_b2MotorJoint_callback_GetLinearOffset;

			memberFunctions[6].name = (const uint8_t*)"ane_b2MotorJoint_callback_SetAngularOffset";
			memberFunctions[6].functionData = NULL;
			memberFunctions[6].function = &ane_b2MotorJoint_callback_SetAngularOffset;

			memberFunctions[7].name = (const uint8_t*)"ane_b2MotorJoint_callback_GetAngularOffset";
			memberFunctions[7].functionData = NULL;
			memberFunctions[7].function = &ane_b2MotorJoint_callback_GetAngularOffset;

			memberFunctions[8].name = (const uint8_t*)"ane_b2MotorJoint_callback_SetMaxForce";
			memberFunctions[8].functionData = NULL;
			memberFunctions[8].function = &ane_b2MotorJoint_callback_SetMaxForce;

			memberFunctions[9].name = (const uint8_t*)"ane_b2MotorJoint_callback_GetMaxForce";
			memberFunctions[9].functionData = NULL;
			memberFunctions[9].function = &ane_b2MotorJoint_callback_GetMaxForce;

			memberFunctions[10].name = (const uint8_t*)"ane_b2MotorJoint_callback_SetMaxTorque";
			memberFunctions[10].functionData = NULL;
			memberFunctions[10].function = &ane_b2MotorJoint_callback_SetMaxTorque;

			memberFunctions[11].name = (const uint8_t*)"ane_b2MotorJoint_callback_GetMaxTorque";
			memberFunctions[11].functionData = NULL;
			memberFunctions[11].function = &ane_b2MotorJoint_callback_GetMaxTorque;

			memberFunctions[12].name = (const uint8_t*)"ane_b2MotorJoint_callback_Dump";
			memberFunctions[12].functionData = NULL;
			memberFunctions[12].function = &ane_b2MotorJoint_callback_Dump;

			memberFunctions[13].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[13].functionData = NULL;
			memberFunctions[13].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2MotorJoint_instance);
		}
		break;

		case 87:		//b2MouseJointDef
		{
			b2MouseJointDef* b2MouseJointDef_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 10;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2MouseJointDef_constructor_b2MouseJointDef";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2MouseJointDef_constructor_b2MouseJointDef;

			memberFunctions[1].name = (const uint8_t*)"ane_b2MouseJointDef_setter_target";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2MouseJointDef_setter_target;

			memberFunctions[2].name = (const uint8_t*)"ane_b2MouseJointDef_getter_target";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2MouseJointDef_getter_target;

			memberFunctions[3].name = (const uint8_t*)"ane_b2MouseJointDef_setter_maxForce";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2MouseJointDef_setter_maxForce;

			memberFunctions[4].name = (const uint8_t*)"ane_b2MouseJointDef_getter_maxForce";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_b2MouseJointDef_getter_maxForce;

			memberFunctions[5].name = (const uint8_t*)"ane_b2MouseJointDef_setter_frequencyHz";
			memberFunctions[5].functionData = NULL;
			memberFunctions[5].function = &ane_b2MouseJointDef_setter_frequencyHz;

			memberFunctions[6].name = (const uint8_t*)"ane_b2MouseJointDef_getter_frequencyHz";
			memberFunctions[6].functionData = NULL;
			memberFunctions[6].function = &ane_b2MouseJointDef_getter_frequencyHz;

			memberFunctions[7].name = (const uint8_t*)"ane_b2MouseJointDef_setter_dampingRatio";
			memberFunctions[7].functionData = NULL;
			memberFunctions[7].function = &ane_b2MouseJointDef_setter_dampingRatio;

			memberFunctions[8].name = (const uint8_t*)"ane_b2MouseJointDef_getter_dampingRatio";
			memberFunctions[8].functionData = NULL;
			memberFunctions[8].function = &ane_b2MouseJointDef_getter_dampingRatio;

			memberFunctions[9].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[9].functionData = NULL;
			memberFunctions[9].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2MouseJointDef_instance);
		}
		break;

		case 88:		//b2MouseJoint
		{
			b2MouseJoint* b2MouseJoint_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 15;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2MouseJoint_callback_GetAnchorA";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2MouseJoint_callback_GetAnchorA;

			memberFunctions[1].name = (const uint8_t*)"ane_b2MouseJoint_callback_GetAnchorB";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2MouseJoint_callback_GetAnchorB;

			memberFunctions[2].name = (const uint8_t*)"ane_b2MouseJoint_callback_GetReactionForce";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2MouseJoint_callback_GetReactionForce;

			memberFunctions[3].name = (const uint8_t*)"ane_b2MouseJoint_callback_GetReactionTorque";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2MouseJoint_callback_GetReactionTorque;

			memberFunctions[4].name = (const uint8_t*)"ane_b2MouseJoint_callback_SetTarget";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_b2MouseJoint_callback_SetTarget;

			memberFunctions[5].name = (const uint8_t*)"ane_b2MouseJoint_callback_GetTarget";
			memberFunctions[5].functionData = NULL;
			memberFunctions[5].function = &ane_b2MouseJoint_callback_GetTarget;

			memberFunctions[6].name = (const uint8_t*)"ane_b2MouseJoint_callback_SetMaxForce";
			memberFunctions[6].functionData = NULL;
			memberFunctions[6].function = &ane_b2MouseJoint_callback_SetMaxForce;

			memberFunctions[7].name = (const uint8_t*)"ane_b2MouseJoint_callback_GetMaxForce";
			memberFunctions[7].functionData = NULL;
			memberFunctions[7].function = &ane_b2MouseJoint_callback_GetMaxForce;

			memberFunctions[8].name = (const uint8_t*)"ane_b2MouseJoint_callback_SetFrequency";
			memberFunctions[8].functionData = NULL;
			memberFunctions[8].function = &ane_b2MouseJoint_callback_SetFrequency;

			memberFunctions[9].name = (const uint8_t*)"ane_b2MouseJoint_callback_GetFrequency";
			memberFunctions[9].functionData = NULL;
			memberFunctions[9].function = &ane_b2MouseJoint_callback_GetFrequency;

			memberFunctions[10].name = (const uint8_t*)"ane_b2MouseJoint_callback_SetDampingRatio";
			memberFunctions[10].functionData = NULL;
			memberFunctions[10].function = &ane_b2MouseJoint_callback_SetDampingRatio;

			memberFunctions[11].name = (const uint8_t*)"ane_b2MouseJoint_callback_GetDampingRatio";
			memberFunctions[11].functionData = NULL;
			memberFunctions[11].function = &ane_b2MouseJoint_callback_GetDampingRatio;

			memberFunctions[12].name = (const uint8_t*)"ane_b2MouseJoint_callback_Dump";
			memberFunctions[12].functionData = NULL;
			memberFunctions[12].function = &ane_b2MouseJoint_callback_Dump;

			memberFunctions[13].name = (const uint8_t*)"ane_b2MouseJoint_callback_ShiftOrigin";
			memberFunctions[13].functionData = NULL;
			memberFunctions[13].function = &ane_b2MouseJoint_callback_ShiftOrigin;

			memberFunctions[14].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[14].functionData = NULL;
			memberFunctions[14].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2MouseJoint_instance);
		}
		break;

		case 89:		//b2PrismaticJointDef
		{
			b2PrismaticJointDef* b2PrismaticJointDef_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 23;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2PrismaticJointDef_constructor_b2PrismaticJointDef";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2PrismaticJointDef_constructor_b2PrismaticJointDef;

			memberFunctions[1].name = (const uint8_t*)"ane_b2PrismaticJointDef_callback_Initialize";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2PrismaticJointDef_callback_Initialize;

			memberFunctions[2].name = (const uint8_t*)"ane_b2PrismaticJointDef_setter_localAnchorA";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2PrismaticJointDef_setter_localAnchorA;

			memberFunctions[3].name = (const uint8_t*)"ane_b2PrismaticJointDef_getter_localAnchorA";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2PrismaticJointDef_getter_localAnchorA;

			memberFunctions[4].name = (const uint8_t*)"ane_b2PrismaticJointDef_setter_localAnchorB";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_b2PrismaticJointDef_setter_localAnchorB;

			memberFunctions[5].name = (const uint8_t*)"ane_b2PrismaticJointDef_getter_localAnchorB";
			memberFunctions[5].functionData = NULL;
			memberFunctions[5].function = &ane_b2PrismaticJointDef_getter_localAnchorB;

			memberFunctions[6].name = (const uint8_t*)"ane_b2PrismaticJointDef_setter_localAxisA";
			memberFunctions[6].functionData = NULL;
			memberFunctions[6].function = &ane_b2PrismaticJointDef_setter_localAxisA;

			memberFunctions[7].name = (const uint8_t*)"ane_b2PrismaticJointDef_getter_localAxisA";
			memberFunctions[7].functionData = NULL;
			memberFunctions[7].function = &ane_b2PrismaticJointDef_getter_localAxisA;

			memberFunctions[8].name = (const uint8_t*)"ane_b2PrismaticJointDef_setter_referenceAngle";
			memberFunctions[8].functionData = NULL;
			memberFunctions[8].function = &ane_b2PrismaticJointDef_setter_referenceAngle;

			memberFunctions[9].name = (const uint8_t*)"ane_b2PrismaticJointDef_getter_referenceAngle";
			memberFunctions[9].functionData = NULL;
			memberFunctions[9].function = &ane_b2PrismaticJointDef_getter_referenceAngle;

			memberFunctions[10].name = (const uint8_t*)"ane_b2PrismaticJointDef_setter_enableLimit";
			memberFunctions[10].functionData = NULL;
			memberFunctions[10].function = &ane_b2PrismaticJointDef_setter_enableLimit;

			memberFunctions[11].name = (const uint8_t*)"ane_b2PrismaticJointDef_getter_enableLimit";
			memberFunctions[11].functionData = NULL;
			memberFunctions[11].function = &ane_b2PrismaticJointDef_getter_enableLimit;

			memberFunctions[12].name = (const uint8_t*)"ane_b2PrismaticJointDef_setter_lowerTranslation";
			memberFunctions[12].functionData = NULL;
			memberFunctions[12].function = &ane_b2PrismaticJointDef_setter_lowerTranslation;

			memberFunctions[13].name = (const uint8_t*)"ane_b2PrismaticJointDef_getter_lowerTranslation";
			memberFunctions[13].functionData = NULL;
			memberFunctions[13].function = &ane_b2PrismaticJointDef_getter_lowerTranslation;

			memberFunctions[14].name = (const uint8_t*)"ane_b2PrismaticJointDef_setter_upperTranslation";
			memberFunctions[14].functionData = NULL;
			memberFunctions[14].function = &ane_b2PrismaticJointDef_setter_upperTranslation;

			memberFunctions[15].name = (const uint8_t*)"ane_b2PrismaticJointDef_getter_upperTranslation";
			memberFunctions[15].functionData = NULL;
			memberFunctions[15].function = &ane_b2PrismaticJointDef_getter_upperTranslation;

			memberFunctions[16].name = (const uint8_t*)"ane_b2PrismaticJointDef_setter_enableMotor";
			memberFunctions[16].functionData = NULL;
			memberFunctions[16].function = &ane_b2PrismaticJointDef_setter_enableMotor;

			memberFunctions[17].name = (const uint8_t*)"ane_b2PrismaticJointDef_getter_enableMotor";
			memberFunctions[17].functionData = NULL;
			memberFunctions[17].function = &ane_b2PrismaticJointDef_getter_enableMotor;

			memberFunctions[18].name = (const uint8_t*)"ane_b2PrismaticJointDef_setter_maxMotorForce";
			memberFunctions[18].functionData = NULL;
			memberFunctions[18].function = &ane_b2PrismaticJointDef_setter_maxMotorForce;

			memberFunctions[19].name = (const uint8_t*)"ane_b2PrismaticJointDef_getter_maxMotorForce";
			memberFunctions[19].functionData = NULL;
			memberFunctions[19].function = &ane_b2PrismaticJointDef_getter_maxMotorForce;

			memberFunctions[20].name = (const uint8_t*)"ane_b2PrismaticJointDef_setter_motorSpeed";
			memberFunctions[20].functionData = NULL;
			memberFunctions[20].function = &ane_b2PrismaticJointDef_setter_motorSpeed;

			memberFunctions[21].name = (const uint8_t*)"ane_b2PrismaticJointDef_getter_motorSpeed";
			memberFunctions[21].functionData = NULL;
			memberFunctions[21].function = &ane_b2PrismaticJointDef_getter_motorSpeed;

			memberFunctions[22].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[22].functionData = NULL;
			memberFunctions[22].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2PrismaticJointDef_instance);
		}
		break;

		case 90:		//b2PrismaticJoint
		{
			b2PrismaticJoint* b2PrismaticJoint_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 24;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2PrismaticJoint_callback_GetAnchorA";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2PrismaticJoint_callback_GetAnchorA;

			memberFunctions[1].name = (const uint8_t*)"ane_b2PrismaticJoint_callback_GetAnchorB";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2PrismaticJoint_callback_GetAnchorB;

			memberFunctions[2].name = (const uint8_t*)"ane_b2PrismaticJoint_callback_GetReactionForce";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2PrismaticJoint_callback_GetReactionForce;

			memberFunctions[3].name = (const uint8_t*)"ane_b2PrismaticJoint_callback_GetReactionTorque";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2PrismaticJoint_callback_GetReactionTorque;

			memberFunctions[4].name = (const uint8_t*)"ane_b2PrismaticJoint_callback_GetLocalAnchorA";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_b2PrismaticJoint_callback_GetLocalAnchorA;

			memberFunctions[5].name = (const uint8_t*)"ane_b2PrismaticJoint_callback_GetLocalAnchorB";
			memberFunctions[5].functionData = NULL;
			memberFunctions[5].function = &ane_b2PrismaticJoint_callback_GetLocalAnchorB;

			memberFunctions[6].name = (const uint8_t*)"ane_b2PrismaticJoint_callback_GetLocalAxisA";
			memberFunctions[6].functionData = NULL;
			memberFunctions[6].function = &ane_b2PrismaticJoint_callback_GetLocalAxisA;

			memberFunctions[7].name = (const uint8_t*)"ane_b2PrismaticJoint_callback_GetReferenceAngle";
			memberFunctions[7].functionData = NULL;
			memberFunctions[7].function = &ane_b2PrismaticJoint_callback_GetReferenceAngle;

			memberFunctions[8].name = (const uint8_t*)"ane_b2PrismaticJoint_callback_GetJointTranslation";
			memberFunctions[8].functionData = NULL;
			memberFunctions[8].function = &ane_b2PrismaticJoint_callback_GetJointTranslation;

			memberFunctions[9].name = (const uint8_t*)"ane_b2PrismaticJoint_callback_GetJointSpeed";
			memberFunctions[9].functionData = NULL;
			memberFunctions[9].function = &ane_b2PrismaticJoint_callback_GetJointSpeed;

			memberFunctions[10].name = (const uint8_t*)"ane_b2PrismaticJoint_callback_IsLimitEnabled";
			memberFunctions[10].functionData = NULL;
			memberFunctions[10].function = &ane_b2PrismaticJoint_callback_IsLimitEnabled;

			memberFunctions[11].name = (const uint8_t*)"ane_b2PrismaticJoint_callback_EnableLimit";
			memberFunctions[11].functionData = NULL;
			memberFunctions[11].function = &ane_b2PrismaticJoint_callback_EnableLimit;

			memberFunctions[12].name = (const uint8_t*)"ane_b2PrismaticJoint_callback_GetLowerLimit";
			memberFunctions[12].functionData = NULL;
			memberFunctions[12].function = &ane_b2PrismaticJoint_callback_GetLowerLimit;

			memberFunctions[13].name = (const uint8_t*)"ane_b2PrismaticJoint_callback_GetUpperLimit";
			memberFunctions[13].functionData = NULL;
			memberFunctions[13].function = &ane_b2PrismaticJoint_callback_GetUpperLimit;

			memberFunctions[14].name = (const uint8_t*)"ane_b2PrismaticJoint_callback_SetLimits";
			memberFunctions[14].functionData = NULL;
			memberFunctions[14].function = &ane_b2PrismaticJoint_callback_SetLimits;

			memberFunctions[15].name = (const uint8_t*)"ane_b2PrismaticJoint_callback_IsMotorEnabled";
			memberFunctions[15].functionData = NULL;
			memberFunctions[15].function = &ane_b2PrismaticJoint_callback_IsMotorEnabled;

			memberFunctions[16].name = (const uint8_t*)"ane_b2PrismaticJoint_callback_EnableMotor";
			memberFunctions[16].functionData = NULL;
			memberFunctions[16].function = &ane_b2PrismaticJoint_callback_EnableMotor;

			memberFunctions[17].name = (const uint8_t*)"ane_b2PrismaticJoint_callback_SetMotorSpeed";
			memberFunctions[17].functionData = NULL;
			memberFunctions[17].function = &ane_b2PrismaticJoint_callback_SetMotorSpeed;

			memberFunctions[18].name = (const uint8_t*)"ane_b2PrismaticJoint_callback_GetMotorSpeed";
			memberFunctions[18].functionData = NULL;
			memberFunctions[18].function = &ane_b2PrismaticJoint_callback_GetMotorSpeed;

			memberFunctions[19].name = (const uint8_t*)"ane_b2PrismaticJoint_callback_SetMaxMotorForce";
			memberFunctions[19].functionData = NULL;
			memberFunctions[19].function = &ane_b2PrismaticJoint_callback_SetMaxMotorForce;

			memberFunctions[20].name = (const uint8_t*)"ane_b2PrismaticJoint_callback_GetMaxMotorForce";
			memberFunctions[20].functionData = NULL;
			memberFunctions[20].function = &ane_b2PrismaticJoint_callback_GetMaxMotorForce;

			memberFunctions[21].name = (const uint8_t*)"ane_b2PrismaticJoint_callback_GetMotorForce";
			memberFunctions[21].functionData = NULL;
			memberFunctions[21].function = &ane_b2PrismaticJoint_callback_GetMotorForce;

			memberFunctions[22].name = (const uint8_t*)"ane_b2PrismaticJoint_callback_Dump";
			memberFunctions[22].functionData = NULL;
			memberFunctions[22].function = &ane_b2PrismaticJoint_callback_Dump;

			memberFunctions[23].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[23].functionData = NULL;
			memberFunctions[23].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2PrismaticJoint_instance);
		}
		break;

		case 91:		//b2PulleyJointDef
		{
			b2PulleyJointDef* b2PulleyJointDef_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 17;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2PulleyJointDef_constructor_b2PulleyJointDef";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2PulleyJointDef_constructor_b2PulleyJointDef;

			memberFunctions[1].name = (const uint8_t*)"ane_b2PulleyJointDef_callback_Initialize";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2PulleyJointDef_callback_Initialize;

			memberFunctions[2].name = (const uint8_t*)"ane_b2PulleyJointDef_setter_groundAnchorA";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2PulleyJointDef_setter_groundAnchorA;

			memberFunctions[3].name = (const uint8_t*)"ane_b2PulleyJointDef_getter_groundAnchorA";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2PulleyJointDef_getter_groundAnchorA;

			memberFunctions[4].name = (const uint8_t*)"ane_b2PulleyJointDef_setter_groundAnchorB";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_b2PulleyJointDef_setter_groundAnchorB;

			memberFunctions[5].name = (const uint8_t*)"ane_b2PulleyJointDef_getter_groundAnchorB";
			memberFunctions[5].functionData = NULL;
			memberFunctions[5].function = &ane_b2PulleyJointDef_getter_groundAnchorB;

			memberFunctions[6].name = (const uint8_t*)"ane_b2PulleyJointDef_setter_localAnchorA";
			memberFunctions[6].functionData = NULL;
			memberFunctions[6].function = &ane_b2PulleyJointDef_setter_localAnchorA;

			memberFunctions[7].name = (const uint8_t*)"ane_b2PulleyJointDef_getter_localAnchorA";
			memberFunctions[7].functionData = NULL;
			memberFunctions[7].function = &ane_b2PulleyJointDef_getter_localAnchorA;

			memberFunctions[8].name = (const uint8_t*)"ane_b2PulleyJointDef_setter_localAnchorB";
			memberFunctions[8].functionData = NULL;
			memberFunctions[8].function = &ane_b2PulleyJointDef_setter_localAnchorB;

			memberFunctions[9].name = (const uint8_t*)"ane_b2PulleyJointDef_getter_localAnchorB";
			memberFunctions[9].functionData = NULL;
			memberFunctions[9].function = &ane_b2PulleyJointDef_getter_localAnchorB;

			memberFunctions[10].name = (const uint8_t*)"ane_b2PulleyJointDef_setter_lengthA";
			memberFunctions[10].functionData = NULL;
			memberFunctions[10].function = &ane_b2PulleyJointDef_setter_lengthA;

			memberFunctions[11].name = (const uint8_t*)"ane_b2PulleyJointDef_getter_lengthA";
			memberFunctions[11].functionData = NULL;
			memberFunctions[11].function = &ane_b2PulleyJointDef_getter_lengthA;

			memberFunctions[12].name = (const uint8_t*)"ane_b2PulleyJointDef_setter_lengthB";
			memberFunctions[12].functionData = NULL;
			memberFunctions[12].function = &ane_b2PulleyJointDef_setter_lengthB;

			memberFunctions[13].name = (const uint8_t*)"ane_b2PulleyJointDef_getter_lengthB";
			memberFunctions[13].functionData = NULL;
			memberFunctions[13].function = &ane_b2PulleyJointDef_getter_lengthB;

			memberFunctions[14].name = (const uint8_t*)"ane_b2PulleyJointDef_setter_ratio";
			memberFunctions[14].functionData = NULL;
			memberFunctions[14].function = &ane_b2PulleyJointDef_setter_ratio;

			memberFunctions[15].name = (const uint8_t*)"ane_b2PulleyJointDef_getter_ratio";
			memberFunctions[15].functionData = NULL;
			memberFunctions[15].function = &ane_b2PulleyJointDef_getter_ratio;

			memberFunctions[16].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[16].functionData = NULL;
			memberFunctions[16].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2PulleyJointDef_instance);
		}
		break;

		case 92:		//b2PulleyJoint
		{
			b2PulleyJoint* b2PulleyJoint_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 14;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2PulleyJoint_callback_GetAnchorA";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2PulleyJoint_callback_GetAnchorA;

			memberFunctions[1].name = (const uint8_t*)"ane_b2PulleyJoint_callback_GetAnchorB";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2PulleyJoint_callback_GetAnchorB;

			memberFunctions[2].name = (const uint8_t*)"ane_b2PulleyJoint_callback_GetReactionForce";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2PulleyJoint_callback_GetReactionForce;

			memberFunctions[3].name = (const uint8_t*)"ane_b2PulleyJoint_callback_GetReactionTorque";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2PulleyJoint_callback_GetReactionTorque;

			memberFunctions[4].name = (const uint8_t*)"ane_b2PulleyJoint_callback_GetGroundAnchorA";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_b2PulleyJoint_callback_GetGroundAnchorA;

			memberFunctions[5].name = (const uint8_t*)"ane_b2PulleyJoint_callback_GetGroundAnchorB";
			memberFunctions[5].functionData = NULL;
			memberFunctions[5].function = &ane_b2PulleyJoint_callback_GetGroundAnchorB;

			memberFunctions[6].name = (const uint8_t*)"ane_b2PulleyJoint_callback_GetLengthA";
			memberFunctions[6].functionData = NULL;
			memberFunctions[6].function = &ane_b2PulleyJoint_callback_GetLengthA;

			memberFunctions[7].name = (const uint8_t*)"ane_b2PulleyJoint_callback_GetLengthB";
			memberFunctions[7].functionData = NULL;
			memberFunctions[7].function = &ane_b2PulleyJoint_callback_GetLengthB;

			memberFunctions[8].name = (const uint8_t*)"ane_b2PulleyJoint_callback_GetRatio";
			memberFunctions[8].functionData = NULL;
			memberFunctions[8].function = &ane_b2PulleyJoint_callback_GetRatio;

			memberFunctions[9].name = (const uint8_t*)"ane_b2PulleyJoint_callback_GetCurrentLengthA";
			memberFunctions[9].functionData = NULL;
			memberFunctions[9].function = &ane_b2PulleyJoint_callback_GetCurrentLengthA;

			memberFunctions[10].name = (const uint8_t*)"ane_b2PulleyJoint_callback_GetCurrentLengthB";
			memberFunctions[10].functionData = NULL;
			memberFunctions[10].function = &ane_b2PulleyJoint_callback_GetCurrentLengthB;

			memberFunctions[11].name = (const uint8_t*)"ane_b2PulleyJoint_callback_Dump";
			memberFunctions[11].functionData = NULL;
			memberFunctions[11].function = &ane_b2PulleyJoint_callback_Dump;

			memberFunctions[12].name = (const uint8_t*)"ane_b2PulleyJoint_callback_ShiftOrigin";
			memberFunctions[12].functionData = NULL;
			memberFunctions[12].function = &ane_b2PulleyJoint_callback_ShiftOrigin;

			memberFunctions[13].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[13].functionData = NULL;
			memberFunctions[13].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2PulleyJoint_instance);
		}
		break;

		case 93:		//b2RevoluteJointDef
		{
			b2RevoluteJointDef* b2RevoluteJointDef_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 21;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2RevoluteJointDef_constructor_b2RevoluteJointDef";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2RevoluteJointDef_constructor_b2RevoluteJointDef;

			memberFunctions[1].name = (const uint8_t*)"ane_b2RevoluteJointDef_callback_Initialize";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2RevoluteJointDef_callback_Initialize;

			memberFunctions[2].name = (const uint8_t*)"ane_b2RevoluteJointDef_setter_localAnchorA";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2RevoluteJointDef_setter_localAnchorA;

			memberFunctions[3].name = (const uint8_t*)"ane_b2RevoluteJointDef_getter_localAnchorA";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2RevoluteJointDef_getter_localAnchorA;

			memberFunctions[4].name = (const uint8_t*)"ane_b2RevoluteJointDef_setter_localAnchorB";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_b2RevoluteJointDef_setter_localAnchorB;

			memberFunctions[5].name = (const uint8_t*)"ane_b2RevoluteJointDef_getter_localAnchorB";
			memberFunctions[5].functionData = NULL;
			memberFunctions[5].function = &ane_b2RevoluteJointDef_getter_localAnchorB;

			memberFunctions[6].name = (const uint8_t*)"ane_b2RevoluteJointDef_setter_referenceAngle";
			memberFunctions[6].functionData = NULL;
			memberFunctions[6].function = &ane_b2RevoluteJointDef_setter_referenceAngle;

			memberFunctions[7].name = (const uint8_t*)"ane_b2RevoluteJointDef_getter_referenceAngle";
			memberFunctions[7].functionData = NULL;
			memberFunctions[7].function = &ane_b2RevoluteJointDef_getter_referenceAngle;

			memberFunctions[8].name = (const uint8_t*)"ane_b2RevoluteJointDef_setter_enableLimit";
			memberFunctions[8].functionData = NULL;
			memberFunctions[8].function = &ane_b2RevoluteJointDef_setter_enableLimit;

			memberFunctions[9].name = (const uint8_t*)"ane_b2RevoluteJointDef_getter_enableLimit";
			memberFunctions[9].functionData = NULL;
			memberFunctions[9].function = &ane_b2RevoluteJointDef_getter_enableLimit;

			memberFunctions[10].name = (const uint8_t*)"ane_b2RevoluteJointDef_setter_lowerAngle";
			memberFunctions[10].functionData = NULL;
			memberFunctions[10].function = &ane_b2RevoluteJointDef_setter_lowerAngle;

			memberFunctions[11].name = (const uint8_t*)"ane_b2RevoluteJointDef_getter_lowerAngle";
			memberFunctions[11].functionData = NULL;
			memberFunctions[11].function = &ane_b2RevoluteJointDef_getter_lowerAngle;

			memberFunctions[12].name = (const uint8_t*)"ane_b2RevoluteJointDef_setter_upperAngle";
			memberFunctions[12].functionData = NULL;
			memberFunctions[12].function = &ane_b2RevoluteJointDef_setter_upperAngle;

			memberFunctions[13].name = (const uint8_t*)"ane_b2RevoluteJointDef_getter_upperAngle";
			memberFunctions[13].functionData = NULL;
			memberFunctions[13].function = &ane_b2RevoluteJointDef_getter_upperAngle;

			memberFunctions[14].name = (const uint8_t*)"ane_b2RevoluteJointDef_setter_enableMotor";
			memberFunctions[14].functionData = NULL;
			memberFunctions[14].function = &ane_b2RevoluteJointDef_setter_enableMotor;

			memberFunctions[15].name = (const uint8_t*)"ane_b2RevoluteJointDef_getter_enableMotor";
			memberFunctions[15].functionData = NULL;
			memberFunctions[15].function = &ane_b2RevoluteJointDef_getter_enableMotor;

			memberFunctions[16].name = (const uint8_t*)"ane_b2RevoluteJointDef_setter_motorSpeed";
			memberFunctions[16].functionData = NULL;
			memberFunctions[16].function = &ane_b2RevoluteJointDef_setter_motorSpeed;

			memberFunctions[17].name = (const uint8_t*)"ane_b2RevoluteJointDef_getter_motorSpeed";
			memberFunctions[17].functionData = NULL;
			memberFunctions[17].function = &ane_b2RevoluteJointDef_getter_motorSpeed;

			memberFunctions[18].name = (const uint8_t*)"ane_b2RevoluteJointDef_setter_maxMotorTorque";
			memberFunctions[18].functionData = NULL;
			memberFunctions[18].function = &ane_b2RevoluteJointDef_setter_maxMotorTorque;

			memberFunctions[19].name = (const uint8_t*)"ane_b2RevoluteJointDef_getter_maxMotorTorque";
			memberFunctions[19].functionData = NULL;
			memberFunctions[19].function = &ane_b2RevoluteJointDef_getter_maxMotorTorque;

			memberFunctions[20].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[20].functionData = NULL;
			memberFunctions[20].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2RevoluteJointDef_instance);
		}
		break;

		case 94:		//b2RevoluteJoint
		{
			b2RevoluteJoint* b2RevoluteJoint_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 23;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2RevoluteJoint_callback_GetAnchorA";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2RevoluteJoint_callback_GetAnchorA;

			memberFunctions[1].name = (const uint8_t*)"ane_b2RevoluteJoint_callback_GetAnchorB";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2RevoluteJoint_callback_GetAnchorB;

			memberFunctions[2].name = (const uint8_t*)"ane_b2RevoluteJoint_callback_GetLocalAnchorA";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2RevoluteJoint_callback_GetLocalAnchorA;

			memberFunctions[3].name = (const uint8_t*)"ane_b2RevoluteJoint_callback_GetLocalAnchorB";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2RevoluteJoint_callback_GetLocalAnchorB;

			memberFunctions[4].name = (const uint8_t*)"ane_b2RevoluteJoint_callback_GetReferenceAngle";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_b2RevoluteJoint_callback_GetReferenceAngle;

			memberFunctions[5].name = (const uint8_t*)"ane_b2RevoluteJoint_callback_GetJointAngle";
			memberFunctions[5].functionData = NULL;
			memberFunctions[5].function = &ane_b2RevoluteJoint_callback_GetJointAngle;

			memberFunctions[6].name = (const uint8_t*)"ane_b2RevoluteJoint_callback_GetJointSpeed";
			memberFunctions[6].functionData = NULL;
			memberFunctions[6].function = &ane_b2RevoluteJoint_callback_GetJointSpeed;

			memberFunctions[7].name = (const uint8_t*)"ane_b2RevoluteJoint_callback_IsLimitEnabled";
			memberFunctions[7].functionData = NULL;
			memberFunctions[7].function = &ane_b2RevoluteJoint_callback_IsLimitEnabled;

			memberFunctions[8].name = (const uint8_t*)"ane_b2RevoluteJoint_callback_EnableLimit";
			memberFunctions[8].functionData = NULL;
			memberFunctions[8].function = &ane_b2RevoluteJoint_callback_EnableLimit;

			memberFunctions[9].name = (const uint8_t*)"ane_b2RevoluteJoint_callback_GetLowerLimit";
			memberFunctions[9].functionData = NULL;
			memberFunctions[9].function = &ane_b2RevoluteJoint_callback_GetLowerLimit;

			memberFunctions[10].name = (const uint8_t*)"ane_b2RevoluteJoint_callback_GetUpperLimit";
			memberFunctions[10].functionData = NULL;
			memberFunctions[10].function = &ane_b2RevoluteJoint_callback_GetUpperLimit;

			memberFunctions[11].name = (const uint8_t*)"ane_b2RevoluteJoint_callback_SetLimits";
			memberFunctions[11].functionData = NULL;
			memberFunctions[11].function = &ane_b2RevoluteJoint_callback_SetLimits;

			memberFunctions[12].name = (const uint8_t*)"ane_b2RevoluteJoint_callback_IsMotorEnabled";
			memberFunctions[12].functionData = NULL;
			memberFunctions[12].function = &ane_b2RevoluteJoint_callback_IsMotorEnabled;

			memberFunctions[13].name = (const uint8_t*)"ane_b2RevoluteJoint_callback_EnableMotor";
			memberFunctions[13].functionData = NULL;
			memberFunctions[13].function = &ane_b2RevoluteJoint_callback_EnableMotor;

			memberFunctions[14].name = (const uint8_t*)"ane_b2RevoluteJoint_callback_SetMotorSpeed";
			memberFunctions[14].functionData = NULL;
			memberFunctions[14].function = &ane_b2RevoluteJoint_callback_SetMotorSpeed;

			memberFunctions[15].name = (const uint8_t*)"ane_b2RevoluteJoint_callback_GetMotorSpeed";
			memberFunctions[15].functionData = NULL;
			memberFunctions[15].function = &ane_b2RevoluteJoint_callback_GetMotorSpeed;

			memberFunctions[16].name = (const uint8_t*)"ane_b2RevoluteJoint_callback_SetMaxMotorTorque";
			memberFunctions[16].functionData = NULL;
			memberFunctions[16].function = &ane_b2RevoluteJoint_callback_SetMaxMotorTorque;

			memberFunctions[17].name = (const uint8_t*)"ane_b2RevoluteJoint_callback_GetMaxMotorTorque";
			memberFunctions[17].functionData = NULL;
			memberFunctions[17].function = &ane_b2RevoluteJoint_callback_GetMaxMotorTorque;

			memberFunctions[18].name = (const uint8_t*)"ane_b2RevoluteJoint_callback_GetReactionForce";
			memberFunctions[18].functionData = NULL;
			memberFunctions[18].function = &ane_b2RevoluteJoint_callback_GetReactionForce;

			memberFunctions[19].name = (const uint8_t*)"ane_b2RevoluteJoint_callback_GetReactionTorque";
			memberFunctions[19].functionData = NULL;
			memberFunctions[19].function = &ane_b2RevoluteJoint_callback_GetReactionTorque;

			memberFunctions[20].name = (const uint8_t*)"ane_b2RevoluteJoint_callback_GetMotorTorque";
			memberFunctions[20].functionData = NULL;
			memberFunctions[20].function = &ane_b2RevoluteJoint_callback_GetMotorTorque;

			memberFunctions[21].name = (const uint8_t*)"ane_b2RevoluteJoint_callback_Dump";
			memberFunctions[21].functionData = NULL;
			memberFunctions[21].function = &ane_b2RevoluteJoint_callback_Dump;

			memberFunctions[22].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[22].functionData = NULL;
			memberFunctions[22].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2RevoluteJoint_instance);
		}
		break;

		case 95:		//b2RopeJointDef
		{
			b2RopeJointDef* b2RopeJointDef_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 8;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2RopeJointDef_constructor_b2RopeJointDef";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2RopeJointDef_constructor_b2RopeJointDef;

			memberFunctions[1].name = (const uint8_t*)"ane_b2RopeJointDef_setter_localAnchorA";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2RopeJointDef_setter_localAnchorA;

			memberFunctions[2].name = (const uint8_t*)"ane_b2RopeJointDef_getter_localAnchorA";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2RopeJointDef_getter_localAnchorA;

			memberFunctions[3].name = (const uint8_t*)"ane_b2RopeJointDef_setter_localAnchorB";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2RopeJointDef_setter_localAnchorB;

			memberFunctions[4].name = (const uint8_t*)"ane_b2RopeJointDef_getter_localAnchorB";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_b2RopeJointDef_getter_localAnchorB;

			memberFunctions[5].name = (const uint8_t*)"ane_b2RopeJointDef_setter_maxLength";
			memberFunctions[5].functionData = NULL;
			memberFunctions[5].function = &ane_b2RopeJointDef_setter_maxLength;

			memberFunctions[6].name = (const uint8_t*)"ane_b2RopeJointDef_getter_maxLength";
			memberFunctions[6].functionData = NULL;
			memberFunctions[6].function = &ane_b2RopeJointDef_getter_maxLength;

			memberFunctions[7].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[7].functionData = NULL;
			memberFunctions[7].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2RopeJointDef_instance);
		}
		break;

		case 96:		//b2RopeJoint
		{
			b2RopeJoint* b2RopeJoint_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 11;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2RopeJoint_callback_GetAnchorA";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2RopeJoint_callback_GetAnchorA;

			memberFunctions[1].name = (const uint8_t*)"ane_b2RopeJoint_callback_GetAnchorB";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2RopeJoint_callback_GetAnchorB;

			memberFunctions[2].name = (const uint8_t*)"ane_b2RopeJoint_callback_GetReactionForce";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2RopeJoint_callback_GetReactionForce;

			memberFunctions[3].name = (const uint8_t*)"ane_b2RopeJoint_callback_GetReactionTorque";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2RopeJoint_callback_GetReactionTorque;

			memberFunctions[4].name = (const uint8_t*)"ane_b2RopeJoint_callback_GetLocalAnchorA";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_b2RopeJoint_callback_GetLocalAnchorA;

			memberFunctions[5].name = (const uint8_t*)"ane_b2RopeJoint_callback_GetLocalAnchorB";
			memberFunctions[5].functionData = NULL;
			memberFunctions[5].function = &ane_b2RopeJoint_callback_GetLocalAnchorB;

			memberFunctions[6].name = (const uint8_t*)"ane_b2RopeJoint_callback_SetMaxLength";
			memberFunctions[6].functionData = NULL;
			memberFunctions[6].function = &ane_b2RopeJoint_callback_SetMaxLength;

			memberFunctions[7].name = (const uint8_t*)"ane_b2RopeJoint_callback_GetMaxLength";
			memberFunctions[7].functionData = NULL;
			memberFunctions[7].function = &ane_b2RopeJoint_callback_GetMaxLength;

			memberFunctions[8].name = (const uint8_t*)"ane_b2RopeJoint_callback_GetLimitState";
			memberFunctions[8].functionData = NULL;
			memberFunctions[8].function = &ane_b2RopeJoint_callback_GetLimitState;

			memberFunctions[9].name = (const uint8_t*)"ane_b2RopeJoint_callback_Dump";
			memberFunctions[9].functionData = NULL;
			memberFunctions[9].function = &ane_b2RopeJoint_callback_Dump;

			memberFunctions[10].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[10].functionData = NULL;
			memberFunctions[10].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2RopeJoint_instance);
		}
		break;

		case 97:		//b2WeldJointDef
		{
			b2WeldJointDef* b2WeldJointDef_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 13;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2WeldJointDef_constructor_b2WeldJointDef";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2WeldJointDef_constructor_b2WeldJointDef;

			memberFunctions[1].name = (const uint8_t*)"ane_b2WeldJointDef_callback_Initialize";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2WeldJointDef_callback_Initialize;

			memberFunctions[2].name = (const uint8_t*)"ane_b2WeldJointDef_setter_localAnchorA";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2WeldJointDef_setter_localAnchorA;

			memberFunctions[3].name = (const uint8_t*)"ane_b2WeldJointDef_getter_localAnchorA";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2WeldJointDef_getter_localAnchorA;

			memberFunctions[4].name = (const uint8_t*)"ane_b2WeldJointDef_setter_localAnchorB";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_b2WeldJointDef_setter_localAnchorB;

			memberFunctions[5].name = (const uint8_t*)"ane_b2WeldJointDef_getter_localAnchorB";
			memberFunctions[5].functionData = NULL;
			memberFunctions[5].function = &ane_b2WeldJointDef_getter_localAnchorB;

			memberFunctions[6].name = (const uint8_t*)"ane_b2WeldJointDef_setter_referenceAngle";
			memberFunctions[6].functionData = NULL;
			memberFunctions[6].function = &ane_b2WeldJointDef_setter_referenceAngle;

			memberFunctions[7].name = (const uint8_t*)"ane_b2WeldJointDef_getter_referenceAngle";
			memberFunctions[7].functionData = NULL;
			memberFunctions[7].function = &ane_b2WeldJointDef_getter_referenceAngle;

			memberFunctions[8].name = (const uint8_t*)"ane_b2WeldJointDef_setter_frequencyHz";
			memberFunctions[8].functionData = NULL;
			memberFunctions[8].function = &ane_b2WeldJointDef_setter_frequencyHz;

			memberFunctions[9].name = (const uint8_t*)"ane_b2WeldJointDef_getter_frequencyHz";
			memberFunctions[9].functionData = NULL;
			memberFunctions[9].function = &ane_b2WeldJointDef_getter_frequencyHz;

			memberFunctions[10].name = (const uint8_t*)"ane_b2WeldJointDef_setter_dampingRatio";
			memberFunctions[10].functionData = NULL;
			memberFunctions[10].function = &ane_b2WeldJointDef_setter_dampingRatio;

			memberFunctions[11].name = (const uint8_t*)"ane_b2WeldJointDef_getter_dampingRatio";
			memberFunctions[11].functionData = NULL;
			memberFunctions[11].function = &ane_b2WeldJointDef_getter_dampingRatio;

			memberFunctions[12].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[12].functionData = NULL;
			memberFunctions[12].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2WeldJointDef_instance);
		}
		break;

		case 98:		//b2WeldJoint
		{
			b2WeldJoint* b2WeldJoint_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 13;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2WeldJoint_callback_GetAnchorA";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2WeldJoint_callback_GetAnchorA;

			memberFunctions[1].name = (const uint8_t*)"ane_b2WeldJoint_callback_GetAnchorB";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2WeldJoint_callback_GetAnchorB;

			memberFunctions[2].name = (const uint8_t*)"ane_b2WeldJoint_callback_GetReactionForce";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2WeldJoint_callback_GetReactionForce;

			memberFunctions[3].name = (const uint8_t*)"ane_b2WeldJoint_callback_GetReactionTorque";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2WeldJoint_callback_GetReactionTorque;

			memberFunctions[4].name = (const uint8_t*)"ane_b2WeldJoint_callback_GetLocalAnchorA";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_b2WeldJoint_callback_GetLocalAnchorA;

			memberFunctions[5].name = (const uint8_t*)"ane_b2WeldJoint_callback_GetLocalAnchorB";
			memberFunctions[5].functionData = NULL;
			memberFunctions[5].function = &ane_b2WeldJoint_callback_GetLocalAnchorB;

			memberFunctions[6].name = (const uint8_t*)"ane_b2WeldJoint_callback_GetReferenceAngle";
			memberFunctions[6].functionData = NULL;
			memberFunctions[6].function = &ane_b2WeldJoint_callback_GetReferenceAngle;

			memberFunctions[7].name = (const uint8_t*)"ane_b2WeldJoint_callback_SetFrequency";
			memberFunctions[7].functionData = NULL;
			memberFunctions[7].function = &ane_b2WeldJoint_callback_SetFrequency;

			memberFunctions[8].name = (const uint8_t*)"ane_b2WeldJoint_callback_GetFrequency";
			memberFunctions[8].functionData = NULL;
			memberFunctions[8].function = &ane_b2WeldJoint_callback_GetFrequency;

			memberFunctions[9].name = (const uint8_t*)"ane_b2WeldJoint_callback_SetDampingRatio";
			memberFunctions[9].functionData = NULL;
			memberFunctions[9].function = &ane_b2WeldJoint_callback_SetDampingRatio;

			memberFunctions[10].name = (const uint8_t*)"ane_b2WeldJoint_callback_GetDampingRatio";
			memberFunctions[10].functionData = NULL;
			memberFunctions[10].function = &ane_b2WeldJoint_callback_GetDampingRatio;

			memberFunctions[11].name = (const uint8_t*)"ane_b2WeldJoint_callback_Dump";
			memberFunctions[11].functionData = NULL;
			memberFunctions[11].function = &ane_b2WeldJoint_callback_Dump;

			memberFunctions[12].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[12].functionData = NULL;
			memberFunctions[12].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2WeldJoint_instance);
		}
		break;

		case 99:		//b2WheelJointDef
		{
			b2WheelJointDef* b2WheelJointDef_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 19;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2WheelJointDef_constructor_b2WheelJointDef";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2WheelJointDef_constructor_b2WheelJointDef;

			memberFunctions[1].name = (const uint8_t*)"ane_b2WheelJointDef_callback_Initialize";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2WheelJointDef_callback_Initialize;

			memberFunctions[2].name = (const uint8_t*)"ane_b2WheelJointDef_setter_localAnchorA";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2WheelJointDef_setter_localAnchorA;

			memberFunctions[3].name = (const uint8_t*)"ane_b2WheelJointDef_getter_localAnchorA";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2WheelJointDef_getter_localAnchorA;

			memberFunctions[4].name = (const uint8_t*)"ane_b2WheelJointDef_setter_localAnchorB";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_b2WheelJointDef_setter_localAnchorB;

			memberFunctions[5].name = (const uint8_t*)"ane_b2WheelJointDef_getter_localAnchorB";
			memberFunctions[5].functionData = NULL;
			memberFunctions[5].function = &ane_b2WheelJointDef_getter_localAnchorB;

			memberFunctions[6].name = (const uint8_t*)"ane_b2WheelJointDef_setter_localAxisA";
			memberFunctions[6].functionData = NULL;
			memberFunctions[6].function = &ane_b2WheelJointDef_setter_localAxisA;

			memberFunctions[7].name = (const uint8_t*)"ane_b2WheelJointDef_getter_localAxisA";
			memberFunctions[7].functionData = NULL;
			memberFunctions[7].function = &ane_b2WheelJointDef_getter_localAxisA;

			memberFunctions[8].name = (const uint8_t*)"ane_b2WheelJointDef_setter_enableMotor";
			memberFunctions[8].functionData = NULL;
			memberFunctions[8].function = &ane_b2WheelJointDef_setter_enableMotor;

			memberFunctions[9].name = (const uint8_t*)"ane_b2WheelJointDef_getter_enableMotor";
			memberFunctions[9].functionData = NULL;
			memberFunctions[9].function = &ane_b2WheelJointDef_getter_enableMotor;

			memberFunctions[10].name = (const uint8_t*)"ane_b2WheelJointDef_setter_maxMotorTorque";
			memberFunctions[10].functionData = NULL;
			memberFunctions[10].function = &ane_b2WheelJointDef_setter_maxMotorTorque;

			memberFunctions[11].name = (const uint8_t*)"ane_b2WheelJointDef_getter_maxMotorTorque";
			memberFunctions[11].functionData = NULL;
			memberFunctions[11].function = &ane_b2WheelJointDef_getter_maxMotorTorque;

			memberFunctions[12].name = (const uint8_t*)"ane_b2WheelJointDef_setter_motorSpeed";
			memberFunctions[12].functionData = NULL;
			memberFunctions[12].function = &ane_b2WheelJointDef_setter_motorSpeed;

			memberFunctions[13].name = (const uint8_t*)"ane_b2WheelJointDef_getter_motorSpeed";
			memberFunctions[13].functionData = NULL;
			memberFunctions[13].function = &ane_b2WheelJointDef_getter_motorSpeed;

			memberFunctions[14].name = (const uint8_t*)"ane_b2WheelJointDef_setter_frequencyHz";
			memberFunctions[14].functionData = NULL;
			memberFunctions[14].function = &ane_b2WheelJointDef_setter_frequencyHz;

			memberFunctions[15].name = (const uint8_t*)"ane_b2WheelJointDef_getter_frequencyHz";
			memberFunctions[15].functionData = NULL;
			memberFunctions[15].function = &ane_b2WheelJointDef_getter_frequencyHz;

			memberFunctions[16].name = (const uint8_t*)"ane_b2WheelJointDef_setter_dampingRatio";
			memberFunctions[16].functionData = NULL;
			memberFunctions[16].function = &ane_b2WheelJointDef_setter_dampingRatio;

			memberFunctions[17].name = (const uint8_t*)"ane_b2WheelJointDef_getter_dampingRatio";
			memberFunctions[17].functionData = NULL;
			memberFunctions[17].function = &ane_b2WheelJointDef_getter_dampingRatio;

			memberFunctions[18].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[18].functionData = NULL;
			memberFunctions[18].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2WheelJointDef_instance);
		}
		break;

		case 100:		//b2WheelJoint
		{
			b2WheelJoint* b2WheelJoint_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 23;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2WheelJoint_callback_GetDefinition";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2WheelJoint_callback_GetDefinition;

			memberFunctions[1].name = (const uint8_t*)"ane_b2WheelJoint_callback_GetAnchorA";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2WheelJoint_callback_GetAnchorA;

			memberFunctions[2].name = (const uint8_t*)"ane_b2WheelJoint_callback_GetAnchorB";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2WheelJoint_callback_GetAnchorB;

			memberFunctions[3].name = (const uint8_t*)"ane_b2WheelJoint_callback_GetReactionForce";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2WheelJoint_callback_GetReactionForce;

			memberFunctions[4].name = (const uint8_t*)"ane_b2WheelJoint_callback_GetReactionTorque";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_b2WheelJoint_callback_GetReactionTorque;

			memberFunctions[5].name = (const uint8_t*)"ane_b2WheelJoint_callback_GetLocalAnchorA";
			memberFunctions[5].functionData = NULL;
			memberFunctions[5].function = &ane_b2WheelJoint_callback_GetLocalAnchorA;

			memberFunctions[6].name = (const uint8_t*)"ane_b2WheelJoint_callback_GetLocalAnchorB";
			memberFunctions[6].functionData = NULL;
			memberFunctions[6].function = &ane_b2WheelJoint_callback_GetLocalAnchorB;

			memberFunctions[7].name = (const uint8_t*)"ane_b2WheelJoint_callback_GetLocalAxisA";
			memberFunctions[7].functionData = NULL;
			memberFunctions[7].function = &ane_b2WheelJoint_callback_GetLocalAxisA;

			memberFunctions[8].name = (const uint8_t*)"ane_b2WheelJoint_callback_GetJointTranslation";
			memberFunctions[8].functionData = NULL;
			memberFunctions[8].function = &ane_b2WheelJoint_callback_GetJointTranslation;

			memberFunctions[9].name = (const uint8_t*)"ane_b2WheelJoint_callback_GetJointSpeed";
			memberFunctions[9].functionData = NULL;
			memberFunctions[9].function = &ane_b2WheelJoint_callback_GetJointSpeed;

			memberFunctions[10].name = (const uint8_t*)"ane_b2WheelJoint_callback_IsMotorEnabled";
			memberFunctions[10].functionData = NULL;
			memberFunctions[10].function = &ane_b2WheelJoint_callback_IsMotorEnabled;

			memberFunctions[11].name = (const uint8_t*)"ane_b2WheelJoint_callback_EnableMotor";
			memberFunctions[11].functionData = NULL;
			memberFunctions[11].function = &ane_b2WheelJoint_callback_EnableMotor;

			memberFunctions[12].name = (const uint8_t*)"ane_b2WheelJoint_callback_SetMotorSpeed";
			memberFunctions[12].functionData = NULL;
			memberFunctions[12].function = &ane_b2WheelJoint_callback_SetMotorSpeed;

			memberFunctions[13].name = (const uint8_t*)"ane_b2WheelJoint_callback_GetMotorSpeed";
			memberFunctions[13].functionData = NULL;
			memberFunctions[13].function = &ane_b2WheelJoint_callback_GetMotorSpeed;

			memberFunctions[14].name = (const uint8_t*)"ane_b2WheelJoint_callback_SetMaxMotorTorque";
			memberFunctions[14].functionData = NULL;
			memberFunctions[14].function = &ane_b2WheelJoint_callback_SetMaxMotorTorque;

			memberFunctions[15].name = (const uint8_t*)"ane_b2WheelJoint_callback_GetMaxMotorTorque";
			memberFunctions[15].functionData = NULL;
			memberFunctions[15].function = &ane_b2WheelJoint_callback_GetMaxMotorTorque;

			memberFunctions[16].name = (const uint8_t*)"ane_b2WheelJoint_callback_GetMotorTorque";
			memberFunctions[16].functionData = NULL;
			memberFunctions[16].function = &ane_b2WheelJoint_callback_GetMotorTorque;

			memberFunctions[17].name = (const uint8_t*)"ane_b2WheelJoint_callback_SetSpringFrequencyHz";
			memberFunctions[17].functionData = NULL;
			memberFunctions[17].function = &ane_b2WheelJoint_callback_SetSpringFrequencyHz;

			memberFunctions[18].name = (const uint8_t*)"ane_b2WheelJoint_callback_GetSpringFrequencyHz";
			memberFunctions[18].functionData = NULL;
			memberFunctions[18].function = &ane_b2WheelJoint_callback_GetSpringFrequencyHz;

			memberFunctions[19].name = (const uint8_t*)"ane_b2WheelJoint_callback_SetSpringDampingRatio";
			memberFunctions[19].functionData = NULL;
			memberFunctions[19].function = &ane_b2WheelJoint_callback_SetSpringDampingRatio;

			memberFunctions[20].name = (const uint8_t*)"ane_b2WheelJoint_callback_GetSpringDampingRatio";
			memberFunctions[20].functionData = NULL;
			memberFunctions[20].function = &ane_b2WheelJoint_callback_GetSpringDampingRatio;

			memberFunctions[21].name = (const uint8_t*)"ane_b2WheelJoint_callback_Dump";
			memberFunctions[21].functionData = NULL;
			memberFunctions[21].function = &ane_b2WheelJoint_callback_Dump;

			memberFunctions[22].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[22].functionData = NULL;
			memberFunctions[22].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2WheelJoint_instance);
		}
		break;

		case 101:		//b2ContactID
		{
			b2ContactID* b2ContactID_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 5;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2ContactID_setter_cf";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2ContactID_setter_cf;

			memberFunctions[1].name = (const uint8_t*)"ane_b2ContactID_getter_cf";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2ContactID_getter_cf;

			memberFunctions[2].name = (const uint8_t*)"ane_b2ContactID_setter_key";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2ContactID_setter_key;

			memberFunctions[3].name = (const uint8_t*)"ane_b2ContactID_getter_key";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2ContactID_getter_key;

			memberFunctions[4].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2ContactID_instance);
		}
		break;

		case 102:		//b2ContactPositionConstraint
		{
			b2ContactPositionConstraint* b2ContactPositionConstraint_instance;
			//Implementation goes here...

			if(hasMemoryAddress == true) {

			}else{

			}

			*numFunctions = 31;

			memberFunctions = (FRENamedFunction*) malloc(sizeof(FRENamedFunction) * (*numFunctions));

			memberFunctions[0].name = (const uint8_t*)"ane_b2ContactPositionConstraint_setter_localPoints";
			memberFunctions[0].functionData = NULL;
			memberFunctions[0].function = &ane_b2ContactPositionConstraint_setter_localPoints;

			memberFunctions[1].name = (const uint8_t*)"ane_b2ContactPositionConstraint_getter_localPoints";
			memberFunctions[1].functionData = NULL;
			memberFunctions[1].function = &ane_b2ContactPositionConstraint_getter_localPoints;

			memberFunctions[2].name = (const uint8_t*)"ane_b2ContactPositionConstraint_setter_localNormal";
			memberFunctions[2].functionData = NULL;
			memberFunctions[2].function = &ane_b2ContactPositionConstraint_setter_localNormal;

			memberFunctions[3].name = (const uint8_t*)"ane_b2ContactPositionConstraint_getter_localNormal";
			memberFunctions[3].functionData = NULL;
			memberFunctions[3].function = &ane_b2ContactPositionConstraint_getter_localNormal;

			memberFunctions[4].name = (const uint8_t*)"ane_b2ContactPositionConstraint_setter_localPoint";
			memberFunctions[4].functionData = NULL;
			memberFunctions[4].function = &ane_b2ContactPositionConstraint_setter_localPoint;

			memberFunctions[5].name = (const uint8_t*)"ane_b2ContactPositionConstraint_getter_localPoint";
			memberFunctions[5].functionData = NULL;
			memberFunctions[5].function = &ane_b2ContactPositionConstraint_getter_localPoint;

			memberFunctions[6].name = (const uint8_t*)"ane_b2ContactPositionConstraint_setter_indexA";
			memberFunctions[6].functionData = NULL;
			memberFunctions[6].function = &ane_b2ContactPositionConstraint_setter_indexA;

			memberFunctions[7].name = (const uint8_t*)"ane_b2ContactPositionConstraint_getter_indexA";
			memberFunctions[7].functionData = NULL;
			memberFunctions[7].function = &ane_b2ContactPositionConstraint_getter_indexA;

			memberFunctions[8].name = (const uint8_t*)"ane_b2ContactPositionConstraint_setter_indexB";
			memberFunctions[8].functionData = NULL;
			memberFunctions[8].function = &ane_b2ContactPositionConstraint_setter_indexB;

			memberFunctions[9].name = (const uint8_t*)"ane_b2ContactPositionConstraint_getter_indexB";
			memberFunctions[9].functionData = NULL;
			memberFunctions[9].function = &ane_b2ContactPositionConstraint_getter_indexB;

			memberFunctions[10].name = (const uint8_t*)"ane_b2ContactPositionConstraint_setter_invMassA";
			memberFunctions[10].functionData = NULL;
			memberFunctions[10].function = &ane_b2ContactPositionConstraint_setter_invMassA;

			memberFunctions[11].name = (const uint8_t*)"ane_b2ContactPositionConstraint_getter_invMassA";
			memberFunctions[11].functionData = NULL;
			memberFunctions[11].function = &ane_b2ContactPositionConstraint_getter_invMassA;

			memberFunctions[12].name = (const uint8_t*)"ane_b2ContactPositionConstraint_setter_invMassB";
			memberFunctions[12].functionData = NULL;
			memberFunctions[12].function = &ane_b2ContactPositionConstraint_setter_invMassB;

			memberFunctions[13].name = (const uint8_t*)"ane_b2ContactPositionConstraint_getter_invMassB";
			memberFunctions[13].functionData = NULL;
			memberFunctions[13].function = &ane_b2ContactPositionConstraint_getter_invMassB;

			memberFunctions[14].name = (const uint8_t*)"ane_b2ContactPositionConstraint_setter_localCenterA";
			memberFunctions[14].functionData = NULL;
			memberFunctions[14].function = &ane_b2ContactPositionConstraint_setter_localCenterA;

			memberFunctions[15].name = (const uint8_t*)"ane_b2ContactPositionConstraint_getter_localCenterA";
			memberFunctions[15].functionData = NULL;
			memberFunctions[15].function = &ane_b2ContactPositionConstraint_getter_localCenterA;

			memberFunctions[16].name = (const uint8_t*)"ane_b2ContactPositionConstraint_setter_localCenterB";
			memberFunctions[16].functionData = NULL;
			memberFunctions[16].function = &ane_b2ContactPositionConstraint_setter_localCenterB;

			memberFunctions[17].name = (const uint8_t*)"ane_b2ContactPositionConstraint_getter_localCenterB";
			memberFunctions[17].functionData = NULL;
			memberFunctions[17].function = &ane_b2ContactPositionConstraint_getter_localCenterB;

			memberFunctions[18].name = (const uint8_t*)"ane_b2ContactPositionConstraint_setter_invIA";
			memberFunctions[18].functionData = NULL;
			memberFunctions[18].function = &ane_b2ContactPositionConstraint_setter_invIA;

			memberFunctions[19].name = (const uint8_t*)"ane_b2ContactPositionConstraint_getter_invIA";
			memberFunctions[19].functionData = NULL;
			memberFunctions[19].function = &ane_b2ContactPositionConstraint_getter_invIA;

			memberFunctions[20].name = (const uint8_t*)"ane_b2ContactPositionConstraint_setter_invIB";
			memberFunctions[20].functionData = NULL;
			memberFunctions[20].function = &ane_b2ContactPositionConstraint_setter_invIB;

			memberFunctions[21].name = (const uint8_t*)"ane_b2ContactPositionConstraint_getter_invIB";
			memberFunctions[21].functionData = NULL;
			memberFunctions[21].function = &ane_b2ContactPositionConstraint_getter_invIB;

			memberFunctions[22].name = (const uint8_t*)"ane_b2ContactPositionConstraint_setter_type";
			memberFunctions[22].functionData = NULL;
			memberFunctions[22].function = &ane_b2ContactPositionConstraint_setter_type;

			memberFunctions[23].name = (const uint8_t*)"ane_b2ContactPositionConstraint_getter_type";
			memberFunctions[23].functionData = NULL;
			memberFunctions[23].function = &ane_b2ContactPositionConstraint_getter_type;

			memberFunctions[24].name = (const uint8_t*)"ane_b2ContactPositionConstraint_setter_radiusA";
			memberFunctions[24].functionData = NULL;
			memberFunctions[24].function = &ane_b2ContactPositionConstraint_setter_radiusA;

			memberFunctions[25].name = (const uint8_t*)"ane_b2ContactPositionConstraint_getter_radiusA";
			memberFunctions[25].functionData = NULL;
			memberFunctions[25].function = &ane_b2ContactPositionConstraint_getter_radiusA;

			memberFunctions[26].name = (const uint8_t*)"ane_b2ContactPositionConstraint_setter_radiusB";
			memberFunctions[26].functionData = NULL;
			memberFunctions[26].function = &ane_b2ContactPositionConstraint_setter_radiusB;

			memberFunctions[27].name = (const uint8_t*)"ane_b2ContactPositionConstraint_getter_radiusB";
			memberFunctions[27].functionData = NULL;
			memberFunctions[27].function = &ane_b2ContactPositionConstraint_getter_radiusB;

			memberFunctions[28].name = (const uint8_t*)"ane_b2ContactPositionConstraint_setter_pointCount";
			memberFunctions[28].functionData = NULL;
			memberFunctions[28].function = &ane_b2ContactPositionConstraint_setter_pointCount;

			memberFunctions[29].name = (const uint8_t*)"ane_b2ContactPositionConstraint_getter_pointCount";
			memberFunctions[29].functionData = NULL;
			memberFunctions[29].function = &ane_b2ContactPositionConstraint_getter_pointCount;

			memberFunctions[30].name = (const uint8_t*)"ane_getNativeDataMemoryAddress";
			memberFunctions[30].functionData = NULL;
			memberFunctions[30].function = &ane_getNativeDataMemoryAddress;



			FRESetContextNativeData(ctx, (void*)b2ContactPositionConstraint_instance);
		}
		break;

	}//End of switch statement

	*functions = memberFunctions;
}

void contextFinalizer(FREContext ctx)
{
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);

	if(nativeData != NULL) {
		/* We don't just want to delete, in case this is something like a b2Body object and the Actionscript developer
		 * made the mistake of allowing his reference fall out of scope. Need a proper solution here because we can't
		 * just expect an actionscript developer to start understanding that they need to explicitly clean up everything
		 * they do.
		 */
		//delete nativeData;
	}
}

#ifdef __cplusplus
} /* closing brace for extern "C" */
#endif
