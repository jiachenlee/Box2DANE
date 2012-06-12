/*================================================================================
*
* File Name: b2ChainAndCircleContact.h
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

#ifndef BOX2DANE_C_B2CHAINANDCIRCLECONTACT_H_
#define BOX2DANE_C_B2CHAINANDCIRCLECONTACT_H_

//Convenience functions for generating a new AS3 class instance of b2ChainAndCircleContact
FREResult FRENewObjectFromb2ChainAndCircleContact(b2ChainAndCircleContact* obj, FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[1];
	FREGetPointerAsString((void*)obj, &memAddress);
	constructorArguments[0] = memAddress;
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.dynamics.contacts.b2ChainAndCircleContact";

	FREResult objInitResult = FRENewObject(className, 1, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2ChainAndCircleContact object in function FRENewObjectFromb2ChainAndCircleContact");
	}

	return objInitResult;
}

FREResult FRENewb2ChainAndCircleContact(FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[0];
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.dynamics.contacts.b2ChainAndCircleContact";

	FREResult objInitResult = FRENewObject(className, 0, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2ChainAndCircleContact object in function FRENewb2ChainAndCircleContact");
	}

	return objInitResult;
}
//

FREObject ane_b2ChainAndCircleContact_callback_Create(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ChainAndCircleContact* b2ChainAndCircleContact_instance = (b2ChainAndCircleContact*)(nativeData);
//	b2ChainAndCircleContact_instance->Create(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2ChainAndCircleContact_callback_Destroy(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ChainAndCircleContact* b2ChainAndCircleContact_instance = (b2ChainAndCircleContact*)(nativeData);
//	b2ChainAndCircleContact_instance->Destroy(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2ChainAndCircleContact_constructor_b2ChainAndCircleContact(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ChainAndCircleContact* b2ChainAndCircleContact_instance = (b2ChainAndCircleContact*)(nativeData);
//	b2ChainAndCircleContact_instance->b2ChainAndCircleContact(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2ChainAndCircleContact_callback_Evaluate(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ChainAndCircleContact* b2ChainAndCircleContact_instance = (b2ChainAndCircleContact*)(nativeData);
//	b2ChainAndCircleContact_instance->Evaluate(...);
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2CHAINANDCIRCLECONTACT_H_ */
