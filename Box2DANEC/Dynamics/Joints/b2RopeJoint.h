/*================================================================================
*
* File Name: b2RopeJoint.h
* Created on: Mon May 7 22:46:26 GMT-0400 2012
* Copyright (©) 2012 Jesse Nicholson. All Rights Reserved.
* 
*
*                       ***** BEGIN LICENSE BLOCK *****
* This Source Code Form is subject to the terms of the Mozilla Public
* License, v. 2.0. If a copy of the MPL was not distributed with this file,
* You can obtain one at http://mozilla.org/MPL/2.0/.
*                       ***** END  LICENSE  BLOCK *****
*===============================================================================*/

#ifndef BOX2DANE_C_B2ROPEJOINT_H_
#define BOX2DANE_C_B2ROPEJOINT_H_




FREObject ane_b2RopeJoint_callback_GetAnchorA(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RopeJoint* b2RopeJoint_instance = (b2RopeJoint*)(nativeData);
//	b2RopeJoint_instance->GetAnchorA(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2RopeJoint_callback_GetAnchorB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RopeJoint* b2RopeJoint_instance = (b2RopeJoint*)(nativeData);
//	b2RopeJoint_instance->GetAnchorB(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2RopeJoint_callback_GetReactionForce(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RopeJoint* b2RopeJoint_instance = (b2RopeJoint*)(nativeData);
//	b2RopeJoint_instance->GetReactionForce(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2RopeJoint_callback_GetReactionTorque(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RopeJoint* b2RopeJoint_instance = (b2RopeJoint*)(nativeData);
//	b2RopeJoint_instance->GetReactionTorque(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2RopeJoint_callback_GetLocalAnchorA(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RopeJoint* b2RopeJoint_instance = (b2RopeJoint*)(nativeData);
//	b2RopeJoint_instance->GetLocalAnchorA(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2RopeJoint_callback_GetLocalAnchorB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RopeJoint* b2RopeJoint_instance = (b2RopeJoint*)(nativeData);
//	b2RopeJoint_instance->GetLocalAnchorB(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2RopeJoint_callback_SetMaxLength(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RopeJoint* b2RopeJoint_instance = (b2RopeJoint*)(nativeData);
//	b2RopeJoint_instance->SetMaxLength(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2RopeJoint_callback_GetMaxLength(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RopeJoint* b2RopeJoint_instance = (b2RopeJoint*)(nativeData);
//	b2RopeJoint_instance->GetMaxLength(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2RopeJoint_callback_GetLimitState(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RopeJoint* b2RopeJoint_instance = (b2RopeJoint*)(nativeData);
//	b2RopeJoint_instance->GetLimitState(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2RopeJoint_callback_Dump(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RopeJoint* b2RopeJoint_instance = (b2RopeJoint*)(nativeData);
//	b2RopeJoint_instance->Dump(...);
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2ROPEJOINT_H_ */
