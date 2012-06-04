/*================================================================================
*
* File Name: b2DistanceProxy.h
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

#ifndef BOX2DANE_C_B2DISTANCEPROXY_H_
#define BOX2DANE_C_B2DISTANCEPROXY_H_




FREObject ane_b2DistanceProxy_constructor_b2DistanceProxy(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2DistanceProxy* b2DistanceProxy_instance = (b2DistanceProxy*)(nativeData);
//	b2DistanceProxy_instance->b2DistanceProxy(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2DistanceProxy_callback_Set(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2DistanceProxy* b2DistanceProxy_instance = (b2DistanceProxy*)(nativeData);
//	b2DistanceProxy_instance->Set(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2DistanceProxy_callback_GetSupport(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2DistanceProxy* b2DistanceProxy_instance = (b2DistanceProxy*)(nativeData);
//	b2DistanceProxy_instance->GetSupport(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2DistanceProxy_callback_GetSupportVertex(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2DistanceProxy* b2DistanceProxy_instance = (b2DistanceProxy*)(nativeData);
//	b2DistanceProxy_instance->GetSupportVertex(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2DistanceProxy_callback_GetVertexCount(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2DistanceProxy* b2DistanceProxy_instance = (b2DistanceProxy*)(nativeData);
//	b2DistanceProxy_instance->GetVertexCount(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2DistanceProxy_callback_GetVertex(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2DistanceProxy* b2DistanceProxy_instance = (b2DistanceProxy*)(nativeData);
//	b2DistanceProxy_instance->GetVertex(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2DistanceProxy_setter_m_count(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2DistanceProxy* b2DistanceProxy_instance = (b2DistanceProxy*)(nativeData);
//	b2DistanceProxy_instance->m_count= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2DistanceProxy_getter_m_count(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2DistanceProxy* b2DistanceProxy_instance = (b2DistanceProxy*)(nativeData);
	//return b2DistanceProxy_instance->m_count;
	FREObject result;
	return result;
}

 
FREObject ane_b2DistanceProxy_setter_m_radius(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2DistanceProxy* b2DistanceProxy_instance = (b2DistanceProxy*)(nativeData);
//	b2DistanceProxy_instance->m_radius= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2DistanceProxy_getter_m_radius(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2DistanceProxy* b2DistanceProxy_instance = (b2DistanceProxy*)(nativeData);
	//return b2DistanceProxy_instance->m_radius;
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2DISTANCEPROXY_H_ */
