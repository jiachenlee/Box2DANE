/*================================================================================
*
* File Name: b2Velocity.h
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

#ifndef BOX2DANE_C_B2VELOCITY_H_
#define BOX2DANE_C_B2VELOCITY_H_

//Convenience functions for generating a new AS3 class instance of b2Velocity
FREResult FRENewObjectFromb2Velocity(b2Velocity* obj, FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[1];
	FREGetPointerAsString((void*)obj, &memAddress);
	constructorArguments[0] = memAddress;
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.dynamics.b2Velocity";

	FREResult objInitResult = FRENewObject(className, 1, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2Velocity object in function FRENewObjectFromb2Velocity");
	}

	return objInitResult;
}

FREResult FRENewb2Velocity(FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[0];
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.dynamics.b2Velocity";

	FREResult objInitResult = FRENewObject(className, 0, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2Velocity object in function FRENewb2Velocity");
	}

	return objInitResult;
}
//

FREObject ane_b2Velocity_setter_v(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Velocity* b2Velocity_instance = (b2Velocity*)(nativeData);
//	b2Velocity_instance->v= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2Velocity_getter_v(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Velocity* b2Velocity_instance = (b2Velocity*)(nativeData);
	//return b2Velocity_instance->v;
	FREObject result;
	return result;
}

 
FREObject ane_b2Velocity_setter_w(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Velocity* b2Velocity_instance = (b2Velocity*)(nativeData);
//	b2Velocity_instance->w= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2Velocity_getter_w(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Velocity* b2Velocity_instance = (b2Velocity*)(nativeData);
	//return b2Velocity_instance->w;
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2VELOCITY_H_ */
