/*================================================================================
*
* File Name: b2RevoluteJointDef.h
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

#ifndef BOX2DANE_C_B2REVOLUTEJOINTDEF_H_
#define BOX2DANE_C_B2REVOLUTEJOINTDEF_H_

//Convenience functions for generating a new AS3 class instance of b2RevoluteJointDef
FREResult FRENewObjectFromb2RevoluteJointDef(b2RevoluteJointDef* obj, FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[1];
	FREGetPointerAsString((void*)obj, &memAddress);
	constructorArguments[0] = memAddress;
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.dynamics.joints.b2RevoluteJointDef";

	FREResult objInitResult = FRENewObject(className, 1, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2RevoluteJointDef object in function FRENewObjectFromb2RevoluteJointDef");
	}

	return objInitResult;
}

FREResult FRENewb2RevoluteJointDef(FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[0];
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.dynamics.joints.b2RevoluteJointDef";

	FREResult objInitResult = FRENewObject(className, 0, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2RevoluteJointDef object in function FRENewb2RevoluteJointDef");
	}

	return objInitResult;
}
//

FREObject ane_b2RevoluteJointDef_constructor_b2RevoluteJointDef(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RevoluteJointDef* b2RevoluteJointDef_instance = (b2RevoluteJointDef*)(nativeData);
//	b2RevoluteJointDef_instance->b2RevoluteJointDef(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2RevoluteJointDef_callback_Initialize(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RevoluteJointDef* b2RevoluteJointDef_instance = (b2RevoluteJointDef*)(nativeData);
//	b2RevoluteJointDef_instance->Initialize(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2RevoluteJointDef_setter_localAnchorA(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RevoluteJointDef* b2RevoluteJointDef_instance = (b2RevoluteJointDef*)(nativeData);
//	b2RevoluteJointDef_instance->localAnchorA= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2RevoluteJointDef_getter_localAnchorA(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RevoluteJointDef* b2RevoluteJointDef_instance = (b2RevoluteJointDef*)(nativeData);
	//return b2RevoluteJointDef_instance->localAnchorA;
	FREObject result;
	return result;
}

 
FREObject ane_b2RevoluteJointDef_setter_localAnchorB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RevoluteJointDef* b2RevoluteJointDef_instance = (b2RevoluteJointDef*)(nativeData);
//	b2RevoluteJointDef_instance->localAnchorB= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2RevoluteJointDef_getter_localAnchorB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RevoluteJointDef* b2RevoluteJointDef_instance = (b2RevoluteJointDef*)(nativeData);
	//return b2RevoluteJointDef_instance->localAnchorB;
	FREObject result;
	return result;
}

 
FREObject ane_b2RevoluteJointDef_setter_referenceAngle(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RevoluteJointDef* b2RevoluteJointDef_instance = (b2RevoluteJointDef*)(nativeData);
//	b2RevoluteJointDef_instance->referenceAngle= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2RevoluteJointDef_getter_referenceAngle(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RevoluteJointDef* b2RevoluteJointDef_instance = (b2RevoluteJointDef*)(nativeData);
	//return b2RevoluteJointDef_instance->referenceAngle;
	FREObject result;
	return result;
}

 
FREObject ane_b2RevoluteJointDef_setter_enableLimit(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RevoluteJointDef* b2RevoluteJointDef_instance = (b2RevoluteJointDef*)(nativeData);
//	b2RevoluteJointDef_instance->enableLimit= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2RevoluteJointDef_getter_enableLimit(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RevoluteJointDef* b2RevoluteJointDef_instance = (b2RevoluteJointDef*)(nativeData);
	//return b2RevoluteJointDef_instance->enableLimit;
	FREObject result;
	return result;
}

 
FREObject ane_b2RevoluteJointDef_setter_lowerAngle(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RevoluteJointDef* b2RevoluteJointDef_instance = (b2RevoluteJointDef*)(nativeData);
//	b2RevoluteJointDef_instance->lowerAngle= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2RevoluteJointDef_getter_lowerAngle(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RevoluteJointDef* b2RevoluteJointDef_instance = (b2RevoluteJointDef*)(nativeData);
	//return b2RevoluteJointDef_instance->lowerAngle;
	FREObject result;
	return result;
}

 
FREObject ane_b2RevoluteJointDef_setter_upperAngle(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RevoluteJointDef* b2RevoluteJointDef_instance = (b2RevoluteJointDef*)(nativeData);
//	b2RevoluteJointDef_instance->upperAngle= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2RevoluteJointDef_getter_upperAngle(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RevoluteJointDef* b2RevoluteJointDef_instance = (b2RevoluteJointDef*)(nativeData);
	//return b2RevoluteJointDef_instance->upperAngle;
	FREObject result;
	return result;
}

 
FREObject ane_b2RevoluteJointDef_setter_enableMotor(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RevoluteJointDef* b2RevoluteJointDef_instance = (b2RevoluteJointDef*)(nativeData);
//	b2RevoluteJointDef_instance->enableMotor= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2RevoluteJointDef_getter_enableMotor(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RevoluteJointDef* b2RevoluteJointDef_instance = (b2RevoluteJointDef*)(nativeData);
	//return b2RevoluteJointDef_instance->enableMotor;
	FREObject result;
	return result;
}

 
FREObject ane_b2RevoluteJointDef_setter_motorSpeed(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RevoluteJointDef* b2RevoluteJointDef_instance = (b2RevoluteJointDef*)(nativeData);
//	b2RevoluteJointDef_instance->motorSpeed= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2RevoluteJointDef_getter_motorSpeed(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RevoluteJointDef* b2RevoluteJointDef_instance = (b2RevoluteJointDef*)(nativeData);
	//return b2RevoluteJointDef_instance->motorSpeed;
	FREObject result;
	return result;
}

 
FREObject ane_b2RevoluteJointDef_setter_maxMotorTorque(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RevoluteJointDef* b2RevoluteJointDef_instance = (b2RevoluteJointDef*)(nativeData);
//	b2RevoluteJointDef_instance->maxMotorTorque= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2RevoluteJointDef_getter_maxMotorTorque(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RevoluteJointDef* b2RevoluteJointDef_instance = (b2RevoluteJointDef*)(nativeData);
	//return b2RevoluteJointDef_instance->maxMotorTorque;
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2REVOLUTEJOINTDEF_H_ */
