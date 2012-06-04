/*================================================================================
*
* File Name: b2TimeStep.h
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

#ifndef BOX2DANE_C_B2TIMESTEP_H_
#define BOX2DANE_C_B2TIMESTEP_H_




FREObject ane_b2TimeStep_setter_dt(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2TimeStep* b2TimeStep_instance = (b2TimeStep*)(nativeData);
//	b2TimeStep_instance->dt= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2TimeStep_getter_dt(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2TimeStep* b2TimeStep_instance = (b2TimeStep*)(nativeData);
	//return b2TimeStep_instance->dt;
	FREObject result;
	return result;
}

 
FREObject ane_b2TimeStep_setter_inv_dt(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2TimeStep* b2TimeStep_instance = (b2TimeStep*)(nativeData);
//	b2TimeStep_instance->inv_dt= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2TimeStep_getter_inv_dt(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2TimeStep* b2TimeStep_instance = (b2TimeStep*)(nativeData);
	//return b2TimeStep_instance->inv_dt;
	FREObject result;
	return result;
}

 
FREObject ane_b2TimeStep_setter_dtRatio(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2TimeStep* b2TimeStep_instance = (b2TimeStep*)(nativeData);
//	b2TimeStep_instance->dtRatio= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2TimeStep_getter_dtRatio(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2TimeStep* b2TimeStep_instance = (b2TimeStep*)(nativeData);
	//return b2TimeStep_instance->dtRatio;
	FREObject result;
	return result;
}

 
FREObject ane_b2TimeStep_setter_velocityIterations(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2TimeStep* b2TimeStep_instance = (b2TimeStep*)(nativeData);
//	b2TimeStep_instance->velocityIterations= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2TimeStep_getter_velocityIterations(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2TimeStep* b2TimeStep_instance = (b2TimeStep*)(nativeData);
	//return b2TimeStep_instance->velocityIterations;
	FREObject result;
	return result;
}

 
FREObject ane_b2TimeStep_setter_positionIterations(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2TimeStep* b2TimeStep_instance = (b2TimeStep*)(nativeData);
//	b2TimeStep_instance->positionIterations= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2TimeStep_getter_positionIterations(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2TimeStep* b2TimeStep_instance = (b2TimeStep*)(nativeData);
	//return b2TimeStep_instance->positionIterations;
	FREObject result;
	return result;
}

 
FREObject ane_b2TimeStep_setter_warmStarting(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2TimeStep* b2TimeStep_instance = (b2TimeStep*)(nativeData);
//	b2TimeStep_instance->warmStarting= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2TimeStep_getter_warmStarting(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2TimeStep* b2TimeStep_instance = (b2TimeStep*)(nativeData);
	//return b2TimeStep_instance->warmStarting;
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2TIMESTEP_H_ */
