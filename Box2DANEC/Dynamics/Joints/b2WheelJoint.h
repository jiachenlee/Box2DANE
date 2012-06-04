/*================================================================================
*
* File Name: b2WheelJoint.h
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

#ifndef BOX2DANE_C_B2WHEELJOINT_H_
#define BOX2DANE_C_B2WHEELJOINT_H_




FREObject ane_b2WheelJoint_callback_GetDefinition(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2WheelJoint* b2WheelJoint_instance = (b2WheelJoint*)(nativeData);
//	b2WheelJoint_instance->GetDefinition(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2WheelJoint_callback_GetAnchorA(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2WheelJoint* b2WheelJoint_instance = (b2WheelJoint*)(nativeData);
//	b2WheelJoint_instance->GetAnchorA(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2WheelJoint_callback_GetAnchorB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2WheelJoint* b2WheelJoint_instance = (b2WheelJoint*)(nativeData);
//	b2WheelJoint_instance->GetAnchorB(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2WheelJoint_callback_GetReactionForce(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2WheelJoint* b2WheelJoint_instance = (b2WheelJoint*)(nativeData);
//	b2WheelJoint_instance->GetReactionForce(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2WheelJoint_callback_GetReactionTorque(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2WheelJoint* b2WheelJoint_instance = (b2WheelJoint*)(nativeData);
//	b2WheelJoint_instance->GetReactionTorque(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2WheelJoint_callback_GetLocalAnchorA(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2WheelJoint* b2WheelJoint_instance = (b2WheelJoint*)(nativeData);
//	b2WheelJoint_instance->GetLocalAnchorA(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2WheelJoint_callback_GetLocalAnchorB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2WheelJoint* b2WheelJoint_instance = (b2WheelJoint*)(nativeData);
//	b2WheelJoint_instance->GetLocalAnchorB(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2WheelJoint_callback_GetLocalAxisA(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2WheelJoint* b2WheelJoint_instance = (b2WheelJoint*)(nativeData);
//	b2WheelJoint_instance->GetLocalAxisA(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2WheelJoint_callback_GetJointTranslation(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2WheelJoint* b2WheelJoint_instance = (b2WheelJoint*)(nativeData);
//	b2WheelJoint_instance->GetJointTranslation(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2WheelJoint_callback_GetJointSpeed(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2WheelJoint* b2WheelJoint_instance = (b2WheelJoint*)(nativeData);
//	b2WheelJoint_instance->GetJointSpeed(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2WheelJoint_callback_IsMotorEnabled(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2WheelJoint* b2WheelJoint_instance = (b2WheelJoint*)(nativeData);
//	b2WheelJoint_instance->IsMotorEnabled(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2WheelJoint_callback_EnableMotor(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2WheelJoint* b2WheelJoint_instance = (b2WheelJoint*)(nativeData);
//	b2WheelJoint_instance->EnableMotor(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2WheelJoint_callback_SetMotorSpeed(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2WheelJoint* b2WheelJoint_instance = (b2WheelJoint*)(nativeData);
//	b2WheelJoint_instance->SetMotorSpeed(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2WheelJoint_callback_GetMotorSpeed(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2WheelJoint* b2WheelJoint_instance = (b2WheelJoint*)(nativeData);
//	b2WheelJoint_instance->GetMotorSpeed(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2WheelJoint_callback_SetMaxMotorTorque(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2WheelJoint* b2WheelJoint_instance = (b2WheelJoint*)(nativeData);
//	b2WheelJoint_instance->SetMaxMotorTorque(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2WheelJoint_callback_GetMaxMotorTorque(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2WheelJoint* b2WheelJoint_instance = (b2WheelJoint*)(nativeData);
//	b2WheelJoint_instance->GetMaxMotorTorque(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2WheelJoint_callback_GetMotorTorque(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2WheelJoint* b2WheelJoint_instance = (b2WheelJoint*)(nativeData);
//	b2WheelJoint_instance->GetMotorTorque(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2WheelJoint_callback_SetSpringFrequencyHz(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2WheelJoint* b2WheelJoint_instance = (b2WheelJoint*)(nativeData);
//	b2WheelJoint_instance->SetSpringFrequencyHz(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2WheelJoint_callback_GetSpringFrequencyHz(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2WheelJoint* b2WheelJoint_instance = (b2WheelJoint*)(nativeData);
//	b2WheelJoint_instance->GetSpringFrequencyHz(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2WheelJoint_callback_SetSpringDampingRatio(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2WheelJoint* b2WheelJoint_instance = (b2WheelJoint*)(nativeData);
//	b2WheelJoint_instance->SetSpringDampingRatio(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2WheelJoint_callback_GetSpringDampingRatio(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2WheelJoint* b2WheelJoint_instance = (b2WheelJoint*)(nativeData);
//	b2WheelJoint_instance->GetSpringDampingRatio(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2WheelJoint_callback_Dump(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2WheelJoint* b2WheelJoint_instance = (b2WheelJoint*)(nativeData);
//	b2WheelJoint_instance->Dump(...);
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2WHEELJOINT_H_ */
