/*================================================================================
*
* File Name: b2ContactSolverDef.h
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

#ifndef BOX2DANE_C_B2CONTACTSOLVERDEF_H_
#define BOX2DANE_C_B2CONTACTSOLVERDEF_H_

//Convenience functions for generating a new AS3 class instance of b2ContactSolverDef
FREResult FRENewObjectFromb2ContactSolverDef(b2ContactSolverDef* obj, FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[1];
	FREGetPointerAsString((void*)obj, &memAddress);
	constructorArguments[0] = memAddress;
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.dynamics.contacts.b2ContactSolverDef";

	FREResult objInitResult = FRENewObject(className, 1, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2ContactSolverDef object in function FRENewObjectFromb2ContactSolverDef");
	}

	return objInitResult;
}

FREResult FRENewb2ContactSolverDef(FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[0];
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.dynamics.contacts.b2ContactSolverDef";

	FREResult objInitResult = FRENewObject(className, 0, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2ContactSolverDef object in function FRENewb2ContactSolverDef");
	}

	return objInitResult;
}
//

FREObject ane_b2ContactSolverDef_setter_step(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactSolverDef* b2ContactSolverDef_instance = (b2ContactSolverDef*)(nativeData);
//	b2ContactSolverDef_instance->step= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactSolverDef_getter_step(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactSolverDef* b2ContactSolverDef_instance = (b2ContactSolverDef*)(nativeData);
	//return b2ContactSolverDef_instance->step;
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactSolverDef_setter_contacts(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactSolverDef* b2ContactSolverDef_instance = (b2ContactSolverDef*)(nativeData);
//	b2ContactSolverDef_instance->contacts= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactSolverDef_getter_contacts(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactSolverDef* b2ContactSolverDef_instance = (b2ContactSolverDef*)(nativeData);
	//return b2ContactSolverDef_instance->contacts;
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactSolverDef_setter_count(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactSolverDef* b2ContactSolverDef_instance = (b2ContactSolverDef*)(nativeData);
//	b2ContactSolverDef_instance->count= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactSolverDef_getter_count(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactSolverDef* b2ContactSolverDef_instance = (b2ContactSolverDef*)(nativeData);
	//return b2ContactSolverDef_instance->count;
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactSolverDef_setter_positions(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactSolverDef* b2ContactSolverDef_instance = (b2ContactSolverDef*)(nativeData);
//	b2ContactSolverDef_instance->positions= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactSolverDef_getter_positions(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactSolverDef* b2ContactSolverDef_instance = (b2ContactSolverDef*)(nativeData);
	//return b2ContactSolverDef_instance->positions;
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactSolverDef_setter_velocities(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactSolverDef* b2ContactSolverDef_instance = (b2ContactSolverDef*)(nativeData);
//	b2ContactSolverDef_instance->velocities= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactSolverDef_getter_velocities(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactSolverDef* b2ContactSolverDef_instance = (b2ContactSolverDef*)(nativeData);
	//return b2ContactSolverDef_instance->velocities;
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactSolverDef_setter_allocator(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactSolverDef* b2ContactSolverDef_instance = (b2ContactSolverDef*)(nativeData);
//	b2ContactSolverDef_instance->allocator= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactSolverDef_getter_allocator(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactSolverDef* b2ContactSolverDef_instance = (b2ContactSolverDef*)(nativeData);
	//return b2ContactSolverDef_instance->allocator;
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2CONTACTSOLVERDEF_H_ */
