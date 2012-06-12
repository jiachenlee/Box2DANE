/*================================================================================
*
* File Name: b2DistanceInput.h
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

#ifndef BOX2DANE_C_B2DISTANCEINPUT_H_
#define BOX2DANE_C_B2DISTANCEINPUT_H_

//Convenience functions for generating a new AS3 class instance of b2DistanceInput
FREResult FRENewObjectFromb2DistanceInput(b2DistanceInput* obj, FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[1];
	FREGetPointerAsString((void*)obj, &memAddress);
	constructorArguments[0] = memAddress;
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.collision.b2DistanceInput";

	FREResult objInitResult = FRENewObject(className, 1, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2DistanceInput object in function FRENewObjectFromb2DistanceInput");
	}

	return objInitResult;
}

FREResult FRENewb2DistanceInput(FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[0];
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.collision.b2DistanceInput";

	FREResult objInitResult = FRENewObject(className, 0, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2DistanceInput object in function FRENewb2DistanceInput");
	}

	return objInitResult;
}
//

FREObject ane_b2DistanceInput_setter_proxyA(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2DistanceInput* b2DistanceInput_instance = (b2DistanceInput*)(nativeData);

	//We expect 1 argument here
	if(argc == 1){
		void* proxyAInstance = FREGetNativeInstancePointer(argv[0]);
		b2DistanceProxy* proxyA = (b2DistanceProxy*)proxyAInstance;

		b2DistanceInput_instance->proxyA = *proxyA;
	}else{
		FREError("Error: Did not recieve correct number of arguments in function ane_b2DistanceInput_setter_proxyA");
	}
	//

	FREObject result;
	return result;
}

 
FREObject ane_b2DistanceInput_getter_proxyA(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2DistanceInput* b2DistanceInput_instance = (b2DistanceInput*)(nativeData);


	FREObject proxyAAS3Object;

	if(argc == 1) {
		/* An instance has been supplied. Update it */
		proxyAAS3Object = argv[0];
		void* proxyAInstance = FREGetNativeInstancePointer(proxyAAS3Object);
		b2DistanceProxy* proxyA = (b2DistanceProxy*)proxyAInstance;
		*proxyA = b2DistanceInput_instance->proxyA;
	}else{
		/*	Create a new b2DistanceProxy AS3 instance */

		b2DistanceProxy* proxyA = new b2DistanceProxy(b2DistanceInput_instance->proxyA);

		//AS3 b2DistanceProxy constructor arguments
		FREObject b2DistanceProxyMemAddress, b2DistanceProxyAS3Object, initException;
		FREObject constructorArguments[1];
		FREGetPointerAsString((void*)proxyA, &b2DistanceProxyMemAddress);
		constructorArguments[0] = b2DistanceProxyMemAddress;
		//

		const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.collision.b2DistanceProxy";

		FREResult objInitResult = FRENewObject(className, 3, constructorArguments, &b2DistanceProxyAS3Object, &initException);

		if(objInitResult != FRE_OK) {
			FREError("Error creating b2DistanceProxy object in function ane_b2DistanceInput_getter_proxyA");
		}
		/*	End Create a new b2DistanceProxy AS3 instance */

		proxyAAS3Object = b2DistanceProxyAS3Object;
	}

	return proxyAAS3Object;
}

 
FREObject ane_b2DistanceInput_setter_proxyB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2DistanceInput* b2DistanceInput_instance = (b2DistanceInput*)(nativeData);

	//We expect 1 argument here
	if(argc == 1){
		void* proxyBInstance = FREGetNativeInstancePointer(argv[0]);
		b2DistanceProxy* proxyB = (b2DistanceProxy*)proxyBInstance;

		b2DistanceInput_instance->proxyB = *proxyB;
	}else{
		FREError("Error: Did not recieve correct number of arguments in function ane_b2DistanceInput_setter_proxyB");
	}

	FREObject result;
	return result;
}

 
FREObject ane_b2DistanceInput_getter_proxyB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2DistanceInput* b2DistanceInput_instance = (b2DistanceInput*)(nativeData);

	FREObject proxyBAS3Object;

	if(argc == 1) {
		/* An instance has been supplied. Update it */
		proxyBAS3Object = argv[0];
		void* proxyBInstance = FREGetNativeInstancePointer(proxyBAS3Object);
		b2DistanceProxy* proxyB = (b2DistanceProxy*)proxyBInstance;
		*proxyB = b2DistanceInput_instance->proxyB;
	}else{
		/*	Create a new b2DistanceProxy AS3 instance */

		b2DistanceProxy* proxyB = new b2DistanceProxy(b2DistanceInput_instance->proxyB);

		//AS3 b2DistanceProxy constructor arguments
		FREObject b2DistanceProxyMemAddress, b2DistanceProxyAS3Object, initException;
		FREObject constructorArguments[1];
		FREGetPointerAsString((void*)proxyB, &b2DistanceProxyMemAddress);
		constructorArguments[0] = b2DistanceProxyMemAddress;
		//

		const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.collision.b2DistanceProxy";

		FREResult objInitResult = FRENewObject(className, 3, constructorArguments, &b2DistanceProxyAS3Object, &initException);

		if(objInitResult != FRE_OK) {
			FREError("Error creating b2DistanceProxy object in function ane_b2DistanceInput_getter_proxyB");
		}
		/*	End Create a new b2DistanceProxy AS3 instance */

		proxyBAS3Object = b2DistanceProxyAS3Object;
	}

	return proxyBAS3Object;
}

 
FREObject ane_b2DistanceInput_setter_transformA(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2DistanceInput* b2DistanceInput_instance = (b2DistanceInput*)(nativeData);

	//We expect 1 argument here
	if(argc == 1){
		void* transformAInstance = FREGetNativeInstancePointer(argv[0]);
		b2Transform* transformA = (b2Transform*)transformAInstance;

		b2DistanceInput_instance->transformA = *transformA;
	}else{
		FREError("Error: Did not recieve correct number of arguments in function ane_b2DistanceInput_setter_transformA");
	}

	FREObject result;
	return result;
}

 
FREObject ane_b2DistanceInput_getter_transformA(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2DistanceInput* b2DistanceInput_instance = (b2DistanceInput*)(nativeData);

	FREObject transformAAS3Object;

	if(argc == 1) {
		/* An instance has been supplied. Update it */
		transformAAS3Object = argv[0];
		void* transformAInstance = FREGetNativeInstancePointer(transformAAS3Object);
		b2Transform* transformA = (b2Transform*)transformAInstance;
		*transformA = b2DistanceInput_instance->transformA;
	}else{
		/*	Create a new b2Transform AS3 instance */

		b2Transform* transformA = new b2Transform(b2DistanceInput_instance->transformA);


		//TODO - Create constructor args for b2Transform AS3
		//AS3 b2Transform constructor arguments
		FREObject b2Vec2position, b2RotRotation, b2TransformMemAddress, b2TransformAS3Object, initException;
		FREObject constructorArguments[3];
		FREGetPointerAsString((void*)transformA, &b2TransformMemAddress);
		constructorArguments[0] = b2TransformMemAddress;
		//

		const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.common.b2Transform";

		FREResult objInitResult = FRENewObject(className, 3, constructorArguments, &b2TransformAS3Object, &initException);

		if(objInitResult != FRE_OK) {
			FREError("Error creating b2Transform object in function ane_b2DistanceInput_getter_transformA");
		}
		/*	End Create a new b2Transform AS3 instance */

		transformAAS3Object = b2TransformAS3Object;
	}

	return transformAAS3Object;
}

 
FREObject ane_b2DistanceInput_setter_transformB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2DistanceInput* b2DistanceInput_instance = (b2DistanceInput*)(nativeData);

	//We expect 1 argument here
	if(argc == 1){
		void* transformBInstance = FREGetNativeInstancePointer(argv[0]);
		b2Transform* transformB = (b2Transform*)transformBInstance;

		b2DistanceInput_instance->transformB = *transformB;
	}else{
		FREError("Error: Did not recieve correct number of arguments in function ane_b2DistanceInput_setter_transformB");
	}

	FREObject result;
	return result;
}

 
FREObject ane_b2DistanceInput_getter_transformB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2DistanceInput* b2DistanceInput_instance = (b2DistanceInput*)(nativeData);


}

 
FREObject ane_b2DistanceInput_setter_useRadii(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2DistanceInput* b2DistanceInput_instance = (b2DistanceInput*)(nativeData);

	//We expect 1 argument here
	if(argc == 1){
		uint32_t useRadii;
		FREGetObjectAsBool(argv[0], &useRadii);

		b2DistanceInput_instance->useRadii = (bool)useRadii;
	}else{
		FREError("Error: Did not recieve correct number of arguments in function ane_b2DistanceInput_getter_useRadii");
	}

	FREObject result;
	return result;
}

 
FREObject ane_b2DistanceInput_getter_useRadii(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2DistanceInput* b2DistanceInput_instance = (b2DistanceInput*)(nativeData);

	FREObject useRadii;
	FREResult useRadiiResult = FRENewObjectFromBool(b2DistanceInput_instance->useRadii, &useRadii);

	if(useRadiiResult != FRE_OK) {
			FREError("Error creating Boolean object in function ane_b2DistanceInput_getter_useRadii");
	}

	return useRadii;
}

 
#endif /* BOX2DANE_C_B2DISTANCEINPUT_H_ */
