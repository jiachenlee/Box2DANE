/*================================================================================
*
* File Name: b2GearJoint.h
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

#ifndef BOX2DANE_C_B2GEARJOINT_H_
#define BOX2DANE_C_B2GEARJOINT_H_

//Convenience functions for generating a new AS3 class instance of b2GearJoint
FREResult FRENewObjectFromb2GearJoint(b2GearJoint* obj, FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[1];
	FREGetPointerAsString((void*)obj, &memAddress);
	constructorArguments[0] = memAddress;
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.dynamics.joints.b2GearJoint";

	FREResult objInitResult = FRENewObject(className, 1, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2GearJoint object in function FRENewObjectFromb2GearJoint");
	}

	return objInitResult;
}

FREResult FRENewb2GearJoint(FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[0];
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.dynamics.joints.b2GearJoint";

	FREResult objInitResult = FRENewObject(className, 0, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2GearJoint object in function FRENewb2GearJoint");
	}

	return objInitResult;
}
//

FREObject ane_b2GearJoint_callback_GetAnchorA(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2GearJoint* b2GearJoint_instance = (b2GearJoint*)(nativeData);
//	b2GearJoint_instance->GetAnchorA(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2GearJoint_callback_GetAnchorB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2GearJoint* b2GearJoint_instance = (b2GearJoint*)(nativeData);
//	b2GearJoint_instance->GetAnchorB(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2GearJoint_callback_GetReactionForce(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2GearJoint* b2GearJoint_instance = (b2GearJoint*)(nativeData);
//	b2GearJoint_instance->GetReactionForce(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2GearJoint_callback_GetReactionTorque(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2GearJoint* b2GearJoint_instance = (b2GearJoint*)(nativeData);
//	b2GearJoint_instance->GetReactionTorque(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2GearJoint_callback_GetJoint1(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2GearJoint* b2GearJoint_instance = (b2GearJoint*)(nativeData);
//	b2GearJoint_instance->GetJoint1(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2GearJoint_callback_GetJoint2(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2GearJoint* b2GearJoint_instance = (b2GearJoint*)(nativeData);
//	b2GearJoint_instance->GetJoint2(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2GearJoint_callback_SetRatio(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2GearJoint* b2GearJoint_instance = (b2GearJoint*)(nativeData);
//	b2GearJoint_instance->SetRatio(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2GearJoint_callback_GetRatio(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2GearJoint* b2GearJoint_instance = (b2GearJoint*)(nativeData);
//	b2GearJoint_instance->GetRatio(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2GearJoint_callback_Dump(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2GearJoint* b2GearJoint_instance = (b2GearJoint*)(nativeData);
//	b2GearJoint_instance->Dump(...);
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2GEARJOINT_H_ */
