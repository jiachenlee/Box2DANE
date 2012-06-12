/*================================================================================
*
* File Name: b2StackAllocator.h
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

#ifndef BOX2DANE_C_B2STACKALLOCATOR_H_
#define BOX2DANE_C_B2STACKALLOCATOR_H_

//Convenience functions for generating a new AS3 class instance of b2StackAllocator
FREResult FRENewObjectFromb2StackAllocator(b2StackAllocator* obj, FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[1];
	FREGetPointerAsString((void*)obj, &memAddress);
	constructorArguments[0] = memAddress;
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.common.b2StackAllocator";

	FREResult objInitResult = FRENewObject(className, 1, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2StackAllocator object in function FRENewObjectFromb2StackAllocator");
	}

	return objInitResult;
}

FREResult FRENewb2StackAllocator(FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[0];
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.common.b2StackAllocator";

	FREResult objInitResult = FRENewObject(className, 0, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2StackAllocator object in function FRENewb2StackAllocator");
	}

	return objInitResult;
}
//

FREObject ane_b2StackAllocator_constructor_b2StackAllocator(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2StackAllocator* b2StackAllocator_instance = (b2StackAllocator*)(nativeData);
//	b2StackAllocator_instance->b2StackAllocator(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2StackAllocator_callback_Allocate(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2StackAllocator* b2StackAllocator_instance = (b2StackAllocator*)(nativeData);
//	b2StackAllocator_instance->Allocate(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2StackAllocator_callback_Free(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2StackAllocator* b2StackAllocator_instance = (b2StackAllocator*)(nativeData);
//	b2StackAllocator_instance->Free(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2StackAllocator_callback_GetMaxAllocation(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2StackAllocator* b2StackAllocator_instance = (b2StackAllocator*)(nativeData);
//	b2StackAllocator_instance->GetMaxAllocation(...);
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2STACKALLOCATOR_H_ */
