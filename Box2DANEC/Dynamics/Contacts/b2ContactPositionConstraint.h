/*================================================================================
*
* File Name: b2ContactPositionConstraint.h
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

#ifndef BOX2DANE_C_B2CONTACTPOSITIONCONSTRAINT_H_
#define BOX2DANE_C_B2CONTACTPOSITIONCONSTRAINT_H_

//Convenience functions for generating a new AS3 class instance of b2ContactPositionConstraint
FREResult FRENewObjectFromb2ContactPositionConstraint(b2ContactPositionConstraint* obj, FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[1];
	FREGetPointerAsString((void*)obj, &memAddress);
	constructorArguments[0] = memAddress;
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.dynamics.contacts.b2ContactPositionConstraint";

	FREResult objInitResult = FRENewObject(className, 1, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2ContactPositionConstraint object in function FRENewObjectFromb2ContactPositionConstraint");
	}

	return objInitResult;
}

FREResult FRENewb2ContactPositionConstraint(FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[0];
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.dynamics.contacts.b2ContactPositionConstraint";

	FREResult objInitResult = FRENewObject(className, 0, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2ContactPositionConstraint object in function FRENewb2ContactPositionConstraint");
	}

	return objInitResult;
}
//

FREObject ane_b2ContactPositionConstraint_setter_localPoints(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactPositionConstraint* b2ContactVelocityConstraint_instance = (b2ContactPositionConstraint*)(nativeData);
//	b2ContactVelocityConstraint_instance->localPoints= ...;
	FREObject result;
	return result;
}


FREObject ane_b2ContactPositionConstraint_getter_localPoints(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactPositionConstraint* b2ContactVelocityConstraint_instance = (b2ContactPositionConstraint*)(nativeData);
	//return b2ContactVelocityConstraint_instance->localPoints;
	FREObject result;
	return result;
}

FREObject ane_b2ContactPositionConstraint_setter_localNormal(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactPositionConstraint* b2ContactVelocityConstraint_instance = (b2ContactPositionConstraint*)(nativeData);
//	b2ContactVelocityConstraint_instance->localNormal= ...;
	FREObject result;
	return result;
}


FREObject ane_b2ContactPositionConstraint_getter_localNormal(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactPositionConstraint* b2ContactVelocityConstraint_instance = (b2ContactPositionConstraint*)(nativeData);
	//return b2ContactVelocityConstraint_instance->localNormal;
	FREObject result;
	return result;
}

FREObject ane_b2ContactPositionConstraint_setter_localPoint(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactPositionConstraint* b2ContactVelocityConstraint_instance = (b2ContactPositionConstraint*)(nativeData);
//	b2ContactVelocityConstraint_instance->localPoint= ...;
	FREObject result;
	return result;
}


FREObject ane_b2ContactPositionConstraint_getter_localPoint(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactPositionConstraint* b2ContactVelocityConstraint_instance = (b2ContactPositionConstraint*)(nativeData);
	//return b2ContactVelocityConstraint_instance->localPoint;
	FREObject result;
	return result;
}

FREObject ane_b2ContactPositionConstraint_setter_indexA(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactPositionConstraint* b2ContactVelocityConstraint_instance = (b2ContactPositionConstraint*)(nativeData);
//	b2ContactVelocityConstraint_instance->indexA= ...;
	FREObject result;
	return result;
}


FREObject ane_b2ContactPositionConstraint_getter_indexA(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactPositionConstraint* b2ContactVelocityConstraint_instance = (b2ContactPositionConstraint*)(nativeData);
	//return b2ContactVelocityConstraint_instance->indexA;
	FREObject result;
	return result;
}

FREObject ane_b2ContactPositionConstraint_setter_indexB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactPositionConstraint* b2ContactVelocityConstraint_instance = (b2ContactPositionConstraint*)(nativeData);
//	b2ContactVelocityConstraint_instance->indexB= ...;
	FREObject result;
	return result;
}


FREObject ane_b2ContactPositionConstraint_getter_indexB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactPositionConstraint* b2ContactVelocityConstraint_instance = (b2ContactPositionConstraint*)(nativeData);
	//return b2ContactVelocityConstraint_instance->indexB;
	FREObject result;
	return result;
}

FREObject ane_b2ContactPositionConstraint_setter_invMassA(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactPositionConstraint* b2ContactVelocityConstraint_instance = (b2ContactPositionConstraint*)(nativeData);
//	b2ContactVelocityConstraint_instance->invMassA= ...;
	FREObject result;
	return result;
}


FREObject ane_b2ContactPositionConstraint_getter_invMassA(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactPositionConstraint* b2ContactVelocityConstraint_instance = (b2ContactPositionConstraint*)(nativeData);
	//return b2ContactVelocityConstraint_instance->invMassA;
	FREObject result;
	return result;
}

FREObject ane_b2ContactPositionConstraint_setter_invMassB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactPositionConstraint* b2ContactVelocityConstraint_instance = (b2ContactPositionConstraint*)(nativeData);
//	b2ContactVelocityConstraint_instance->invMassB= ...;
	FREObject result;
	return result;
}


FREObject ane_b2ContactPositionConstraint_getter_invMassB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactPositionConstraint* b2ContactVelocityConstraint_instance = (b2ContactPositionConstraint*)(nativeData);
	//return b2ContactVelocityConstraint_instance->invMassB;
	FREObject result;
	return result;
}

FREObject ane_b2ContactPositionConstraint_setter_localCenterA(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactPositionConstraint* b2ContactVelocityConstraint_instance = (b2ContactPositionConstraint*)(nativeData);
//	b2ContactVelocityConstraint_instance->localCenterA= ...;
	FREObject result;
	return result;
}


FREObject ane_b2ContactPositionConstraint_getter_localCenterA(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactPositionConstraint* b2ContactVelocityConstraint_instance = (b2ContactPositionConstraint*)(nativeData);
	//return b2ContactVelocityConstraint_instance->localCenterA;
	FREObject result;
	return result;
}

FREObject ane_b2ContactPositionConstraint_setter_localCenterB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactPositionConstraint* b2ContactVelocityConstraint_instance = (b2ContactPositionConstraint*)(nativeData);
//	b2ContactVelocityConstraint_instance->localCenterB= ...;
	FREObject result;
	return result;
}


FREObject ane_b2ContactPositionConstraint_getter_localCenterB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactPositionConstraint* b2ContactVelocityConstraint_instance = (b2ContactPositionConstraint*)(nativeData);
	//return b2ContactVelocityConstraint_instance->localCenterB;
	FREObject result;
	return result;
}

FREObject ane_b2ContactPositionConstraint_setter_invIA(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactPositionConstraint* b2ContactVelocityConstraint_instance = (b2ContactPositionConstraint*)(nativeData);
//	b2ContactVelocityConstraint_instance->invIA= ...;
	FREObject result;
	return result;
}


FREObject ane_b2ContactPositionConstraint_getter_invIA(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactPositionConstraint* b2ContactVelocityConstraint_instance = (b2ContactPositionConstraint*)(nativeData);
	//return b2ContactVelocityConstraint_instance->invIA;
	FREObject result;
	return result;
}

FREObject ane_b2ContactPositionConstraint_setter_invIB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactPositionConstraint* b2ContactVelocityConstraint_instance = (b2ContactPositionConstraint*)(nativeData);
//	b2ContactVelocityConstraint_instance->invIB= ...;
	FREObject result;
	return result;
}


FREObject ane_b2ContactPositionConstraint_getter_invIB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactPositionConstraint* b2ContactVelocityConstraint_instance = (b2ContactPositionConstraint*)(nativeData);
	//return b2ContactVelocityConstraint_instance->invIB;
	FREObject result;
	return result;
}

FREObject ane_b2ContactPositionConstraint_setter_type(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactPositionConstraint* b2ContactVelocityConstraint_instance = (b2ContactPositionConstraint*)(nativeData);
//	b2ContactVelocityConstraint_instance->type= ...;
	FREObject result;
	return result;
}


FREObject ane_b2ContactPositionConstraint_getter_type(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactPositionConstraint* b2ContactVelocityConstraint_instance = (b2ContactPositionConstraint*)(nativeData);
	//return b2ContactVelocityConstraint_instance->type;
	FREObject result;
	return result;
}

FREObject ane_b2ContactPositionConstraint_setter_radiusA(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactPositionConstraint* b2ContactVelocityConstraint_instance = (b2ContactPositionConstraint*)(nativeData);
//	b2ContactVelocityConstraint_instance->radiusA= ...;
	FREObject result;
	return result;
}


FREObject ane_b2ContactPositionConstraint_getter_radiusA(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactPositionConstraint* b2ContactVelocityConstraint_instance = (b2ContactPositionConstraint*)(nativeData);
	//return b2ContactVelocityConstraint_instance->radiusA;
	FREObject result;
	return result;
}

FREObject ane_b2ContactPositionConstraint_setter_radiusB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactPositionConstraint* b2ContactVelocityConstraint_instance = (b2ContactPositionConstraint*)(nativeData);
//	b2ContactVelocityConstraint_instance->radiusB= ...;
	FREObject result;
	return result;
}


FREObject ane_b2ContactPositionConstraint_getter_radiusB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactPositionConstraint* b2ContactVelocityConstraint_instance = (b2ContactPositionConstraint*)(nativeData);
	//return b2ContactVelocityConstraint_instance->radiusB;
	FREObject result;
	return result;
}

FREObject ane_b2ContactPositionConstraint_setter_pointCount(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactPositionConstraint* b2ContactVelocityConstraint_instance = (b2ContactPositionConstraint*)(nativeData);
//	b2ContactVelocityConstraint_instance->pointCount= ...;
	FREObject result;
	return result;
}


FREObject ane_b2ContactPositionConstraint_getter_pointCount(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactPositionConstraint* b2ContactVelocityConstraint_instance = (b2ContactPositionConstraint*)(nativeData);
	//return b2ContactVelocityConstraint_instance->pointCount;
	FREObject result;
	return result;
}

#endif /* B2CONTACTPOSITIONCONSTRAINT_H_ */
