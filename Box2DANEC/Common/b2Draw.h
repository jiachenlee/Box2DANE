/*================================================================================
*
* File Name: b2Draw.h
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

#ifndef BOX2DANE_C_B2DRAW_H_
#define BOX2DANE_C_B2DRAW_H_

//Convenience functions for generating a new AS3 class instance of b2Draw
FREResult FRENewObjectFromb2Draw(b2Draw* obj, FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[1];
	FREGetPointerAsString((void*)obj, &memAddress);
	constructorArguments[0] = memAddress;
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.common.b2Draw";

	FREResult objInitResult = FRENewObject(className, 1, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2Draw object in function FRENewObjectFromb2Draw");
	}

	return objInitResult;
}

FREResult FRENewb2Draw(FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[0];
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.common.b2Draw";

	FREResult objInitResult = FRENewObject(className, 0, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2Draw object in function FRENewb2Draw");
	}

	return objInitResult;
}
//

FREObject ane_b2Draw_constructor_b2Draw(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Draw* b2Draw_instance = (b2Draw*)(nativeData);
//	b2Draw_instance->b2Draw(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Draw_callback_SetFlags(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Draw* b2Draw_instance = (b2Draw*)(nativeData);
//	b2Draw_instance->SetFlags(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Draw_callback_GetFlags(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Draw* b2Draw_instance = (b2Draw*)(nativeData);
//	b2Draw_instance->GetFlags(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Draw_callback_AppendFlags(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Draw* b2Draw_instance = (b2Draw*)(nativeData);
//	b2Draw_instance->AppendFlags(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Draw_callback_ClearFlags(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Draw* b2Draw_instance = (b2Draw*)(nativeData);
//	b2Draw_instance->ClearFlags(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Draw_callback_DrawPolygon(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Draw* b2Draw_instance = (b2Draw*)(nativeData);
//	b2Draw_instance->DrawPolygon(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Draw_callback_DrawSolidPolygon(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Draw* b2Draw_instance = (b2Draw*)(nativeData);
//	b2Draw_instance->DrawSolidPolygon(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Draw_callback_DrawCircle(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Draw* b2Draw_instance = (b2Draw*)(nativeData);
//	b2Draw_instance->DrawCircle(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Draw_callback_DrawSolidCircle(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Draw* b2Draw_instance = (b2Draw*)(nativeData);
//	b2Draw_instance->DrawSolidCircle(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Draw_callback_DrawSegment(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Draw* b2Draw_instance = (b2Draw*)(nativeData);
//	b2Draw_instance->DrawSegment(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2Draw_callback_DrawTransform(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2Draw* b2Draw_instance = (b2Draw*)(nativeData);
//	b2Draw_instance->DrawTransform(...);
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2DRAW_H_ */
