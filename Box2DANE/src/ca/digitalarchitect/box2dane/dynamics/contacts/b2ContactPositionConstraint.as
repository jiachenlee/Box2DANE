/*================================================================================
*
* File Name: b2ContactPositionConstraint.as
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

package ca.digitalarchitect.box2dane.dynamics.contacts 
{
	import ca.digitalarchitect.box2dane.BaseNativeClass;
	import ca.digitalarchitect.box2dane.common.b2Vec2;
	
	/**
	 * ...
	 * @author Jesse Nicholson
	 */
	public class b2ContactPositionConstraint extends BaseNativeClass 
	{
		
		private var _localPoints:Vector.<b2Vec2>;	//Needs to have it's length fixed to 2
		private var _localNormal:b2Vec2;
		private var _localPoint:b2Vec2
		private var _indexA:int;
		private var _indexB:int;
		private var _invMassA:Number;
		private var _invMassB:Number;
		private var _localCenterA:b2Vec2;
		private var _localCenterB:b2Vec2;
		private var _invIA:Number;
		private var _invIB:Number;
		private var _type:int; //b2ManifoldType
		private var _radiusA:Number;
		private var _radiusB:Number;			 
		private var _pointCount:int;
		
		public function b2ContactPositionConstraint(nativeMemoryAddress:String) 
		{
			
		}
		
		public function get localPoints():Vector.<b2Vec2> 
		{
			_localPoints = nativeContext.call("ane_b2ContactPositionConstraint_getter_localPoints", ...);
			return _localPoints;
		}
		
		public function set localPoints(value:Vector.<b2Vec2>):void 
		{
			if(_readOnly == true){
				return;
			}
			_localPoints = value;
			nativeContext.call("ane_b2ContactPositionConstraint_setter_localPoints", ...);
		}
		
		public function get localNormal():b2Vec2 
		{
			_localNormal = nativeContext.call("ane_b2ContactPositionConstraint_getter_localNormal", ...);
			return _localNormal;
		}
		
		public function set localNormal(value:b2Vec2):void 
		{
			if(_readOnly == true){
				return;
			}
			_localNormal = value;
			nativeContext.call("ane_b2ContactPositionConstraint_setter_localNormal", ...);
		}
		
		public function get localPoint():b2Vec2 
		{
			_localPoint = nativeContext.call("ane_b2ContactPositionConstraint_getter_localPoint", ...);
			return _localPoint;
		}
		
		public function set localPoint(value:b2Vec2):void 
		{
			if(_readOnly == true){
				return;
			}
			_localPoint = value;
			nativeContext.call("ane_b2ContactPositionConstraint_setter_localPoint", ...);
		}
		
		public function get indexA():int 
		{
			_indexA = nativeContext.call("ane_b2ContactPositionConstraint_getter_indexA", ...);
			return _indexA;
		}
		
		public function set indexA(value:int):void 
		{
			if(_readOnly == true){
				return;
			}
			_indexA = value;
			nativeContext.call("ane_b2ContactPositionConstraint_setter_indexA", ...);
		}
		
		public function get indexB():int 
		{
			_indexB = nativeContext.call("ane_b2ContactPositionConstraint_getter_indexB", ...);
			return _indexB;
		}
		
		public function set indexB(value:int):void 
		{
			if(_readOnly == true){
				return;
			}
			_indexB = value;
			nativeContext.call("ane_b2ContactPositionConstraint_setter_indexB", ...);
		}
		
		public function get invMassA():Number 
		{
			_invMassA = nativeContext.call("ane_b2ContactPositionConstraint_getter_invMassA", ...);
			return _invMassA;
		}
		
		public function set invMassA(value:Number):void 
		{
			if(_readOnly == true){
				return;
			}
			_invMassA = value;
			nativeContext.call("ane_b2ContactPositionConstraint_setter_invMassA", ...);
		}
		
		public function get invMassB():Number 
		{
			_invMassB = nativeContext.call("ane_b2ContactPositionConstraint_getter_invMassB", ...);
			return _invMassB;
		}
		
		public function set invMassB(value:Number):void 
		{
			if(_readOnly == true){
				return;
			}
			_invMassB = value;
			nativeContext.call("ane_b2ContactPositionConstraint_setter_invMassB", ...);
		}
		
		public function get localCenterA():b2Vec2 
		{
			_localCenterA = nativeContext.call("ane_b2ContactPositionConstraint_getter_localCenterA", ...);
			return _localCenterA;
		}
		
		public function set localCenterA(value:b2Vec2):void 
		{
			if(_readOnly == true){
				return;
			}
			_localCenterA = value;
			nativeContext.call("ane_b2ContactPositionConstraint_setter_localCenterA", ...);
		}
		
		public function get localCenterB():b2Vec2 
		{
			_localCenterB = nativeContext.call("ane_b2ContactPositionConstraint_getter_localCenterB", ...);
			return _localCenterB;
		}
		
		public function set localCenterB(value:b2Vec2):void 
		{
			if(_readOnly == true){
				return;
			}
			_localCenterB = value;
			nativeContext.call("ane_b2ContactPositionConstraint_setter_localCenterB", ...);
		}
		
		public function get invIA():Number 
		{
			_invIA = nativeContext.call("ane_b2ContactPositionConstraint_getter_invIA", ...);
			return _invIA;
		}
		
		public function set invIA(value:Number):void 
		{
			if(_readOnly == true){
				return;
			}
			_invIA = value;
			nativeContext.call("ane_b2ContactPositionConstraint_setter_invIA", ...);
		}
		
		public function get invIB():Number 
		{
			_invIB = nativeContext.call("ane_b2ContactPositionConstraint_getter_invIB", ...);
			return _invIB;
		}
		
		public function set invIB(value:Number):void 
		{
			if(_readOnly == true){
				return;
			}
			_invIB = value;
			nativeContext.call("ane_b2ContactPositionConstraint_setter_invIB", ...);
		}
		
		public function get type():int 
		{
			_type = nativeContext.call("ane_b2ContactPositionConstraint_getter_type", ...);
			return _type;
		}
		
		public function set type(value:int):void 
		{
			if(_readOnly == true){
				return;
			}
			_type = value;
			nativeContext.call("ane_b2ContactPositionConstraint_setter_type", ...);
		}
		
		public function get radiusA():Number 
		{
			_radiusA = nativeContext.call("ane_b2ContactPositionConstraint_getter_radiusA", ...);
			return _radiusA;
		}
		
		public function set radiusA(value:Number):void 
		{
			if(_readOnly == true){
				return;
			}
			_radiusA = value;
			nativeContext.call("ane_b2ContactPositionConstraint_setter_radiusA", ...);
		}
		
		public function get radiusB():Number 
		{
			_radiusB = nativeContext.call("ane_b2ContactPositionConstraint_getter_radiusB", ...);
			return _radiusB;
		}
		
		public function set radiusB(value:Number):void 
		{
			if(_readOnly == true){
				return;
			}
			_radiusB = value;
			nativeContext.call("ane_b2ContactPositionConstraint_setter_radiusB", ...);
		}
		
		public function get pointCount():int 
		{
			_pointCount = nativeContext.call("ane_b2ContactPositionConstraint_getter_pointCount", ...);
			return _pointCount;
		}
		
		public function set pointCount(value:int):void 
		{
			if(_readOnly == true){
				return;
			}
			_pointCount = value;
			nativeContext.call("ane_b2ContactPositionConstraint_setter_pointCount", ...);
		}
		
	}

}