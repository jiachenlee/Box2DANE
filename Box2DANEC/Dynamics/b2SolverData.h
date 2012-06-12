/*================================================================================
*
* File Name: b2SolverData.h
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

#ifndef BOX2DANE_C_B2SOLVERDATA_H_
#define BOX2DANE_C_B2SOLVERDATA_H_

//Convenience functions for generating a new AS3 class instance of b2SolverData
FREResult FRENewObjectFromb2SolverData(b2SolverData* obj, FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[1];
	FREGetPointerAsString((void*)obj, &memAddress);
	constructorArguments[0] = memAddress;
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.dynamics.b2SolverData";

	FREResult objInitResult = FRENewObject(className, 1, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2SolverData object in function FRENewObjectFromb2SolverData");
	}

	return objInitResult;
}

FREResult FRENewb2SolverData(FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[0];
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.dynamics.b2SolverData";

	FREResult objInitResult = FRENewObject(className, 0, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2SolverData object in function FRENewb2SolverData");
	}

	return objInitResult;
}
//

FREObject ane_b2SolverData_setter_step(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2SolverData* b2SolverData_instance = (b2SolverData*)(nativeData);
//	b2SolverData_instance->step= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2SolverData_getter_step(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2SolverData* b2SolverData_instance = (b2SolverData*)(nativeData);
	//return b2SolverData_instance->step;
	FREObject result;
	return result;
}

 
FREObject ane_b2SolverData_setter_positions(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2SolverData* b2SolverData_instance = (b2SolverData*)(nativeData);
//	b2SolverData_instance->positions= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2SolverData_getter_positions(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2SolverData* b2SolverData_instance = (b2SolverData*)(nativeData);
	//return b2SolverData_instance->positions;
	FREObject result;
	return result;
}

 
FREObject ane_b2SolverData_setter_velocities(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2SolverData* b2SolverData_instance = (b2SolverData*)(nativeData);
//	b2SolverData_instance->velocities= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2SolverData_getter_velocities(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2SolverData* b2SolverData_instance = (b2SolverData*)(nativeData);
	//return b2SolverData_instance->velocities;
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2SOLVERDATA_H_ */
