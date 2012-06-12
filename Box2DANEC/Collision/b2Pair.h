/*================================================================================
*
* File Name: b2Pair.h
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

#ifndef BOX2DANE_C_B2PAIR_H_
#define BOX2DANE_C_B2PAIR_H_

//Convenience functions for generating a new AS3 class instance of b2Pair
FREResult FRENewObjectFromb2Pair(b2Pair* obj, FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[1];
	FREGetPointerAsString((void*)obj, &memAddress);
	constructorArguments[0] = memAddress;
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.collision.b2Pair";

	FREResult objInitResult = FRENewObject(className, 1, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2Pair object in function FRENewObjectFromb2Pair");
	}

	return objInitResult;
}

FREResult FRENewb2Pair(FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[0];
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.collision.b2Pair";

	FREResult objInitResult = FRENewObject(className, 0, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2Pair object in function FRENewb2Pair");
	}

	return objInitResult;
}
//

FREObject ane_b2Pair_setter_proxyIdA(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Pair* b2Pair_instance = (b2Pair*)(nativeData);
//	b2Pair_instance->proxyIdA= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2Pair_getter_proxyIdA(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Pair* b2Pair_instance = (b2Pair*)(nativeData);
	//return b2Pair_instance->proxyIdA;
	FREObject result;
	return result;
}

 
FREObject ane_b2Pair_setter_proxyIdB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Pair* b2Pair_instance = (b2Pair*)(nativeData);
//	b2Pair_instance->proxyIdB= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2Pair_getter_proxyIdB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Pair* b2Pair_instance = (b2Pair*)(nativeData);
	//return b2Pair_instance->proxyIdB;
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2PAIR_H_ */
