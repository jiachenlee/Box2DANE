/*================================================================================
*
* File Name: b2DestructionListener.h
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

#ifndef BOX2DANE_C_B2DESTRUCTIONLISTENER_H_
#define BOX2DANE_C_B2DESTRUCTIONLISTENER_H_

//Convenience functions for generating a new AS3 class instance of b2DestructionListener
FREResult FRENewObjectFromb2DestructionListener(b2DestructionListener* obj, FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[1];
	FREGetPointerAsString((void*)obj, &memAddress);
	constructorArguments[0] = memAddress;
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.dynamics.b2DestructionListener";

	FREResult objInitResult = FRENewObject(className, 1, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2DestructionListener object in function FRENewObjectFromb2DestructionListener");
	}

	return objInitResult;
}

FREResult FRENewb2DestructionListener(FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[0];
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.dynamics.b2DestructionListener";

	FREResult objInitResult = FRENewObject(className, 0, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2DestructionListener object in function FRENewb2DestructionListener");
	}

	return objInitResult;
}
//

FREObject ane_b2DestructionListener_callback_SayGoodbye(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2DestructionListener* b2DestructionListener_instance = (b2DestructionListener*)(nativeData);
//	b2DestructionListener_instance->SayGoodbye(...);
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2DESTRUCTIONLISTENER_H_ */
