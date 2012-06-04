/*================================================================================
*
* File Name: b2DistanceOutput.h
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

#ifndef BOX2DANE_C_B2DISTANCEOUTPUT_H_
#define BOX2DANE_C_B2DISTANCEOUTPUT_H_




FREObject ane_b2DistanceOutput_setter_pointA(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2DistanceOutput* b2DistanceOutput_instance = (b2DistanceOutput*)(nativeData);
//	b2DistanceOutput_instance->pointA= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2DistanceOutput_getter_pointA(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2DistanceOutput* b2DistanceOutput_instance = (b2DistanceOutput*)(nativeData);
	//return b2DistanceOutput_instance->pointA;
	FREObject result;
	return result;
}

 
FREObject ane_b2DistanceOutput_setter_pointB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2DistanceOutput* b2DistanceOutput_instance = (b2DistanceOutput*)(nativeData);
//	b2DistanceOutput_instance->pointB= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2DistanceOutput_getter_pointB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2DistanceOutput* b2DistanceOutput_instance = (b2DistanceOutput*)(nativeData);
	//return b2DistanceOutput_instance->pointB;
	FREObject result;
	return result;
}

 
FREObject ane_b2DistanceOutput_setter_distance(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2DistanceOutput* b2DistanceOutput_instance = (b2DistanceOutput*)(nativeData);
//	b2DistanceOutput_instance->distance= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2DistanceOutput_getter_distance(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2DistanceOutput* b2DistanceOutput_instance = (b2DistanceOutput*)(nativeData);
	//return b2DistanceOutput_instance->distance;
	FREObject result;
	return result;
}

 
FREObject ane_b2DistanceOutput_setter_iterations(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2DistanceOutput* b2DistanceOutput_instance = (b2DistanceOutput*)(nativeData);
//	b2DistanceOutput_instance->iterations= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2DistanceOutput_getter_iterations(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2DistanceOutput* b2DistanceOutput_instance = (b2DistanceOutput*)(nativeData);
	//return b2DistanceOutput_instance->iterations;
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2DISTANCEOUTPUT_H_ */
