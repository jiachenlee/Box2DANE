/*================================================================================
*
* File Name: b2FixtureProxy.h
* Created on: Mon May 7 22:46:25 GMT-0400 2012
* Copyright (�) 2012 Jesse Nicholson. All Rights Reserved.
* 
*
*                       ***** BEGIN LICENSE BLOCK *****
* This Source Code Form is subject to the terms of the Mozilla Public
* License, v. 2.0. If a copy of the MPL was not distributed with this file,
* You can obtain one at http://mozilla.org/MPL/2.0/.
*                       ***** END  LICENSE  BLOCK *****
*===============================================================================*/

#ifndef BOX2DANE_C_B2FIXTUREPROXY_H_
#define BOX2DANE_C_B2FIXTUREPROXY_H_

//Convenience functions for generating a new AS3 class instance of b2FixtureProxy
FREResult FRENewObjectFromb2FixtureProxy(b2FixtureProxy* obj, FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[1];
	FREGetPointerAsString((void*)obj, &memAddress);
	constructorArguments[0] = memAddress;
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.dynamics.b2FixtureProxy";

	FREResult objInitResult = FRENewObject(className, 1, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2FixtureProxy object in function FRENewObjectFromb2FixtureProxy");
	}

	return objInitResult;
}

FREResult FRENewb2FixtureProxy(FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[0];
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.dynamics.b2FixtureProxy";

	FREResult objInitResult = FRENewObject(className, 0, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2FixtureProxy object in function FRENewb2FixtureProxy");
	}

	return objInitResult;
}
//

FREObject ane_b2FixtureProxy_setter_aabb(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2FixtureProxy* b2FixtureProxy_instance = (b2FixtureProxy*)(nativeData);
//	b2FixtureProxy_instance->aabb= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2FixtureProxy_getter_aabb(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2FixtureProxy* b2FixtureProxy_instance = (b2FixtureProxy*)(nativeData);
	//return b2FixtureProxy_instance->aabb;
	FREObject result;
	return result;
}

 
FREObject ane_b2FixtureProxy_setter_fixture(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2FixtureProxy* b2FixtureProxy_instance = (b2FixtureProxy*)(nativeData);
//	b2FixtureProxy_instance->fixture= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2FixtureProxy_getter_fixture(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2FixtureProxy* b2FixtureProxy_instance = (b2FixtureProxy*)(nativeData);
	//return b2FixtureProxy_instance->fixture;
	FREObject result;
	return result;
}

 
FREObject ane_b2FixtureProxy_setter_childIndex(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2FixtureProxy* b2FixtureProxy_instance = (b2FixtureProxy*)(nativeData);
//	b2FixtureProxy_instance->childIndex= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2FixtureProxy_getter_childIndex(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2FixtureProxy* b2FixtureProxy_instance = (b2FixtureProxy*)(nativeData);
	//return b2FixtureProxy_instance->childIndex;
	FREObject result;
	return result;
}

 
FREObject ane_b2FixtureProxy_setter_proxyId(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2FixtureProxy* b2FixtureProxy_instance = (b2FixtureProxy*)(nativeData);
//	b2FixtureProxy_instance->proxyId= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2FixtureProxy_getter_proxyId(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2FixtureProxy* b2FixtureProxy_instance = (b2FixtureProxy*)(nativeData);
	//return b2FixtureProxy_instance->proxyId;
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2FIXTUREPROXY_H_ */
