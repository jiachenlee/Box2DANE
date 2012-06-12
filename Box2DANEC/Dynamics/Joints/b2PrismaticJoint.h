/*================================================================================
*
* File Name: b2PrismaticJoint.h
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

#ifndef BOX2DANE_C_B2PRISMATICJOINT_H_
#define BOX2DANE_C_B2PRISMATICJOINT_H_

//Convenience functions for generating a new AS3 class instance of b2PrismaticJoint
FREResult FRENewObjectFromb2PrismaticJoint(b2PrismaticJoint* obj, FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[1];
	FREGetPointerAsString((void*)obj, &memAddress);
	constructorArguments[0] = memAddress;
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.dynamics.joints.b2PrismaticJoint";

	FREResult objInitResult = FRENewObject(className, 1, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2PrismaticJoint object in function FRENewObjectFromb2PrismaticJoint");
	}

	return objInitResult;
}

FREResult FRENewb2PrismaticJoint(FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[0];
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.dynamics.joints.b2PrismaticJoint";

	FREResult objInitResult = FRENewObject(className, 0, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2PrismaticJoint object in function FRENewb2PrismaticJoint");
	}

	return objInitResult;
}
//

FREObject ane_b2PrismaticJoint_callback_GetAnchorA(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2PrismaticJoint* b2PrismaticJoint_instance = (b2PrismaticJoint*)(nativeData);
//	b2PrismaticJoint_instance->GetAnchorA(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2PrismaticJoint_callback_GetAnchorB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2PrismaticJoint* b2PrismaticJoint_instance = (b2PrismaticJoint*)(nativeData);
//	b2PrismaticJoint_instance->GetAnchorB(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2PrismaticJoint_callback_GetReactionForce(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2PrismaticJoint* b2PrismaticJoint_instance = (b2PrismaticJoint*)(nativeData);
//	b2PrismaticJoint_instance->GetReactionForce(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2PrismaticJoint_callback_GetReactionTorque(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2PrismaticJoint* b2PrismaticJoint_instance = (b2PrismaticJoint*)(nativeData);
//	b2PrismaticJoint_instance->GetReactionTorque(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2PrismaticJoint_callback_GetLocalAnchorA(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2PrismaticJoint* b2PrismaticJoint_instance = (b2PrismaticJoint*)(nativeData);
//	b2PrismaticJoint_instance->GetLocalAnchorA(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2PrismaticJoint_callback_GetLocalAnchorB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2PrismaticJoint* b2PrismaticJoint_instance = (b2PrismaticJoint*)(nativeData);
//	b2PrismaticJoint_instance->GetLocalAnchorB(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2PrismaticJoint_callback_GetLocalAxisA(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2PrismaticJoint* b2PrismaticJoint_instance = (b2PrismaticJoint*)(nativeData);
//	b2PrismaticJoint_instance->GetLocalAxisA(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2PrismaticJoint_callback_GetReferenceAngle(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2PrismaticJoint* b2PrismaticJoint_instance = (b2PrismaticJoint*)(nativeData);
//	b2PrismaticJoint_instance->GetReferenceAngle(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2PrismaticJoint_callback_GetJointTranslation(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2PrismaticJoint* b2PrismaticJoint_instance = (b2PrismaticJoint*)(nativeData);
//	b2PrismaticJoint_instance->GetJointTranslation(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2PrismaticJoint_callback_GetJointSpeed(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2PrismaticJoint* b2PrismaticJoint_instance = (b2PrismaticJoint*)(nativeData);
//	b2PrismaticJoint_instance->GetJointSpeed(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2PrismaticJoint_callback_IsLimitEnabled(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2PrismaticJoint* b2PrismaticJoint_instance = (b2PrismaticJoint*)(nativeData);
//	b2PrismaticJoint_instance->IsLimitEnabled(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2PrismaticJoint_callback_EnableLimit(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2PrismaticJoint* b2PrismaticJoint_instance = (b2PrismaticJoint*)(nativeData);
//	b2PrismaticJoint_instance->EnableLimit(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2PrismaticJoint_callback_GetLowerLimit(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2PrismaticJoint* b2PrismaticJoint_instance = (b2PrismaticJoint*)(nativeData);
//	b2PrismaticJoint_instance->GetLowerLimit(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2PrismaticJoint_callback_GetUpperLimit(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2PrismaticJoint* b2PrismaticJoint_instance = (b2PrismaticJoint*)(nativeData);
//	b2PrismaticJoint_instance->GetUpperLimit(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2PrismaticJoint_callback_SetLimits(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2PrismaticJoint* b2PrismaticJoint_instance = (b2PrismaticJoint*)(nativeData);
//	b2PrismaticJoint_instance->SetLimits(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2PrismaticJoint_callback_IsMotorEnabled(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2PrismaticJoint* b2PrismaticJoint_instance = (b2PrismaticJoint*)(nativeData);
//	b2PrismaticJoint_instance->IsMotorEnabled(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2PrismaticJoint_callback_EnableMotor(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2PrismaticJoint* b2PrismaticJoint_instance = (b2PrismaticJoint*)(nativeData);
//	b2PrismaticJoint_instance->EnableMotor(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2PrismaticJoint_callback_SetMotorSpeed(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2PrismaticJoint* b2PrismaticJoint_instance = (b2PrismaticJoint*)(nativeData);
//	b2PrismaticJoint_instance->SetMotorSpeed(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2PrismaticJoint_callback_GetMotorSpeed(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2PrismaticJoint* b2PrismaticJoint_instance = (b2PrismaticJoint*)(nativeData);
//	b2PrismaticJoint_instance->GetMotorSpeed(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2PrismaticJoint_callback_SetMaxMotorForce(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2PrismaticJoint* b2PrismaticJoint_instance = (b2PrismaticJoint*)(nativeData);
//	b2PrismaticJoint_instance->SetMaxMotorForce(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2PrismaticJoint_callback_GetMaxMotorForce(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2PrismaticJoint* b2PrismaticJoint_instance = (b2PrismaticJoint*)(nativeData);
//	b2PrismaticJoint_instance->GetMaxMotorForce(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2PrismaticJoint_callback_GetMotorForce(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2PrismaticJoint* b2PrismaticJoint_instance = (b2PrismaticJoint*)(nativeData);
//	b2PrismaticJoint_instance->GetMotorForce(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2PrismaticJoint_callback_Dump(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2PrismaticJoint* b2PrismaticJoint_instance = (b2PrismaticJoint*)(nativeData);
//	b2PrismaticJoint_instance->Dump(...);
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2PRISMATICJOINT_H_ */
