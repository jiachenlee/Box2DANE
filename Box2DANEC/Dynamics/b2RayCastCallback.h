/*================================================================================
*
* File Name: b2RayCastCallback.h
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

#ifndef BOX2DANE_C_B2RAYCASTCALLBACK_H_
#define BOX2DANE_C_B2RAYCASTCALLBACK_H_

//Convenience functions for generating a new AS3 class instance of b2RayCastCallback
FREResult FRENewObjectFromb2RayCastCallback(b2RayCastCallback* obj, FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[1];
	FREGetPointerAsString((void*)obj, &memAddress);
	constructorArguments[0] = memAddress;
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.dynamics.b2RayCastCallback";

	FREResult objInitResult = FRENewObject(className, 1, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2RayCastCallback object in function FRENewObjectFromb2RayCastCallback");
	}

	return objInitResult;
}

FREResult FRENewb2RayCastCallback(FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[0];
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.dynamics.b2RayCastCallback";

	FREResult objInitResult = FRENewObject(className, 0, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2RayCastCallback object in function FRENewb2RayCastCallback");
	}

	return objInitResult;
}
//

FREObject ane_b2RayCastCallback_callback_ReportFixture(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RayCastCallback* b2RayCastCallback_instance = (b2RayCastCallback*)(nativeData);
//	b2RayCastCallback_instance->ReportFixture(...);
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2RAYCASTCALLBACK_H_ */
