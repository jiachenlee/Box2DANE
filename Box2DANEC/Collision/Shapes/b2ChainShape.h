/*================================================================================
*
* File Name: b2ChainShape.h
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

#ifndef BOX2DANE_C_B2CHAINSHAPE_H_
#define BOX2DANE_C_B2CHAINSHAPE_H_

//Convenience functions for generating a new AS3 class instance of b2ChainShape
FREResult FRENewObjectFromb2ChainShape(b2ChainShape* obj, FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[1];
	FREGetPointerAsString((void*)obj, &memAddress);
	constructorArguments[0] = memAddress;
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.collision.shapes.b2ChainShape";

	FREResult objInitResult = FRENewObject(className, 1, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2ChainShape object in function FRENewObjectFromb2ChainShape");
	}

	return objInitResult;
}

FREResult FRENewb2ChainShape(FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[0];
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.collision.shapes.b2ChainShape";

	FREResult objInitResult = FRENewObject(className, 0, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2ChainShape object in function FRENewb2ChainShape");
	}

	return objInitResult;
}
//

FREObject ane_b2ChainShape_constructor_b2ChainShape(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ChainShape* b2ChainShape_instance = (b2ChainShape*)(nativeData);
//	b2ChainShape_instance->b2ChainShape(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2ChainShape_callback_CreateLoop(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ChainShape* b2ChainShape_instance = (b2ChainShape*)(nativeData);
//	b2ChainShape_instance->CreateLoop(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2ChainShape_callback_CreateChain(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ChainShape* b2ChainShape_instance = (b2ChainShape*)(nativeData);
//	b2ChainShape_instance->CreateChain(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2ChainShape_callback_SetPrevVertex(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ChainShape* b2ChainShape_instance = (b2ChainShape*)(nativeData);
//	b2ChainShape_instance->SetPrevVertex(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2ChainShape_callback_SetNextVertex(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ChainShape* b2ChainShape_instance = (b2ChainShape*)(nativeData);
//	b2ChainShape_instance->SetNextVertex(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2ChainShape_callback_Clone(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ChainShape* b2ChainShape_instance = (b2ChainShape*)(nativeData);
//	b2ChainShape_instance->Clone(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2ChainShape_callback_GetChildCount(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ChainShape* b2ChainShape_instance = (b2ChainShape*)(nativeData);
//	b2ChainShape_instance->GetChildCount(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2ChainShape_callback_GetChildEdge(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ChainShape* b2ChainShape_instance = (b2ChainShape*)(nativeData);
//	b2ChainShape_instance->GetChildEdge(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2ChainShape_callback_TestPoint(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ChainShape* b2ChainShape_instance = (b2ChainShape*)(nativeData);
//	b2ChainShape_instance->TestPoint(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2ChainShape_callback_RayCast(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ChainShape* b2ChainShape_instance = (b2ChainShape*)(nativeData);
//	b2ChainShape_instance->RayCast(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2ChainShape_callback_ComputeAABB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ChainShape* b2ChainShape_instance = (b2ChainShape*)(nativeData);
//	b2ChainShape_instance->ComputeAABB(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2ChainShape_callback_ComputeMass(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ChainShape* b2ChainShape_instance = (b2ChainShape*)(nativeData);
//	b2ChainShape_instance->ComputeMass(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2ChainShape_setter_m_vertices(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ChainShape* b2ChainShape_instance = (b2ChainShape*)(nativeData);
//	b2ChainShape_instance->m_vertices= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2ChainShape_getter_m_vertices(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ChainShape* b2ChainShape_instance = (b2ChainShape*)(nativeData);
	//return b2ChainShape_instance->m_vertices;
	FREObject result;
	return result;
}

 
FREObject ane_b2ChainShape_setter_m_count(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ChainShape* b2ChainShape_instance = (b2ChainShape*)(nativeData);
//	b2ChainShape_instance->m_count= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2ChainShape_getter_m_count(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ChainShape* b2ChainShape_instance = (b2ChainShape*)(nativeData);
	//return b2ChainShape_instance->m_count;
	FREObject result;
	return result;
}

 
FREObject ane_b2ChainShape_setter_m_prevVertex(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ChainShape* b2ChainShape_instance = (b2ChainShape*)(nativeData);
//	b2ChainShape_instance->m_prevVertex= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2ChainShape_getter_m_prevVertex(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ChainShape* b2ChainShape_instance = (b2ChainShape*)(nativeData);
	//return b2ChainShape_instance->m_prevVertex;
	FREObject result;
	return result;
}

 
FREObject ane_b2ChainShape_setter_m_nextVertex(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ChainShape* b2ChainShape_instance = (b2ChainShape*)(nativeData);
//	b2ChainShape_instance->m_nextVertex= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2ChainShape_getter_m_nextVertex(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ChainShape* b2ChainShape_instance = (b2ChainShape*)(nativeData);
	//return b2ChainShape_instance->m_nextVertex;
	FREObject result;
	return result;
}

 
FREObject ane_b2ChainShape_setter_m_hasPrevVertex(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ChainShape* b2ChainShape_instance = (b2ChainShape*)(nativeData);
//	b2ChainShape_instance->m_hasPrevVertex= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2ChainShape_getter_m_hasPrevVertex(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ChainShape* b2ChainShape_instance = (b2ChainShape*)(nativeData);
	//return b2ChainShape_instance->m_hasPrevVertex;
	FREObject result;
	return result;
}

 
FREObject ane_b2ChainShape_setter_m_hasNextVertex(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ChainShape* b2ChainShape_instance = (b2ChainShape*)(nativeData);
//	b2ChainShape_instance->m_hasNextVertex= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2ChainShape_getter_m_hasNextVertex(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ChainShape* b2ChainShape_instance = (b2ChainShape*)(nativeData);
	//return b2ChainShape_instance->m_hasNextVertex;
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2CHAINSHAPE_H_ */
