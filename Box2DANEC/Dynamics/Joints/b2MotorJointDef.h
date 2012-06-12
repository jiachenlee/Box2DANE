/*================================================================================
*
* File Name: b2MotorJointDef.h
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

#ifndef BOX2DANE_C_B2MOTORJOINTDEF_H_
#define BOX2DANE_C_B2MOTORJOINTDEF_H_

//Convenience functions for generating a new AS3 class instance of b2MotorJointDef
FREResult FRENewObjectFromb2MotorJointDef(b2MotorJointDef* obj, FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[1];
	FREGetPointerAsString((void*)obj, &memAddress);
	constructorArguments[0] = memAddress;
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.dynamics.joints.b2MotorJointDef";

	FREResult objInitResult = FRENewObject(className, 1, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2MotorJointDef object in function FRENewObjectFromb2MotorJointDef");
	}

	return objInitResult;
}

FREResult FRENewb2MotorJointDef(FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[0];
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.dynamics.joints.b2MotorJointDef";

	FREResult objInitResult = FRENewObject(className, 0, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2MotorJointDef object in function FRENewb2MotorJointDef");
	}

	return objInitResult;
}
//

FREObject ane_b2MotorJointDef_constructor_b2MotorJointDef(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2MotorJointDef* b2MotorJointDef_instance = (b2MotorJointDef*)(nativeData);
//	b2MotorJointDef_instance->b2MotorJointDef(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2MotorJointDef_callback_Initialize(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2MotorJointDef* b2MotorJointDef_instance = (b2MotorJointDef*)(nativeData);
//	b2MotorJointDef_instance->Initialize(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2MotorJointDef_setter_linearOffset(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2MotorJointDef* b2MotorJointDef_instance = (b2MotorJointDef*)(nativeData);
//	b2MotorJointDef_instance->linearOffset= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2MotorJointDef_getter_linearOffset(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2MotorJointDef* b2MotorJointDef_instance = (b2MotorJointDef*)(nativeData);
	//return b2MotorJointDef_instance->linearOffset;
	FREObject result;
	return result;
}

 
FREObject ane_b2MotorJointDef_setter_angularOffset(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2MotorJointDef* b2MotorJointDef_instance = (b2MotorJointDef*)(nativeData);
//	b2MotorJointDef_instance->angularOffset= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2MotorJointDef_getter_angularOffset(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2MotorJointDef* b2MotorJointDef_instance = (b2MotorJointDef*)(nativeData);
	//return b2MotorJointDef_instance->angularOffset;
	FREObject result;
	return result;
}

 
FREObject ane_b2MotorJointDef_setter_maxForce(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2MotorJointDef* b2MotorJointDef_instance = (b2MotorJointDef*)(nativeData);
//	b2MotorJointDef_instance->maxForce= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2MotorJointDef_getter_maxForce(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2MotorJointDef* b2MotorJointDef_instance = (b2MotorJointDef*)(nativeData);
	//return b2MotorJointDef_instance->maxForce;
	FREObject result;
	return result;
}

 
FREObject ane_b2MotorJointDef_setter_maxTorque(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2MotorJointDef* b2MotorJointDef_instance = (b2MotorJointDef*)(nativeData);
//	b2MotorJointDef_instance->maxTorque= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2MotorJointDef_getter_maxTorque(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2MotorJointDef* b2MotorJointDef_instance = (b2MotorJointDef*)(nativeData);
	//return b2MotorJointDef_instance->maxTorque;
	FREObject result;
	return result;
}

 
FREObject ane_b2MotorJointDef_setter_correctionFactor(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2MotorJointDef* b2MotorJointDef_instance = (b2MotorJointDef*)(nativeData);
//	b2MotorJointDef_instance->correctionFactor= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2MotorJointDef_getter_correctionFactor(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2MotorJointDef* b2MotorJointDef_instance = (b2MotorJointDef*)(nativeData);
	//return b2MotorJointDef_instance->correctionFactor;
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2MOTORJOINTDEF_H_ */
