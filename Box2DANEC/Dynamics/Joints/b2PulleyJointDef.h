/*================================================================================
*
* File Name: b2PulleyJointDef.h
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

#ifndef BOX2DANE_C_B2PULLEYJOINTDEF_H_
#define BOX2DANE_C_B2PULLEYJOINTDEF_H_

//Convenience functions for generating a new AS3 class instance of b2PulleyJointDef
FREResult FRENewObjectFromb2PulleyJointDef(b2PulleyJointDef* obj, FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[1];
	FREGetPointerAsString((void*)obj, &memAddress);
	constructorArguments[0] = memAddress;
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.dynamics.joints.b2PulleyJointDef";

	FREResult objInitResult = FRENewObject(className, 1, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2PulleyJointDef object in function FRENewObjectFromb2PulleyJointDef");
	}

	return objInitResult;
}

FREResult FRENewb2PulleyJointDef(FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[0];
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.dynamics.joints.b2PulleyJointDef";

	FREResult objInitResult = FRENewObject(className, 0, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2PulleyJointDef object in function FRENewb2PulleyJointDef");
	}

	return objInitResult;
}
//

FREObject ane_b2PulleyJointDef_constructor_b2PulleyJointDef(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2PulleyJointDef* b2PulleyJointDef_instance = (b2PulleyJointDef*)(nativeData);
//	b2PulleyJointDef_instance->b2PulleyJointDef(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2PulleyJointDef_callback_Initialize(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2PulleyJointDef* b2PulleyJointDef_instance = (b2PulleyJointDef*)(nativeData);
//	b2PulleyJointDef_instance->Initialize(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2PulleyJointDef_setter_groundAnchorA(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2PulleyJointDef* b2PulleyJointDef_instance = (b2PulleyJointDef*)(nativeData);
//	b2PulleyJointDef_instance->groundAnchorA= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2PulleyJointDef_getter_groundAnchorA(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2PulleyJointDef* b2PulleyJointDef_instance = (b2PulleyJointDef*)(nativeData);
	//return b2PulleyJointDef_instance->groundAnchorA;
	FREObject result;
	return result;
}

 
FREObject ane_b2PulleyJointDef_setter_groundAnchorB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2PulleyJointDef* b2PulleyJointDef_instance = (b2PulleyJointDef*)(nativeData);
//	b2PulleyJointDef_instance->groundAnchorB= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2PulleyJointDef_getter_groundAnchorB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2PulleyJointDef* b2PulleyJointDef_instance = (b2PulleyJointDef*)(nativeData);
	//return b2PulleyJointDef_instance->groundAnchorB;
	FREObject result;
	return result;
}

 
FREObject ane_b2PulleyJointDef_setter_localAnchorA(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2PulleyJointDef* b2PulleyJointDef_instance = (b2PulleyJointDef*)(nativeData);
//	b2PulleyJointDef_instance->localAnchorA= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2PulleyJointDef_getter_localAnchorA(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2PulleyJointDef* b2PulleyJointDef_instance = (b2PulleyJointDef*)(nativeData);
	//return b2PulleyJointDef_instance->localAnchorA;
	FREObject result;
	return result;
}

 
FREObject ane_b2PulleyJointDef_setter_localAnchorB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2PulleyJointDef* b2PulleyJointDef_instance = (b2PulleyJointDef*)(nativeData);
//	b2PulleyJointDef_instance->localAnchorB= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2PulleyJointDef_getter_localAnchorB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2PulleyJointDef* b2PulleyJointDef_instance = (b2PulleyJointDef*)(nativeData);
	//return b2PulleyJointDef_instance->localAnchorB;
	FREObject result;
	return result;
}

 
FREObject ane_b2PulleyJointDef_setter_lengthA(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2PulleyJointDef* b2PulleyJointDef_instance = (b2PulleyJointDef*)(nativeData);
//	b2PulleyJointDef_instance->lengthA= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2PulleyJointDef_getter_lengthA(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2PulleyJointDef* b2PulleyJointDef_instance = (b2PulleyJointDef*)(nativeData);
	//return b2PulleyJointDef_instance->lengthA;
	FREObject result;
	return result;
}

 
FREObject ane_b2PulleyJointDef_setter_lengthB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2PulleyJointDef* b2PulleyJointDef_instance = (b2PulleyJointDef*)(nativeData);
//	b2PulleyJointDef_instance->lengthB= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2PulleyJointDef_getter_lengthB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2PulleyJointDef* b2PulleyJointDef_instance = (b2PulleyJointDef*)(nativeData);
	//return b2PulleyJointDef_instance->lengthB;
	FREObject result;
	return result;
}

 
FREObject ane_b2PulleyJointDef_setter_ratio(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2PulleyJointDef* b2PulleyJointDef_instance = (b2PulleyJointDef*)(nativeData);
//	b2PulleyJointDef_instance->ratio= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2PulleyJointDef_getter_ratio(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2PulleyJointDef* b2PulleyJointDef_instance = (b2PulleyJointDef*)(nativeData);
	//return b2PulleyJointDef_instance->ratio;
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2PULLEYJOINTDEF_H_ */
