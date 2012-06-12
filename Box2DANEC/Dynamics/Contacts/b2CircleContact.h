/*================================================================================
*
* File Name: b2CircleContact.h
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

#ifndef BOX2DANE_C_B2CIRCLECONTACT_H_
#define BOX2DANE_C_B2CIRCLECONTACT_H_

//Convenience functions for generating a new AS3 class instance of b2CircleContact
FREResult FRENewObjectFromb2CircleContact(b2CircleContact* obj, FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[1];
	FREGetPointerAsString((void*)obj, &memAddress);
	constructorArguments[0] = memAddress;
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.dynamics.contacts.b2CircleContact";

	FREResult objInitResult = FRENewObject(className, 1, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2CircleContact object in function FRENewObjectFromb2CircleContact");
	}

	return objInitResult;
}

FREResult FRENewb2CircleContact(FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[0];
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.dynamics.contacts.b2CircleContact";

	FREResult objInitResult = FRENewObject(className, 0, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2CircleContact object in function FRENewb2CircleContact");
	}

	return objInitResult;
}
//

FREObject ane_b2CircleContact_callback_Create(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2CircleContact* b2CircleContact_instance = (b2CircleContact*)(nativeData);
//	b2CircleContact_instance->Create(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2CircleContact_callback_Destroy(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2CircleContact* b2CircleContact_instance = (b2CircleContact*)(nativeData);
//	b2CircleContact_instance->Destroy(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2CircleContact_constructor_b2CircleContact(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2CircleContact* b2CircleContact_instance = (b2CircleContact*)(nativeData);
//	b2CircleContact_instance->b2CircleContact(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2CircleContact_callback_Evaluate(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2CircleContact* b2CircleContact_instance = (b2CircleContact*)(nativeData);
//	b2CircleContact_instance->Evaluate(...);
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2CIRCLECONTACT_H_ */
