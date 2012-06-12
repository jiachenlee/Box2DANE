/*================================================================================
*
* File Name: b2FrictionJointDef.h
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

#ifndef BOX2DANE_C_B2FRICTIONJOINTDEF_H_
#define BOX2DANE_C_B2FRICTIONJOINTDEF_H_

//Convenience functions for generating a new AS3 class instance of b2FrictionJointDef
FREResult FRENewObjectFromb2FrictionJointDef(b2FrictionJointDef* obj, FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[1];
	FREGetPointerAsString((void*)obj, &memAddress);
	constructorArguments[0] = memAddress;
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.dynamics.joints.b2FrictionJointDef";

	FREResult objInitResult = FRENewObject(className, 1, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2FrictionJointDef object in function FRENewObjectFromb2FrictionJointDef");
	}

	return objInitResult;
}

FREResult FRENewb2FrictionJointDef(FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[0];
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.dynamics.joints.b2FrictionJointDef";

	FREResult objInitResult = FRENewObject(className, 0, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2FrictionJointDef object in function FRENewb2FrictionJointDef");
	}

	return objInitResult;
}
//

FREObject ane_b2FrictionJointDef_constructor_b2FrictionJointDef(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2FrictionJointDef* b2FrictionJointDef_instance = (b2FrictionJointDef*)(nativeData);
//	b2FrictionJointDef_instance->b2FrictionJointDef(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2FrictionJointDef_callback_Initialize(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2FrictionJointDef* b2FrictionJointDef_instance = (b2FrictionJointDef*)(nativeData);
//	b2FrictionJointDef_instance->Initialize(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2FrictionJointDef_setter_localAnchorA(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2FrictionJointDef* b2FrictionJointDef_instance = (b2FrictionJointDef*)(nativeData);
//	b2FrictionJointDef_instance->localAnchorA= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2FrictionJointDef_getter_localAnchorA(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2FrictionJointDef* b2FrictionJointDef_instance = (b2FrictionJointDef*)(nativeData);
	//return b2FrictionJointDef_instance->localAnchorA;
	FREObject result;
	return result;
}

 
FREObject ane_b2FrictionJointDef_setter_localAnchorB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2FrictionJointDef* b2FrictionJointDef_instance = (b2FrictionJointDef*)(nativeData);
//	b2FrictionJointDef_instance->localAnchorB= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2FrictionJointDef_getter_localAnchorB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2FrictionJointDef* b2FrictionJointDef_instance = (b2FrictionJointDef*)(nativeData);
	//return b2FrictionJointDef_instance->localAnchorB;
	FREObject result;
	return result;
}

 
FREObject ane_b2FrictionJointDef_setter_maxForce(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2FrictionJointDef* b2FrictionJointDef_instance = (b2FrictionJointDef*)(nativeData);
//	b2FrictionJointDef_instance->maxForce= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2FrictionJointDef_getter_maxForce(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2FrictionJointDef* b2FrictionJointDef_instance = (b2FrictionJointDef*)(nativeData);
	//return b2FrictionJointDef_instance->maxForce;
	FREObject result;
	return result;
}

 
FREObject ane_b2FrictionJointDef_setter_maxTorque(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2FrictionJointDef* b2FrictionJointDef_instance = (b2FrictionJointDef*)(nativeData);
//	b2FrictionJointDef_instance->maxTorque= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2FrictionJointDef_getter_maxTorque(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2FrictionJointDef* b2FrictionJointDef_instance = (b2FrictionJointDef*)(nativeData);
	//return b2FrictionJointDef_instance->maxTorque;
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2FRICTIONJOINTDEF_H_ */
