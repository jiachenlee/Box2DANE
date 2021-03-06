/*================================================================================
*
* File Name: b2MouseJointDef.h
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

#ifndef BOX2DANE_C_B2MOUSEJOINTDEF_H_
#define BOX2DANE_C_B2MOUSEJOINTDEF_H_

//Convenience functions for generating a new AS3 class instance of b2MouseJointDef
FREResult FRENewObjectFromb2MouseJointDef(b2MouseJointDef* obj, FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[1];
	FREGetPointerAsString((void*)obj, &memAddress);
	constructorArguments[0] = memAddress;
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.dynamics.joints.b2MouseJointDef";

	FREResult objInitResult = FRENewObject(className, 1, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2MouseJointDef object in function FRENewObjectFromb2MouseJointDef");
	}

	return objInitResult;
}

FREResult FRENewb2MouseJointDef(FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[0];
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.dynamics.joints.b2MouseJointDef";

	FREResult objInitResult = FRENewObject(className, 0, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2MouseJointDef object in function FRENewb2MouseJointDef");
	}

	return objInitResult;
}
//

FREObject ane_b2MouseJointDef_constructor_b2MouseJointDef(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2MouseJointDef* b2MouseJointDef_instance = (b2MouseJointDef*)(nativeData);
//	b2MouseJointDef_instance->b2MouseJointDef(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2MouseJointDef_setter_target(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2MouseJointDef* b2MouseJointDef_instance = (b2MouseJointDef*)(nativeData);
//	b2MouseJointDef_instance->target= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2MouseJointDef_getter_target(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2MouseJointDef* b2MouseJointDef_instance = (b2MouseJointDef*)(nativeData);
	//return b2MouseJointDef_instance->target;
	FREObject result;
	return result;
}

 
FREObject ane_b2MouseJointDef_setter_maxForce(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2MouseJointDef* b2MouseJointDef_instance = (b2MouseJointDef*)(nativeData);
//	b2MouseJointDef_instance->maxForce= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2MouseJointDef_getter_maxForce(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2MouseJointDef* b2MouseJointDef_instance = (b2MouseJointDef*)(nativeData);
	//return b2MouseJointDef_instance->maxForce;
	FREObject result;
	return result;
}

 
FREObject ane_b2MouseJointDef_setter_frequencyHz(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2MouseJointDef* b2MouseJointDef_instance = (b2MouseJointDef*)(nativeData);
//	b2MouseJointDef_instance->frequencyHz= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2MouseJointDef_getter_frequencyHz(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2MouseJointDef* b2MouseJointDef_instance = (b2MouseJointDef*)(nativeData);
	//return b2MouseJointDef_instance->frequencyHz;
	FREObject result;
	return result;
}

 
FREObject ane_b2MouseJointDef_setter_dampingRatio(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2MouseJointDef* b2MouseJointDef_instance = (b2MouseJointDef*)(nativeData);
//	b2MouseJointDef_instance->dampingRatio= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2MouseJointDef_getter_dampingRatio(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2MouseJointDef* b2MouseJointDef_instance = (b2MouseJointDef*)(nativeData);
	//return b2MouseJointDef_instance->dampingRatio;
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2MOUSEJOINTDEF_H_ */
