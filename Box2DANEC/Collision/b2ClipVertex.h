/*================================================================================
*
* File Name: b2ClipVertex.h
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

#ifndef BOX2DANE_C_B2CLIPVERTEX_H_
#define BOX2DANE_C_B2CLIPVERTEX_H_

//Convenience functions for generating a new AS3 class instance of b2ClipVertex
FREResult FRENewObjectFromb2ClipVertex(b2ClipVertex* obj, FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[1];
	FREGetPointerAsString((void*)obj, &memAddress);
	constructorArguments[0] = memAddress;
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.collision.b2ClipVertex";

	FREResult objInitResult = FRENewObject(className, 1, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2ClipVertex object in function FRENewObjectFromb2ClipVertex");
	}

	return objInitResult;
}

FREResult FRENewb2ClipVertex(FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[0];
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.collision.b2ClipVertex";

	FREResult objInitResult = FRENewObject(className, 0, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2ClipVertex object in function FRENewb2ClipVertex");
	}

	return objInitResult;
}
//

FREObject ane_b2ClipVertex_setter_v(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ClipVertex* b2ClipVertex_instance = (b2ClipVertex*)(nativeData);

	//We expect 1 argument here
	if(argc == 1) {
		void* vb2Vec2Instance = FREGetNativeInstancePointer(argv[0]);
		b2Vec2* v = (b2Vec2*)vb2Vec2Instance;
		b2ClipVertex_instance->v = *v;
	}else{
		FREError("Error: Did not recieve correct number of arguments in function ane_b2ClipVertex_setter_v");
	}
	//

	FREObject result;
	return result;
}

 
FREObject ane_b2ClipVertex_getter_v(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ClipVertex* b2ClipVertex_instance = (b2ClipVertex*)(nativeData);

	/* This getter function can work one of two ways. It can either accept a single parameter which
	 * is an AS3 b2Vec2 instance, from which we will retrive the native b2Vec2 and assign it to the
	 * value of b2ClipVertex_instance->v. OR, if no argument is received, it means we need to create
	 * a new b2Vec2 instance, set it equal to b2ClipVertex_instance->v and return it.
	 */

	FREObject vAS3Object;

	if(argc == 1) {
		/* An instance has been supplied. Update it */
		vAS3Object = argv[0];
		void* vb2Vec2Instance = FREGetNativeInstancePointer(vAS3Object);
		b2Vec2* v = (b2Vec2*)vb2Vec2Instance;
		*v = b2ClipVertex_instance->v;
	}else{
		/*	Create a new b2Vec2 AS3 instance */

		b2Vec2* v = new b2Vec2(b2ClipVertex_instance->v);

		//AS3 b2Vec2 constructor arguments
		FREObject valueX, valueY, b2Vec2MemAddress, b2Vec2AS3Object, initException;
		FREObject constructorArguments[3];
		FRENewObjectFromInt32(0, &valueX);
		FRENewObjectFromInt32(0, &valueY);
		FREGetPointerAsString((void*)v, &b2Vec2MemAddress);
		constructorArguments[0] = valueX;
		constructorArguments[1] = valueY;
		constructorArguments[2] = b2Vec2MemAddress;
		//

		const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.common.b2Vec2";

		FREResult objInitResult = FRENewObject(className, 3, constructorArguments, &b2Vec2AS3Object, &initException);

		if(objInitResult != FRE_OK) {
			FREError("Error creating b2Vec2 object in function ane_b2AABB_getter_v");
		}
		/*	End Create a new b2Vec2 AS3 instance */

		vAS3Object = b2Vec2AS3Object;
	}

	return vAS3Object;
}

 
FREObject ane_b2ClipVertex_setter_id(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ClipVertex* b2ClipVertex_instance = (b2ClipVertex*)(nativeData);

	//We expect 1 argument here
	if(argc == 1) {
		void* idInstance = FREGetNativeInstancePointer(argv[0]);
		b2ContactID* id = (b2ContactID*)idInstance;
		b2ClipVertex_instance->id = *id;
	}else{
		FREError("Error: Did not recieve correct number of arguments in function ane_b2ClipVertex_setter_id");
	}
	//

	FREObject result;
	return result;
}

 
FREObject ane_b2ClipVertex_getter_id(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2ClipVertex* b2ClipVertex_instance = (b2ClipVertex*)(nativeData);

	/* This getter function can work one of two ways. It can either accept a single parameter which
	 * is an AS3 b2ContactID instance, from which we will retrive the native b2ContactID and assign it to the
	 * value of b2ClipVertex_instance->id. OR, if no argument is received, it means we need to create
	 * a new b2ContactID instance, set it equal to b2ClipVertex_instance->id and return it.
	 */

	FREObject idAS3Object;

	if(argc == 1) {
		/* An instance has been supplied. Update it */
		idAS3Object = argv[0];
		void* idb2ContactIDInstance = FREGetNativeInstancePointer(idAS3Object);
		b2ContactID* id = (b2ContactID*)idb2ContactIDInstance;
		*id = b2ClipVertex_instance->id;
	}else{
		/*	Create a new b2ContactID AS3 instance */

		b2ContactID* id = new b2ContactID(b2ClipVertex_instance->id);

		//AS3 b2ContactID constructor arguments
		FREObject b2ContactIDMemAddress, b2ContactIDAS3Object, initException;
		FREObject constructorArguments[1];
		FREGetPointerAsString((void*)id, &b2ContactIDMemAddress);
		constructorArguments[0] = b2ContactIDMemAddress;
		//

		const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.collision.b2ContactID";

		FREResult objInitResult = FRENewObject(className, 3, constructorArguments, &b2ContactIDAS3Object, &initException);

		if(objInitResult != FRE_OK) {
			FREError("Error creating b2ContactID object in function ane_b2ClipVertex_getter_id");
		}
		/*	End Create a new b2ContactID AS3 instance */

		idAS3Object = b2ContactIDAS3Object;
	}

	return idAS3Object;
}

 
#endif /* BOX2DANE_C_B2CLIPVERTEX_H_ */
