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
	FRENewObjectFromUTF8((void*)center, &b2Vec2MemAddress);
	constructorArguments[0] = valueX;
	constructorArguments[1] = valueY;
	constructorArguments[2] = b2Vec2MemAddress;
	//

	const uint8_t* className = "ca.digitalarchitect.box2dane.common.b2Vec2";

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

	b2Vec2* center = new b2Vec2(b2AABB_instance->GetExtents());

	/*	Create a new b2Vec2 AS3 instance */

	//AS3 b2Vec2 constructor arguments
	FREObject valueX, valueY, b2Vec2MemAddress, b2Vec2AS3Object, initException;
	FREObject constructorArguments[3];
	FRENewObjectFromInt32(0, &valueX);
	FRENewObjectFromInt32(0, &valueY);
	FRENewObjectFromUTF8((void*)center, &b2Vec2MemAddress);
	constructorArguments[0] = valueX;
	constructorArguments[1] = valueY;
	constructorArguments[2] = b2Vec2MemAddress;
	//

	const uint8_t* className = "ca.digitalarchitect.box2dane.common.b2Vec2";

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
	FREResult objInitResult = FRENewObjectFromInt32(b2AABB_instance->GetPerimeter(), &perimeter);

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
		FREError("Error: No AS3 class instance supplied to function ane_b2AABB_callback_Combine");
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
		FREError("Error: No AS3 class instance supplied to function ane_b2AABB_callback_Contains");
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

	//We expect 2 arguments here
	if(argc == 2) {

	}else{
		FREError("Error: Did not recieve enough arguments in function ane_b2AABB_callback_RayCast");
	}
	//

//	b2AABB_instance->RayCast(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2AABB_setter_lowerBound(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2AABB* b2AABB_instance = (b2AABB*)(nativeData);
//	b2AABB_instance->lowerBound= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2AABB_getter_lowerBound(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2AABB* b2AABB_instance = (b2AABB*)(nativeData);
	//return b2AABB_instance->lowerBound;
	FREObject result;
	return result;
}

 
FREObject ane_b2AABB_setter_upperBound(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2AABB* b2AABB_instance = (b2AABB*)(nativeData);
//	b2AABB_instance->upperBound= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2AABB_getter_upperBound(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2AABB* b2AABB_instance = (b2AABB*)(nativeData);
	//return b2AABB_instance->upperBound;
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2AABB_H_ */
