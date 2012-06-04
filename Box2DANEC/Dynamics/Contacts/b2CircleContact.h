/*================================================================================
*
* File Name: b2CircleContact.h
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

#ifndef BOX2DANE_C_B2CIRCLECONTACT_H_
#define BOX2DANE_C_B2CIRCLECONTACT_H_




FREObject ane_b2CircleContact_callback_Create(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2CircleContact* b2CircleContact_instance = (b2CircleContact*)(nativeData);
//	b2CircleContact_instance->Create(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2CircleContact_callback_Destroy(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2CircleContact* b2CircleContact_instance = (b2CircleContact*)(nativeData);
//	b2CircleContact_instance->Destroy(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2CircleContact_constructor_b2CircleContact(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2CircleContact* b2CircleContact_instance = (b2CircleContact*)(nativeData);
//	b2CircleContact_instance->b2CircleContact(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2CircleContact_callback_Evaluate(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2CircleContact* b2CircleContact_instance = (b2CircleContact*)(nativeData);
//	b2CircleContact_instance->Evaluate(...);
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2CIRCLECONTACT_H_ */
