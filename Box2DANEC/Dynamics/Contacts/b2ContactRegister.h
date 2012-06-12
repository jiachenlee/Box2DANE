/*================================================================================
*
* File Name: b2ContactRegister.h
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

#ifndef BOX2DANE_C_B2CONTACTREGISTER_H_
#define BOX2DANE_C_B2CONTACTREGISTER_H_

//Convenience functions for generating a new AS3 class instance of b2ContactRegister
FREResult FRENewObjectFromb2ContactRegister(b2ContactRegister* obj, FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[1];
	FREGetPointerAsString((void*)obj, &memAddress);
	constructorArguments[0] = memAddress;
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.dynamics.contacts.b2ContactRegister";

	FREResult objInitResult = FRENewObject(className, 1, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2ContactRegister object in function FRENewObjectFromb2ContactRegister");
	}

	return objInitResult;
}

FREResult FRENewb2ContactRegister(FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[0];
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.dynamics.contacts.b2ContactRegister";

	FREResult objInitResult = FRENewObject(className, 0, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2ContactRegister object in function FRENewb2ContactRegister");
	}

	return objInitResult;
}
//

FREObject ane_b2ContactRegister_setter_createFcn(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactRegister* b2ContactRegister_instance = (b2ContactRegister*)(nativeData);
//	b2ContactRegister_instance->createFcn= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactRegister_getter_createFcn(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactRegister* b2ContactRegister_instance = (b2ContactRegister*)(nativeData);
	//return b2ContactRegister_instance->createFcn;
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactRegister_setter_destroyFcn(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactRegister* b2ContactRegister_instance = (b2ContactRegister*)(nativeData);
//	b2ContactRegister_instance->destroyFcn= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactRegister_getter_destroyFcn(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactRegister* b2ContactRegister_instance = (b2ContactRegister*)(nativeData);
	//return b2ContactRegister_instance->destroyFcn;
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactRegister_setter_primary(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactRegister* b2ContactRegister_instance = (b2ContactRegister*)(nativeData);
//	b2ContactRegister_instance->primary= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactRegister_getter_primary(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactRegister* b2ContactRegister_instance = (b2ContactRegister*)(nativeData);
	//return b2ContactRegister_instance->primary;
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2CONTACTREGISTER_H_ */
