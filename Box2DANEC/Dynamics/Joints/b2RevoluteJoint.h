/*================================================================================
*
* File Name: b2RevoluteJoint.h
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

#ifndef BOX2DANE_C_B2REVOLUTEJOINT_H_
#define BOX2DANE_C_B2REVOLUTEJOINT_H_

//Convenience functions for generating a new AS3 class instance of b2RevoluteJoint
FREResult FRENewObjectFromb2RevoluteJoint(b2RevoluteJoint* obj, FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[1];
	FREGetPointerAsString((void*)obj, &memAddress);
	constructorArguments[0] = memAddress;
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.dynamics.joints.b2RevoluteJoint";

	FREResult objInitResult = FRENewObject(className, 1, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2RevoluteJoint object in function FRENewObjectFromb2RevoluteJoint");
	}

	return objInitResult;
}

FREResult FRENewb2RevoluteJoint(FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[0];
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.dynamics.joints.b2RevoluteJoint";

	FREResult objInitResult = FRENewObject(className, 0, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2RevoluteJoint object in function FRENewb2RevoluteJoint");
	}

	return objInitResult;
}
//

FREObject ane_b2RevoluteJoint_callback_GetAnchorA(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RevoluteJoint* b2RevoluteJoint_instance = (b2RevoluteJoint*)(nativeData);
//	b2RevoluteJoint_instance->GetAnchorA(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2RevoluteJoint_callback_GetAnchorB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RevoluteJoint* b2RevoluteJoint_instance = (b2RevoluteJoint*)(nativeData);
//	b2RevoluteJoint_instance->GetAnchorB(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2RevoluteJoint_callback_GetLocalAnchorA(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RevoluteJoint* b2RevoluteJoint_instance = (b2RevoluteJoint*)(nativeData);
//	b2RevoluteJoint_instance->GetLocalAnchorA(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2RevoluteJoint_callback_GetLocalAnchorB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RevoluteJoint* b2RevoluteJoint_instance = (b2RevoluteJoint*)(nativeData);
//	b2RevoluteJoint_instance->GetLocalAnchorB(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2RevoluteJoint_callback_GetReferenceAngle(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RevoluteJoint* b2RevoluteJoint_instance = (b2RevoluteJoint*)(nativeData);
//	b2RevoluteJoint_instance->GetReferenceAngle(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2RevoluteJoint_callback_GetJointAngle(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RevoluteJoint* b2RevoluteJoint_instance = (b2RevoluteJoint*)(nativeData);
//	b2RevoluteJoint_instance->GetJointAngle(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2RevoluteJoint_callback_GetJointSpeed(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RevoluteJoint* b2RevoluteJoint_instance = (b2RevoluteJoint*)(nativeData);
//	b2RevoluteJoint_instance->GetJointSpeed(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2RevoluteJoint_callback_IsLimitEnabled(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RevoluteJoint* b2RevoluteJoint_instance = (b2RevoluteJoint*)(nativeData);
//	b2RevoluteJoint_instance->IsLimitEnabled(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2RevoluteJoint_callback_EnableLimit(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RevoluteJoint* b2RevoluteJoint_instance = (b2RevoluteJoint*)(nativeData);
//	b2RevoluteJoint_instance->EnableLimit(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2RevoluteJoint_callback_GetLowerLimit(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RevoluteJoint* b2RevoluteJoint_instance = (b2RevoluteJoint*)(nativeData);
//	b2RevoluteJoint_instance->GetLowerLimit(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2RevoluteJoint_callback_GetUpperLimit(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RevoluteJoint* b2RevoluteJoint_instance = (b2RevoluteJoint*)(nativeData);
//	b2RevoluteJoint_instance->GetUpperLimit(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2RevoluteJoint_callback_SetLimits(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RevoluteJoint* b2RevoluteJoint_instance = (b2RevoluteJoint*)(nativeData);
//	b2RevoluteJoint_instance->SetLimits(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2RevoluteJoint_callback_IsMotorEnabled(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RevoluteJoint* b2RevoluteJoint_instance = (b2RevoluteJoint*)(nativeData);
//	b2RevoluteJoint_instance->IsMotorEnabled(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2RevoluteJoint_callback_EnableMotor(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RevoluteJoint* b2RevoluteJoint_instance = (b2RevoluteJoint*)(nativeData);
//	b2RevoluteJoint_instance->EnableMotor(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2RevoluteJoint_callback_SetMotorSpeed(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RevoluteJoint* b2RevoluteJoint_instance = (b2RevoluteJoint*)(nativeData);
//	b2RevoluteJoint_instance->SetMotorSpeed(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2RevoluteJoint_callback_GetMotorSpeed(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RevoluteJoint* b2RevoluteJoint_instance = (b2RevoluteJoint*)(nativeData);
//	b2RevoluteJoint_instance->GetMotorSpeed(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2RevoluteJoint_callback_SetMaxMotorTorque(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RevoluteJoint* b2RevoluteJoint_instance = (b2RevoluteJoint*)(nativeData);
//	b2RevoluteJoint_instance->SetMaxMotorTorque(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2RevoluteJoint_callback_GetMaxMotorTorque(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RevoluteJoint* b2RevoluteJoint_instance = (b2RevoluteJoint*)(nativeData);
//	b2RevoluteJoint_instance->GetMaxMotorTorque(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2RevoluteJoint_callback_GetReactionForce(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RevoluteJoint* b2RevoluteJoint_instance = (b2RevoluteJoint*)(nativeData);
//	b2RevoluteJoint_instance->GetReactionForce(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2RevoluteJoint_callback_GetReactionTorque(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RevoluteJoint* b2RevoluteJoint_instance = (b2RevoluteJoint*)(nativeData);
//	b2RevoluteJoint_instance->GetReactionTorque(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2RevoluteJoint_callback_GetMotorTorque(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RevoluteJoint* b2RevoluteJoint_instance = (b2RevoluteJoint*)(nativeData);
//	b2RevoluteJoint_instance->GetMotorTorque(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2RevoluteJoint_callback_Dump(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RevoluteJoint* b2RevoluteJoint_instance = (b2RevoluteJoint*)(nativeData);
//	b2RevoluteJoint_instance->Dump(...);
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2REVOLUTEJOINT_H_ */
