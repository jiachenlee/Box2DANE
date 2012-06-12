/*================================================================================
*
* File Name: b2Version.h
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

#ifndef BOX2DANE_C_B2VERSION_H_
#define BOX2DANE_C_B2VERSION_H_

//Convenience functions for generating a new AS3 class instance of b2Version
FREResult FRENewObjectFromb2Version(b2Version* obj, FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[1];
	FREGetPointerAsString((void*)obj, &memAddress);
	constructorArguments[0] = memAddress;
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.common.b2Version";

	FREResult objInitResult = FRENewObject(className, 1, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2Version object in function FRENewObjectFromb2Version");
	}

	return objInitResult;
}

FREResult FRENewb2Version(FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[0];
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.common.b2Version";

	FREResult objInitResult = FRENewObject(className, 0, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2Version object in function FRENewb2Version");
	}

	return objInitResult;
}
//

FREObject ane_b2Version_setter_major(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Version* b2Version_instance = (b2Version*)(nativeData);
//	b2Version_instance->major= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2Version_getter_major(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Version* b2Version_instance = (b2Version*)(nativeData);
	//return b2Version_instance->major;
	FREObject result;
	return result;
}

 
FREObject ane_b2Version_setter_minor(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Version* b2Version_instance = (b2Version*)(nativeData);
//	b2Version_instance->minor= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2Version_getter_minor(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Version* b2Version_instance = (b2Version*)(nativeData);
	//return b2Version_instance->minor;
	FREObject result;
	return result;
}

 
FREObject ane_b2Version_setter_revision(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Version* b2Version_instance = (b2Version*)(nativeData);
//	b2Version_instance->revision= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2Version_getter_revision(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Version* b2Version_instance = (b2Version*)(nativeData);
	//return b2Version_instance->revision;
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2VERSION_H_ */
