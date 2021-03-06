/*================================================================================
*
* File Name: b2WeldJointDef.h
* Created on: Mon May 7 22:46:26 GMT-0400 2012
* Copyright (�) 2012 Jesse Nicholson. All Rights Reserved.
* 
*
*                       ***** BEGIN LICENSE BLOCK *****
* This Source Code Form is subject to the terms of the Mozilla Public
* License, v. 2.0. If a copy of the MPL was not distributed with this file,
* You can obtain one at http://mozilla.org/MPL/2.0/.
*                       ***** END  LICENSE  BLOCK *****
*===============================================================================*/

#ifndef BOX2DANE_C_B2WELDJOINTDEF_H_
#define BOX2DANE_C_B2WELDJOINTDEF_H_

//Convenience functions for generating a new AS3 class instance of b2WeldJointDef
FREResult FRENewObjectFromb2WeldJointDef(b2WeldJointDef* obj, FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[1];
	FREGetPointerAsString((void*)obj, &memAddress);
	constructorArguments[0] = memAddress;
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.dynamics.joints.b2WeldJointDef";

	FREResult objInitResult = FRENewObject(className, 1, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2WeldJointDef object in function FRENewObjectFromb2WeldJointDef");
	}

	return objInitResult;
}

FREResult FRENewb2WeldJointDef(FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[0];
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.dynamics.joints.b2WeldJointDef";

	FREResult objInitResult = FRENewObject(className, 0, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2WeldJointDef object in function FRENewb2WeldJointDef");
	}

	return objInitResult;
}
//

FREObject ane_b2WeldJointDef_constructor_b2WeldJointDef(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2WeldJointDef* b2WeldJointDef_instance = (b2WeldJointDef*)(nativeData);
//	b2WeldJointDef_instance->b2WeldJointDef(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2WeldJointDef_callback_Initialize(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2WeldJointDef* b2WeldJointDef_instance = (b2WeldJointDef*)(nativeData);
//	b2WeldJointDef_instance->Initialize(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2WeldJointDef_setter_localAnchorA(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2WeldJointDef* b2WeldJointDef_instance = (b2WeldJointDef*)(nativeData);
//	b2WeldJointDef_instance->localAnchorA= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2WeldJointDef_getter_localAnchorA(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2WeldJointDef* b2WeldJointDef_instance = (b2WeldJointDef*)(nativeData);
	//return b2WeldJointDef_instance->localAnchorA;
	FREObject result;
	return result;
}

 
FREObject ane_b2WeldJointDef_setter_localAnchorB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2WeldJointDef* b2WeldJointDef_instance = (b2WeldJointDef*)(nativeData);
//	b2WeldJointDef_instance->localAnchorB= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2WeldJointDef_getter_localAnchorB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2WeldJointDef* b2WeldJointDef_instance = (b2WeldJointDef*)(nativeData);
	//return b2WeldJointDef_instance->localAnchorB;
	FREObject result;
	return result;
}

 
FREObject ane_b2WeldJointDef_setter_referenceAngle(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2WeldJointDef* b2WeldJointDef_instance = (b2WeldJointDef*)(nativeData);
//	b2WeldJointDef_instance->referenceAngle= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2WeldJointDef_getter_referenceAngle(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2WeldJointDef* b2WeldJointDef_instance = (b2WeldJointDef*)(nativeData);
	//return b2WeldJointDef_instance->referenceAngle;
	FREObject result;
	return result;
}

 
FREObject ane_b2WeldJointDef_setter_frequencyHz(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2WeldJointDef* b2WeldJointDef_instance = (b2WeldJointDef*)(nativeData);
//	b2WeldJointDef_instance->frequencyHz= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2WeldJointDef_getter_frequencyHz(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2WeldJointDef* b2WeldJointDef_instance = (b2WeldJointDef*)(nativeData);
	//return b2WeldJointDef_instance->frequencyHz;
	FREObject result;
	return result;
}

 
FREObject ane_b2WeldJointDef_setter_dampingRatio(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2WeldJointDef* b2WeldJointDef_instance = (b2WeldJointDef*)(nativeData);
//	b2WeldJointDef_instance->dampingRatio= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2WeldJointDef_getter_dampingRatio(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2WeldJointDef* b2WeldJointDef_instance = (b2WeldJointDef*)(nativeData);
	//return b2WeldJointDef_instance->dampingRatio;
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2WELDJOINTDEF_H_ */
