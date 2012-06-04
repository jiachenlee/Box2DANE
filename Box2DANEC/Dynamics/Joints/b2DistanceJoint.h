/*================================================================================
*
* File Name: b2DistanceJoint.h
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

#ifndef BOX2DANE_C_B2DISTANCEJOINT_H_
#define BOX2DANE_C_B2DISTANCEJOINT_H_




FREObject ane_b2DistanceJoint_callback_GetAnchorA(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2DistanceJoint* b2DistanceJoint_instance = (b2DistanceJoint*)(nativeData);
//	b2DistanceJoint_instance->GetAnchorA(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2DistanceJoint_callback_GetAnchorB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2DistanceJoint* b2DistanceJoint_instance = (b2DistanceJoint*)(nativeData);
//	b2DistanceJoint_instance->GetAnchorB(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2DistanceJoint_callback_GetReactionForce(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2DistanceJoint* b2DistanceJoint_instance = (b2DistanceJoint*)(nativeData);
//	b2DistanceJoint_instance->GetReactionForce(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2DistanceJoint_callback_GetReactionTorque(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2DistanceJoint* b2DistanceJoint_instance = (b2DistanceJoint*)(nativeData);
//	b2DistanceJoint_instance->GetReactionTorque(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2DistanceJoint_callback_GetLocalAnchorA(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2DistanceJoint* b2DistanceJoint_instance = (b2DistanceJoint*)(nativeData);
//	b2DistanceJoint_instance->GetLocalAnchorA(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2DistanceJoint_callback_GetLocalAnchorB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2DistanceJoint* b2DistanceJoint_instance = (b2DistanceJoint*)(nativeData);
//	b2DistanceJoint_instance->GetLocalAnchorB(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2DistanceJoint_callback_SetLength(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2DistanceJoint* b2DistanceJoint_instance = (b2DistanceJoint*)(nativeData);
//	b2DistanceJoint_instance->SetLength(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2DistanceJoint_callback_GetLength(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2DistanceJoint* b2DistanceJoint_instance = (b2DistanceJoint*)(nativeData);
//	b2DistanceJoint_instance->GetLength(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2DistanceJoint_callback_SetFrequency(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2DistanceJoint* b2DistanceJoint_instance = (b2DistanceJoint*)(nativeData);
//	b2DistanceJoint_instance->SetFrequency(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2DistanceJoint_callback_GetFrequency(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2DistanceJoint* b2DistanceJoint_instance = (b2DistanceJoint*)(nativeData);
//	b2DistanceJoint_instance->GetFrequency(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2DistanceJoint_callback_SetDampingRatio(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2DistanceJoint* b2DistanceJoint_instance = (b2DistanceJoint*)(nativeData);
//	b2DistanceJoint_instance->SetDampingRatio(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2DistanceJoint_callback_GetDampingRatio(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2DistanceJoint* b2DistanceJoint_instance = (b2DistanceJoint*)(nativeData);
//	b2DistanceJoint_instance->GetDampingRatio(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2DistanceJoint_callback_Dump(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2DistanceJoint* b2DistanceJoint_instance = (b2DistanceJoint*)(nativeData);
//	b2DistanceJoint_instance->Dump(...);
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2DISTANCEJOINT_H_ */
