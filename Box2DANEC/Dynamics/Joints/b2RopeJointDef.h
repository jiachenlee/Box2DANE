/*================================================================================
*
* File Name: b2RopeJointDef.h
* Created on: Mon May 7 22:46:26 GMT-0400 2012
* Copyright (©) 2012 Jesse Nicholson. All Rights Reserved.
* 
*
*                       ***** BEGIN LICENSE BLOCK *****
* This Source Code Form is subject to the terms of the Mozilla Public
* License, v. 2.0. If a copy of the MPL was not distributed with this file,
* You can obtain one at http://mozilla.org/MPL/2.0/.
*                       ***** END  LICENSE  BLOCK *****
*===============================================================================*/

#ifndef BOX2DANE_C_B2ROPEJOINTDEF_H_
#define BOX2DANE_C_B2ROPEJOINTDEF_H_




FREObject ane_b2RopeJointDef_constructor_b2RopeJointDef(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RopeJointDef* b2RopeJointDef_instance = (b2RopeJointDef*)(nativeData);
//	b2RopeJointDef_instance->b2RopeJointDef(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2RopeJointDef_setter_localAnchorA(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RopeJointDef* b2RopeJointDef_instance = (b2RopeJointDef*)(nativeData);
//	b2RopeJointDef_instance->localAnchorA= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2RopeJointDef_getter_localAnchorA(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RopeJointDef* b2RopeJointDef_instance = (b2RopeJointDef*)(nativeData);
	//return b2RopeJointDef_instance->localAnchorA;
	FREObject result;
	return result;
}

 
FREObject ane_b2RopeJointDef_setter_localAnchorB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RopeJointDef* b2RopeJointDef_instance = (b2RopeJointDef*)(nativeData);
//	b2RopeJointDef_instance->localAnchorB= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2RopeJointDef_getter_localAnchorB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RopeJointDef* b2RopeJointDef_instance = (b2RopeJointDef*)(nativeData);
	//return b2RopeJointDef_instance->localAnchorB;
	FREObject result;
	return result;
}

 
FREObject ane_b2RopeJointDef_setter_maxLength(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RopeJointDef* b2RopeJointDef_instance = (b2RopeJointDef*)(nativeData);
//	b2RopeJointDef_instance->maxLength= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2RopeJointDef_getter_maxLength(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RopeJointDef* b2RopeJointDef_instance = (b2RopeJointDef*)(nativeData);
	//return b2RopeJointDef_instance->maxLength;
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2ROPEJOINTDEF_H_ */
