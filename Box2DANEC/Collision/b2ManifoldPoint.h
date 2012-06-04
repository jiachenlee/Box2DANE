/*================================================================================
*
* File Name: b2ManifoldPoint.h
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

#ifndef BOX2DANE_C_B2MANIFOLDPOINT_H_
#define BOX2DANE_C_B2MANIFOLDPOINT_H_




FREObject ane_b2ManifoldPoint_setter_localPoint(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ManifoldPoint* b2ManifoldPoint_instance = (b2ManifoldPoint*)(nativeData);
//	b2ManifoldPoint_instance->localPoint= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2ManifoldPoint_getter_localPoint(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ManifoldPoint* b2ManifoldPoint_instance = (b2ManifoldPoint*)(nativeData);
	//return b2ManifoldPoint_instance->localPoint;
	FREObject result;
	return result;
}

 
FREObject ane_b2ManifoldPoint_setter_normalImpulse(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ManifoldPoint* b2ManifoldPoint_instance = (b2ManifoldPoint*)(nativeData);
//	b2ManifoldPoint_instance->normalImpulse= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2ManifoldPoint_getter_normalImpulse(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ManifoldPoint* b2ManifoldPoint_instance = (b2ManifoldPoint*)(nativeData);
	//return b2ManifoldPoint_instance->normalImpulse;
	FREObject result;
	return result;
}

 
FREObject ane_b2ManifoldPoint_setter_tangentImpulse(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ManifoldPoint* b2ManifoldPoint_instance = (b2ManifoldPoint*)(nativeData);
//	b2ManifoldPoint_instance->tangentImpulse= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2ManifoldPoint_getter_tangentImpulse(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ManifoldPoint* b2ManifoldPoint_instance = (b2ManifoldPoint*)(nativeData);
	//return b2ManifoldPoint_instance->tangentImpulse;
	FREObject result;
	return result;
}

 
FREObject ane_b2ManifoldPoint_setter_id(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ManifoldPoint* b2ManifoldPoint_instance = (b2ManifoldPoint*)(nativeData);
//	b2ManifoldPoint_instance->id= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2ManifoldPoint_getter_id(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ManifoldPoint* b2ManifoldPoint_instance = (b2ManifoldPoint*)(nativeData);
	//return b2ManifoldPoint_instance->id;
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2MANIFOLDPOINT_H_ */
