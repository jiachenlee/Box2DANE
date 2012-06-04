/*================================================================================
*
* File Name: b2Joint.h
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

#ifndef BOX2DANE_C_B2JOINT_H_
#define BOX2DANE_C_B2JOINT_H_




FREObject ane_b2Joint_callback_GetType(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Joint* b2Joint_instance = (b2Joint*)(nativeData);
//	b2Joint_instance->GetType(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Joint_callback_GetBodyA(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Joint* b2Joint_instance = (b2Joint*)(nativeData);
//	b2Joint_instance->GetBodyA(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Joint_callback_GetBodyB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Joint* b2Joint_instance = (b2Joint*)(nativeData);
//	b2Joint_instance->GetBodyB(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Joint_callback_GetAnchorA(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Joint* b2Joint_instance = (b2Joint*)(nativeData);
//	b2Joint_instance->GetAnchorA(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Joint_callback_GetAnchorB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Joint* b2Joint_instance = (b2Joint*)(nativeData);
//	b2Joint_instance->GetAnchorB(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Joint_callback_GetReactionForce(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Joint* b2Joint_instance = (b2Joint*)(nativeData);
//	b2Joint_instance->GetReactionForce(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Joint_callback_GetReactionTorque(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Joint* b2Joint_instance = (b2Joint*)(nativeData);
//	b2Joint_instance->GetReactionTorque(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Joint_callback_GetNext(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Joint* b2Joint_instance = (b2Joint*)(nativeData);
//	b2Joint_instance->GetNext(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Joint_callback_GetUserData(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Joint* b2Joint_instance = (b2Joint*)(nativeData);
//	b2Joint_instance->GetUserData(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Joint_callback_SetUserData(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Joint* b2Joint_instance = (b2Joint*)(nativeData);
//	b2Joint_instance->SetUserData(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Joint_callback_IsActive(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Joint* b2Joint_instance = (b2Joint*)(nativeData);
//	b2Joint_instance->IsActive(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Joint_callback_GetCollideConnected(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Joint* b2Joint_instance = (b2Joint*)(nativeData);
//	b2Joint_instance->GetCollideConnected(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Joint_callback_Dump(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Joint* b2Joint_instance = (b2Joint*)(nativeData);
//	b2Joint_instance->Dump(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Joint_callback_ShiftOrigin(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Joint* b2Joint_instance = (b2Joint*)(nativeData);
//	b2Joint_instance->ShiftOrigin(...);
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2JOINT_H_ */
