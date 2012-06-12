/*================================================================================
*
* File Name: b2Rot.h
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

#ifndef BOX2DANE_C_B2ROT_H_
#define BOX2DANE_C_B2ROT_H_

//Convenience functions for generating a new AS3 class instance of b2Rot
FREResult FRENewObjectFromb2Rot(b2Rot* obj, FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[1];
	FREGetPointerAsString((void*)obj, &memAddress);
	constructorArguments[0] = memAddress;
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.common.b2Rot";

	FREResult objInitResult = FRENewObject(className, 1, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2Rot object in function FRENewObjectFromb2Rot");
	}

	return objInitResult;
}

FREResult FRENewb2Rot(FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[0];
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.common.b2Rot";

	FREResult objInitResult = FRENewObject(className, 0, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2Rot object in function FRENewb2Rot");
	}

	return objInitResult;
}
//

FREObject ane_b2Rot_constructor_b2Rot(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Rot* b2Rot_instance = (b2Rot*)(nativeData);
//	b2Rot_instance->b2Rot(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Rot_callback_b2Rot(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Rot* b2Rot_instance = (b2Rot*)(nativeData);
//	b2Rot_instance->b2Rot(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Rot_callback_Set(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Rot* b2Rot_instance = (b2Rot*)(nativeData);
//	b2Rot_instance->Set(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Rot_callback_SetIdentity(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Rot* b2Rot_instance = (b2Rot*)(nativeData);
//	b2Rot_instance->SetIdentity(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Rot_callback_GetAngle(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Rot* b2Rot_instance = (b2Rot*)(nativeData);
//	b2Rot_instance->GetAngle(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Rot_callback_GetXAxis(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Rot* b2Rot_instance = (b2Rot*)(nativeData);
//	b2Rot_instance->GetXAxis(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Rot_callback_GetYAxis(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Rot* b2Rot_instance = (b2Rot*)(nativeData);
//	b2Rot_instance->GetYAxis(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Rot_setter_s(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Rot* b2Rot_instance = (b2Rot*)(nativeData);
//	b2Rot_instance->s= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2Rot_getter_s(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Rot* b2Rot_instance = (b2Rot*)(nativeData);
	//return b2Rot_instance->s;
	FREObject result;
	return result;
}

 
FREObject ane_b2Rot_setter_c(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Rot* b2Rot_instance = (b2Rot*)(nativeData);
//	b2Rot_instance->c= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2Rot_getter_c(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Rot* b2Rot_instance = (b2Rot*)(nativeData);
	//return b2Rot_instance->c;
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2ROT_H_ */
