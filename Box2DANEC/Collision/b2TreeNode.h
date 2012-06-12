/*================================================================================
*
* File Name: b2TreeNode.h
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

#ifndef BOX2DANE_C_B2TREENODE_H_
#define BOX2DANE_C_B2TREENODE_H_

//Convenience functions for generating a new AS3 class instance of b2TreeNode
FREResult FRENewObjectFromb2TreeNode(b2TreeNode* obj, FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[1];
	FREGetPointerAsString((void*)obj, &memAddress);
	constructorArguments[0] = memAddress;
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.collision.b2TreeNode";

	FREResult objInitResult = FRENewObject(className, 1, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2TreeNode object in function FRENewObjectFromb2TreeNode");
	}

	return objInitResult;
}

FREResult FRENewb2TreeNode(FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[0];
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.collision.b2TreeNode";

	FREResult objInitResult = FRENewObject(className, 0, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2TreeNode object in function FRENewb2TreeNode");
	}

	return objInitResult;
}
//

FREObject ane_b2TreeNode_callback_IsLeaf(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2TreeNode* b2TreeNode_instance = (b2TreeNode*)(nativeData);
//	b2TreeNode_instance->IsLeaf(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2TreeNode_setter_aabb(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2TreeNode* b2TreeNode_instance = (b2TreeNode*)(nativeData);
//	b2TreeNode_instance->aabb= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2TreeNode_getter_aabb(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2TreeNode* b2TreeNode_instance = (b2TreeNode*)(nativeData);
	//return b2TreeNode_instance->aabb;
	FREObject result;
	return result;
}

 
FREObject ane_b2TreeNode_setter_userData(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2TreeNode* b2TreeNode_instance = (b2TreeNode*)(nativeData);
//	b2TreeNode_instance->userData= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2TreeNode_getter_userData(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2TreeNode* b2TreeNode_instance = (b2TreeNode*)(nativeData);
	//return b2TreeNode_instance->userData;
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2TREENODE_H_ */
