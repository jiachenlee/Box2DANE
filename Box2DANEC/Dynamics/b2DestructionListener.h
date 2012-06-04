/*================================================================================
*
* File Name: b2DestructionListener.h
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

#ifndef BOX2DANE_C_B2DESTRUCTIONLISTENER_H_
#define BOX2DANE_C_B2DESTRUCTIONLISTENER_H_




FREObject ane_b2DestructionListener_callback_SayGoodbye(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2DestructionListener* b2DestructionListener_instance = (b2DestructionListener*)(nativeData);
//	b2DestructionListener_instance->SayGoodbye(...);
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2DESTRUCTIONLISTENER_H_ */
