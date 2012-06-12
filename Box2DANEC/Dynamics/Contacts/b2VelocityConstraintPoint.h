/*================================================================================
*
* File Name: b2VelocityConstraintPoint.h
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

#ifndef BOX2DANE_C_B2VELOCITYCONSTRAINTPOINT_H_
#define BOX2DANE_C_B2VELOCITYCONSTRAINTPOINT_H_

//Convenience functions for generating a new AS3 class instance of b2VelocityConstraintPoint
FREResult FRENewObjectFromb2VelocityConstraintPoint(b2VelocityConstraintPoint* obj, FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[1];
	FREGetPointerAsString((void*)obj, &memAddress);
	constructorArguments[0] = memAddress;
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.dynamics.contacts.b2VelocityConstraintPoint";

	FREResult objInitResult = FRENewObject(className, 1, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2VelocityConstraintPoint object in function FRENewObjectFromb2VelocityConstraintPoint");
	}

	return objInitResult;
}

FREResult FRENewb2VelocityConstraintPoint(FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[0];
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.dynamics.contacts.b2VelocityConstraintPoint";

	FREResult objInitResult = FRENewObject(className, 0, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2VelocityConstraintPoint object in function FRENewb2VelocityConstraintPoint");
	}

	return objInitResult;
}
//

FREObject ane_b2VelocityConstraintPoint_setter_rA(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2VelocityConstraintPoint* b2VelocityConstraintPoint_instance = (b2VelocityConstraintPoint*)(nativeData);
//	b2VelocityConstraintPoint_instance->rA= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2VelocityConstraintPoint_getter_rA(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2VelocityConstraintPoint* b2VelocityConstraintPoint_instance = (b2VelocityConstraintPoint*)(nativeData);
	//return b2VelocityConstraintPoint_instance->rA;
	FREObject result;
	return result;
}

 
FREObject ane_b2VelocityConstraintPoint_setter_rB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2VelocityConstraintPoint* b2VelocityConstraintPoint_instance = (b2VelocityConstraintPoint*)(nativeData);
//	b2VelocityConstraintPoint_instance->rB= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2VelocityConstraintPoint_getter_rB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2VelocityConstraintPoint* b2VelocityConstraintPoint_instance = (b2VelocityConstraintPoint*)(nativeData);
	//return b2VelocityConstraintPoint_instance->rB;
	FREObject result;
	return result;
}

 
FREObject ane_b2VelocityConstraintPoint_setter_normalImpulse(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2VelocityConstraintPoint* b2VelocityConstraintPoint_instance = (b2VelocityConstraintPoint*)(nativeData);
//	b2VelocityConstraintPoint_instance->normalImpulse= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2VelocityConstraintPoint_getter_normalImpulse(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2VelocityConstraintPoint* b2VelocityConstraintPoint_instance = (b2VelocityConstraintPoint*)(nativeData);
	//return b2VelocityConstraintPoint_instance->normalImpulse;
	FREObject result;
	return result;
}

 
FREObject ane_b2VelocityConstraintPoint_setter_tangentImpulse(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2VelocityConstraintPoint* b2VelocityConstraintPoint_instance = (b2VelocityConstraintPoint*)(nativeData);
//	b2VelocityConstraintPoint_instance->tangentImpulse= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2VelocityConstraintPoint_getter_tangentImpulse(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2VelocityConstraintPoint* b2VelocityConstraintPoint_instance = (b2VelocityConstraintPoint*)(nativeData);
	//return b2VelocityConstraintPoint_instance->tangentImpulse;
	FREObject result;
	return result;
}

 
FREObject ane_b2VelocityConstraintPoint_setter_normalMass(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2VelocityConstraintPoint* b2VelocityConstraintPoint_instance = (b2VelocityConstraintPoint*)(nativeData);
//	b2VelocityConstraintPoint_instance->normalMass= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2VelocityConstraintPoint_getter_normalMass(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2VelocityConstraintPoint* b2VelocityConstraintPoint_instance = (b2VelocityConstraintPoint*)(nativeData);
	//return b2VelocityConstraintPoint_instance->normalMass;
	FREObject result;
	return result;
}

 
FREObject ane_b2VelocityConstraintPoint_setter_tangentMass(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2VelocityConstraintPoint* b2VelocityConstraintPoint_instance = (b2VelocityConstraintPoint*)(nativeData);
//	b2VelocityConstraintPoint_instance->tangentMass= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2VelocityConstraintPoint_getter_tangentMass(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2VelocityConstraintPoint* b2VelocityConstraintPoint_instance = (b2VelocityConstraintPoint*)(nativeData);
	//return b2VelocityConstraintPoint_instance->tangentMass;
	FREObject result;
	return result;
}

 
FREObject ane_b2VelocityConstraintPoint_setter_velocityBias(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2VelocityConstraintPoint* b2VelocityConstraintPoint_instance = (b2VelocityConstraintPoint*)(nativeData);
//	b2VelocityConstraintPoint_instance->velocityBias= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2VelocityConstraintPoint_getter_velocityBias(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2VelocityConstraintPoint* b2VelocityConstraintPoint_instance = (b2VelocityConstraintPoint*)(nativeData);
	//return b2VelocityConstraintPoint_instance->velocityBias;
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2VELOCITYCONSTRAINTPOINT_H_ */
