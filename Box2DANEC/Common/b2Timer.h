/*================================================================================
*
* File Name: b2Timer.h
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

#ifndef BOX2DANE_C_B2TIMER_H_
#define BOX2DANE_C_B2TIMER_H_




FREObject ane_b2Timer_constructor_b2Timer(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Timer* b2Timer_instance = (b2Timer*)(nativeData);
//	b2Timer_instance->b2Timer(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Timer_callback_Reset(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Timer* b2Timer_instance = (b2Timer*)(nativeData);
//	b2Timer_instance->Reset(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Timer_callback_GetMilliseconds(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Timer* b2Timer_instance = (b2Timer*)(nativeData);
//	b2Timer_instance->GetMilliseconds(...);
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2TIMER_H_ */
