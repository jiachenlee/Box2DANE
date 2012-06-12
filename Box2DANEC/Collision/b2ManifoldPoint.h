/*================================================================================
*
* File Name: b2ManifoldPoint.h
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

#ifndef BOX2DANE_C_B2MANIFOLDPOINT_H_
#define BOX2DANE_C_B2MANIFOLDPOINT_H_

//Convenience functions for generating a new AS3 class instance of b2ManifoldPoint
FREResult FRENewObjectFromb2ManifoldPoint(b2ManifoldPoint* obj, FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[1];
	FREGetPointerAsString((void*)obj, &memAddress);
	constructorArguments[0] = memAddress;
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.collision.b2ManifoldPoint";

	FREResult objInitResult = FRENewObject(className, 1, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2ManifoldPoint object in function FRENewObjectFromb2ManifoldPoint");
	}

	return objInitResult;
}

FREResult FRENewb2ManifoldPoint(FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[0];
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.collision.b2ManifoldPoint";

	FREResult objInitResult = FRENewObject(className, 0, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2ManifoldPoint object in function FRENewb2ManifoldPoint");
	}

	return objInitResult;
}
//

FREObject ane_b2ManifoldPoint_setter_localPoint(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ManifoldPoint* b2ManifoldPoint_instance = (b2ManifoldPoint*)(nativeData);
//	b2ManifoldPoint_instance->localPoint= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2ManifoldPoint_getter_localPoint(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ManifoldPoint* b2ManifoldPoint_instance = (b2ManifoldPoint*)(nativeData);
	//return b2ManifoldPoint_instance->localPoint;
	FREObject result;
	return result;
}

 
FREObject ane_b2ManifoldPoint_setter_normalImpulse(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ManifoldPoint* b2ManifoldPoint_instance = (b2ManifoldPoint*)(nativeData);
//	b2ManifoldPoint_instance->normalImpulse= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2ManifoldPoint_getter_normalImpulse(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ManifoldPoint* b2ManifoldPoint_instance = (b2ManifoldPoint*)(nativeData);
	//return b2ManifoldPoint_instance->normalImpulse;
	FREObject result;
	return result;
}

 
FREObject ane_b2ManifoldPoint_setter_tangentImpulse(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ManifoldPoint* b2ManifoldPoint_instance = (b2ManifoldPoint*)(nativeData);
//	b2ManifoldPoint_instance->tangentImpulse= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2ManifoldPoint_getter_tangentImpulse(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ManifoldPoint* b2ManifoldPoint_instance = (b2ManifoldPoint*)(nativeData);
	//return b2ManifoldPoint_instance->tangentImpulse;
	FREObject result;
	return result;
}

 
FREObject ane_b2ManifoldPoint_setter_id(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ManifoldPoint* b2ManifoldPoint_instance = (b2ManifoldPoint*)(nativeData);
//	b2ManifoldPoint_instance->id= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2ManifoldPoint_getter_id(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ManifoldPoint* b2ManifoldPoint_instance = (b2ManifoldPoint*)(nativeData);
	//return b2ManifoldPoint_instance->id;
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2MANIFOLDPOINT_H_ */
