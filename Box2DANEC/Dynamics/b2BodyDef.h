/*================================================================================
*
* File Name: b2BodyDef.h
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

#ifndef BOX2DANE_C_B2BODYDEF_H_
#define BOX2DANE_C_B2BODYDEF_H_

//Convenience functions for generating a new AS3 class instance of b2BodyDef
FREResult FRENewObjectFromb2BodyDef(b2BodyDef* obj, FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[1];
	FREGetPointerAsString((void*)obj, &memAddress);
	constructorArguments[0] = memAddress;
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.dynamics.b2BodyDef";

	FREResult objInitResult = FRENewObject(className, 1, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2BodyDef object in function FRENewObjectFromb2BodyDef");
	}

	return objInitResult;
}

FREResult FRENewb2BodyDef(FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[0];
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.dynamics.b2BodyDef";

	FREResult objInitResult = FRENewObject(className, 0, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2BodyDef object in function FRENewb2BodyDef");
	}

	return objInitResult;
}
//

FREObject ane_b2BodyDef_constructor_b2BodyDef(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2BodyDef* b2BodyDef_instance = (b2BodyDef*)(nativeData);
//	b2BodyDef_instance->b2BodyDef(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2BodyDef_setter_type(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2BodyDef* b2BodyDef_instance = (b2BodyDef*)(nativeData);
//	b2BodyDef_instance->type= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2BodyDef_getter_type(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2BodyDef* b2BodyDef_instance = (b2BodyDef*)(nativeData);
	//return b2BodyDef_instance->type;
	FREObject result;
	return result;
}

 
FREObject ane_b2BodyDef_setter_position(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2BodyDef* b2BodyDef_instance = (b2BodyDef*)(nativeData);
//	b2BodyDef_instance->position= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2BodyDef_getter_position(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2BodyDef* b2BodyDef_instance = (b2BodyDef*)(nativeData);
	//return b2BodyDef_instance->position;
	FREObject result;
	return result;
}

 
FREObject ane_b2BodyDef_setter_angle(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2BodyDef* b2BodyDef_instance = (b2BodyDef*)(nativeData);
//	b2BodyDef_instance->angle= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2BodyDef_getter_angle(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2BodyDef* b2BodyDef_instance = (b2BodyDef*)(nativeData);
	//return b2BodyDef_instance->angle;
	FREObject result;
	return result;
}

 
FREObject ane_b2BodyDef_setter_linearVelocity(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2BodyDef* b2BodyDef_instance = (b2BodyDef*)(nativeData);
//	b2BodyDef_instance->linearVelocity= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2BodyDef_getter_linearVelocity(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2BodyDef* b2BodyDef_instance = (b2BodyDef*)(nativeData);
	//return b2BodyDef_instance->linearVelocity;
	FREObject result;
	return result;
}

 
FREObject ane_b2BodyDef_setter_angularVelocity(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2BodyDef* b2BodyDef_instance = (b2BodyDef*)(nativeData);
//	b2BodyDef_instance->angularVelocity= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2BodyDef_getter_angularVelocity(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2BodyDef* b2BodyDef_instance = (b2BodyDef*)(nativeData);
	//return b2BodyDef_instance->angularVelocity;
	FREObject result;
	return result;
}

 
FREObject ane_b2BodyDef_setter_linearDamping(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2BodyDef* b2BodyDef_instance = (b2BodyDef*)(nativeData);
//	b2BodyDef_instance->linearDamping= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2BodyDef_getter_linearDamping(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2BodyDef* b2BodyDef_instance = (b2BodyDef*)(nativeData);
	//return b2BodyDef_instance->linearDamping;
	FREObject result;
	return result;
}

 
FREObject ane_b2BodyDef_setter_angularDamping(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2BodyDef* b2BodyDef_instance = (b2BodyDef*)(nativeData);
//	b2BodyDef_instance->angularDamping= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2BodyDef_getter_angularDamping(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2BodyDef* b2BodyDef_instance = (b2BodyDef*)(nativeData);
	//return b2BodyDef_instance->angularDamping;
	FREObject result;
	return result;
}

 
FREObject ane_b2BodyDef_setter_allowSleep(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2BodyDef* b2BodyDef_instance = (b2BodyDef*)(nativeData);
//	b2BodyDef_instance->allowSleep= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2BodyDef_getter_allowSleep(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2BodyDef* b2BodyDef_instance = (b2BodyDef*)(nativeData);
	//return b2BodyDef_instance->allowSleep;
	FREObject result;
	return result;
}

 
FREObject ane_b2BodyDef_setter_awake(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2BodyDef* b2BodyDef_instance = (b2BodyDef*)(nativeData);
//	b2BodyDef_instance->awake= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2BodyDef_getter_awake(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2BodyDef* b2BodyDef_instance = (b2BodyDef*)(nativeData);
	//return b2BodyDef_instance->awake;
	FREObject result;
	return result;
}

 
FREObject ane_b2BodyDef_setter_fixedRotation(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2BodyDef* b2BodyDef_instance = (b2BodyDef*)(nativeData);
//	b2BodyDef_instance->fixedRotation= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2BodyDef_getter_fixedRotation(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2BodyDef* b2BodyDef_instance = (b2BodyDef*)(nativeData);
	//return b2BodyDef_instance->fixedRotation;
	FREObject result;
	return result;
}

 
FREObject ane_b2BodyDef_setter_bullet(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2BodyDef* b2BodyDef_instance = (b2BodyDef*)(nativeData);
//	b2BodyDef_instance->bullet= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2BodyDef_getter_bullet(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2BodyDef* b2BodyDef_instance = (b2BodyDef*)(nativeData);
	//return b2BodyDef_instance->bullet;
	FREObject result;
	return result;
}

 
FREObject ane_b2BodyDef_setter_active(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2BodyDef* b2BodyDef_instance = (b2BodyDef*)(nativeData);
//	b2BodyDef_instance->active= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2BodyDef_getter_active(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2BodyDef* b2BodyDef_instance = (b2BodyDef*)(nativeData);
	//return b2BodyDef_instance->active;
	FREObject result;
	return result;
}

 
FREObject ane_b2BodyDef_setter_userData(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2BodyDef* b2BodyDef_instance = (b2BodyDef*)(nativeData);
//	b2BodyDef_instance->userData= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2BodyDef_getter_userData(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2BodyDef* b2BodyDef_instance = (b2BodyDef*)(nativeData);
	//return b2BodyDef_instance->userData;
	FREObject result;
	return result;
}

 
FREObject ane_b2BodyDef_setter_gravityScale(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2BodyDef* b2BodyDef_instance = (b2BodyDef*)(nativeData);
//	b2BodyDef_instance->gravityScale= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2BodyDef_getter_gravityScale(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2BodyDef* b2BodyDef_instance = (b2BodyDef*)(nativeData);
	//return b2BodyDef_instance->gravityScale;
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2BODYDEF_H_ */
