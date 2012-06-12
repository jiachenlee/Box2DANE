/*================================================================================
*
* File Name: b2BlockAllocator.h
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

#ifndef BOX2DANE_C_B2BLOCKALLOCATOR_H_
#define BOX2DANE_C_B2BLOCKALLOCATOR_H_

//Convenience functions for generating a new AS3 class instance of b2BlockAllocator
FREResult FRENewObjectFromb2BlockAllocator(b2BlockAllocator* obj, FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[1];
	FREGetPointerAsString((void*)obj, &memAddress);
	constructorArguments[0] = memAddress;
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.common.b2BlockAllocator";

	FREResult objInitResult = FRENewObject(className, 1, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2BlockAllocator object in function FRENewObjectFromb2BlockAllocator");
	}

	return objInitResult;
}

FREResult FRENewb2BlockAllocator(FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[0];
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.common.b2BlockAllocator";

	FREResult objInitResult = FRENewObject(className, 0, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2BlockAllocator object in function FRENewb2BlockAllocator");
	}

	return objInitResult;
}
//

FREObject ane_b2BlockAllocator_constructor_b2BlockAllocator(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2BlockAllocator* b2BlockAllocator_instance = (b2BlockAllocator*)(nativeData);
//	b2BlockAllocator_instance->b2BlockAllocator(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2BlockAllocator_callback_Allocate(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2BlockAllocator* b2BlockAllocator_instance = (b2BlockAllocator*)(nativeData);
//	b2BlockAllocator_instance->Allocate(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2BlockAllocator_callback_Free(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2BlockAllocator* b2BlockAllocator_instance = (b2BlockAllocator*)(nativeData);
//	b2BlockAllocator_instance->Free(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2BlockAllocator_callback_Clear(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2BlockAllocator* b2BlockAllocator_instance = (b2BlockAllocator*)(nativeData);
//	b2BlockAllocator_instance->Clear(...);
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2BLOCKALLOCATOR_H_ */
