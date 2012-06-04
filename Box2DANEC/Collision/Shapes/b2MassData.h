/*================================================================================
*
* File Name: b2MassData.h
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

#ifndef BOX2DANE_C_B2MASSDATA_H_
#define BOX2DANE_C_B2MASSDATA_H_




FREObject ane_b2MassData_setter_mass(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2MassData* b2MassData_instance = (b2MassData*)(nativeData);
//	b2MassData_instance->mass= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2MassData_getter_mass(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2MassData* b2MassData_instance = (b2MassData*)(nativeData);
	//return b2MassData_instance->mass;
	FREObject result;
	return result;
}

 
FREObject ane_b2MassData_setter_center(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2MassData* b2MassData_instance = (b2MassData*)(nativeData);
//	b2MassData_instance->center= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2MassData_getter_center(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2MassData* b2MassData_instance = (b2MassData*)(nativeData);
	//return b2MassData_instance->center;
	FREObject result;
	return result;
}

 
FREObject ane_b2MassData_setter_I(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2MassData* b2MassData_instance = (b2MassData*)(nativeData);
//	b2MassData_instance->I= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2MassData_getter_I(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2MassData* b2MassData_instance = (b2MassData*)(nativeData);
	//return b2MassData_instance->I;
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2MASSDATA_H_ */
