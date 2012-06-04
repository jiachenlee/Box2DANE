/*================================================================================
*
* File Name: b2World.h
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

#ifndef BOX2DANE_C_B2WORLD_H_
#define BOX2DANE_C_B2WORLD_H_




FREObject ane_b2World_constructor_b2World(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2World* b2World_instance = (b2World*)(nativeData);
//	b2World_instance->b2World(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2World_callback_SetDestructionListener(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2World* b2World_instance = (b2World*)(nativeData);
//	b2World_instance->SetDestructionListener(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2World_callback_SetContactFilter(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2World* b2World_instance = (b2World*)(nativeData);
//	b2World_instance->SetContactFilter(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2World_callback_SetContactListener(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2World* b2World_instance = (b2World*)(nativeData);
//	b2World_instance->SetContactListener(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2World_callback_SetDebugDraw(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2World* b2World_instance = (b2World*)(nativeData);
//	b2World_instance->SetDebugDraw(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2World_callback_CreateBody(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2World* b2World_instance = (b2World*)(nativeData);
//	b2World_instance->CreateBody(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2World_callback_DestroyBody(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2World* b2World_instance = (b2World*)(nativeData);
//	b2World_instance->DestroyBody(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2World_callback_CreateJoint(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2World* b2World_instance = (b2World*)(nativeData);
//	b2World_instance->CreateJoint(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2World_callback_DestroyJoint(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2World* b2World_instance = (b2World*)(nativeData);
//	b2World_instance->DestroyJoint(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2World_callback_Step(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2World* b2World_instance = (b2World*)(nativeData);
//	b2World_instance->Step(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2World_callback_ClearForces(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2World* b2World_instance = (b2World*)(nativeData);
//	b2World_instance->ClearForces(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2World_callback_DrawDebugData(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2World* b2World_instance = (b2World*)(nativeData);
//	b2World_instance->DrawDebugData(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2World_callback_QueryAABB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2World* b2World_instance = (b2World*)(nativeData);
//	b2World_instance->QueryAABB(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2World_callback_RayCast(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2World* b2World_instance = (b2World*)(nativeData);
//	b2World_instance->RayCast(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2World_callback_GetBodyList(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2World* b2World_instance = (b2World*)(nativeData);
//	b2World_instance->GetBodyList(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2World_callback_GetJointList(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2World* b2World_instance = (b2World*)(nativeData);
//	b2World_instance->GetJointList(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2World_callback_GetContactList(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2World* b2World_instance = (b2World*)(nativeData);
//	b2World_instance->GetContactList(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2World_callback_SetAllowSleeping(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2World* b2World_instance = (b2World*)(nativeData);
//	b2World_instance->SetAllowSleeping(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2World_callback_GetAllowSleeping(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2World* b2World_instance = (b2World*)(nativeData);
//	b2World_instance->GetAllowSleeping(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2World_callback_SetWarmStarting(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2World* b2World_instance = (b2World*)(nativeData);
//	b2World_instance->SetWarmStarting(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2World_callback_GetWarmStarting(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2World* b2World_instance = (b2World*)(nativeData);
//	b2World_instance->GetWarmStarting(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2World_callback_SetContinuousPhysics(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2World* b2World_instance = (b2World*)(nativeData);
//	b2World_instance->SetContinuousPhysics(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2World_callback_GetContinuousPhysics(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2World* b2World_instance = (b2World*)(nativeData);
//	b2World_instance->GetContinuousPhysics(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2World_callback_SetSubStepping(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2World* b2World_instance = (b2World*)(nativeData);
//	b2World_instance->SetSubStepping(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2World_callback_GetSubStepping(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2World* b2World_instance = (b2World*)(nativeData);
//	b2World_instance->GetSubStepping(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2World_callback_GetProxyCount(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2World* b2World_instance = (b2World*)(nativeData);
//	b2World_instance->GetProxyCount(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2World_callback_GetBodyCount(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2World* b2World_instance = (b2World*)(nativeData);
//	b2World_instance->GetBodyCount(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2World_callback_GetJointCount(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2World* b2World_instance = (b2World*)(nativeData);
//	b2World_instance->GetJointCount(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2World_callback_GetContactCount(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2World* b2World_instance = (b2World*)(nativeData);
//	b2World_instance->GetContactCount(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2World_callback_GetTreeHeight(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2World* b2World_instance = (b2World*)(nativeData);
//	b2World_instance->GetTreeHeight(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2World_callback_GetTreeBalance(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2World* b2World_instance = (b2World*)(nativeData);
//	b2World_instance->GetTreeBalance(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2World_callback_GetTreeQuality(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2World* b2World_instance = (b2World*)(nativeData);
//	b2World_instance->GetTreeQuality(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2World_callback_SetGravity(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2World* b2World_instance = (b2World*)(nativeData);
//	b2World_instance->SetGravity(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2World_callback_GetGravity(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2World* b2World_instance = (b2World*)(nativeData);
//	b2World_instance->GetGravity(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2World_callback_IsLocked(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2World* b2World_instance = (b2World*)(nativeData);
//	b2World_instance->IsLocked(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2World_callback_SetAutoClearForces(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2World* b2World_instance = (b2World*)(nativeData);
//	b2World_instance->SetAutoClearForces(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2World_callback_GetAutoClearForces(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2World* b2World_instance = (b2World*)(nativeData);
//	b2World_instance->GetAutoClearForces(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2World_callback_ShiftOrigin(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2World* b2World_instance = (b2World*)(nativeData);
//	b2World_instance->ShiftOrigin(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2World_callback_GetContactManager(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2World* b2World_instance = (b2World*)(nativeData);
//	b2World_instance->GetContactManager(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2World_callback_GetProfile(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2World* b2World_instance = (b2World*)(nativeData);
//	b2World_instance->GetProfile(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2World_callback_Dump(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2World* b2World_instance = (b2World*)(nativeData);
//	b2World_instance->Dump(...);
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2WORLD_H_ */
