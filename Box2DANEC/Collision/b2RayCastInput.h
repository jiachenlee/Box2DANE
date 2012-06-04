/*================================================================================
*
* File Name: b2RayCastInput.h
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

#ifndef BOX2DANE_C_B2RAYCASTINPUT_H_
#define BOX2DANE_C_B2RAYCASTINPUT_H_




FREObject ane_b2RayCastInput_setter_p1(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RayCastInput* b2RayCastInput_instance = (b2RayCastInput*)(nativeData);
//	b2RayCastInput_instance->p1= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2RayCastInput_getter_p1(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RayCastInput* b2RayCastInput_instance = (b2RayCastInput*)(nativeData);
	//return b2RayCastInput_instance->p1;
	FREObject result;
	return result;
}

 
FREObject ane_b2RayCastInput_setter_p2(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RayCastInput* b2RayCastInput_instance = (b2RayCastInput*)(nativeData);
//	b2RayCastInput_instance->p2= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2RayCastInput_getter_p2(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RayCastInput* b2RayCastInput_instance = (b2RayCastInput*)(nativeData);
	//return b2RayCastInput_instance->p2;
	FREObject result;
	return result;
}

 
FREObject ane_b2RayCastInput_setter_maxFraction(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RayCastInput* b2RayCastInput_instance = (b2RayCastInput*)(nativeData);
//	b2RayCastInput_instance->maxFraction= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2RayCastInput_getter_maxFraction(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RayCastInput* b2RayCastInput_instance = (b2RayCastInput*)(nativeData);
	//return b2RayCastInput_instance->maxFraction;
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2RAYCASTINPUT_H_ */
