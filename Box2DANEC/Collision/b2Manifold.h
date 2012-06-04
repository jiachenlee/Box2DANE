/*================================================================================
*
* File Name: b2Manifold.h
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

#ifndef BOX2DANE_C_B2MANIFOLD_H_
#define BOX2DANE_C_B2MANIFOLD_H_




FREObject ane_b2Manifold_setter_localNormal(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Manifold* b2Manifold_instance = (b2Manifold*)(nativeData);
//	b2Manifold_instance->localNormal= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2Manifold_getter_localNormal(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Manifold* b2Manifold_instance = (b2Manifold*)(nativeData);
	//return b2Manifold_instance->localNormal;
	FREObject result;
	return result;
}

 
FREObject ane_b2Manifold_setter_localPoint(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Manifold* b2Manifold_instance = (b2Manifold*)(nativeData);
//	b2Manifold_instance->localPoint= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2Manifold_getter_localPoint(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Manifold* b2Manifold_instance = (b2Manifold*)(nativeData);
	//return b2Manifold_instance->localPoint;
	FREObject result;
	return result;
}

 
FREObject ane_b2Manifold_setter_type(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Manifold* b2Manifold_instance = (b2Manifold*)(nativeData);
//	b2Manifold_instance->type= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2Manifold_getter_type(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Manifold* b2Manifold_instance = (b2Manifold*)(nativeData);
	//return b2Manifold_instance->type;
	FREObject result;
	return result;
}

 
FREObject ane_b2Manifold_setter_pointCount(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Manifold* b2Manifold_instance = (b2Manifold*)(nativeData);
//	b2Manifold_instance->pointCount= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2Manifold_getter_pointCount(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Manifold* b2Manifold_instance = (b2Manifold*)(nativeData);
	//return b2Manifold_instance->pointCount;
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2MANIFOLD_H_ */
