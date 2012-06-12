/*================================================================================
*
* File Name: b2FixtureDef.h
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

#ifndef BOX2DANE_C_B2FIXTUREDEF_H_
#define BOX2DANE_C_B2FIXTUREDEF_H_

//Convenience functions for generating a new AS3 class instance of b2FixtureDef
FREResult FRENewObjectFromb2FixtureDef(b2FixtureDef* obj, FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[1];
	FREGetPointerAsString((void*)obj, &memAddress);
	constructorArguments[0] = memAddress;
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.dynamics.b2FixtureDef";

	FREResult objInitResult = FRENewObject(className, 1, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2FixtureDef object in function FRENewObjectFromb2FixtureDef");
	}

	return objInitResult;
}

FREResult FRENewb2FixtureDef(FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[0];
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.dynamics.b2FixtureDef";

	FREResult objInitResult = FRENewObject(className, 0, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2FixtureDef object in function FRENewb2FixtureDef");
	}

	return objInitResult;
}
//

FREObject ane_b2FixtureDef_constructor_b2FixtureDef(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2FixtureDef* b2FixtureDef_instance = (b2FixtureDef*)(nativeData);
//	b2FixtureDef_instance->b2FixtureDef(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2FixtureDef_setter_userData(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2FixtureDef* b2FixtureDef_instance = (b2FixtureDef*)(nativeData);
//	b2FixtureDef_instance->userData= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2FixtureDef_getter_userData(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2FixtureDef* b2FixtureDef_instance = (b2FixtureDef*)(nativeData);
	//return b2FixtureDef_instance->userData;
	FREObject result;
	return result;
}

 
FREObject ane_b2FixtureDef_setter_friction(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2FixtureDef* b2FixtureDef_instance = (b2FixtureDef*)(nativeData);
//	b2FixtureDef_instance->friction= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2FixtureDef_getter_friction(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2FixtureDef* b2FixtureDef_instance = (b2FixtureDef*)(nativeData);
	//return b2FixtureDef_instance->friction;
	FREObject result;
	return result;
}

 
FREObject ane_b2FixtureDef_setter_restitution(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2FixtureDef* b2FixtureDef_instance = (b2FixtureDef*)(nativeData);
//	b2FixtureDef_instance->restitution= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2FixtureDef_getter_restitution(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2FixtureDef* b2FixtureDef_instance = (b2FixtureDef*)(nativeData);
	//return b2FixtureDef_instance->restitution;
	FREObject result;
	return result;
}

 
FREObject ane_b2FixtureDef_setter_density(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2FixtureDef* b2FixtureDef_instance = (b2FixtureDef*)(nativeData);
//	b2FixtureDef_instance->density= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2FixtureDef_getter_density(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2FixtureDef* b2FixtureDef_instance = (b2FixtureDef*)(nativeData);
	//return b2FixtureDef_instance->density;
	FREObject result;
	return result;
}

 
FREObject ane_b2FixtureDef_setter_isSensor(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2FixtureDef* b2FixtureDef_instance = (b2FixtureDef*)(nativeData);
//	b2FixtureDef_instance->isSensor= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2FixtureDef_getter_isSensor(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2FixtureDef* b2FixtureDef_instance = (b2FixtureDef*)(nativeData);
	//return b2FixtureDef_instance->isSensor;
	FREObject result;
	return result;
}

 
FREObject ane_b2FixtureDef_setter_filter(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2FixtureDef* b2FixtureDef_instance = (b2FixtureDef*)(nativeData);
//	b2FixtureDef_instance->filter= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2FixtureDef_getter_filter(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2FixtureDef* b2FixtureDef_instance = (b2FixtureDef*)(nativeData);
	//return b2FixtureDef_instance->filter;
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2FIXTUREDEF_H_ */
