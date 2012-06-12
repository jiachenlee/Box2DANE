/*================================================================================
*
* File Name: b2RopeJointDef.h
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

#ifndef BOX2DANE_C_B2ROPEJOINTDEF_H_
#define BOX2DANE_C_B2ROPEJOINTDEF_H_

//Convenience functions for generating a new AS3 class instance of b2RopeJointDef
FREResult FRENewObjectFromb2RopeJointDef(b2RopeJointDef* obj, FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[1];
	FREGetPointerAsString((void*)obj, &memAddress);
	constructorArguments[0] = memAddress;
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.dynamics.joints.b2RopeJointDef";

	FREResult objInitResult = FRENewObject(className, 1, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2RopeJointDef object in function FRENewObjectFromb2RopeJointDef");
	}

	return objInitResult;
}

FREResult FRENewb2RopeJointDef(FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[0];
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.dynamics.joints.b2RopeJointDef";

	FREResult objInitResult = FRENewObject(className, 0, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2RopeJointDef object in function FRENewb2RopeJointDef");
	}

	return objInitResult;
}
//

FREObject ane_b2RopeJointDef_constructor_b2RopeJointDef(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RopeJointDef* b2RopeJointDef_instance = (b2RopeJointDef*)(nativeData);
//	b2RopeJointDef_instance->b2RopeJointDef(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2RopeJointDef_setter_localAnchorA(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RopeJointDef* b2RopeJointDef_instance = (b2RopeJointDef*)(nativeData);
//	b2RopeJointDef_instance->localAnchorA= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2RopeJointDef_getter_localAnchorA(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RopeJointDef* b2RopeJointDef_instance = (b2RopeJointDef*)(nativeData);
	//return b2RopeJointDef_instance->localAnchorA;
	FREObject result;
	return result;
}

 
FREObject ane_b2RopeJointDef_setter_localAnchorB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RopeJointDef* b2RopeJointDef_instance = (b2RopeJointDef*)(nativeData);
//	b2RopeJointDef_instance->localAnchorB= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2RopeJointDef_getter_localAnchorB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RopeJointDef* b2RopeJointDef_instance = (b2RopeJointDef*)(nativeData);
	//return b2RopeJointDef_instance->localAnchorB;
	FREObject result;
	return result;
}

 
FREObject ane_b2RopeJointDef_setter_maxLength(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RopeJointDef* b2RopeJointDef_instance = (b2RopeJointDef*)(nativeData);
//	b2RopeJointDef_instance->maxLength= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2RopeJointDef_getter_maxLength(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RopeJointDef* b2RopeJointDef_instance = (b2RopeJointDef*)(nativeData);
	//return b2RopeJointDef_instance->maxLength;
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2ROPEJOINTDEF_H_ */
