/*================================================================================
*
* File Name: b2MouseJoint.h
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

#ifndef BOX2DANE_C_B2MOUSEJOINT_H_
#define BOX2DANE_C_B2MOUSEJOINT_H_




FREObject ane_b2MouseJoint_callback_GetAnchorA(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2MouseJoint* b2MouseJoint_instance = (b2MouseJoint*)(nativeData);
//	b2MouseJoint_instance->GetAnchorA(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2MouseJoint_callback_GetAnchorB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2MouseJoint* b2MouseJoint_instance = (b2MouseJoint*)(nativeData);
//	b2MouseJoint_instance->GetAnchorB(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2MouseJoint_callback_GetReactionForce(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2MouseJoint* b2MouseJoint_instance = (b2MouseJoint*)(nativeData);
//	b2MouseJoint_instance->GetReactionForce(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2MouseJoint_callback_GetReactionTorque(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2MouseJoint* b2MouseJoint_instance = (b2MouseJoint*)(nativeData);
//	b2MouseJoint_instance->GetReactionTorque(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2MouseJoint_callback_SetTarget(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2MouseJoint* b2MouseJoint_instance = (b2MouseJoint*)(nativeData);
//	b2MouseJoint_instance->SetTarget(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2MouseJoint_callback_GetTarget(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2MouseJoint* b2MouseJoint_instance = (b2MouseJoint*)(nativeData);
//	b2MouseJoint_instance->GetTarget(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2MouseJoint_callback_SetMaxForce(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2MouseJoint* b2MouseJoint_instance = (b2MouseJoint*)(nativeData);
//	b2MouseJoint_instance->SetMaxForce(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2MouseJoint_callback_GetMaxForce(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2MouseJoint* b2MouseJoint_instance = (b2MouseJoint*)(nativeData);
//	b2MouseJoint_instance->GetMaxForce(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2MouseJoint_callback_SetFrequency(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2MouseJoint* b2MouseJoint_instance = (b2MouseJoint*)(nativeData);
//	b2MouseJoint_instance->SetFrequency(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2MouseJoint_callback_GetFrequency(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2MouseJoint* b2MouseJoint_instance = (b2MouseJoint*)(nativeData);
//	b2MouseJoint_instance->GetFrequency(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2MouseJoint_callback_SetDampingRatio(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2MouseJoint* b2MouseJoint_instance = (b2MouseJoint*)(nativeData);
//	b2MouseJoint_instance->SetDampingRatio(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2MouseJoint_callback_GetDampingRatio(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2MouseJoint* b2MouseJoint_instance = (b2MouseJoint*)(nativeData);
//	b2MouseJoint_instance->GetDampingRatio(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2MouseJoint_callback_Dump(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2MouseJoint* b2MouseJoint_instance = (b2MouseJoint*)(nativeData);
//	b2MouseJoint_instance->Dump(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2MouseJoint_callback_ShiftOrigin(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2MouseJoint* b2MouseJoint_instance = (b2MouseJoint*)(nativeData);
//	b2MouseJoint_instance->ShiftOrigin(...);
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2MOUSEJOINT_H_ */
