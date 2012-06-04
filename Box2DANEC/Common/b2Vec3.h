/*================================================================================
*
* File Name: b2Vec3.h
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

#ifndef BOX2DANE_C_B2VEC3_H_
#define BOX2DANE_C_B2VEC3_H_




FREObject ane_b2Vec3_constructor_b2Vec3(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Vec3* b2Vec3_instance = (b2Vec3*)(nativeData);
//	b2Vec3_instance->b2Vec3(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Vec3_callback_SetZero(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Vec3* b2Vec3_instance = (b2Vec3*)(nativeData);
//	b2Vec3_instance->SetZero(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Vec3_callback_Set(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Vec3* b2Vec3_instance = (b2Vec3*)(nativeData);
//	b2Vec3_instance->Set(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Vec3_setter_x(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Vec3* b2Vec3_instance = (b2Vec3*)(nativeData);
//	b2Vec3_instance->x= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2Vec3_getter_x(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Vec3* b2Vec3_instance = (b2Vec3*)(nativeData);
	//return b2Vec3_instance->x;
	FREObject result;
	return result;
}

 
FREObject ane_b2Vec3_setter_y(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Vec3* b2Vec3_instance = (b2Vec3*)(nativeData);
//	b2Vec3_instance->y= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2Vec3_getter_y(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Vec3* b2Vec3_instance = (b2Vec3*)(nativeData);
	//return b2Vec3_instance->y;
	FREObject result;
	return result;
}

 
FREObject ane_b2Vec3_setter_z(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Vec3* b2Vec3_instance = (b2Vec3*)(nativeData);
//	b2Vec3_instance->z= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2Vec3_getter_z(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Vec3* b2Vec3_instance = (b2Vec3*)(nativeData);
	//return b2Vec3_instance->z;
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2VEC3_H_ */
