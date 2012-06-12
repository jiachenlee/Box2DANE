/*================================================================================
*
* File Name: b2ContactFeature.h
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

#ifndef BOX2DANE_C_B2CONTACTFEATURE_H_
#define BOX2DANE_C_B2CONTACTFEATURE_H_

//Convenience functions for generating a new AS3 class instance of b2ContactFeature
FREResult FRENewObjectFromb2ContactFeature(b2ContactFeature* obj, FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[1];
	FREGetPointerAsString((void*)obj, &memAddress);
	constructorArguments[0] = memAddress;
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.collision.b2ContactFeature";

	FREResult objInitResult = FRENewObject(className, 1, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2ContactFeature object in function FRENewObjectFromb2ContactFeature");
	}

	return objInitResult;
}

FREResult FRENewb2ContactFeature(FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[0];
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.collision.b2ContactFeature";

	FREResult objInitResult = FRENewObject(className, 0, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2ContactFeature object in function FRENewb2ContactFeature");
	}

	return objInitResult;
}
//

FREObject ane_b2ContactFeature_setter_indexA(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactFeature* b2ContactFeature_instance = (b2ContactFeature*)(nativeData);

	//We expect 1 argument here
	if(argc == 1) {
		FREObject value;
		FREResult valResult;
		uint32_t uintVal;
		valResult = FREGetObjectAsUint32(argv[0], &uintVal);

		if(valResult != FRE_OK) {
			FREError("Error creating uint object in function ane_b2ContactFeature_setter_indexA");
		}

		b2ContactFeature_instance->indexA = (uint8)uintVal;
	}else{
		FREError("Error: Did not recieve correct number of arguments in function ane_b2ContactFeature_setter_indexA");
	}
	//

	FREObject result;
	return result;
}

 
FREObject ane_b2ContactFeature_getter_indexA(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactFeature* b2ContactFeature_instance = (b2ContactFeature*)(nativeData);

	FREObject indexA;
	unsigned int indA = (unsigned int)b2ContactFeature_instance->indexA;

	FRENewObjectFromUint32(indA, &indexA);

	return indexA;
}

 
FREObject ane_b2ContactFeature_setter_indexB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactFeature* b2ContactFeature_instance = (b2ContactFeature*)(nativeData);

	//We expect 1 argument here
	if(argc == 1) {
		FREObject value;
		FREResult valResult;
		uint32_t uintVal;
		valResult = FREGetObjectAsUint32(argv[0], &uintVal);

		if(valResult != FRE_OK) {
			FREError("Error creating uint object in function ane_b2ContactFeature_setter_indexB");
		}

		b2ContactFeature_instance->indexB = (uint8)uintVal;
	}else{
		FREError("Error: Did not recieve correct number of arguments in function ane_b2ContactFeature_setter_indexB");
	}
	//

	FREObject result;
	return result;
}

 
FREObject ane_b2ContactFeature_getter_indexB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactFeature* b2ContactFeature_instance = (b2ContactFeature*)(nativeData);

	FREObject indexB;
	unsigned int indB = (unsigned int)b2ContactFeature_instance->indexB;

	FRENewObjectFromUint32(indB, &indexB);

	return indexB;
}

 
FREObject ane_b2ContactFeature_setter_typeA(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactFeature* b2ContactFeature_instance = (b2ContactFeature*)(nativeData);

	//We expect 1 argument here
	if(argc == 1) {
		FREObject value;
		FREResult valResult;
		uint32_t uintVal;
		valResult = FREGetObjectAsUint32(argv[0], &uintVal);

		if(valResult != FRE_OK) {
			FREError("Error creating uint object in function ane_b2ContactFeature_setter_typeA");
		}

		b2ContactFeature_instance->typeA = (uint8)uintVal;
	}else{
		FREError("Error: Did not recieve correct number of arguments in function ane_b2ContactFeature_setter_typeA");
	}
	//

	FREObject result;
	return result;
}

 
FREObject ane_b2ContactFeature_getter_typeA(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactFeature* b2ContactFeature_instance = (b2ContactFeature*)(nativeData);

	FREObject typeA;
	unsigned int tA = (unsigned int)b2ContactFeature_instance->typeA;

	FRENewObjectFromUint32(tA, &typeA);

	return typeA;
}

 
FREObject ane_b2ContactFeature_setter_typeB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactFeature* b2ContactFeature_instance = (b2ContactFeature*)(nativeData);

	//We expect 1 argument here
	if(argc == 1) {
		FREObject value;
		FREResult valResult;
		uint32_t uintVal;
		valResult = FREGetObjectAsUint32(argv[0], &uintVal);

		if(valResult != FRE_OK) {
			FREError("Error creating uint object in function ane_b2ContactFeature_setter_typeB");
		}

		b2ContactFeature_instance->typeB = (uint8)uintVal;
	}else{
		FREError("Error: Did not recieve correct number of arguments in function ane_b2ContactFeature_setter_typeB");
	}
	//

	FREObject result;
	return result;
}

 
FREObject ane_b2ContactFeature_getter_typeB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactFeature* b2ContactFeature_instance = (b2ContactFeature*)(nativeData);

	FREObject typeB;
	unsigned int tB = (unsigned int)b2ContactFeature_instance->typeB;

	FRENewObjectFromUint32(tB, &typeB);

	return typeB;
}

 
#endif /* BOX2DANE_C_B2CONTACTFEATURE_H_ */
