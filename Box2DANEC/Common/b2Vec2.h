/*================================================================================
*
* File Name: b2Vec2.h
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

#ifndef BOX2DANE_C_B2VEC2_H_
#define BOX2DANE_C_B2VEC2_H_




FREObject ane_b2Vec2_constructor_b2Vec2(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Vec2* b2Vec2_instance = (b2Vec2*)(nativeData);
//	b2Vec2_instance->b2Vec2(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Vec2_callback_SetZero(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Vec2* b2Vec2_instance = (b2Vec2*)(nativeData);
//	b2Vec2_instance->SetZero(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Vec2_callback_Set(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Vec2* b2Vec2_instance = (b2Vec2*)(nativeData);
//	b2Vec2_instance->Set(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Vec2_callback_Length(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Vec2* b2Vec2_instance = (b2Vec2*)(nativeData);
//	b2Vec2_instance->Length(...);
	FREObject result;
	return result;
}
 
FREObject ane_b2Vec2_callback_LengthSquared(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Vec2* b2Vec2_instance = (b2Vec2*)(nativeData);
//	b2Vec2_instance->LengthSquared(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Vec2_callback_Normalize(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Vec2* b2Vec2_instance = (b2Vec2*)(nativeData);
//	b2Vec2_instance->Normalize(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Vec2_callback_IsValid(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Vec2* b2Vec2_instance = (b2Vec2*)(nativeData);
//	b2Vec2_instance->IsValid(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Vec2_callback_Skew(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Vec2* b2Vec2_instance = (b2Vec2*)(nativeData);
//	b2Vec2_instance->Skew(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Vec2_setter_x(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Vec2* b2Vec2_instance = (b2Vec2*)(nativeData);
//	b2Vec2_instance->x= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2Vec2_getter_x(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Vec2* b2Vec2_instance = (b2Vec2*)(nativeData);
	//return b2Vec2_instance->x;
	FREObject result;
	return result;
}

 
FREObject ane_b2Vec2_setter_y(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Vec2* b2Vec2_instance = (b2Vec2*)(nativeData);
//	b2Vec2_instance->y= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2Vec2_getter_y(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Vec2* b2Vec2_instance = (b2Vec2*)(nativeData);
	//return b2Vec2_instance->y;
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2VEC2_H_ */
