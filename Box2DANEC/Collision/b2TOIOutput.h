/*================================================================================
*
* File Name: b2TOIOutput.h
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

#ifndef BOX2DANE_C_B2TOIOUTPUT_H_
#define BOX2DANE_C_B2TOIOUTPUT_H_

//Convenience functions for generating a new AS3 class instance of b2TOIOutput
FREResult FRENewObjectFromb2TOIOutput(b2TOIOutput* obj, FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[1];
	FREGetPointerAsString((void*)obj, &memAddress);
	constructorArguments[0] = memAddress;
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.collision.b2TOIOutput";

	FREResult objInitResult = FRENewObject(className, 1, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2TOIOutput object in function FRENewObjectFromb2TOIOutput");
	}

	return objInitResult;
}

FREResult FRENewb2TOIOutput(FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[0];
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.collision.b2TOIOutput";

	FREResult objInitResult = FRENewObject(className, 0, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2TOIOutput object in function FRENewb2TOIOutput");
	}

	return objInitResult;
}
//

FREObject ane_b2TOIOutput_setter_state(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2TOIOutput* b2TOIOutput_instance = (b2TOIOutput*)(nativeData);
//	b2TOIOutput_instance->state= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2TOIOutput_getter_state(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2TOIOutput* b2TOIOutput_instance = (b2TOIOutput*)(nativeData);
	//return b2TOIOutput_instance->state;
	FREObject result;
	return result;
}

 
FREObject ane_b2TOIOutput_setter_t(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2TOIOutput* b2TOIOutput_instance = (b2TOIOutput*)(nativeData);
//	b2TOIOutput_instance->t= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2TOIOutput_getter_t(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2TOIOutput* b2TOIOutput_instance = (b2TOIOutput*)(nativeData);
	//return b2TOIOutput_instance->t;
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2TOIOUTPUT_H_ */
