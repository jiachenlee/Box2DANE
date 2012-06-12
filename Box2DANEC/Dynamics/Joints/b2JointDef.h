/*================================================================================
*
* File Name: b2JointDef.h
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

#ifndef BOX2DANE_C_B2JOINTDEF_H_
#define BOX2DANE_C_B2JOINTDEF_H_

//Convenience functions for generating a new AS3 class instance of b2JointDef
FREResult FRENewObjectFromb2JointDef(b2JointDef* obj, FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[1];
	FREGetPointerAsString((void*)obj, &memAddress);
	constructorArguments[0] = memAddress;
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.dynamics.joints.b2JointDef";

	FREResult objInitResult = FRENewObject(className, 1, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2JointDef object in function FRENewObjectFromb2JointDef");
	}

	return objInitResult;
}

FREResult FRENewb2JointDef(FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[0];
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.dynamics.joints.b2JointDef";

	FREResult objInitResult = FRENewObject(className, 0, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2JointDef object in function FRENewb2JointDef");
	}

	return objInitResult;
}
//

FREObject ane_b2JointDef_constructor_b2JointDef(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2JointDef* b2JointDef_instance = (b2JointDef*)(nativeData);
//	b2JointDef_instance->b2JointDef(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2JointDef_setter_type(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2JointDef* b2JointDef_instance = (b2JointDef*)(nativeData);
//	b2JointDef_instance->type= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2JointDef_getter_type(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2JointDef* b2JointDef_instance = (b2JointDef*)(nativeData);
	//return b2JointDef_instance->type;
	FREObject result;
	return result;
}

 
FREObject ane_b2JointDef_setter_userData(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2JointDef* b2JointDef_instance = (b2JointDef*)(nativeData);
//	b2JointDef_instance->userData= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2JointDef_getter_userData(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2JointDef* b2JointDef_instance = (b2JointDef*)(nativeData);
	//return b2JointDef_instance->userData;
	FREObject result;
	return result;
}

 
FREObject ane_b2JointDef_setter_bodyA(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2JointDef* b2JointDef_instance = (b2JointDef*)(nativeData);
//	b2JointDef_instance->bodyA= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2JointDef_getter_bodyA(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2JointDef* b2JointDef_instance = (b2JointDef*)(nativeData);
	//return b2JointDef_instance->bodyA;
	FREObject result;
	return result;
}

 
FREObject ane_b2JointDef_setter_bodyB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2JointDef* b2JointDef_instance = (b2JointDef*)(nativeData);
//	b2JointDef_instance->bodyB= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2JointDef_getter_bodyB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2JointDef* b2JointDef_instance = (b2JointDef*)(nativeData);
	//return b2JointDef_instance->bodyB;
	FREObject result;
	return result;
}

 
FREObject ane_b2JointDef_setter_collideConnected(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2JointDef* b2JointDef_instance = (b2JointDef*)(nativeData);
//	b2JointDef_instance->collideConnected= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2JointDef_getter_collideConnected(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2JointDef* b2JointDef_instance = (b2JointDef*)(nativeData);
	//return b2JointDef_instance->collideConnected;
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2JOINTDEF_H_ */
