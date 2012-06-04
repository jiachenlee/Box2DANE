/*================================================================================
*
* File Name: b2ContactManager.h
* Created on: Mon May 7 22:46:25 GMT-0400 2012
* Copyright (�) 2012 Jesse Nicholson. All Rights Reserved.
* 
*
*                       ***** BEGIN LICENSE BLOCK *****
* This Source Code Form is subject to the terms of the Mozilla Public
* License, v. 2.0. If a copy of the MPL was not distributed with this file,
* You can obtain one at http://mozilla.org/MPL/2.0/.
*                       ***** END  LICENSE  BLOCK *****
*===============================================================================*/

#ifndef BOX2DANE_C_B2CONTACTMANAGER_H_
#define BOX2DANE_C_B2CONTACTMANAGER_H_




FREObject ane_b2ContactManager_constructor_b2ContactManager(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactManager* b2ContactManager_instance = (b2ContactManager*)(nativeData);
//	b2ContactManager_instance->b2ContactManager(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactManager_callback_AddPair(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactManager* b2ContactManager_instance = (b2ContactManager*)(nativeData);
//	b2ContactManager_instance->AddPair(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactManager_callback_FindNewContacts(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactManager* b2ContactManager_instance = (b2ContactManager*)(nativeData);
//	b2ContactManager_instance->FindNewContacts(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactManager_callback_Destroy(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactManager* b2ContactManager_instance = (b2ContactManager*)(nativeData);
//	b2ContactManager_instance->Destroy(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactManager_callback_Collide(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactManager* b2ContactManager_instance = (b2ContactManager*)(nativeData);
//	b2ContactManager_instance->Collide(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactManager_setter_m_broadPhase(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactManager* b2ContactManager_instance = (b2ContactManager*)(nativeData);
//	b2ContactManager_instance->m_broadPhase= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactManager_getter_m_broadPhase(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactManager* b2ContactManager_instance = (b2ContactManager*)(nativeData);
	//return b2ContactManager_instance->m_broadPhase;
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactManager_setter_m_contactList(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactManager* b2ContactManager_instance = (b2ContactManager*)(nativeData);
//	b2ContactManager_instance->m_contactList= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactManager_getter_m_contactList(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactManager* b2ContactManager_instance = (b2ContactManager*)(nativeData);
	//return b2ContactManager_instance->m_contactList;
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactManager_setter_m_contactCount(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactManager* b2ContactManager_instance = (b2ContactManager*)(nativeData);
//	b2ContactManager_instance->m_contactCount= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactManager_getter_m_contactCount(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactManager* b2ContactManager_instance = (b2ContactManager*)(nativeData);
	//return b2ContactManager_instance->m_contactCount;
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactManager_setter_m_contactFilter(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactManager* b2ContactManager_instance = (b2ContactManager*)(nativeData);
//	b2ContactManager_instance->m_contactFilter= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactManager_getter_m_contactFilter(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactManager* b2ContactManager_instance = (b2ContactManager*)(nativeData);
	//return b2ContactManager_instance->m_contactFilter;
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactManager_setter_m_contactListener(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactManager* b2ContactManager_instance = (b2ContactManager*)(nativeData);
//	b2ContactManager_instance->m_contactListener= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactManager_getter_m_contactListener(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactManager* b2ContactManager_instance = (b2ContactManager*)(nativeData);
	//return b2ContactManager_instance->m_contactListener;
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactManager_setter_m_allocator(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactManager* b2ContactManager_instance = (b2ContactManager*)(nativeData);
//	b2ContactManager_instance->m_allocator= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2ContactManager_getter_m_allocator(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ContactManager* b2ContactManager_instance = (b2ContactManager*)(nativeData);
	//return b2ContactManager_instance->m_allocator;
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2CONTACTMANAGER_H_ */
