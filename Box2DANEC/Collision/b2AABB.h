/*================================================================================
*
* File Name: b2AABB.h
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

#ifndef BOX2DANE_C_B2AABB_H_
#define BOX2DANE_C_B2AABB_H_


FREObject ane_b2AABB_callback_IsValid(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2AABB* b2AABB_instance = (b2AABB*)(nativeData);

	FREObject isValid;
	FRENewObjectFromBool(b2AABB_instance->IsValid(), &isValid);
	return isValid;
}

 
FREObject ane_b2AABB_callback_GetCenter(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2AABB* b2AABB_instance = (b2AABB*)(nativeData);

	b2Vec2* center = new b2Vec2(b2AABB_instance->GetCenter());

	/*	Create a new b2Vec2 AS3 instance */

	//AS3 b2Vec2 constructor arguments
	FREObject valueX, valueY, b2Vec2MemAddress, b2Vec2AS3Object, initException;
	FREObject constructorArguments[3];
	FRENewObjectFromInt32(0, &valueX);
	FRENewObjectFromInt32(0, &valueY);
	FRENewObjectFromUTF8Pointer((void*)center, &b2Vec2MemAddress);
	constructorArguments[0] = valueX;
	constructorArguments[1] = valueY;
	constructorArguments[2] = b2Vec2MemAddress;
	//

	const uint8_t* className = (const uint8_t*)("ca.digitalarchitect.box2dane.common.b2Vec2");

	FREResult objInitResult = FRENewObject(className, 3, constructorArguments, &b2Vec2AS3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2Vec2 object in function ane_b2AABB_callback_GetCenter");
	}
	/*	End Create a new b2Vec2 AS3 instance */

	return b2Vec2AS3Object;
}

 
FREObject ane_b2AABB_callback_GetExtents(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2AABB* b2AABB_instance = (b2AABB*)(nativeData);

	b2Vec2* getExtents = new b2Vec2(b2AABB_instance->GetExtents());

	/*	Create a new b2Vec2 AS3 instance */

	//AS3 b2Vec2 constructor arguments
	FREObject valueX, valueY, b2Vec2MemAddress, b2Vec2AS3Object, initException;
	FREObject constructorArguments[3];
	FRENewObjectFromInt32(0, &valueX);
	FRENewObjectFromInt32(0, &valueY);
	FRENewObjectFromUTF8Pointer((void*)getExtents, &b2Vec2MemAddress);
	constructorArguments[0] = valueX;
	constructorArguments[1] = valueY;
	constructorArguments[2] = b2Vec2MemAddress;
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.common.b2Vec2";

	FREResult objInitResult = FRENewObject(className, 3, constructorArguments, &b2Vec2AS3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2Vec2 object in function ane_b2AABB_callback_GetExtents");
	}
	/*	End Create a new b2Vec2 AS3 instance */

	return b2Vec2AS3Object;
}

 
FREObject ane_b2AABB_callback_GetPerimeter(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2AABB* b2AABB_instance = (b2AABB*)(nativeData);

	FREObject perimeter;
	FREResult objInitResult = FRENewObjectFromDouble(b2AABB_instance->GetPerimeter(), &perimeter);

	if(objInitResult != FRE_OK) {
		FREError("Error creating Number object in function ane_b2AABB_callback_GetPerimeter");
	}

	return perimeter;
}

 
FREObject ane_b2AABB_callback_Combine(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2AABB* b2AABB_instance = (b2AABB*)(nativeData);

	//We expect 1 argument here
	if(argc == 1) {
		//Here we pull the native address from the second instance of b2AAB and cast it
		void* secondAABBNativeInstance = FREGetNativeInstancePointer(argv[0]);
		b2AABB* b2AABB_instance2 = (b2AABB*)(secondAABBNativeInstance);

		b2AABB_instance->Combine(*b2AABB_instance2);
	}else{
		FREError("Error: Did not recieve correct number of arguments in function ane_b2AABB_callback_Combine");
	}
	//

	FREObject result;
	return result;
}

 
FREObject ane_b2AABB_callback_Contains(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2AABB* b2AABB_instance = (b2AABB*)(nativeData);

	FREObject contains;
	bool doesContain = false;

	//We expect 1 argument here
	if(argc == 1) {
		//Here we pull the native address from the second instance of b2AAB and cast it
		void* secondAABBNativeInstance = FREGetNativeInstancePointer(argv[0]);
		b2AABB* b2AABB_instance2 = (b2AABB*)(secondAABBNativeInstance);

		doesContain = b2AABB_instance->Contains(*b2AABB_instance2);
	}else{
		FREError("Error: Did not recieve correct number of arguments in function ane_b2AABB_callback_Contains");
	}
	//

	FREResult createBoolResult = FRENewObjectFromBool(doesContain, &contains);

	if(createBoolResult != FRE_OK) {
		FREError("Error creating Boolean return value in function ane_b2AABB_callback_Contains");
	}

	return contains;
}

 
FREObject ane_b2AABB_callback_RayCast(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2AABB* b2AABB_instance = (b2AABB*)(nativeData);

	bool raycastResultBool = false;
	FREObject raycastResult;

	//We expect 2 arguments here
	if(argc == 2) {
		void* raycastInputInstance = FREGetNativeInstancePointer(argv[0]);
		void* raycastOutputInstance = FREGetNativeInstancePointer(argv[1]);

		b2RayCastInput* b2RayCastOutput_input = (b2RayCastInput*)raycastInputInstance;
		b2RayCastOutput* b2RayCastOutput_output = (b2RayCastOutput*)raycastOutputInstance;

		raycastResultBool = b2AABB_instance->RayCast(b2RayCastOutput_output, *b2RayCastOutput_input);
	}else{
		FREError("Error: Did not recieve correct number of arguments in function ane_b2AABB_callback_RayCast");
	}
	//

	FREResult createBoolResult = FRENewObjectFromBool(raycastResultBool, &raycastResult);

	if(createBoolResult != FRE_OK) {
		FREError("Error creating Boolean return value in function ane_b2AABB_callback_RayCast");
	}

	return raycastResult;
}

 
FREObject ane_b2AABB_setter_lowerBound(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2AABB* b2AABB_instance = (b2AABB*)(nativeData);

	//We expect 1 argument here
	if(argc == 1){
		void* lowerBoundb2Vec2Instance = FREGetNativeInstancePointer(argv[0]);
		b2Vec2* lowerBound = (b2Vec2*)lowerBoundb2Vec2Instance;

		b2AABB_instance->lowerBound = *lowerBound;
	}else{
		FREError("Error: Did not recieve correct number of arguments in function ane_b2AABB_setter_lowerBound");
	}
	//

	FREObject result;
	return result;
}

 
FREObject ane_b2AABB_getter_lowerBound(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2AABB* b2AABB_instance = (b2AABB*)(nativeData);

	/* This getter function can work one of two ways. It can either accept a single parameter which
	 * is an AS3 b2Vec2 instance, from which we will retrive the native b2Vec2 and assign it to the
	 * value of b2AABB_instance->lowerBound. OR, if no argument is received, it means we need to create
	 * a new b2Vec2 instance, set it equal to b2AABB_instance->lowerBound and return it.
	 */

	FREObject lowerBoundAS3Object;

	if(argc == 1) {
		/* An instance has been supplied. Update it */
		lowerBoundAS3Object = argv[0];
		void* lowerBoundb2Vec2Instance = FREGetNativeInstancePointer(lowerBoundAS3Object);
		b2Vec2* lowerBound = (b2Vec2*)lowerBoundb2Vec2Instance;
		*lowerBound = b2AABB_instance->lowerBound;
	}else{
		/*	Create a new b2Vec2 AS3 instance */

		b2Vec2* lowerBound = new b2Vec2(b2AABB_instance->lowerBound);

		//AS3 b2Vec2 constructor arguments
		FREObject valueX, valueY, b2Vec2MemAddress, b2Vec2AS3Object, initException;
		FREObject constructorArguments[3];
		FRENewObjectFromInt32(0, &valueX);
		FRENewObjectFromInt32(0, &valueY);
		FRENewObjectFromUTF8Pointer((void*)lowerBound, &b2Vec2MemAddress);
		constructorArguments[0] = valueX;
		constructorArguments[1] = valueY;
		constructorArguments[2] = b2Vec2MemAddress;
		//

		const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.common.b2Vec2";

		FREResult objInitResult = FRENewObject(className, 3, constructorArguments, &b2Vec2AS3Object, &initException);

		if(objInitResult != FRE_OK) {
			FREError("Error creating b2Vec2 object in function ane_b2AABB_getter_lowerBound");
		}
		/*	End Create a new b2Vec2 AS3 instance */

		lowerBoundAS3Object = b2Vec2AS3Object;
	}

	return lowerBoundAS3Object;
}

 
FREObject ane_b2AABB_setter_upperBound(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2AABB* b2AABB_instance = (b2AABB*)(nativeData);

	//We expect 1 argument here
	if(argc == 1){
		void* upperBoundb2Vec2Instance = FREGetNativeInstancePointer(argv[0]);
		b2Vec2* upperBound = (b2Vec2*)upperBoundb2Vec2Instance;

		b2AABB_instance->upperBound = *upperBound;
	}else{
		FREError("Error: Did not recieve correct number of arguments in function ane_b2AABB_setter_upperBound");
	}
	//

	FREObject result;
	return result;
}

 
FREObject ane_b2AABB_getter_upperBound(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2AABB* b2AABB_instance = (b2AABB*)(nativeData);

	/* This getter function can work one of two ways. It can either accept a single parameter which
	 * is an AS3 b2Vec2 instance, from which we will retrive the native b2Vec2 and assign it to the
	 * value of b2AABB_instance->upperBound. OR, if no argument is received, it means we need to create
	 * a new b2Vec2 instance, set it equal to b2AABB_instance->upperBound and return it.
	 */

	FREObject upperBoundAS3Object;

	if(argc == 1) {
		/* An instance has been supplied. Update it */
		upperBoundAS3Object = argv[0];
		void* upperBoundb2Vec2Instance = FREGetNativeInstancePointer(upperBoundAS3Object);
		b2Vec2* upperBound = (b2Vec2*)upperBoundb2Vec2Instance;
		*upperBound = b2AABB_instance->upperBound;
	}else{
		/*	Create a new b2Vec2 AS3 instance */

		b2Vec2* upperBound = new b2Vec2(b2AABB_instance->upperBound);

		//AS3 b2Vec2 constructor arguments
		FREObject valueX, valueY, b2Vec2MemAddress, b2Vec2AS3Object, initException;
		FREObject constructorArguments[3];
		FRENewObjectFromInt32(0, &valueX);
		FRENewObjectFromInt32(0, &valueY);
		FRENewObjectFromUTF8Pointer((void*)upperBound, &b2Vec2MemAddress);
		constructorArguments[0] = valueX;
		constructorArguments[1] = valueY;
		constructorArguments[2] = b2Vec2MemAddress;
		//

		const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.common.b2Vec2";

		FREResult objInitResult = FRENewObject(className, 3, constructorArguments, &b2Vec2AS3Object, &initException);

		if(objInitResult != FRE_OK) {
			FREError("Error creating b2Vec2 object in function ane_b2AABB_getter_upperBound");
		}
		/*	End Create a new b2Vec2 AS3 instance */

		upperBoundAS3Object = b2Vec2AS3Object;
	}

	return upperBoundAS3Object;
}

 
#endif /* BOX2DANE_C_B2AABB_H_ */
