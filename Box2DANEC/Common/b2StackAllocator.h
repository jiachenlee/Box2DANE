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
