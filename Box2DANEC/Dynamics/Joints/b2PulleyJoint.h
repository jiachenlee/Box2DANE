/*================================================================================
*
* File Name: b2PulleyJoint.h
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

#ifndef BOX2DANE_C_B2PULLEYJOINT_H_
#define BOX2DANE_C_B2PULLEYJOINT_H_

//Convenience functions for generating a new AS3 class instance of b2PulleyJoint
FREResult FRENewObjectFromb2PulleyJoint(b2PulleyJoint* obj, FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[1];
	FREGetPointerAsString((void*)obj, &memAddress);
	constructorArguments[0] = memAddress;
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.dynamics.joints.b2PulleyJoint";

	FREResult objInitResult = FRENewObject(className, 1, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2PulleyJoint object in function FRENewObjectFromb2PulleyJoint");
	}

	return objInitResult;
}

FREResult FRENewb2PulleyJoint(FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[0];
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.dynamics.joints.b2PulleyJoint";

	FREResult objInitResult = FRENewObject(className, 0, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2PulleyJoint object in function FRENewb2PulleyJoint");
	}

	return objInitResult;
}
//

FREObject ane_b2PulleyJoint_callback_GetAnchorA(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2PulleyJoint* b2PulleyJoint_instance = (b2PulleyJoint*)(nativeData);
//	b2PulleyJoint_instance->GetAnchorA(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2PulleyJoint_callback_GetAnchorB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2PulleyJoint* b2PulleyJoint_instance = (b2PulleyJoint*)(nativeData);
//	b2PulleyJoint_instance->GetAnchorB(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2PulleyJoint_callback_GetReactionForce(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2PulleyJoint* b2PulleyJoint_instance = (b2PulleyJoint*)(nativeData);
//	b2PulleyJoint_instance->GetReactionForce(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2PulleyJoint_callback_GetReactionTorque(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2PulleyJoint* b2PulleyJoint_instance = (b2PulleyJoint*)(nativeData);
//	b2PulleyJoint_instance->GetReactionTorque(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2PulleyJoint_callback_GetGroundAnchorA(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2PulleyJoint* b2PulleyJoint_instance = (b2PulleyJoint*)(nativeData);
//	b2PulleyJoint_instance->GetGroundAnchorA(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2PulleyJoint_callback_GetGroundAnchorB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2PulleyJoint* b2PulleyJoint_instance = (b2PulleyJoint*)(nativeData);
//	b2PulleyJoint_instance->GetGroundAnchorB(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2PulleyJoint_callback_GetLengthA(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2PulleyJoint* b2PulleyJoint_instance = (b2PulleyJoint*)(nativeData);
//	b2PulleyJoint_instance->GetLengthA(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2PulleyJoint_callback_GetLengthB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2PulleyJoint* b2PulleyJoint_instance = (b2PulleyJoint*)(nativeData);
//	b2PulleyJoint_instance->GetLengthB(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2PulleyJoint_callback_GetRatio(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2PulleyJoint* b2PulleyJoint_instance = (b2PulleyJoint*)(nativeData);
//	b2PulleyJoint_instance->GetRatio(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2PulleyJoint_callback_GetCurrentLengthA(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2PulleyJoint* b2PulleyJoint_instance = (b2PulleyJoint*)(nativeData);
//	b2PulleyJoint_instance->GetCurrentLengthA(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2PulleyJoint_callback_GetCurrentLengthB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2PulleyJoint* b2PulleyJoint_instance = (b2PulleyJoint*)(nativeData);
//	b2PulleyJoint_instance->GetCurrentLengthB(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2PulleyJoint_callback_Dump(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2PulleyJoint* b2PulleyJoint_instance = (b2PulleyJoint*)(nativeData);
//	b2PulleyJoint_instance->Dump(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2PulleyJoint_callback_ShiftOrigin(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2PulleyJoint* b2PulleyJoint_instance = (b2PulleyJoint*)(nativeData);
//	b2PulleyJoint_instance->ShiftOrigin(...);
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2PULLEYJOINT_H_ */
