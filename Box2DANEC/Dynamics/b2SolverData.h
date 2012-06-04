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
