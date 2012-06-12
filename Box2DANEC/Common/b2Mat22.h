/*================================================================================
*
* File Name: b2Mat22.h
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

#ifndef BOX2DANE_C_B2MAT22_H_
#define BOX2DANE_C_B2MAT22_H_

//Convenience functions for generating a new AS3 class instance of b2Mat22
FREResult FRENewObjectFromb2Mat22(b2Mat22* obj, FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[1];
	FREGetPointerAsString((void*)obj, &memAddress);
	constructorArguments[0] = memAddress;
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.common.b2Mat22";

	FREResult objInitResult = FRENewObject(className, 1, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2Mat22 object in function FRENewObjectFromb2Mat22");
	}

	return objInitResult;
}

FREResult FRENewb2Mat22(FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[0];
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.common.b2Mat22";

	FREResult objInitResult = FRENewObject(className, 0, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2Mat22 object in function FRENewb2Mat22");
	}

	return objInitResult;
}
//

FREObject ane_b2Mat22_constructor_b2Mat22(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Mat22* b2Mat22_instance = (b2Mat22*)(nativeData);
//	b2Mat22_instance->b2Mat22(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Mat22_callback_Set(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Mat22* b2Mat22_instance = (b2Mat22*)(nativeData);
//	b2Mat22_instance->Set(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Mat22_callback_SetIdentity(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Mat22* b2Mat22_instance = (b2Mat22*)(nativeData);
//	b2Mat22_instance->SetIdentity(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Mat22_callback_SetZero(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Mat22* b2Mat22_instance = (b2Mat22*)(nativeData);
//	b2Mat22_instance->SetZero(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Mat22_callback_GetInverse(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Mat22* b2Mat22_instance = (b2Mat22*)(nativeData);
//	b2Mat22_instance->GetInverse(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Mat22_callback_Solve(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Mat22* b2Mat22_instance = (b2Mat22*)(nativeData);
//	b2Mat22_instance->Solve(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Mat22_setter_ex(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Mat22* b2Mat22_instance = (b2Mat22*)(nativeData);
//	b2Mat22_instance->ex= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2Mat22_getter_ex(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Mat22* b2Mat22_instance = (b2Mat22*)(nativeData);
	//return b2Mat22_instance->ex;
	FREObject result;
	return result;
}

 
FREObject ane_b2Mat22_setter_ey(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Mat22* b2Mat22_instance = (b2Mat22*)(nativeData);
//	b2Mat22_instance->ey= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2Mat22_getter_ey(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Mat22* b2Mat22_instance = (b2Mat22*)(nativeData);
	//return b2Mat22_instance->ey;
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2MAT22_H_ */
