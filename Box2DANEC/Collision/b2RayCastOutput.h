/*================================================================================
*
* File Name: b2RayCastOutput.h
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

#ifndef BOX2DANE_C_B2RAYCASTOUTPUT_H_
#define BOX2DANE_C_B2RAYCASTOUTPUT_H_




FREObject ane_b2RayCastOutput_setter_normal(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RayCastOutput* b2RayCastOutput_instance = (b2RayCastOutput*)(nativeData);
//	b2RayCastOutput_instance->normal= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2RayCastOutput_getter_normal(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RayCastOutput* b2RayCastOutput_instance = (b2RayCastOutput*)(nativeData);
	//return b2RayCastOutput_instance->normal;
	FREObject result;
	return result;
}

 
FREObject ane_b2RayCastOutput_setter_fraction(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RayCastOutput* b2RayCastOutput_instance = (b2RayCastOutput*)(nativeData);
//	b2RayCastOutput_instance->fraction= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2RayCastOutput_getter_fraction(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RayCastOutput* b2RayCastOutput_instance = (b2RayCastOutput*)(nativeData);
	//return b2RayCastOutput_instance->fraction;
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2RAYCASTOUTPUT_H_ */
