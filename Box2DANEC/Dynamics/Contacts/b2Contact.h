/*================================================================================
*
* File Name: b2Contact.h
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

#ifndef BOX2DANE_C_B2CONTACT_H_
#define BOX2DANE_C_B2CONTACT_H_

//Convenience functions for generating a new AS3 class instance of b2Contact
FREResult FRENewObjectFromb2Contact(b2Contact* obj, FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[1];
	FREGetPointerAsString((void*)obj, &memAddress);
	constructorArguments[0] = memAddress;
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.dynamics.contacts.b2Contact";

	FREResult objInitResult = FRENewObject(className, 1, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2Contact object in function FRENewObjectFromb2Contact");
	}

	return objInitResult;
}

FREResult FRENewb2Contact(FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[0];
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.dynamics.contacts.b2Contact";

	FREResult objInitResult = FRENewObject(className, 0, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2Contact object in function FRENewb2Contact");
	}

	return objInitResult;
}
//

FREObject ane_b2Contact_callback_GetManifold(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Contact* b2Contact_instance = (b2Contact*)(nativeData);
//	b2Contact_instance->GetManifold(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Contact_callback_GetWorldManifold(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Contact* b2Contact_instance = (b2Contact*)(nativeData);
//	b2Contact_instance->GetWorldManifold(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Contact_callback_IsTouching(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Contact* b2Contact_instance = (b2Contact*)(nativeData);
//	b2Contact_instance->IsTouching(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Contact_callback_SetEnabled(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Contact* b2Contact_instance = (b2Contact*)(nativeData);
//	b2Contact_instance->SetEnabled(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Contact_callback_IsEnabled(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Contact* b2Contact_instance = (b2Contact*)(nativeData);
//	b2Contact_instance->IsEnabled(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Contact_callback_GetNext(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Contact* b2Contact_instance = (b2Contact*)(nativeData);
//	b2Contact_instance->GetNext(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Contact_callback_GetFixtureA(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Contact* b2Contact_instance = (b2Contact*)(nativeData);
//	b2Contact_instance->GetFixtureA(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Contact_callback_GetChildIndexA(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Contact* b2Contact_instance = (b2Contact*)(nativeData);
//	b2Contact_instance->GetChildIndexA(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Contact_callback_GetFixtureB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Contact* b2Contact_instance = (b2Contact*)(nativeData);
//	b2Contact_instance->GetFixtureB(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Contact_callback_GetChildIndexB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Contact* b2Contact_instance = (b2Contact*)(nativeData);
//	b2Contact_instance->GetChildIndexB(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Contact_callback_SetFriction(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Contact* b2Contact_instance = (b2Contact*)(nativeData);
//	b2Contact_instance->SetFriction(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Contact_callback_GetFriction(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Contact* b2Contact_instance = (b2Contact*)(nativeData);
//	b2Contact_instance->GetFriction(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Contact_callback_ResetFriction(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Contact* b2Contact_instance = (b2Contact*)(nativeData);
//	b2Contact_instance->ResetFriction(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Contact_callback_SetRestitution(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Contact* b2Contact_instance = (b2Contact*)(nativeData);
//	b2Contact_instance->SetRestitution(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Contact_callback_GetRestitution(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Contact* b2Contact_instance = (b2Contact*)(nativeData);
//	b2Contact_instance->GetRestitution(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Contact_callback_ResetRestitution(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Contact* b2Contact_instance = (b2Contact*)(nativeData);
//	b2Contact_instance->ResetRestitution(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Contact_callback_SetTangentSpeed(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Contact* b2Contact_instance = (b2Contact*)(nativeData);
//	b2Contact_instance->SetTangentSpeed(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Contact_callback_GetTangentSpeed(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Contact* b2Contact_instance = (b2Contact*)(nativeData);
//	b2Contact_instance->GetTangentSpeed(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Contact_callback_Evaluate(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Contact* b2Contact_instance = (b2Contact*)(nativeData);
//	b2Contact_instance->Evaluate(...);
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2CONTACT_H_ */
