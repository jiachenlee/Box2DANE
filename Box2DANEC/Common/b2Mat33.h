/*================================================================================
*
* File Name: b2Mat33.h
* Created on: Mon May 7 22:46:25 GMT-0400 2012
* Copyright (�) 2012 Jesse Nicholson. All Rights Reserved.
* 
*
*                       ***** BEGIN LICENSE BLOCK *****
* This Source Code Form is subject to the terms of the Mozilla Public
* License, v. 2.0. If a copy of the MPL was not distributed with this file,
* You can obtain one at http://mozilla.org/MPL/2.0/.
*                       ***** END  LICENSE  BLOCK *****
*===============================================================================*/

#ifndef BOX2DANE_C_B2MAT33_H_
#define BOX2DANE_C_B2MAT33_H_

//Convenience functions for generating a new AS3 class instance of b2Mat33
FREResult FRENewObjectFromb2Mat33(b2Mat33* obj, FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[1];
	FREGetPointerAsString((void*)obj, &memAddress);
	constructorArguments[0] = memAddress;
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.common.b2Mat33";

	FREResult objInitResult = FRENewObject(className, 1, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2Mat33 object in function FRENewObjectFromb2Mat33");
	}

	return objInitResult;
}

FREResult FRENewb2Mat33(FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[0];
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.common.b2Mat33";

	FREResult objInitResult = FRENewObject(className, 0, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2Mat33 object in function FRENewb2Mat33");
	}

	return objInitResult;
}
//

FREObject ane_b2Mat33_constructor_b2Mat33(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Mat33* b2Mat33_instance = (b2Mat33*)(nativeData);
//	b2Mat33_instance->b2Mat33(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Mat33_callback_SetZero(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Mat33* b2Mat33_instance = (b2Mat33*)(nativeData);
//	b2Mat33_instance->SetZero(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Mat33_callback_Solve33(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Mat33* b2Mat33_instance = (b2Mat33*)(nativeData);
//	b2Mat33_instance->Solve33(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Mat33_callback_Solve22(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Mat33* b2Mat33_instance = (b2Mat33*)(nativeData);
//	b2Mat33_instance->Solve22(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Mat33_callback_GetInverse22(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Mat33* b2Mat33_instance = (b2Mat33*)(nativeData);
//	b2Mat33_instance->GetInverse22(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Mat33_callback_GetSymInverse33(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Mat33* b2Mat33_instance = (b2Mat33*)(nativeData);
//	b2Mat33_instance->GetSymInverse33(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Mat33_setter_ex(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Mat33* b2Mat33_instance = (b2Mat33*)(nativeData);
//	b2Mat33_instance->ex= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2Mat33_getter_ex(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Mat33* b2Mat33_instance = (b2Mat33*)(nativeData);
	//return b2Mat33_instance->ex;
	FREObject result;
	return result;
}

 
FREObject ane_b2Mat33_setter_ey(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Mat33* b2Mat33_instance = (b2Mat33*)(nativeData);
//	b2Mat33_instance->ey= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2Mat33_getter_ey(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Mat33* b2Mat33_instance = (b2Mat33*)(nativeData);
	//return b2Mat33_instance->ey;
	FREObject result;
	return result;
}

 
FREObject ane_b2Mat33_setter_ez(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Mat33* b2Mat33_instance = (b2Mat33*)(nativeData);
//	b2Mat33_instance->ez= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2Mat33_getter_ez(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Mat33* b2Mat33_instance = (b2Mat33*)(nativeData);
	//return b2Mat33_instance->ez;
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2MAT33_H_ */
