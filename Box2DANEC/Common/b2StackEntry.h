/*================================================================================
*
* File Name: b2StackEntry.h
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

#ifndef BOX2DANE_C_B2STACKENTRY_H_
#define BOX2DANE_C_B2STACKENTRY_H_




FREObject ane_b2StackEntry_setter_data(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2StackEntry* b2StackEntry_instance = (b2StackEntry*)(nativeData);
//	b2StackEntry_instance->data= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2StackEntry_getter_data(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2StackEntry* b2StackEntry_instance = (b2StackEntry*)(nativeData);
	//return b2StackEntry_instance->data;
	FREObject result;
	return result;
}

 
FREObject ane_b2StackEntry_setter_size(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2StackEntry* b2StackEntry_instance = (b2StackEntry*)(nativeData);
//	b2StackEntry_instance->size= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2StackEntry_getter_size(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2StackEntry* b2StackEntry_instance = (b2StackEntry*)(nativeData);
	//return b2StackEntry_instance->size;
	FREObject result;
	return result;
}

 
FREObject ane_b2StackEntry_setter_usedMalloc(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2StackEntry* b2StackEntry_instance = (b2StackEntry*)(nativeData);
//	b2StackEntry_instance->usedMalloc= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2StackEntry_getter_usedMalloc(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2StackEntry* b2StackEntry_instance = (b2StackEntry*)(nativeData);
	//return b2StackEntry_instance->usedMalloc;
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2STACKENTRY_H_ */
