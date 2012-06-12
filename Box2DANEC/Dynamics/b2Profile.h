/*================================================================================
*
* File Name: b2Profile.h
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

#ifndef BOX2DANE_C_B2PROFILE_H_
#define BOX2DANE_C_B2PROFILE_H_

//Convenience functions for generating a new AS3 class instance of b2Profile
FREResult FRENewObjectFromb2Profile(b2Profile* obj, FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[1];
	FREGetPointerAsString((void*)obj, &memAddress);
	constructorArguments[0] = memAddress;
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.dynamics.b2Profile";

	FREResult objInitResult = FRENewObject(className, 1, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2Profile object in function FRENewObjectFromb2Profile");
	}

	return objInitResult;
}

FREResult FRENewb2Profile(FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[0];
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.dynamics.b2Profile";

	FREResult objInitResult = FRENewObject(className, 0, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2Profile object in function FRENewb2Profile");
	}

	return objInitResult;
}
//

FREObject ane_b2Profile_setter_step(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Profile* b2Profile_instance = (b2Profile*)(nativeData);
//	b2Profile_instance->step= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2Profile_getter_step(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Profile* b2Profile_instance = (b2Profile*)(nativeData);
	//return b2Profile_instance->step;
	FREObject result;
	return result;
}

 
FREObject ane_b2Profile_setter_collide(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Profile* b2Profile_instance = (b2Profile*)(nativeData);
//	b2Profile_instance->collide= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2Profile_getter_collide(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Profile* b2Profile_instance = (b2Profile*)(nativeData);
	//return b2Profile_instance->collide;
	FREObject result;
	return result;
}

 
FREObject ane_b2Profile_setter_solve(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Profile* b2Profile_instance = (b2Profile*)(nativeData);
//	b2Profile_instance->solve= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2Profile_getter_solve(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Profile* b2Profile_instance = (b2Profile*)(nativeData);
	//return b2Profile_instance->solve;
	FREObject result;
	return result;
}

 
FREObject ane_b2Profile_setter_solveInit(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Profile* b2Profile_instance = (b2Profile*)(nativeData);
//	b2Profile_instance->solveInit= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2Profile_getter_solveInit(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Profile* b2Profile_instance = (b2Profile*)(nativeData);
	//return b2Profile_instance->solveInit;
	FREObject result;
	return result;
}

 
FREObject ane_b2Profile_setter_solveVelocity(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Profile* b2Profile_instance = (b2Profile*)(nativeData);
//	b2Profile_instance->solveVelocity= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2Profile_getter_solveVelocity(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Profile* b2Profile_instance = (b2Profile*)(nativeData);
	//return b2Profile_instance->solveVelocity;
	FREObject result;
	return result;
}

 
FREObject ane_b2Profile_setter_solvePosition(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Profile* b2Profile_instance = (b2Profile*)(nativeData);
//	b2Profile_instance->solvePosition= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2Profile_getter_solvePosition(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Profile* b2Profile_instance = (b2Profile*)(nativeData);
	//return b2Profile_instance->solvePosition;
	FREObject result;
	return result;
}

 
FREObject ane_b2Profile_setter_broadphase(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Profile* b2Profile_instance = (b2Profile*)(nativeData);
//	b2Profile_instance->broadphase= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2Profile_getter_broadphase(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Profile* b2Profile_instance = (b2Profile*)(nativeData);
	//return b2Profile_instance->broadphase;
	FREObject result;
	return result;
}

 
FREObject ane_b2Profile_setter_solveTOI(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Profile* b2Profile_instance = (b2Profile*)(nativeData);
//	b2Profile_instance->solveTOI= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2Profile_getter_solveTOI(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Profile* b2Profile_instance = (b2Profile*)(nativeData);
	//return b2Profile_instance->solveTOI;
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2PROFILE_H_ */
