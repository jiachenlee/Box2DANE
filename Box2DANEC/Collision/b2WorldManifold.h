/*================================================================================
*
* File Name: b2WorldManifold.h
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

#ifndef BOX2DANE_C_B2WORLDMANIFOLD_H_
#define BOX2DANE_C_B2WORLDMANIFOLD_H_

//Convenience functions for generating a new AS3 class instance of b2WorldManifold
FREResult FRENewObjectFromb2WorldManifold(b2WorldManifold* obj, FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[1];
	FREGetPointerAsString((void*)obj, &memAddress);
	constructorArguments[0] = memAddress;
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.collision.b2WorldManifold";

	FREResult objInitResult = FRENewObject(className, 1, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2WorldManifold object in function FRENewObjectFromb2WorldManifold");
	}

	return objInitResult;
}

FREResult FRENewb2WorldManifold(FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[0];
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.collision.b2WorldManifold";

	FREResult objInitResult = FRENewObject(className, 0, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2WorldManifold object in function FRENewb2WorldManifold");
	}

	return objInitResult;
}
//
FREObject ane_b2WorldManifold_callback_Initialize(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2WorldManifold* b2WorldManifold_instance = (b2WorldManifold*)(nativeData);
//	b2WorldManifold_instance->Initialize(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2WorldManifold_setter_normal(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2WorldManifold* b2WorldManifold_instance = (b2WorldManifold*)(nativeData);
//	b2WorldManifold_instance->normal= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2WorldManifold_getter_normal(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2WorldManifold* b2WorldManifold_instance = (b2WorldManifold*)(nativeData);
	//return b2WorldManifold_instance->normal;
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2WORLDMANIFOLD_H_ */
