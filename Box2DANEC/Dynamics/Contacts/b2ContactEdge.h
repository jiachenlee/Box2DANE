/*================================================================================
*
* File Name: b2ContactEdge.h
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

#ifndef BOX2DANE_C_B2CONTACTEDGE_H_
#define BOX2DANE_C_B2CONTACTEDGE_H_




FREObject ane_b2ContactEdge_setter_other(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactEdge* b2ContactEdge_instance = (b2ContactEdge*)(nativeData);
//	b2ContactEdge_instance->other= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactEdge_getter_other(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactEdge* b2ContactEdge_instance = (b2ContactEdge*)(nativeData);
	//return b2ContactEdge_instance->other;
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactEdge_setter_contact(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactEdge* b2ContactEdge_instance = (b2ContactEdge*)(nativeData);
//	b2ContactEdge_instance->contact= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactEdge_getter_contact(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactEdge* b2ContactEdge_instance = (b2ContactEdge*)(nativeData);
	//return b2ContactEdge_instance->contact;
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactEdge_setter_prev(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactEdge* b2ContactEdge_instance = (b2ContactEdge*)(nativeData);
//	b2ContactEdge_instance->prev= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactEdge_getter_prev(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactEdge* b2ContactEdge_instance = (b2ContactEdge*)(nativeData);
	//return b2ContactEdge_instance->prev;
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactEdge_setter_next(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactEdge* b2ContactEdge_instance = (b2ContactEdge*)(nativeData);
//	b2ContactEdge_instance->next= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactEdge_getter_next(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactEdge* b2ContactEdge_instance = (b2ContactEdge*)(nativeData);
	//return b2ContactEdge_instance->next;
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2CONTACTEDGE_H_ */
