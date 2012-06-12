/*================================================================================
*
* File Name: b2Body.h
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

#ifndef BOX2DANE_C_B2BODY_H_
#define BOX2DANE_C_B2BODY_H_

//Convenience functions for generating a new AS3 class instance of b2Body
FREResult FRENewObjectFromb2Body(b2Body* obj, FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[1];
	FREGetPointerAsString((void*)obj, &memAddress);
	constructorArguments[0] = memAddress;
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.dynamics.b2Body";

	FREResult objInitResult = FRENewObject(className, 1, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2Body object in function FRENewObjectFromb2Body");
	}

	return objInitResult;
}

FREResult FRENewb2Body(FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[0];
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.dynamics.b2Body";

	FREResult objInitResult = FRENewObject(className, 0, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2Body object in function FRENewb2Body");
	}

	return objInitResult;
}
//

FREObject ane_b2Body_callback_CreateFixture(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Body* b2Body_instance = (b2Body*)(nativeData);
//	b2Body_instance->CreateFixture(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Body_callback_DestroyFixture(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Body* b2Body_instance = (b2Body*)(nativeData);
//	b2Body_instance->DestroyFixture(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Body_callback_SetTransform(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Body* b2Body_instance = (b2Body*)(nativeData);
//	b2Body_instance->SetTransform(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Body_callback_GetTransform(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Body* b2Body_instance = (b2Body*)(nativeData);
//	b2Body_instance->GetTransform(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Body_callback_GetPosition(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Body* b2Body_instance = (b2Body*)(nativeData);
//	b2Body_instance->GetPosition(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Body_callback_GetAngle(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Body* b2Body_instance = (b2Body*)(nativeData);
//	b2Body_instance->GetAngle(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Body_callback_GetWorldCenter(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Body* b2Body_instance = (b2Body*)(nativeData);
//	b2Body_instance->GetWorldCenter(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Body_callback_GetLocalCenter(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Body* b2Body_instance = (b2Body*)(nativeData);
//	b2Body_instance->GetLocalCenter(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Body_callback_SetLinearVelocity(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Body* b2Body_instance = (b2Body*)(nativeData);
//	b2Body_instance->SetLinearVelocity(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Body_callback_GetLinearVelocity(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Body* b2Body_instance = (b2Body*)(nativeData);
//	b2Body_instance->GetLinearVelocity(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Body_callback_SetAngularVelocity(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Body* b2Body_instance = (b2Body*)(nativeData);
//	b2Body_instance->SetAngularVelocity(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Body_callback_GetAngularVelocity(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Body* b2Body_instance = (b2Body*)(nativeData);
//	b2Body_instance->GetAngularVelocity(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Body_callback_ApplyForce(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Body* b2Body_instance = (b2Body*)(nativeData);
//	b2Body_instance->ApplyForce(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Body_callback_ApplyForceToCenter(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Body* b2Body_instance = (b2Body*)(nativeData);
//	b2Body_instance->ApplyForceToCenter(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Body_callback_ApplyTorque(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Body* b2Body_instance = (b2Body*)(nativeData);
//	b2Body_instance->ApplyTorque(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Body_callback_ApplyLinearImpulse(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Body* b2Body_instance = (b2Body*)(nativeData);
//	b2Body_instance->ApplyLinearImpulse(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Body_callback_ApplyAngularImpulse(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Body* b2Body_instance = (b2Body*)(nativeData);
//	b2Body_instance->ApplyAngularImpulse(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Body_callback_GetMass(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Body* b2Body_instance = (b2Body*)(nativeData);
//	b2Body_instance->GetMass(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Body_callback_GetInertia(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Body* b2Body_instance = (b2Body*)(nativeData);
//	b2Body_instance->GetInertia(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Body_callback_GetMassData(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Body* b2Body_instance = (b2Body*)(nativeData);
//	b2Body_instance->GetMassData(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Body_callback_SetMassData(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Body* b2Body_instance = (b2Body*)(nativeData);
//	b2Body_instance->SetMassData(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Body_callback_ResetMassData(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Body* b2Body_instance = (b2Body*)(nativeData);
//	b2Body_instance->ResetMassData(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Body_callback_GetWorldPoint(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Body* b2Body_instance = (b2Body*)(nativeData);
//	b2Body_instance->GetWorldPoint(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Body_callback_GetWorldVector(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Body* b2Body_instance = (b2Body*)(nativeData);
//	b2Body_instance->GetWorldVector(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Body_callback_GetLocalPoint(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Body* b2Body_instance = (b2Body*)(nativeData);
//	b2Body_instance->GetLocalPoint(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Body_callback_GetLocalVector(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Body* b2Body_instance = (b2Body*)(nativeData);
//	b2Body_instance->GetLocalVector(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Body_callback_GetLinearVelocityFromWorldPoint(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Body* b2Body_instance = (b2Body*)(nativeData);
//	b2Body_instance->GetLinearVelocityFromWorldPoint(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Body_callback_GetLinearVelocityFromLocalPoint(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Body* b2Body_instance = (b2Body*)(nativeData);
//	b2Body_instance->GetLinearVelocityFromLocalPoint(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Body_callback_GetLinearDamping(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Body* b2Body_instance = (b2Body*)(nativeData);
//	b2Body_instance->GetLinearDamping(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Body_callback_SetLinearDamping(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Body* b2Body_instance = (b2Body*)(nativeData);
//	b2Body_instance->SetLinearDamping(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Body_callback_GetAngularDamping(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Body* b2Body_instance = (b2Body*)(nativeData);
//	b2Body_instance->GetAngularDamping(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Body_callback_SetAngularDamping(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Body* b2Body_instance = (b2Body*)(nativeData);
//	b2Body_instance->SetAngularDamping(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Body_callback_GetGravityScale(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Body* b2Body_instance = (b2Body*)(nativeData);
//	b2Body_instance->GetGravityScale(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Body_callback_SetGravityScale(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Body* b2Body_instance = (b2Body*)(nativeData);
//	b2Body_instance->SetGravityScale(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Body_callback_SetType(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Body* b2Body_instance = (b2Body*)(nativeData);
//	b2Body_instance->SetType(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Body_callback_GetType(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Body* b2Body_instance = (b2Body*)(nativeData);
//	b2Body_instance->GetType(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Body_callback_SetBullet(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Body* b2Body_instance = (b2Body*)(nativeData);
//	b2Body_instance->SetBullet(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Body_callback_IsBullet(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Body* b2Body_instance = (b2Body*)(nativeData);
//	b2Body_instance->IsBullet(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Body_callback_SetSleepingAllowed(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Body* b2Body_instance = (b2Body*)(nativeData);
//	b2Body_instance->SetSleepingAllowed(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Body_callback_IsSleepingAllowed(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Body* b2Body_instance = (b2Body*)(nativeData);
//	b2Body_instance->IsSleepingAllowed(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Body_callback_SetAwake(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Body* b2Body_instance = (b2Body*)(nativeData);
//	b2Body_instance->SetAwake(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Body_callback_IsAwake(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Body* b2Body_instance = (b2Body*)(nativeData);
//	b2Body_instance->IsAwake(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Body_callback_SetActive(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Body* b2Body_instance = (b2Body*)(nativeData);
//	b2Body_instance->SetActive(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Body_callback_IsActive(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Body* b2Body_instance = (b2Body*)(nativeData);
//	b2Body_instance->IsActive(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Body_callback_SetFixedRotation(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Body* b2Body_instance = (b2Body*)(nativeData);
//	b2Body_instance->SetFixedRotation(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Body_callback_IsFixedRotation(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Body* b2Body_instance = (b2Body*)(nativeData);
//	b2Body_instance->IsFixedRotation(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Body_callback_GetFixtureList(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Body* b2Body_instance = (b2Body*)(nativeData);
//	b2Body_instance->GetFixtureList(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Body_callback_GetJointList(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Body* b2Body_instance = (b2Body*)(nativeData);
//	b2Body_instance->GetJointList(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Body_callback_GetContactList(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Body* b2Body_instance = (b2Body*)(nativeData);
//	b2Body_instance->GetContactList(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Body_callback_GetNext(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Body* b2Body_instance = (b2Body*)(nativeData);
//	b2Body_instance->GetNext(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Body_callback_GetUserData(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Body* b2Body_instance = (b2Body*)(nativeData);
//	b2Body_instance->GetUserData(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Body_callback_SetUserData(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Body* b2Body_instance = (b2Body*)(nativeData);
//	b2Body_instance->SetUserData(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Body_callback_GetWorld(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Body* b2Body_instance = (b2Body*)(nativeData);
//	b2Body_instance->GetWorld(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Body_callback_Dump(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Body* b2Body_instance = (b2Body*)(nativeData);
//	b2Body_instance->Dump(...);
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2BODY_H_ */
