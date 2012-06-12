/*================================================================================
*
* File Name: b2ContactID.h
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

#ifndef BOX2DANE_C_B2CONTACTID_H_
#define BOX2DANE_C_B2CONTACTID_H_

//Convenience functions for generating a new AS3 class instance of b2ContactID
FREResult FRENewObjectFromb2ContactID(b2ContactID* obj, FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[1];
	FREGetPointerAsString((void*)obj, &memAddress);
	constructorArguments[0] = memAddress;
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.collision.b2ContactID";

	FREResult objInitResult = FRENewObject(className, 1, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2ContactID object in function FRENewObjectFromb2ContactID");
	}

	return objInitResult;
}

FREResult FRENewb2ContactID(FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[0];
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.collision.b2ContactID";

	FREResult objInitResult = FRENewObject(className, 0, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2ContactID object in function FRENewb2ContactID");
	}

	return objInitResult;
}
//

FREObject ane_b2ContactID_setter_cf(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactID* b2ContactID_instance = (b2ContactID*)(nativeData);
//	b2ContactID_instance->cf= ...;
	FREObject result;
	return result;
}


FREObject ane_b2ContactID_getter_cf(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactID* b2ContactID_instance = (b2ContactID*)(nativeData);
	//return b2ContactID_instance->cf;
	FREObject result;
	return result;
}

FREObject ane_b2ContactID_setter_key(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactID* b2ContactID_instance = (b2ContactID*)(nativeData);
//	b2ContactID_instance->key= ...;
	FREObject result;
	return result;
}


FREObject ane_b2ContactID_getter_key(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactID* b2ContactID_instance = (b2ContactID*)(nativeData);
	//return b2ContactID_instance->key;
	FREObject result;
	return result;
}

#endif /* B2CONTACTID_H_ */
