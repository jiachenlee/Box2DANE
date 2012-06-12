/*================================================================================
*
* File Name: b2Timer.h
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

#ifndef BOX2DANE_C_B2TIMER_H_
#define BOX2DANE_C_B2TIMER_H_

//Convenience functions for generating a new AS3 class instance of b2Timer
FREResult FRENewObjectFromb2Timer(b2Timer* obj, FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[1];
	FREGetPointerAsString((void*)obj, &memAddress);
	constructorArguments[0] = memAddress;
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.common.b2Timer";

	FREResult objInitResult = FRENewObject(className, 1, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2Timer object in function FRENewObjectFromb2Timer");
	}

	return objInitResult;
}

FREResult FRENewb2Timer(FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[0];
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.common.b2Timer";

	FREResult objInitResult = FRENewObject(className, 0, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2Timer object in function FRENewb2Timer");
	}

	return objInitResult;
}
//

FREObject ane_b2Timer_constructor_b2Timer(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Timer* b2Timer_instance = (b2Timer*)(nativeData);
//	b2Timer_instance->b2Timer(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Timer_callback_Reset(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Timer* b2Timer_instance = (b2Timer*)(nativeData);
//	b2Timer_instance->Reset(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Timer_callback_GetMilliseconds(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Timer* b2Timer_instance = (b2Timer*)(nativeData);
//	b2Timer_instance->GetMilliseconds(...);
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2TIMER_H_ */
