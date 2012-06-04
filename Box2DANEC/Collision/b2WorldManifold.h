/*================================================================================
*
* File Name: b2WorldManifold.h
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

#ifndef BOX2DANE_C_B2WORLDMANIFOLD_H_
#define BOX2DANE_C_B2WORLDMANIFOLD_H_




FREObject ane_b2WorldManifold_callback_Initialize(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2WorldManifold* b2WorldManifold_instance = (b2WorldManifold*)(nativeData);
//	b2WorldManifold_instance->Initialize(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2WorldManifold_setter_normal(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2WorldManifold* b2WorldManifold_instance = (b2WorldManifold*)(nativeData);
//	b2WorldManifold_instance->normal= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2WorldManifold_getter_normal(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2WorldManifold* b2WorldManifold_instance = (b2WorldManifold*)(nativeData);
	//return b2WorldManifold_instance->normal;
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2WORLDMANIFOLD_H_ */
