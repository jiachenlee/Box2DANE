/*================================================================================
*
* File Name: b2Shape.h
* Created on: Mon May 7 22:46:25 GMT-0400 2012
* Copyright (�) 2012 Jesse Nicholson. All Rights Reserved.
* 
*
*                       ***** BEGIN LICENSE BLOCK *****
* This Source Code Form is subject to the terms of the Mozilla Public
* License, v. 2.0. If a copy of the MPL was not distributed with this file,
* You can obtain one at http://mozilla.org/MPL/2.0/.
*                       ***** END  LICENSE  BLOCK *****
*===============================================================================*/

#ifndef BOX2DANE_C_B2SHAPE_H_
#define BOX2DANE_C_B2SHAPE_H_




FREObject ane_b2Shape_callback_Clone(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Shape* b2Shape_instance = (b2Shape*)(nativeData);
//	b2Shape_instance->Clone(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Shape_callback_GetType(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Shape* b2Shape_instance = (b2Shape*)(nativeData);
//	b2Shape_instance->GetType(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Shape_callback_GetChildCount(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Shape* b2Shape_instance = (b2Shape*)(nativeData);
//	b2Shape_instance->GetChildCount(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Shape_callback_TestPoint(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Shape* b2Shape_instance = (b2Shape*)(nativeData);
//	b2Shape_instance->TestPoint(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Shape_callback_RayCast(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Shape* b2Shape_instance = (b2Shape*)(nativeData);
//	b2Shape_instance->RayCast(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Shape_callback_ComputeAABB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Shape* b2Shape_instance = (b2Shape*)(nativeData);
//	b2Shape_instance->ComputeAABB(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Shape_callback_ComputeMass(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Shape* b2Shape_instance = (b2Shape*)(nativeData);
//	b2Shape_instance->ComputeMass(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Shape_setter_m_type(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Shape* b2Shape_instance = (b2Shape*)(nativeData);
//	b2Shape_instance->m_type= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2Shape_getter_m_type(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Shape* b2Shape_instance = (b2Shape*)(nativeData);
	//return b2Shape_instance->m_type;
	FREObject result;
	return result;
}

 
FREObject ane_b2Shape_setter_m_radius(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Shape* b2Shape_instance = (b2Shape*)(nativeData);
//	b2Shape_instance->m_radius= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2Shape_getter_m_radius(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Shape* b2Shape_instance = (b2Shape*)(nativeData);
	//return b2Shape_instance->m_radius;
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2SHAPE_H_ */
