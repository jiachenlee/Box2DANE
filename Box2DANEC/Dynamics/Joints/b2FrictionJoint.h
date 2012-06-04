/*================================================================================
*
* File Name: b2FrictionJoint.h
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

#ifndef BOX2DANE_C_B2FRICTIONJOINT_H_
#define BOX2DANE_C_B2FRICTIONJOINT_H_




FREObject ane_b2FrictionJoint_callback_GetAnchorA(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2FrictionJoint* b2FrictionJoint_instance = (b2FrictionJoint*)(nativeData);
//	b2FrictionJoint_instance->GetAnchorA(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2FrictionJoint_callback_GetAnchorB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2FrictionJoint* b2FrictionJoint_instance = (b2FrictionJoint*)(nativeData);
//	b2FrictionJoint_instance->GetAnchorB(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2FrictionJoint_callback_GetReactionForce(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2FrictionJoint* b2FrictionJoint_instance = (b2FrictionJoint*)(nativeData);
//	b2FrictionJoint_instance->GetReactionForce(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2FrictionJoint_callback_GetReactionTorque(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2FrictionJoint* b2FrictionJoint_instance = (b2FrictionJoint*)(nativeData);
//	b2FrictionJoint_instance->GetReactionTorque(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2FrictionJoint_callback_GetLocalAnchorA(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2FrictionJoint* b2FrictionJoint_instance = (b2FrictionJoint*)(nativeData);
//	b2FrictionJoint_instance->GetLocalAnchorA(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2FrictionJoint_callback_GetLocalAnchorB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2FrictionJoint* b2FrictionJoint_instance = (b2FrictionJoint*)(nativeData);
//	b2FrictionJoint_instance->GetLocalAnchorB(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2FrictionJoint_callback_SetMaxForce(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2FrictionJoint* b2FrictionJoint_instance = (b2FrictionJoint*)(nativeData);
//	b2FrictionJoint_instance->SetMaxForce(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2FrictionJoint_callback_GetMaxForce(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2FrictionJoint* b2FrictionJoint_instance = (b2FrictionJoint*)(nativeData);
//	b2FrictionJoint_instance->GetMaxForce(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2FrictionJoint_callback_SetMaxTorque(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2FrictionJoint* b2FrictionJoint_instance = (b2FrictionJoint*)(nativeData);
//	b2FrictionJoint_instance->SetMaxTorque(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2FrictionJoint_callback_GetMaxTorque(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2FrictionJoint* b2FrictionJoint_instance = (b2FrictionJoint*)(nativeData);
//	b2FrictionJoint_instance->GetMaxTorque(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2FrictionJoint_callback_Dump(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2FrictionJoint* b2FrictionJoint_instance = (b2FrictionJoint*)(nativeData);
//	b2FrictionJoint_instance->Dump(...);
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2FRICTIONJOINT_H_ */
