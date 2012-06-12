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

//Convenience functions for generating a new AS3 class instance of b2DistanceOutput
FREResult FRENewObjectFromb2DistanceOutput(b2DistanceOutput* obj, FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[1];
	FREGetPointerAsString((void*)obj, &memAddress);
	constructorArguments[0] = memAddress;
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.collision.b2DistanceOutput";

	FREResult objInitResult = FRENewObject(className, 1, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2DistanceOutput object in function FRENewObjectFromb2DistanceOutput");
	}

	return objInitResult;
}

FREResult FRENewb2DistanceOutput(FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[0];
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.collision.b2DistanceOutput";

	FREResult objInitResult = FRENewObject(className, 0, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2DistanceOutput object in function FRENewb2DistanceOutput");
	}

	return objInitResult;
}
//

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
