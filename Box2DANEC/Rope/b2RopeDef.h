/*================================================================================
*
* File Name: b2RopeDef.h
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

#ifndef BOX2DANE_C_B2ROPEDEF_H_
#define BOX2DANE_C_B2ROPEDEF_H_

//Convenience functions for generating a new AS3 class instance of b2RopeDef
FREResult FRENewObjectFromb2RopeDef(b2RopeDef* obj, FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[1];
	FREGetPointerAsString((void*)obj, &memAddress);
	constructorArguments[0] = memAddress;
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.rope.b2RopeDef";

	FREResult objInitResult = FRENewObject(className, 1, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2RopeDef object in function FRENewObjectFromb2RopeDef");
	}

	return objInitResult;
}

FREResult FRENewb2RopeDef(FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[0];
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.rope.b2RopeDef";

	FREResult objInitResult = FRENewObject(className, 0, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2RopeDef object in function FRENewb2RopeDef");
	}

	return objInitResult;
}
//

FREObject ane_b2RopeDef_constructor_b2RopeDef(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RopeDef* b2RopeDef_instance = (b2RopeDef*)(nativeData);
//	b2RopeDef_instance->b2RopeDef(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2RopeDef_setter_vertices(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RopeDef* b2RopeDef_instance = (b2RopeDef*)(nativeData);
//	b2RopeDef_instance->vertices= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2RopeDef_getter_vertices(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RopeDef* b2RopeDef_instance = (b2RopeDef*)(nativeData);
	//return b2RopeDef_instance->vertices;
	FREObject result;
	return result;
}

 
FREObject ane_b2RopeDef_setter_count(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RopeDef* b2RopeDef_instance = (b2RopeDef*)(nativeData);
//	b2RopeDef_instance->count= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2RopeDef_getter_count(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RopeDef* b2RopeDef_instance = (b2RopeDef*)(nativeData);
	//return b2RopeDef_instance->count;
	FREObject result;
	return result;
}

 
FREObject ane_b2RopeDef_setter_masses(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RopeDef* b2RopeDef_instance = (b2RopeDef*)(nativeData);
//	b2RopeDef_instance->masses= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2RopeDef_getter_masses(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RopeDef* b2RopeDef_instance = (b2RopeDef*)(nativeData);
	//return b2RopeDef_instance->masses;
	FREObject result;
	return result;
}

 
FREObject ane_b2RopeDef_setter_gravity(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RopeDef* b2RopeDef_instance = (b2RopeDef*)(nativeData);
//	b2RopeDef_instance->gravity= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2RopeDef_getter_gravity(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RopeDef* b2RopeDef_instance = (b2RopeDef*)(nativeData);
	//return b2RopeDef_instance->gravity;
	FREObject result;
	return result;
}

 
FREObject ane_b2RopeDef_setter_damping(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RopeDef* b2RopeDef_instance = (b2RopeDef*)(nativeData);
//	b2RopeDef_instance->damping= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2RopeDef_getter_damping(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RopeDef* b2RopeDef_instance = (b2RopeDef*)(nativeData);
	//return b2RopeDef_instance->damping;
	FREObject result;
	return result;
}

 
FREObject ane_b2RopeDef_setter_k2(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RopeDef* b2RopeDef_instance = (b2RopeDef*)(nativeData);
//	b2RopeDef_instance->k2= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2RopeDef_getter_k2(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RopeDef* b2RopeDef_instance = (b2RopeDef*)(nativeData);
	//return b2RopeDef_instance->k2;
	FREObject result;
	return result;
}

 
FREObject ane_b2RopeDef_setter_k3(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RopeDef* b2RopeDef_instance = (b2RopeDef*)(nativeData);
//	b2RopeDef_instance->k3= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2RopeDef_getter_k3(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RopeDef* b2RopeDef_instance = (b2RopeDef*)(nativeData);
	//return b2RopeDef_instance->k3;
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2ROPEDEF_H_ */
