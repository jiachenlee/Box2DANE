/*================================================================================
*
* File Name: b2GearJointDef.h
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

#ifndef BOX2DANE_C_B2GEARJOINTDEF_H_
#define BOX2DANE_C_B2GEARJOINTDEF_H_




FREObject ane_b2GearJointDef_constructor_b2GearJointDef(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2GearJointDef* b2GearJointDef_instance = (b2GearJointDef*)(nativeData);
//	b2GearJointDef_instance->b2GearJointDef(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2GearJointDef_setter_joint1(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2GearJointDef* b2GearJointDef_instance = (b2GearJointDef*)(nativeData);
//	b2GearJointDef_instance->joint1= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2GearJointDef_getter_joint1(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2GearJointDef* b2GearJointDef_instance = (b2GearJointDef*)(nativeData);
	//return b2GearJointDef_instance->joint1;
	FREObject result;
	return result;
}

 
FREObject ane_b2GearJointDef_setter_joint2(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2GearJointDef* b2GearJointDef_instance = (b2GearJointDef*)(nativeData);
//	b2GearJointDef_instance->joint2= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2GearJointDef_getter_joint2(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2GearJointDef* b2GearJointDef_instance = (b2GearJointDef*)(nativeData);
	//return b2GearJointDef_instance->joint2;
	FREObject result;
	return result;
}

 
FREObject ane_b2GearJointDef_setter_ratio(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2GearJointDef* b2GearJointDef_instance = (b2GearJointDef*)(nativeData);
//	b2GearJointDef_instance->ratio= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2GearJointDef_getter_ratio(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2GearJointDef* b2GearJointDef_instance = (b2GearJointDef*)(nativeData);
	//return b2GearJointDef_instance->ratio;
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2GEARJOINTDEF_H_ */
