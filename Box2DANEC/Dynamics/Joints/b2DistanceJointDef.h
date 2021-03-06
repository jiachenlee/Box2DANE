/*================================================================================
*
* File Name: b2DistanceJointDef.h
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

#ifndef BOX2DANE_C_B2DISTANCEJOINTDEF_H_
#define BOX2DANE_C_B2DISTANCEJOINTDEF_H_

//Convenience functions for generating a new AS3 class instance of b2DistanceJointDef
FREResult FRENewObjectFromb2DistanceJointDef(b2DistanceJointDef* obj, FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[1];
	FREGetPointerAsString((void*)obj, &memAddress);
	constructorArguments[0] = memAddress;
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.dynamics.joints.b2DistanceJointDef";

	FREResult objInitResult = FRENewObject(className, 1, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2DistanceJointDef object in function FRENewObjectFromb2DistanceJointDef");
	}

	return objInitResult;
}

FREResult FRENewb2DistanceJointDef(FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[0];
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.dynamics.joints.b2DistanceJointDef";

	FREResult objInitResult = FRENewObject(className, 0, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2DistanceJointDef object in function FRENewb2DistanceJointDef");
	}

	return objInitResult;
}
//

FREObject ane_b2DistanceJointDef_constructor_b2DistanceJointDef(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2DistanceJointDef* b2DistanceJointDef_instance = (b2DistanceJointDef*)(nativeData);
//	b2DistanceJointDef_instance->b2DistanceJointDef(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2DistanceJointDef_callback_Initialize(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2DistanceJointDef* b2DistanceJointDef_instance = (b2DistanceJointDef*)(nativeData);
//	b2DistanceJointDef_instance->Initialize(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2DistanceJointDef_setter_localAnchorA(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2DistanceJointDef* b2DistanceJointDef_instance = (b2DistanceJointDef*)(nativeData);
//	b2DistanceJointDef_instance->localAnchorA= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2DistanceJointDef_getter_localAnchorA(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2DistanceJointDef* b2DistanceJointDef_instance = (b2DistanceJointDef*)(nativeData);
	//return b2DistanceJointDef_instance->localAnchorA;
	FREObject result;
	return result;
}

 
FREObject ane_b2DistanceJointDef_setter_localAnchorB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2DistanceJointDef* b2DistanceJointDef_instance = (b2DistanceJointDef*)(nativeData);
//	b2DistanceJointDef_instance->localAnchorB= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2DistanceJointDef_getter_localAnchorB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2DistanceJointDef* b2DistanceJointDef_instance = (b2DistanceJointDef*)(nativeData);
	//return b2DistanceJointDef_instance->localAnchorB;
	FREObject result;
	return result;
}

 
FREObject ane_b2DistanceJointDef_setter_length(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2DistanceJointDef* b2DistanceJointDef_instance = (b2DistanceJointDef*)(nativeData);
//	b2DistanceJointDef_instance->length= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2DistanceJointDef_getter_length(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2DistanceJointDef* b2DistanceJointDef_instance = (b2DistanceJointDef*)(nativeData);
	//return b2DistanceJointDef_instance->length;
	FREObject result;
	return result;
}

 
FREObject ane_b2DistanceJointDef_setter_frequencyHz(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2DistanceJointDef* b2DistanceJointDef_instance = (b2DistanceJointDef*)(nativeData);
//	b2DistanceJointDef_instance->frequencyHz= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2DistanceJointDef_getter_frequencyHz(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2DistanceJointDef* b2DistanceJointDef_instance = (b2DistanceJointDef*)(nativeData);
	//return b2DistanceJointDef_instance->frequencyHz;
	FREObject result;
	return result;
}

 
FREObject ane_b2DistanceJointDef_setter_dampingRatio(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2DistanceJointDef* b2DistanceJointDef_instance = (b2DistanceJointDef*)(nativeData);
//	b2DistanceJointDef_instance->dampingRatio= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2DistanceJointDef_getter_dampingRatio(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2DistanceJointDef* b2DistanceJointDef_instance = (b2DistanceJointDef*)(nativeData);
	//return b2DistanceJointDef_instance->dampingRatio;
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2DISTANCEJOINTDEF_H_ */
