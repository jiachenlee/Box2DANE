/*================================================================================
*
* File Name: b2ContactListener.h
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

#ifndef BOX2DANE_C_B2CONTACTLISTENER_H_
#define BOX2DANE_C_B2CONTACTLISTENER_H_

//Convenience functions for generating a new AS3 class instance of b2ContactListener
FREResult FRENewObjectFromb2ContactListener(b2ContactListener* obj, FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[1];
	FREGetPointerAsString((void*)obj, &memAddress);
	constructorArguments[0] = memAddress;
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.dynamics.b2ContactListener";

	FREResult objInitResult = FRENewObject(className, 1, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2ContactListener object in function FRENewObjectFromb2ContactListener");
	}

	return objInitResult;
}

FREResult FRENewb2ContactListener(FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[0];
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.dynamics.b2ContactListener";

	FREResult objInitResult = FRENewObject(className, 0, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2ContactListener object in function FRENewb2ContactListener");
	}

	return objInitResult;
}
//

FREObject ane_b2ContactListener_callback_BeginContact(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactListener* b2ContactListener_instance = (b2ContactListener*)(nativeData);
//	b2ContactListener_instance->BeginContact(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactListener_callback_EndContact(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactListener* b2ContactListener_instance = (b2ContactListener*)(nativeData);
//	b2ContactListener_instance->EndContact(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactListener_callback_PreSolve(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactListener* b2ContactListener_instance = (b2ContactListener*)(nativeData);
//	b2ContactListener_instance->PreSolve(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactListener_callback_PostSolve(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactListener* b2ContactListener_instance = (b2ContactListener*)(nativeData);
//	b2ContactListener_instance->PostSolve(...);
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2CONTACTLISTENER_H_ */
