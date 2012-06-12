/*================================================================================
*
* File Name: b2Fixture.h
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

#ifndef BOX2DANE_C_B2FIXTURE_H_
#define BOX2DANE_C_B2FIXTURE_H_

//Convenience functions for generating a new AS3 class instance of b2Fixture
FREResult FRENewObjectFromb2Fixture(b2Fixture* obj, FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[1];
	FREGetPointerAsString((void*)obj, &memAddress);
	constructorArguments[0] = memAddress;
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.dynamics.b2Fixture";

	FREResult objInitResult = FRENewObject(className, 1, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2Fixture object in function FRENewObjectFromb2Fixture");
	}

	return objInitResult;
}

FREResult FRENewb2Fixture(FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[0];
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.dynamics.b2Fixture";

	FREResult objInitResult = FRENewObject(className, 0, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2Fixture object in function FRENewb2Fixture");
	}

	return objInitResult;
}
//

FREObject ane_b2Fixture_callback_GetType(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Fixture* b2Fixture_instance = (b2Fixture*)(nativeData);
//	b2Fixture_instance->GetType(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Fixture_callback_GetShape(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Fixture* b2Fixture_instance = (b2Fixture*)(nativeData);
//	b2Fixture_instance->GetShape(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Fixture_callback_SetSensor(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Fixture* b2Fixture_instance = (b2Fixture*)(nativeData);
//	b2Fixture_instance->SetSensor(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Fixture_callback_IsSensor(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Fixture* b2Fixture_instance = (b2Fixture*)(nativeData);
//	b2Fixture_instance->IsSensor(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Fixture_callback_SetFilterData(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Fixture* b2Fixture_instance = (b2Fixture*)(nativeData);
//	b2Fixture_instance->SetFilterData(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Fixture_callback_GetFilterData(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Fixture* b2Fixture_instance = (b2Fixture*)(nativeData);
//	b2Fixture_instance->GetFilterData(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Fixture_callback_Refilter(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Fixture* b2Fixture_instance = (b2Fixture*)(nativeData);
//	b2Fixture_instance->Refilter(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Fixture_callback_GetBody(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Fixture* b2Fixture_instance = (b2Fixture*)(nativeData);
//	b2Fixture_instance->GetBody(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Fixture_callback_GetNext(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Fixture* b2Fixture_instance = (b2Fixture*)(nativeData);
//	b2Fixture_instance->GetNext(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Fixture_callback_GetUserData(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Fixture* b2Fixture_instance = (b2Fixture*)(nativeData);
//	b2Fixture_instance->GetUserData(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Fixture_callback_SetUserData(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Fixture* b2Fixture_instance = (b2Fixture*)(nativeData);
//	b2Fixture_instance->SetUserData(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Fixture_callback_TestPoint(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Fixture* b2Fixture_instance = (b2Fixture*)(nativeData);
//	b2Fixture_instance->TestPoint(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Fixture_callback_RayCast(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Fixture* b2Fixture_instance = (b2Fixture*)(nativeData);
//	b2Fixture_instance->RayCast(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Fixture_callback_GetMassData(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Fixture* b2Fixture_instance = (b2Fixture*)(nativeData);
//	b2Fixture_instance->GetMassData(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Fixture_callback_SetDensity(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Fixture* b2Fixture_instance = (b2Fixture*)(nativeData);
//	b2Fixture_instance->SetDensity(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Fixture_callback_GetDensity(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Fixture* b2Fixture_instance = (b2Fixture*)(nativeData);
//	b2Fixture_instance->GetDensity(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Fixture_callback_GetFriction(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Fixture* b2Fixture_instance = (b2Fixture*)(nativeData);
//	b2Fixture_instance->GetFriction(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Fixture_callback_SetFriction(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Fixture* b2Fixture_instance = (b2Fixture*)(nativeData);
//	b2Fixture_instance->SetFriction(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Fixture_callback_GetRestitution(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Fixture* b2Fixture_instance = (b2Fixture*)(nativeData);
//	b2Fixture_instance->GetRestitution(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Fixture_callback_SetRestitution(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Fixture* b2Fixture_instance = (b2Fixture*)(nativeData);
//	b2Fixture_instance->SetRestitution(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Fixture_callback_GetAABB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Fixture* b2Fixture_instance = (b2Fixture*)(nativeData);
//	b2Fixture_instance->GetAABB(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Fixture_callback_Dump(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Fixture* b2Fixture_instance = (b2Fixture*)(nativeData);
//	b2Fixture_instance->Dump(...);
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2FIXTURE_H_ */
