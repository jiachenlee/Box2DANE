/*================================================================================
*
* File Name: b2Sweep.h
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

#ifndef BOX2DANE_C_B2SWEEP_H_
#define BOX2DANE_C_B2SWEEP_H_

//Convenience functions for generating a new AS3 class instance of b2Sweep
FREResult FRENewObjectFromb2Sweep(b2Sweep* obj, FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[1];
	FREGetPointerAsString((void*)obj, &memAddress);
	constructorArguments[0] = memAddress;
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.common.b2Sweep";

	FREResult objInitResult = FRENewObject(className, 1, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2Sweep object in function FRENewObjectFromb2Sweep");
	}

	return objInitResult;
}

FREResult FRENewb2Sweep(FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[0];
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.common.b2Sweep";

	FREResult objInitResult = FRENewObject(className, 0, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2Sweep object in function FRENewb2Sweep");
	}

	return objInitResult;
}
//

FREObject ane_b2Sweep_callback_GetTransform(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Sweep* b2Sweep_instance = (b2Sweep*)(nativeData);
//	b2Sweep_instance->GetTransform(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Sweep_callback_Advance(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Sweep* b2Sweep_instance = (b2Sweep*)(nativeData);
//	b2Sweep_instance->Advance(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Sweep_callback_Normalize(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Sweep* b2Sweep_instance = (b2Sweep*)(nativeData);
//	b2Sweep_instance->Normalize(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Sweep_setter_localCenter(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Sweep* b2Sweep_instance = (b2Sweep*)(nativeData);
//	b2Sweep_instance->localCenter= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2Sweep_getter_localCenter(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Sweep* b2Sweep_instance = (b2Sweep*)(nativeData);
	//return b2Sweep_instance->localCenter;
	FREObject result;
	return result;
}

 
FREObject ane_b2Sweep_setter_c0(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Sweep* b2Sweep_instance = (b2Sweep*)(nativeData);
//	b2Sweep_instance->c0= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2Sweep_getter_c0(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Sweep* b2Sweep_instance = (b2Sweep*)(nativeData);
	//return b2Sweep_instance->c0;
	FREObject result;
	return result;
}

 
FREObject ane_b2Sweep_setter_c(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Sweep* b2Sweep_instance = (b2Sweep*)(nativeData);
//	b2Sweep_instance->c= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2Sweep_getter_c(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Sweep* b2Sweep_instance = (b2Sweep*)(nativeData);
	//return b2Sweep_instance->c;
	FREObject result;
	return result;
}

 
FREObject ane_b2Sweep_setter_a0(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Sweep* b2Sweep_instance = (b2Sweep*)(nativeData);
//	b2Sweep_instance->a0= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2Sweep_getter_a0(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Sweep* b2Sweep_instance = (b2Sweep*)(nativeData);
	//return b2Sweep_instance->a0;
	FREObject result;
	return result;
}

 
FREObject ane_b2Sweep_setter_a(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Sweep* b2Sweep_instance = (b2Sweep*)(nativeData);
//	b2Sweep_instance->a= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2Sweep_getter_a(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Sweep* b2Sweep_instance = (b2Sweep*)(nativeData);
	//return b2Sweep_instance->a;
	FREObject result;
	return result;
}

 
FREObject ane_b2Sweep_setter_alpha0(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Sweep* b2Sweep_instance = (b2Sweep*)(nativeData);
//	b2Sweep_instance->alpha0= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2Sweep_getter_alpha0(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Sweep* b2Sweep_instance = (b2Sweep*)(nativeData);
	//return b2Sweep_instance->alpha0;
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2SWEEP_H_ */
