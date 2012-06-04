/*================================================================================
*
* File Name: b2TOIOutput.as
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

package ca.digitalarchitect.box2dane.collision
{
	import ca.digitalarchitect.box2dane.BaseNativeClass;
	
	public class b2TOIOutput extends BaseNativeClass
	{

		private var _state:State;
		private var _t:Number;

		public b2TOIOutput(nativeMemoryAddress:String)
		{
			
		}

		public function set state(val:State):void
		{
			if(_readOnly == true){
				return;
			}
			_state = val;
			nativeContext.call("ane_b2TOIOutput_setter_state", ...);
		}

		public function get state():State
		{
			_state = nativeContext.call("ane_b2TOIOutput_getter_state", ...);
			return _state;
		}

		public function set t(val:Number):void
		{
			if(_readOnly == true){
				return;
			}
			_t = val;
			nativeContext.call("ane_b2TOIOutput_setter_t", ...);
		}

		public function get t():Number
		{
			_t = nativeContext.call("ane_b2TOIOutput_getter_t", ...);
			return _t;
		}

	}
}