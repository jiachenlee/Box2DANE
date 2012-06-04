/*================================================================================
*
* File Name: b2ContactRegister.h
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

#ifndef BOX2DANE_C_B2CONTACTREGISTER_H_
#define BOX2DANE_C_B2CONTACTREGISTER_H_




FREObject ane_b2ContactRegister_setter_createFcn(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactRegister* b2ContactRegister_instance = (b2ContactRegister*)(nativeData);
//	b2ContactRegister_instance->createFcn= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactRegister_getter_createFcn(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactRegister* b2ContactRegister_instance = (b2ContactRegister*)(nativeData);
	//return b2ContactRegister_instance->createFcn;
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactRegister_setter_destroyFcn(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactRegister* b2ContactRegister_instance = (b2ContactRegister*)(nativeData);
//	b2ContactRegister_instance->destroyFcn= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactRegister_getter_destroyFcn(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactRegister* b2ContactRegister_instance = (b2ContactRegister*)(nativeData);
	//return b2ContactRegister_instance->destroyFcn;
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactRegister_setter_primary(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactRegister* b2ContactRegister_instance = (b2ContactRegister*)(nativeData);
//	b2ContactRegister_instance->primary= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactRegister_getter_primary(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactRegister* b2ContactRegister_instance = (b2ContactRegister*)(nativeData);
	//return b2ContactRegister_instance->primary;
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2CONTACTREGISTER_H_ */
