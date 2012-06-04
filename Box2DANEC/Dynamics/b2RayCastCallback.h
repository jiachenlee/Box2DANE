/*================================================================================
*
* File Name: b2RayCastCallback.h
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

#ifndef BOX2DANE_C_B2RAYCASTCALLBACK_H_
#define BOX2DANE_C_B2RAYCASTCALLBACK_H_




FREObject ane_b2RayCastCallback_callback_ReportFixture(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2RayCastCallback* b2RayCastCallback_instance = (b2RayCastCallback*)(nativeData);
//	b2RayCastCallback_instance->ReportFixture(...);
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2RAYCASTCALLBACK_H_ */
