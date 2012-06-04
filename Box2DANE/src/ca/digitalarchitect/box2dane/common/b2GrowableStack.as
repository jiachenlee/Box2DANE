/*================================================================================
*
* File Name: b2GrowableStack.as
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

package ca.digitalarchitect.box2dane.common
{
	import ca.digitalarchitect.box2dane.BaseNativeClass;
	
	/*	This class is left unimplemented because there are issues with implementation on the native side. The native
	 * 	version of the class is template based, and working with a template-based class within C is.. well it's more
	 * 	trouble than this is worth. I don't think this needs to be implemented at all, but I'm leaving the code intact
	 * 	both here and on the native side, just left commented out and/or unimplemented.	
	 */
	
	public class b2GrowableStack extends BaseNativeClass
	{

		public function b2GrowableStack()
		{
			//nativeContext.call("ane_b2GrowableStack_constructor_b2GrowableStack", ...);
		}

		public function GetCount():int
		{
			return 0;
			//return nativeContext.call("ane_b2GrowableStack_callback_GetCount", ...);
		}

	}
}