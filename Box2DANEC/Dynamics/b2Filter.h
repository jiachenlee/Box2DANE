/*================================================================================
*
* File Name: b2Filter.h
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

#ifndef BOX2DANE_C_B2FILTER_H_
#define BOX2DANE_C_B2FILTER_H_

//Convenience functions for generating a new AS3 class instance of b2Filter
FREResult FRENewObjectFromb2Filter(b2Filter* obj, FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[1];
	FREGetPointerAsString((void*)obj, &memAddress);
	constructorArguments[0] = memAddress;
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.dynamics.b2Filter";

	FREResult objInitResult = FRENewObject(className, 1, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2Filter object in function FRENewObjectFromb2Filter");
	}

	return objInitResult;
}

FREResult FRENewb2Filter(FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[0];
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.dynamics.b2Filter";

	FREResult objInitResult = FRENewObject(className, 0, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2Filter object in function FRENewb2Filter");
	}

	return objInitResult;
}
//

FREObject ane_b2Filter_constructor_b2Filter(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Filter* b2Filter_instance = (b2Filter*)(nativeData);
//	b2Filter_instance->b2Filter(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Filter_setter_categoryBits(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Filter* b2Filter_instance = (b2Filter*)(nativeData);
//	b2Filter_instance->categoryBits= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2Filter_getter_categoryBits(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Filter* b2Filter_instance = (b2Filter*)(nativeData);
	//return b2Filter_instance->categoryBits;
	FREObject result;
	return result;
}

 
FREObject ane_b2Filter_setter_maskBits(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Filter* b2Filter_instance = (b2Filter*)(nativeData);
//	b2Filter_instance->maskBits= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2Filter_getter_maskBits(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Filter* b2Filter_instance = (b2Filter*)(nativeData);
	//return b2Filter_instance->maskBits;
	FREObject result;
	return result;
}

 
FREObject ane_b2Filter_setter_groupIndex(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Filter* b2Filter_instance = (b2Filter*)(nativeData);
//	b2Filter_instance->groupIndex= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2Filter_getter_groupIndex(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Filter* b2Filter_instance = (b2Filter*)(nativeData);
	//return b2Filter_instance->groupIndex;
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2FILTER_H_ */
