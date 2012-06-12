/*================================================================================
*
* File Name: b2JointEdge.h
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

#ifndef BOX2DANE_C_B2JOINTEDGE_H_
#define BOX2DANE_C_B2JOINTEDGE_H_

//Convenience functions for generating a new AS3 class instance of b2JointEdge
FREResult FRENewObjectFromb2JointEdge(b2JointEdge* obj, FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[1];
	FREGetPointerAsString((void*)obj, &memAddress);
	constructorArguments[0] = memAddress;
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.dynamics.joints.b2JointEdge";

	FREResult objInitResult = FRENewObject(className, 1, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2JointEdge object in function FRENewObjectFromb2JointEdge");
	}

	return objInitResult;
}

FREResult FRENewb2JointEdge(FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[0];
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.dynamics.joints.b2JointEdge";

	FREResult objInitResult = FRENewObject(className, 0, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2JointEdge object in function FRENewb2JointEdge");
	}

	return objInitResult;
}
//

FREObject ane_b2JointEdge_setter_other(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2JointEdge* b2JointEdge_instance = (b2JointEdge*)(nativeData);
//	b2JointEdge_instance->other= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2JointEdge_getter_other(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2JointEdge* b2JointEdge_instance = (b2JointEdge*)(nativeData);
	//return b2JointEdge_instance->other;
	FREObject result;
	return result;
}

 
FREObject ane_b2JointEdge_setter_joint(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2JointEdge* b2JointEdge_instance = (b2JointEdge*)(nativeData);
//	b2JointEdge_instance->joint= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2JointEdge_getter_joint(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2JointEdge* b2JointEdge_instance = (b2JointEdge*)(nativeData);
	//return b2JointEdge_instance->joint;
	FREObject result;
	return result;
}

 
FREObject ane_b2JointEdge_setter_prev(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2JointEdge* b2JointEdge_instance = (b2JointEdge*)(nativeData);
//	b2JointEdge_instance->prev= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2JointEdge_getter_prev(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2JointEdge* b2JointEdge_instance = (b2JointEdge*)(nativeData);
	//return b2JointEdge_instance->prev;
	FREObject result;
	return result;
}

 
FREObject ane_b2JointEdge_setter_next(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2JointEdge* b2JointEdge_instance = (b2JointEdge*)(nativeData);
//	b2JointEdge_instance->next= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2JointEdge_getter_next(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2JointEdge* b2JointEdge_instance = (b2JointEdge*)(nativeData);
	//return b2JointEdge_instance->next;
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2JOINTEDGE_H_ */
