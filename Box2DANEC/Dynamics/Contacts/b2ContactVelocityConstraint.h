/*================================================================================
*
* File Name: b2ContactVelocityConstraint.h
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

#ifndef BOX2DANE_C_B2CONTACTVELOCITYCONSTRAINT_H_
#define BOX2DANE_C_B2CONTACTVELOCITYCONSTRAINT_H_

//Convenience functions for generating a new AS3 class instance of b2ContactVelocityConstraint
FREResult FRENewObjectFromb2ContactVelocityConstraint(b2ContactVelocityConstraint* obj, FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[1];
	FREGetPointerAsString((void*)obj, &memAddress);
	constructorArguments[0] = memAddress;
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.dynamics.contacts.b2ContactVelocityConstraint";

	FREResult objInitResult = FRENewObject(className, 1, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2ContactVelocityConstraint object in function FRENewObjectFromb2ContactVelocityConstraint");
	}

	return objInitResult;
}

FREResult FRENewb2ContactVelocityConstraint(FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[0];
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.dynamics.contacts.b2ContactVelocityConstraint";

	FREResult objInitResult = FRENewObject(className, 0, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2ContactVelocityConstraint object in function FRENewb2ContactVelocityConstraint");
	}

	return objInitResult;
}
//

FREObject ane_b2ContactVelocityConstraint_setter_normal(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactVelocityConstraint* b2ContactVelocityConstraint_instance = (b2ContactVelocityConstraint*)(nativeData);
//	b2ContactVelocityConstraint_instance->normal= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactVelocityConstraint_getter_normal(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactVelocityConstraint* b2ContactVelocityConstraint_instance = (b2ContactVelocityConstraint*)(nativeData);
	//return b2ContactVelocityConstraint_instance->normal;
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactVelocityConstraint_setter_normalMass(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactVelocityConstraint* b2ContactVelocityConstraint_instance = (b2ContactVelocityConstraint*)(nativeData);
//	b2ContactVelocityConstraint_instance->normalMass= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactVelocityConstraint_getter_normalMass(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactVelocityConstraint* b2ContactVelocityConstraint_instance = (b2ContactVelocityConstraint*)(nativeData);
	//return b2ContactVelocityConstraint_instance->normalMass;
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactVelocityConstraint_setter_K(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactVelocityConstraint* b2ContactVelocityConstraint_instance = (b2ContactVelocityConstraint*)(nativeData);
//	b2ContactVelocityConstraint_instance->K= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactVelocityConstraint_getter_K(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactVelocityConstraint* b2ContactVelocityConstraint_instance = (b2ContactVelocityConstraint*)(nativeData);
	//return b2ContactVelocityConstraint_instance->K;
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactVelocityConstraint_setter_indexA(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactVelocityConstraint* b2ContactVelocityConstraint_instance = (b2ContactVelocityConstraint*)(nativeData);
//	b2ContactVelocityConstraint_instance->indexA= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactVelocityConstraint_getter_indexA(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactVelocityConstraint* b2ContactVelocityConstraint_instance = (b2ContactVelocityConstraint*)(nativeData);
	//return b2ContactVelocityConstraint_instance->indexA;
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactVelocityConstraint_setter_indexB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactVelocityConstraint* b2ContactVelocityConstraint_instance = (b2ContactVelocityConstraint*)(nativeData);
//	b2ContactVelocityConstraint_instance->indexB= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactVelocityConstraint_getter_indexB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactVelocityConstraint* b2ContactVelocityConstraint_instance = (b2ContactVelocityConstraint*)(nativeData);
	//return b2ContactVelocityConstraint_instance->indexB;
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactVelocityConstraint_setter_invMassA(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactVelocityConstraint* b2ContactVelocityConstraint_instance = (b2ContactVelocityConstraint*)(nativeData);
//	b2ContactVelocityConstraint_instance->invMassA= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactVelocityConstraint_getter_invMassA(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactVelocityConstraint* b2ContactVelocityConstraint_instance = (b2ContactVelocityConstraint*)(nativeData);
	//return b2ContactVelocityConstraint_instance->invMassA;
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactVelocityConstraint_setter_invMassB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactVelocityConstraint* b2ContactVelocityConstraint_instance = (b2ContactVelocityConstraint*)(nativeData);
//	b2ContactVelocityConstraint_instance->invMassB= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactVelocityConstraint_getter_invMassB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactVelocityConstraint* b2ContactVelocityConstraint_instance = (b2ContactVelocityConstraint*)(nativeData);
	//return b2ContactVelocityConstraint_instance->invMassB;
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactVelocityConstraint_setter_invIA(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactVelocityConstraint* b2ContactVelocityConstraint_instance = (b2ContactVelocityConstraint*)(nativeData);
//	b2ContactVelocityConstraint_instance->invIA= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactVelocityConstraint_getter_invIA(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactVelocityConstraint* b2ContactVelocityConstraint_instance = (b2ContactVelocityConstraint*)(nativeData);
	//return b2ContactVelocityConstraint_instance->invIA;
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactVelocityConstraint_setter_invIB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactVelocityConstraint* b2ContactVelocityConstraint_instance = (b2ContactVelocityConstraint*)(nativeData);
//	b2ContactVelocityConstraint_instance->invIB= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactVelocityConstraint_getter_invIB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactVelocityConstraint* b2ContactVelocityConstraint_instance = (b2ContactVelocityConstraint*)(nativeData);
	//return b2ContactVelocityConstraint_instance->invIB;
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactVelocityConstraint_setter_friction(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactVelocityConstraint* b2ContactVelocityConstraint_instance = (b2ContactVelocityConstraint*)(nativeData);
//	b2ContactVelocityConstraint_instance->friction= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactVelocityConstraint_getter_friction(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactVelocityConstraint* b2ContactVelocityConstraint_instance = (b2ContactVelocityConstraint*)(nativeData);
	//return b2ContactVelocityConstraint_instance->friction;
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactVelocityConstraint_setter_restitution(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactVelocityConstraint* b2ContactVelocityConstraint_instance = (b2ContactVelocityConstraint*)(nativeData);
//	b2ContactVelocityConstraint_instance->restitution= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactVelocityConstraint_getter_restitution(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactVelocityConstraint* b2ContactVelocityConstraint_instance = (b2ContactVelocityConstraint*)(nativeData);
	//return b2ContactVelocityConstraint_instance->restitution;
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactVelocityConstraint_setter_tangentSpeed(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactVelocityConstraint* b2ContactVelocityConstraint_instance = (b2ContactVelocityConstraint*)(nativeData);
//	b2ContactVelocityConstraint_instance->tangentSpeed= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactVelocityConstraint_getter_tangentSpeed(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactVelocityConstraint* b2ContactVelocityConstraint_instance = (b2ContactVelocityConstraint*)(nativeData);
	//return b2ContactVelocityConstraint_instance->tangentSpeed;
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactVelocityConstraint_setter_pointCount(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactVelocityConstraint* b2ContactVelocityConstraint_instance = (b2ContactVelocityConstraint*)(nativeData);
//	b2ContactVelocityConstraint_instance->pointCount= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactVelocityConstraint_getter_pointCount(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactVelocityConstraint* b2ContactVelocityConstraint_instance = (b2ContactVelocityConstraint*)(nativeData);
	//return b2ContactVelocityConstraint_instance->pointCount;
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactVelocityConstraint_setter_contactIndex(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactVelocityConstraint* b2ContactVelocityConstraint_instance = (b2ContactVelocityConstraint*)(nativeData);
//	b2ContactVelocityConstraint_instance->contactIndex= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactVelocityConstraint_getter_contactIndex(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactVelocityConstraint* b2ContactVelocityConstraint_instance = (b2ContactVelocityConstraint*)(nativeData);
	//return b2ContactVelocityConstraint_instance->contactIndex;
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2CONTACTVELOCITYCONSTRAINT_H_ */
