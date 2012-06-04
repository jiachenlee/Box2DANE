/*================================================================================
*
* File Name: b2Rope.h
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

#ifndef BOX2DANE_C_B2ROPE_H_
#define BOX2DANE_C_B2ROPE_H_




FREObject ane_b2Rope_constructor_b2Rope(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Rope* b2Rope_instance = (b2Rope*)(nativeData);
//	b2Rope_instance->b2Rope(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Rope_callback_Initialize(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Rope* b2Rope_instance = (b2Rope*)(nativeData);
//	b2Rope_instance->Initialize(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Rope_callback_Step(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Rope* b2Rope_instance = (b2Rope*)(nativeData);
//	b2Rope_instance->Step(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Rope_callback_GetVertexCount(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Rope* b2Rope_instance = (b2Rope*)(nativeData);
//	b2Rope_instance->GetVertexCount(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Rope_callback_GetVertices(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Rope* b2Rope_instance = (b2Rope*)(nativeData);
//	b2Rope_instance->GetVertices(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Rope_callback_Draw(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Rope* b2Rope_instance = (b2Rope*)(nativeData);
//	b2Rope_instance->Draw(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Rope_callback_SetAngle(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Rope* b2Rope_instance = (b2Rope*)(nativeData);
//	b2Rope_instance->SetAngle(...);
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2ROPE_H_ */
