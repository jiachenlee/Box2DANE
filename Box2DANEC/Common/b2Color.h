/*================================================================================
*
* File Name: b2Color.h
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

#ifndef BOX2DANE_C_B2COLOR_H_
#define BOX2DANE_C_B2COLOR_H_




FREObject ane_b2Color_constructor_b2Color(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Color* b2Color_instance = (b2Color*)(nativeData);
//	b2Color_instance->b2Color(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Color_callback_Set(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Color* b2Color_instance = (b2Color*)(nativeData);
//	b2Color_instance->Set(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Color_setter_r(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Color* b2Color_instance = (b2Color*)(nativeData);
//	b2Color_instance->r= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2Color_getter_r(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Color* b2Color_instance = (b2Color*)(nativeData);
	//return b2Color_instance->r;
	FREObject result;
	return result;
}

 
FREObject ane_b2Color_setter_g(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Color* b2Color_instance = (b2Color*)(nativeData);
//	b2Color_instance->g= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2Color_getter_g(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Color* b2Color_instance = (b2Color*)(nativeData);
	//return b2Color_instance->g;
	FREObject result;
	return result;
}

 
FREObject ane_b2Color_setter_b(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Color* b2Color_instance = (b2Color*)(nativeData);
//	b2Color_instance->b= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2Color_getter_b(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Color* b2Color_instance = (b2Color*)(nativeData);
	//return b2Color_instance->b;
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2COLOR_H_ */
