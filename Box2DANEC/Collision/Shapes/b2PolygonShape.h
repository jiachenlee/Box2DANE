/*================================================================================
*
* File Name: b2PolygonShape.h
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

#ifndef BOX2DANE_C_B2POLYGONSHAPE_H_
#define BOX2DANE_C_B2POLYGONSHAPE_H_

//Convenience functions for generating a new AS3 class instance of b2PolygonShape
FREResult FRENewObjectFromb2PolygonShape(b2PolygonShape* obj, FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[1];
	FREGetPointerAsString((void*)obj, &memAddress);
	constructorArguments[0] = memAddress;
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.collision.shapes.b2PolygonShape";

	FREResult objInitResult = FRENewObject(className, 1, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2PolygonShape object in function FRENewObjectFromb2PolygonShape");
	}

	return objInitResult;
}

FREResult FRENewb2PolygonShape(FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[0];
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.collision.shapes.b2PolygonShape";

	FREResult objInitResult = FRENewObject(className, 0, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2PolygonShape object in function FRENewb2PolygonShape");
	}

	return objInitResult;
}
//

FREObject ane_b2PolygonShape_constructor_b2PolygonShape(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2PolygonShape* b2PolygonShape_instance = (b2PolygonShape*)(nativeData);
//	b2PolygonShape_instance->b2PolygonShape(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2PolygonShape_callback_Clone(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2PolygonShape* b2PolygonShape_instance = (b2PolygonShape*)(nativeData);
//	b2PolygonShape_instance->Clone(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2PolygonShape_callback_GetChildCount(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2PolygonShape* b2PolygonShape_instance = (b2PolygonShape*)(nativeData);
//	b2PolygonShape_instance->GetChildCount(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2PolygonShape_callback_Set(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2PolygonShape* b2PolygonShape_instance = (b2PolygonShape*)(nativeData);
//	b2PolygonShape_instance->Set(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2PolygonShape_callback_SetAsBox(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2PolygonShape* b2PolygonShape_instance = (b2PolygonShape*)(nativeData);
//	b2PolygonShape_instance->SetAsBox(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2PolygonShape_callback_TestPoint(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2PolygonShape* b2PolygonShape_instance = (b2PolygonShape*)(nativeData);
//	b2PolygonShape_instance->TestPoint(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2PolygonShape_callback_RayCast(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2PolygonShape* b2PolygonShape_instance = (b2PolygonShape*)(nativeData);
//	b2PolygonShape_instance->RayCast(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2PolygonShape_callback_ComputeAABB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2PolygonShape* b2PolygonShape_instance = (b2PolygonShape*)(nativeData);
//	b2PolygonShape_instance->ComputeAABB(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2PolygonShape_callback_ComputeMass(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2PolygonShape* b2PolygonShape_instance = (b2PolygonShape*)(nativeData);
//	b2PolygonShape_instance->ComputeMass(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2PolygonShape_callback_GetVertexCount(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2PolygonShape* b2PolygonShape_instance = (b2PolygonShape*)(nativeData);
//	b2PolygonShape_instance->GetVertexCount(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2PolygonShape_callback_GetVertex(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2PolygonShape* b2PolygonShape_instance = (b2PolygonShape*)(nativeData);
//	b2PolygonShape_instance->GetVertex(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2PolygonShape_callback_Validate(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2PolygonShape* b2PolygonShape_instance = (b2PolygonShape*)(nativeData);
//	b2PolygonShape_instance->Validate(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2PolygonShape_setter_m_centroid(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2PolygonShape* b2PolygonShape_instance = (b2PolygonShape*)(nativeData);
//	b2PolygonShape_instance->m_centroid= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2PolygonShape_getter_m_centroid(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2PolygonShape* b2PolygonShape_instance = (b2PolygonShape*)(nativeData);
	//return b2PolygonShape_instance->m_centroid;
	FREObject result;
	return result;
}

 
FREObject ane_b2PolygonShape_setter_m_count(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2PolygonShape* b2PolygonShape_instance = (b2PolygonShape*)(nativeData);
//	b2PolygonShape_instance->m_count= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2PolygonShape_getter_m_count(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2PolygonShape* b2PolygonShape_instance = (b2PolygonShape*)(nativeData);
	//return b2PolygonShape_instance->m_count;
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2POLYGONSHAPE_H_ */
