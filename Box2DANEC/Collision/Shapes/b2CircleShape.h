/*================================================================================
*
* File Name: b2CircleShape.h
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

#ifndef BOX2DANE_C_B2CIRCLESHAPE_H_
#define BOX2DANE_C_B2CIRCLESHAPE_H_

//Convenience functions for generating a new AS3 class instance of b2CircleShape
FREResult FRENewObjectFromb2CircleShape(b2CircleShape* obj, FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[1];
	FREGetPointerAsString((void*)obj, &memAddress);
	constructorArguments[0] = memAddress;
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.collision.shapes.b2CircleShape";

	FREResult objInitResult = FRENewObject(className, 1, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2CircleShape object in function FRENewObjectFromb2CircleShape");
	}

	return objInitResult;
}

FREResult FRENewb2CircleShape(FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[0];
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.collision.shapes.b2CircleShape";

	FREResult objInitResult = FRENewObject(className, 0, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2CircleShape object in function FRENewb2CircleShape");
	}

	return objInitResult;
}
//


FREObject ane_b2CircleShape_constructor_b2CircleShape(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2CircleShape* b2CircleShape_instance = (b2CircleShape*)(nativeData);
//	b2CircleShape_instance->b2CircleShape(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2CircleShape_callback_Clone(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2CircleShape* b2CircleShape_instance = (b2CircleShape*)(nativeData);
//	b2CircleShape_instance->Clone(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2CircleShape_callback_GetChildCount(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2CircleShape* b2CircleShape_instance = (b2CircleShape*)(nativeData);
//	b2CircleShape_instance->GetChildCount(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2CircleShape_callback_TestPoint(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2CircleShape* b2CircleShape_instance = (b2CircleShape*)(nativeData);
//	b2CircleShape_instance->TestPoint(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2CircleShape_callback_RayCast(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2CircleShape* b2CircleShape_instance = (b2CircleShape*)(nativeData);
//	b2CircleShape_instance->RayCast(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2CircleShape_callback_ComputeAABB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2CircleShape* b2CircleShape_instance = (b2CircleShape*)(nativeData);
//	b2CircleShape_instance->ComputeAABB(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2CircleShape_callback_ComputeMass(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2CircleShape* b2CircleShape_instance = (b2CircleShape*)(nativeData);
//	b2CircleShape_instance->ComputeMass(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2CircleShape_callback_GetSupport(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2CircleShape* b2CircleShape_instance = (b2CircleShape*)(nativeData);
//	b2CircleShape_instance->GetSupport(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2CircleShape_callback_GetSupportVertex(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2CircleShape* b2CircleShape_instance = (b2CircleShape*)(nativeData);
//	b2CircleShape_instance->GetSupportVertex(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2CircleShape_callback_GetVertexCount(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2CircleShape* b2CircleShape_instance = (b2CircleShape*)(nativeData);
//	b2CircleShape_instance->GetVertexCount(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2CircleShape_callback_GetVertex(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2CircleShape* b2CircleShape_instance = (b2CircleShape*)(nativeData);
//	b2CircleShape_instance->GetVertex(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2CircleShape_setter_m_p(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2CircleShape* b2CircleShape_instance = (b2CircleShape*)(nativeData);
//	b2CircleShape_instance->m_p= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2CircleShape_getter_m_p(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2CircleShape* b2CircleShape_instance = (b2CircleShape*)(nativeData);
	//return b2CircleShape_instance->m_p;
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2CIRCLESHAPE_H_ */
