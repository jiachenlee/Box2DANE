/*================================================================================
*
* File Name: b2RayCastInput.h
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

#ifndef BOX2DANE_C_B2RAYCASTINPUT_H_
#define BOX2DANE_C_B2RAYCASTINPUT_H_

//Convenience functions for generating a new AS3 class instance of b2RayCastInput
FREResult FRENewObjectFromb2RayCastInput(b2RayCastInput* obj, FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[1];
	FREGetPointerAsString((void*)obj, &memAddress);
	constructorArguments[0] = memAddress;
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.collision.b2RayCastInput";

	FREResult objInitResult = FRENewObject(className, 1, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2RayCastInput object in function FRENewObjectFromb2RayCastInput");
	}

	return objInitResult;
}

FREResult FRENewb2RayCastInput(FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[0];
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.collision.b2RayCastInput";

	FREResult objInitResult = FRENewObject(className, 0, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2RayCastInput object in function FRENewb2RayCastInput");
	}

	return objInitResult;
}
//

FREObject ane_b2RayCastInput_setter_p1(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RayCastInput* b2RayCastInput_instance = (b2RayCastInput*)(nativeData);
//	b2RayCastInput_instance->p1= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2RayCastInput_getter_p1(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RayCastInput* b2RayCastInput_instance = (b2RayCastInput*)(nativeData);
	//return b2RayCastInput_instance->p1;
	FREObject result;
	return result;
}

 
FREObject ane_b2RayCastInput_setter_p2(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RayCastInput* b2RayCastInput_instance = (b2RayCastInput*)(nativeData);
//	b2RayCastInput_instance->p2= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2RayCastInput_getter_p2(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RayCastInput* b2RayCastInput_instance = (b2RayCastInput*)(nativeData);
	//return b2RayCastInput_instance->p2;
	FREObject result;
	return result;
}

 
FREObject ane_b2RayCastInput_setter_maxFraction(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RayCastInput* b2RayCastInput_instance = (b2RayCastInput*)(nativeData);
//	b2RayCastInput_instance->maxFraction= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2RayCastInput_getter_maxFraction(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RayCastInput* b2RayCastInput_instance = (b2RayCastInput*)(nativeData);
	//return b2RayCastInput_instance->maxFraction;
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2RAYCASTINPUT_H_ */
