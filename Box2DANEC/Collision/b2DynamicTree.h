/*================================================================================
*
* File Name: b2DynamicTree.h
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

#ifndef BOX2DANE_C_B2DYNAMICTREE_H_
#define BOX2DANE_C_B2DYNAMICTREE_H_

//Convenience functions for generating a new AS3 class instance of b2DynamicTree
FREResult FRENewObjectFromb2DynamicTree(b2DynamicTree* obj, FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[1];
	FREGetPointerAsString((void*)obj, &memAddress);
	constructorArguments[0] = memAddress;
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.collision.b2DynamicTree";

	FREResult objInitResult = FRENewObject(className, 1, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2DynamicTree object in function FRENewObjectFromb2DynamicTree");
	}

	return objInitResult;
}

FREResult FRENewb2DynamicTree(FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[0];
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.collision.b2DynamicTree";

	FREResult objInitResult = FRENewObject(className, 0, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2DynamicTree object in function FRENewb2DynamicTree");
	}

	return objInitResult;
}
//

FREObject ane_b2DynamicTree_constructor_b2DynamicTree(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2DynamicTree* b2DynamicTree_instance = (b2DynamicTree*)(nativeData);
//	b2DynamicTree_instance->b2DynamicTree(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2DynamicTree_callback_CreateProxy(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2DynamicTree* b2DynamicTree_instance = (b2DynamicTree*)(nativeData);
//	b2DynamicTree_instance->CreateProxy(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2DynamicTree_callback_DestroyProxy(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2DynamicTree* b2DynamicTree_instance = (b2DynamicTree*)(nativeData);
//	b2DynamicTree_instance->DestroyProxy(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2DynamicTree_callback_MoveProxy(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2DynamicTree* b2DynamicTree_instance = (b2DynamicTree*)(nativeData);
//	b2DynamicTree_instance->MoveProxy(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2DynamicTree_callback_GetUserData(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2DynamicTree* b2DynamicTree_instance = (b2DynamicTree*)(nativeData);
//	b2DynamicTree_instance->GetUserData(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2DynamicTree_callback_GetFatAABB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2DynamicTree* b2DynamicTree_instance = (b2DynamicTree*)(nativeData);
//	b2DynamicTree_instance->GetFatAABB(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2DynamicTree_callback_Query(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2DynamicTree* b2DynamicTree_instance = (b2DynamicTree*)(nativeData);
//	b2DynamicTree_instance->Query(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2DynamicTree_callback_RayCast(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2DynamicTree* b2DynamicTree_instance = (b2DynamicTree*)(nativeData);
//	b2DynamicTree_instance->RayCast(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2DynamicTree_callback_Validate(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2DynamicTree* b2DynamicTree_instance = (b2DynamicTree*)(nativeData);
//	b2DynamicTree_instance->Validate(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2DynamicTree_callback_GetHeight(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2DynamicTree* b2DynamicTree_instance = (b2DynamicTree*)(nativeData);
//	b2DynamicTree_instance->GetHeight(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2DynamicTree_callback_GetMaxBalance(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2DynamicTree* b2DynamicTree_instance = (b2DynamicTree*)(nativeData);
//	b2DynamicTree_instance->GetMaxBalance(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2DynamicTree_callback_GetAreaRatio(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2DynamicTree* b2DynamicTree_instance = (b2DynamicTree*)(nativeData);
//	b2DynamicTree_instance->GetAreaRatio(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2DynamicTree_callback_RebuildBottomUp(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2DynamicTree* b2DynamicTree_instance = (b2DynamicTree*)(nativeData);
//	b2DynamicTree_instance->RebuildBottomUp(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2DynamicTree_callback_ShiftOrigin(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2DynamicTree* b2DynamicTree_instance = (b2DynamicTree*)(nativeData);
//	b2DynamicTree_instance->ShiftOrigin(...);
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2DYNAMICTREE_H_ */
