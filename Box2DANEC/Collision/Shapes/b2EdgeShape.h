/*================================================================================
*
* File Name: b2EdgeShape.h
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

#ifndef BOX2DANE_C_B2EDGESHAPE_H_
#define BOX2DANE_C_B2EDGESHAPE_H_

//Convenience functions for generating a new AS3 class instance of b2EdgeShape
FREResult FRENewObjectFromb2EdgeShape(b2EdgeShape* obj, FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[1];
	FREGetPointerAsString((void*)obj, &memAddress);
	constructorArguments[0] = memAddress;
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.collision.shapes.b2EdgeShape";

	FREResult objInitResult = FRENewObject(className, 1, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2EdgeShape object in function FRENewObjectFromb2EdgeShape");
	}

	return objInitResult;
}

FREResult FRENewb2EdgeShape(FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[0];
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.collision.shapes.b2EdgeShape";

	FREResult objInitResult = FRENewObject(className, 0, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2EdgeShape object in function FRENewb2EdgeShape");
	}

	return objInitResult;
}
//

FREObject ane_b2EdgeShape_constructor_b2EdgeShape(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2EdgeShape* b2EdgeShape_instance = (b2EdgeShape*)(nativeData);
//	b2EdgeShape_instance->b2EdgeShape(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2EdgeShape_callback_Set(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2EdgeShape* b2EdgeShape_instance = (b2EdgeShape*)(nativeData);
//	b2EdgeShape_instance->Set(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2EdgeShape_callback_Clone(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2EdgeShape* b2EdgeShape_instance = (b2EdgeShape*)(nativeData);
//	b2EdgeShape_instance->Clone(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2EdgeShape_callback_GetChildCount(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2EdgeShape* b2EdgeShape_instance = (b2EdgeShape*)(nativeData);
//	b2EdgeShape_instance->GetChildCount(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2EdgeShape_callback_TestPoint(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2EdgeShape* b2EdgeShape_instance = (b2EdgeShape*)(nativeData);
//	b2EdgeShape_instance->TestPoint(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2EdgeShape_callback_RayCast(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2EdgeShape* b2EdgeShape_instance = (b2EdgeShape*)(nativeData);
//	b2EdgeShape_instance->RayCast(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2EdgeShape_callback_ComputeAABB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2EdgeShape* b2EdgeShape_instance = (b2EdgeShape*)(nativeData);
//	b2EdgeShape_instance->ComputeAABB(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2EdgeShape_callback_ComputeMass(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2EdgeShape* b2EdgeShape_instance = (b2EdgeShape*)(nativeData);
//	b2EdgeShape_instance->ComputeMass(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2EdgeShape_setter_m_vertex1(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2EdgeShape* b2EdgeShape_instance = (b2EdgeShape*)(nativeData);
//	b2EdgeShape_instance->m_vertex1= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2EdgeShape_getter_m_vertex1(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2EdgeShape* b2EdgeShape_instance = (b2EdgeShape*)(nativeData);
	//return b2EdgeShape_instance->m_vertex1;
	FREObject result;
	return result;
}

 
FREObject ane_b2EdgeShape_setter_m_vertex2(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2EdgeShape* b2EdgeShape_instance = (b2EdgeShape*)(nativeData);
//	b2EdgeShape_instance->m_vertex2= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2EdgeShape_getter_m_vertex2(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2EdgeShape* b2EdgeShape_instance = (b2EdgeShape*)(nativeData);
	//return b2EdgeShape_instance->m_vertex2;
	FREObject result;
	return result;
}

 
FREObject ane_b2EdgeShape_setter_m_vertex0(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2EdgeShape* b2EdgeShape_instance = (b2EdgeShape*)(nativeData);
//	b2EdgeShape_instance->m_vertex0= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2EdgeShape_getter_m_vertex0(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2EdgeShape* b2EdgeShape_instance = (b2EdgeShape*)(nativeData);
	//return b2EdgeShape_instance->m_vertex0;
	FREObject result;
	return result;
}

 
FREObject ane_b2EdgeShape_setter_m_vertex3(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2EdgeShape* b2EdgeShape_instance = (b2EdgeShape*)(nativeData);
//	b2EdgeShape_instance->m_vertex3= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2EdgeShape_getter_m_vertex3(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2EdgeShape* b2EdgeShape_instance = (b2EdgeShape*)(nativeData);
	//return b2EdgeShape_instance->m_vertex3;
	FREObject result;
	return result;
}

 
FREObject ane_b2EdgeShape_setter_m_hasVertex0(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2EdgeShape* b2EdgeShape_instance = (b2EdgeShape*)(nativeData);
//	b2EdgeShape_instance->m_hasVertex0= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2EdgeShape_getter_m_hasVertex0(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2EdgeShape* b2EdgeShape_instance = (b2EdgeShape*)(nativeData);
	//return b2EdgeShape_instance->m_hasVertex0;
	FREObject result;
	return result;
}

 
FREObject ane_b2EdgeShape_setter_m_hasVertex3(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2EdgeShape* b2EdgeShape_instance = (b2EdgeShape*)(nativeData);
//	b2EdgeShape_instance->m_hasVertex3= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2EdgeShape_getter_m_hasVertex3(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2EdgeShape* b2EdgeShape_instance = (b2EdgeShape*)(nativeData);
	//return b2EdgeShape_instance->m_hasVertex3;
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2EDGESHAPE_H_ */
