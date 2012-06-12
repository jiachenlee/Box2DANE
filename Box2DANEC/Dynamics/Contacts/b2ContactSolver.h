/*================================================================================
*
* File Name: b2ContactSolver.h
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

#ifndef BOX2DANE_C_B2CONTACTSOLVER_H_
#define BOX2DANE_C_B2CONTACTSOLVER_H_

//Convenience functions for generating a new AS3 class instance of b2ContactSolver
FREResult FRENewObjectFromb2ContactSolver(b2ContactSolver* obj, FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[1];
	FREGetPointerAsString((void*)obj, &memAddress);
	constructorArguments[0] = memAddress;
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.dynamics.contacts.b2ContactSolver";

	FREResult objInitResult = FRENewObject(className, 1, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2ContactSolver object in function FRENewObjectFromb2ContactSolver");
	}

	return objInitResult;
}

FREResult FRENewb2ContactSolver(FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[0];
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.dynamics.contacts.b2ContactSolver";

	FREResult objInitResult = FRENewObject(className, 0, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2ContactSolver object in function FRENewb2ContactSolver");
	}

	return objInitResult;
}
//

FREObject ane_b2ContactSolver_constructor_b2ContactSolver(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactSolver* b2ContactSolver_instance = (b2ContactSolver*)(nativeData);
//	b2ContactSolver_instance->b2ContactSolver(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactSolver_callback_InitializeVelocityConstraints(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactSolver* b2ContactSolver_instance = (b2ContactSolver*)(nativeData);
//	b2ContactSolver_instance->InitializeVelocityConstraints(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactSolver_callback_WarmStart(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactSolver* b2ContactSolver_instance = (b2ContactSolver*)(nativeData);
//	b2ContactSolver_instance->WarmStart(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactSolver_callback_SolveVelocityConstraints(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactSolver* b2ContactSolver_instance = (b2ContactSolver*)(nativeData);
//	b2ContactSolver_instance->SolveVelocityConstraints(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactSolver_callback_StoreImpulses(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactSolver* b2ContactSolver_instance = (b2ContactSolver*)(nativeData);
//	b2ContactSolver_instance->StoreImpulses(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactSolver_callback_SolvePositionConstraints(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactSolver* b2ContactSolver_instance = (b2ContactSolver*)(nativeData);
//	b2ContactSolver_instance->SolvePositionConstraints(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactSolver_callback_SolveTOIPositionConstraints(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactSolver* b2ContactSolver_instance = (b2ContactSolver*)(nativeData);
//	b2ContactSolver_instance->SolveTOIPositionConstraints(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactSolver_setter_m_step(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactSolver* b2ContactSolver_instance = (b2ContactSolver*)(nativeData);
//	b2ContactSolver_instance->m_step= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactSolver_getter_m_step(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactSolver* b2ContactSolver_instance = (b2ContactSolver*)(nativeData);
	//return b2ContactSolver_instance->m_step;
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactSolver_setter_m_positions(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactSolver* b2ContactSolver_instance = (b2ContactSolver*)(nativeData);
//	b2ContactSolver_instance->m_positions= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactSolver_getter_m_positions(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactSolver* b2ContactSolver_instance = (b2ContactSolver*)(nativeData);
	//return b2ContactSolver_instance->m_positions;
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactSolver_setter_m_velocities(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactSolver* b2ContactSolver_instance = (b2ContactSolver*)(nativeData);
//	b2ContactSolver_instance->m_velocities= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactSolver_getter_m_velocities(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactSolver* b2ContactSolver_instance = (b2ContactSolver*)(nativeData);
	//return b2ContactSolver_instance->m_velocities;
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactSolver_setter_m_allocator(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactSolver* b2ContactSolver_instance = (b2ContactSolver*)(nativeData);
//	b2ContactSolver_instance->m_allocator= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactSolver_getter_m_allocator(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactSolver* b2ContactSolver_instance = (b2ContactSolver*)(nativeData);
	//return b2ContactSolver_instance->m_allocator;
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactSolver_setter_m_positionConstraints(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactSolver* b2ContactSolver_instance = (b2ContactSolver*)(nativeData);
//	b2ContactSolver_instance->m_positionConstraints= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactSolver_getter_m_positionConstraints(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactSolver* b2ContactSolver_instance = (b2ContactSolver*)(nativeData);
	//return b2ContactSolver_instance->m_positionConstraints;
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactSolver_setter_m_velocityConstraints(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactSolver* b2ContactSolver_instance = (b2ContactSolver*)(nativeData);
//	b2ContactSolver_instance->m_velocityConstraints= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactSolver_getter_m_velocityConstraints(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactSolver* b2ContactSolver_instance = (b2ContactSolver*)(nativeData);
	//return b2ContactSolver_instance->m_velocityConstraints;
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactSolver_setter_m_contacts(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactSolver* b2ContactSolver_instance = (b2ContactSolver*)(nativeData);
//	b2ContactSolver_instance->m_contacts= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactSolver_getter_m_contacts(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactSolver* b2ContactSolver_instance = (b2ContactSolver*)(nativeData);
	//return b2ContactSolver_instance->m_contacts;
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactSolver_setter_m_count(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactSolver* b2ContactSolver_instance = (b2ContactSolver*)(nativeData);
//	b2ContactSolver_instance->m_count= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactSolver_getter_m_count(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactSolver* b2ContactSolver_instance = (b2ContactSolver*)(nativeData);
	//return b2ContactSolver_instance->m_count;
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2CONTACTSOLVER_H_ */
