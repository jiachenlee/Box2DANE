/*================================================================================
*
* File Name: b2MotorJoint.h
* Created on: Mon May 7 22:46:25 GMT-0400 2012
* Copyright (�) 2012 Jesse Nicholson. All Rights Reserved.
* 
*
*                       ***** BEGIN LICENSE BLOCK *****
* This Source Code Form is subject to the terms of the Mozilla Public
* License, v. 2.0. If a copy of the MPL was not distributed with this file,
* You can obtain one at http://mozilla.org/MPL/2.0/.
*                       ***** END  LICENSE  BLOCK *****
*===============================================================================*/

#ifndef BOX2DANE_C_B2MOTORJOINT_H_
#define BOX2DANE_C_B2MOTORJOINT_H_




FREObject ane_b2MotorJoint_callback_GetAnchorA(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2MotorJoint* b2MotorJoint_instance = (b2MotorJoint*)(nativeData);
//	b2MotorJoint_instance->GetAnchorA(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2MotorJoint_callback_GetAnchorB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2MotorJoint* b2MotorJoint_instance = (b2MotorJoint*)(nativeData);
//	b2MotorJoint_instance->GetAnchorB(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2MotorJoint_callback_GetReactionForce(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2MotorJoint* b2MotorJoint_instance = (b2MotorJoint*)(nativeData);
//	b2MotorJoint_instance->GetReactionForce(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2MotorJoint_callback_GetReactionTorque(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2MotorJoint* b2MotorJoint_instance = (b2MotorJoint*)(nativeData);
//	b2MotorJoint_instance->GetReactionTorque(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2MotorJoint_callback_SetLinearOffset(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2MotorJoint* b2MotorJoint_instance = (b2MotorJoint*)(nativeData);
//	b2MotorJoint_instance->SetLinearOffset(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2MotorJoint_callback_GetLinearOffset(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2MotorJoint* b2MotorJoint_instance = (b2MotorJoint*)(nativeData);
//	b2MotorJoint_instance->GetLinearOffset(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2MotorJoint_callback_SetAngularOffset(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2MotorJoint* b2MotorJoint_instance = (b2MotorJoint*)(nativeData);
//	b2MotorJoint_instance->SetAngularOffset(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2MotorJoint_callback_GetAngularOffset(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2MotorJoint* b2MotorJoint_instance = (b2MotorJoint*)(nativeData);
//	b2MotorJoint_instance->GetAngularOffset(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2MotorJoint_callback_SetMaxForce(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2MotorJoint* b2MotorJoint_instance = (b2MotorJoint*)(nativeData);
//	b2MotorJoint_instance->SetMaxForce(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2MotorJoint_callback_GetMaxForce(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2MotorJoint* b2MotorJoint_instance = (b2MotorJoint*)(nativeData);
//	b2MotorJoint_instance->GetMaxForce(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2MotorJoint_callback_SetMaxTorque(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2MotorJoint* b2MotorJoint_instance = (b2MotorJoint*)(nativeData);
//	b2MotorJoint_instance->SetMaxTorque(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2MotorJoint_callback_GetMaxTorque(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2MotorJoint* b2MotorJoint_instance = (b2MotorJoint*)(nativeData);
//	b2MotorJoint_instance->GetMaxTorque(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2MotorJoint_callback_Dump(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2MotorJoint* b2MotorJoint_instance = (b2MotorJoint*)(nativeData);
//	b2MotorJoint_instance->Dump(...);
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2MOTORJOINT_H_ */
