/*================================================================================
*
* File Name: b2Position.h
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

#ifndef BOX2DANE_C_B2POSITION_H_
#define BOX2DANE_C_B2POSITION_H_

//Convenience functions for generating a new AS3 class instance of b2Position
FREResult FRENewObjectFromb2Position(b2Position* obj, FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[1];
	FREGetPointerAsString((void*)obj, &memAddress);
	constructorArguments[0] = memAddress;
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.dynamics.b2Position";

	FREResult objInitResult = FRENewObject(className, 1, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2Position object in function FRENewObjectFromb2Position");
	}

	return objInitResult;
}

FREResult FRENewb2Position(FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[0];
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.dynamics.b2Position";

	FREResult objInitResult = FRENewObject(className, 0, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2Position object in function FRENewb2Position");
	}

	return objInitResult;
}
//

FREObject ane_b2Position_setter_c(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Position* b2Position_instance = (b2Position*)(nativeData);
//	b2Position_instance->c= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2Position_getter_c(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Position* b2Position_instance = (b2Position*)(nativeData);
	//return b2Position_instance->c;
	FREObject result;
	return result;
}

 
FREObject ane_b2Position_setter_a(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Position* b2Position_instance = (b2Position*)(nativeData);
//	b2Position_instance->a= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2Position_getter_a(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Position* b2Position_instance = (b2Position*)(nativeData);
	//return b2Position_instance->a;
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2POSITION_H_ */
