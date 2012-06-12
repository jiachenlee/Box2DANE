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

//Convenience functions for generating a new AS3 class instance of b2Vec3
FREResult FRENewObjectFromb2Vec3(b2Vec3* obj, FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[1];
	FREGetPointerAsString((void*)obj, &memAddress);
	constructorArguments[0] = memAddress;
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.common.b2Vec3";

	FREResult objInitResult = FRENewObject(className, 1, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2Vec3 object in function FRENewObjectFromb2Vec3");
	}

	return objInitResult;
}

FREResult FRENewb2Vec3(FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[0];
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.common.b2Vec3";

	FREResult objInitResult = FRENewObject(className, 0, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2Vec3 object in function FRENewb2Vec3");
	}

	return objInitResult;
}
//

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
