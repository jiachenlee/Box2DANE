/*================================================================================
*
* File Name: b2AABB.h
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

#ifndef BOX2DANE_C_B2AABB_H_
#define BOX2DANE_C_B2AABB_H_




FREObject ane_b2AABB_callback_IsValid(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2AABB* b2AABB_instance = (b2AABB*)(nativeData);

	FREObject isValid;
	FRENewObjectFromBool(b2AABB_instance->IsValid(), &isValid);
	return isValid;
	FREObject result;
	return result;
}

 
FREObject ane_b2AABB_callback_GetCenter(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2AABB* b2AABB_instance = (b2AABB*)(nativeData);


	b2Vec2* center = new b2Vec2(b2AABB_instance->GetCenter());

	/*	Create a new b2Vec2 AS3 instance */

	//AS3 b2Vec2 constructor arguments
	FREObject valueX, valueY, b2Vec2MemAddress;
	FRENewObjectFromInt32(0, &valueX);
	FRENewObjectFromInt32(0, &valueY);
	//FRENewObjectFromUTF8(length, value, b2Vec2MemAddress);
	//


	FREObject centerVector;
	FREObject newObjectException;

	//FRENewObject("b2Vec2", 3, args, centerVector, newObjectException);

//	b2AABB_instance->GetCenter(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2AABB_callback_GetExtents(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2AABB* b2AABB_instance = (b2AABB*)(nativeData);
//	b2AABB_instance->GetExtents(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2AABB_callback_GetPerimeter(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2AABB* b2AABB_instance = (b2AABB*)(nativeData);
//	b2AABB_instance->GetPerimeter(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2AABB_callback_Combine(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2AABB* b2AABB_instance = (b2AABB*)(nativeData);
//	b2AABB_instance->Combine(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2AABB_callback_Contains(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2AABB* b2AABB_instance = (b2AABB*)(nativeData);
//	b2AABB_instance->Contains(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2AABB_callback_RayCast(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2AABB* b2AABB_instance = (b2AABB*)(nativeData);
//	b2AABB_instance->RayCast(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2AABB_setter_lowerBound(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2AABB* b2AABB_instance = (b2AABB*)(nativeData);
//	b2AABB_instance->lowerBound= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2AABB_getter_lowerBound(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2AABB* b2AABB_instance = (b2AABB*)(nativeData);
	//return b2AABB_instance->lowerBound;
	FREObject result;
	return result;
}

 
FREObject ane_b2AABB_setter_upperBound(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2AABB* b2AABB_instance = (b2AABB*)(nativeData);
//	b2AABB_instance->upperBound= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2AABB_getter_upperBound(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2AABB* b2AABB_instance = (b2AABB*)(nativeData);
	//return b2AABB_instance->upperBound;
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2AABB_H_ */
