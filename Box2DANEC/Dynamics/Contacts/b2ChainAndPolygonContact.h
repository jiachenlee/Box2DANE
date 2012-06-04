/*================================================================================
*
* File Name: b2ChainAndPolygonContact.h
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

#ifndef BOX2DANE_C_B2CHAINANDPOLYGONCONTACT_H_
#define BOX2DANE_C_B2CHAINANDPOLYGONCONTACT_H_




FREObject ane_b2ChainAndPolygonContact_callback_Create(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ChainAndPolygonContact* b2ChainAndPolygonContact_instance = (b2ChainAndPolygonContact*)(nativeData);
//	b2ChainAndPolygonContact_instance->Create(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2ChainAndPolygonContact_callback_Destroy(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ChainAndPolygonContact* b2ChainAndPolygonContact_instance = (b2ChainAndPolygonContact*)(nativeData);
//	b2ChainAndPolygonContact_instance->Destroy(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2ChainAndPolygonContact_constructor_b2ChainAndPolygonContact(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ChainAndPolygonContact* b2ChainAndPolygonContact_instance = (b2ChainAndPolygonContact*)(nativeData);
//	b2ChainAndPolygonContact_instance->b2ChainAndPolygonContact(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2ChainAndPolygonContact_callback_Evaluate(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ChainAndPolygonContact* b2ChainAndPolygonContact_instance = (b2ChainAndPolygonContact*)(nativeData);
//	b2ChainAndPolygonContact_instance->Evaluate(...);
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2CHAINANDPOLYGONCONTACT_H_ */
