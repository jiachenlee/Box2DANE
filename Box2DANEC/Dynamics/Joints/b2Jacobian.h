/*================================================================================
*
* File Name: b2Jacobian.h
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

#ifndef BOX2DANE_C_B2JACOBIAN_H_
#define BOX2DANE_C_B2JACOBIAN_H_

//Convenience functions for generating a new AS3 class instance of b2Jacobian
FREResult FRENewObjectFromb2Jacobian(b2Jacobian* obj, FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[1];
	FREGetPointerAsString((void*)obj, &memAddress);
	constructorArguments[0] = memAddress;
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.dynamics.joints.b2Jacobian";

	FREResult objInitResult = FRENewObject(className, 1, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2Jacobian object in function FRENewObjectFromb2Jacobian");
	}

	return objInitResult;
}

FREResult FRENewb2Jacobian(FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[0];
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.dynamics.joints.b2Jacobian";

	FREResult objInitResult = FRENewObject(className, 0, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2Jacobian object in function FRENewb2Jacobian");
	}

	return objInitResult;
}
//

FREObject ane_b2Jacobian_setter_linear(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Jacobian* b2Jacobian_instance = (b2Jacobian*)(nativeData);
//	b2Jacobian_instance->linear= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2Jacobian_getter_linear(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Jacobian* b2Jacobian_instance = (b2Jacobian*)(nativeData);
	//return b2Jacobian_instance->linear;
	FREObject result;
	return result;
}

 
FREObject ane_b2Jacobian_setter_angularA(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Jacobian* b2Jacobian_instance = (b2Jacobian*)(nativeData);
//	b2Jacobian_instance->angularA= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2Jacobian_getter_angularA(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Jacobian* b2Jacobian_instance = (b2Jacobian*)(nativeData);
	//return b2Jacobian_instance->angularA;
	FREObject result;
	return result;
}

 
FREObject ane_b2Jacobian_setter_angularB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Jacobian* b2Jacobian_instance = (b2Jacobian*)(nativeData);
//	b2Jacobian_instance->angularB= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2Jacobian_getter_angularB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Jacobian* b2Jacobian_instance = (b2Jacobian*)(nativeData);
	//return b2Jacobian_instance->angularB;
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2JACOBIAN_H_ */
