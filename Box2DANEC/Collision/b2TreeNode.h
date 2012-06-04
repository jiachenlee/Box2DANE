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
