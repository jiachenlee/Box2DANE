/*================================================================================
*
* File Name: b2Transform.h
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

#ifndef BOX2DANE_C_B2TRANSFORM_H_
#define BOX2DANE_C_B2TRANSFORM_H_

//Convenience functions for generating a new AS3 class instance of b2Transform
FREResult FRENewObjectFromb2Transform(b2Transform* obj, FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[1];
	FREGetPointerAsString((void*)obj, &memAddress);
	constructorArguments[0] = memAddress;
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.common.b2Transform";

	FREResult objInitResult = FRENewObject(className, 1, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2Transform object in function FRENewObjectFromb2Transform");
	}

	return objInitResult;
}

FREResult FRENewb2Transform(FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[0];
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.common.b2Transform";

	FREResult objInitResult = FRENewObject(className, 0, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2Transform object in function FRENewb2Transform");
	}

	return objInitResult;
}
//

FREObject ane_b2Transform_constructor_b2Transform(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Transform* b2Transform_instance = (b2Transform*)(nativeData);
//	b2Transform_instance->b2Transform(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Transform_callback_SetIdentity(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Transform* b2Transform_instance = (b2Transform*)(nativeData);
//	b2Transform_instance->SetIdentity(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Transform_callback_Set(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Transform* b2Transform_instance = (b2Transform*)(nativeData);
//	b2Transform_instance->Set(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Transform_setter_p(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Transform* b2Transform_instance = (b2Transform*)(nativeData);
//	b2Transform_instance->p= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2Transform_getter_p(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Transform* b2Transform_instance = (b2Transform*)(nativeData);
	//return b2Transform_instance->p;
	FREObject result;
	return result;
}

 
FREObject ane_b2Transform_setter_q(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Transform* b2Transform_instance = (b2Transform*)(nativeData);
//	b2Transform_instance->q= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2Transform_getter_q(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Transform* b2Transform_instance = (b2Transform*)(nativeData);
	//return b2Transform_instance->q;
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2TRANSFORM_H_ */
