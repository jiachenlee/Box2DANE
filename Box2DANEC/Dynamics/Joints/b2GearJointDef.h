/*================================================================================
*
* File Name: b2GearJointDef.h
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

#ifndef BOX2DANE_C_B2GEARJOINTDEF_H_
#define BOX2DANE_C_B2GEARJOINTDEF_H_

//Convenience functions for generating a new AS3 class instance of b2GearJointDef
FREResult FRENewObjectFromb2GearJointDef(b2GearJointDef* obj, FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[1];
	FREGetPointerAsString((void*)obj, &memAddress);
	constructorArguments[0] = memAddress;
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.dynamics.joints.b2GearJointDef";

	FREResult objInitResult = FRENewObject(className, 1, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2GearJointDef object in function FRENewObjectFromb2GearJointDef");
	}

	return objInitResult;
}

FREResult FRENewb2GearJointDef(FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[0];
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.dynamics.joints.b2GearJointDef";

	FREResult objInitResult = FRENewObject(className, 0, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2GearJointDef object in function FRENewb2GearJointDef");
	}

	return objInitResult;
}
//

FREObject ane_b2GearJointDef_constructor_b2GearJointDef(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2GearJointDef* b2GearJointDef_instance = (b2GearJointDef*)(nativeData);
//	b2GearJointDef_instance->b2GearJointDef(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2GearJointDef_setter_joint1(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2GearJointDef* b2GearJointDef_instance = (b2GearJointDef*)(nativeData);
//	b2GearJointDef_instance->joint1= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2GearJointDef_getter_joint1(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2GearJointDef* b2GearJointDef_instance = (b2GearJointDef*)(nativeData);
	//return b2GearJointDef_instance->joint1;
	FREObject result;
	return result;
}

 
FREObject ane_b2GearJointDef_setter_joint2(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2GearJointDef* b2GearJointDef_instance = (b2GearJointDef*)(nativeData);
//	b2GearJointDef_instance->joint2= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2GearJointDef_getter_joint2(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2GearJointDef* b2GearJointDef_instance = (b2GearJointDef*)(nativeData);
	//return b2GearJointDef_instance->joint2;
	FREObject result;
	return result;
}

 
FREObject ane_b2GearJointDef_setter_ratio(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2GearJointDef* b2GearJointDef_instance = (b2GearJointDef*)(nativeData);
//	b2GearJointDef_instance->ratio= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2GearJointDef_getter_ratio(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2GearJointDef* b2GearJointDef_instance = (b2GearJointDef*)(nativeData);
	//return b2GearJointDef_instance->ratio;
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2GEARJOINTDEF_H_ */
