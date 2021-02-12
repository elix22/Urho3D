// WARNING - AUTOGENERATED - DO NOT EDIT
// 
// Generated using `sharpie urho`
// 
// ResourceRouter.cs
// 
// Copyright 2015 Xamarin Inc. All rights reserved.

using System;
using System.Runtime.InteropServices;
using System.Collections.Generic;
using Urho.Urho2D;
using Urho.Gui;
using Urho.Resources;
using Urho.IO;
using Urho.Navigation;
using Urho.Network;

namespace Urho
{
	/// <summary>
	/// Optional resource request processor. Can deny requests, re-route resource file names, or perform other processing per request.
	/// </summary>
	public unsafe partial class ResourceRouter : UrhoObject
	{
		unsafe partial void OnResourceRouterCreated ();

		[Preserve]
		public ResourceRouter (IntPtr handle) : base (handle)
		{
			OnResourceRouterCreated ();
		}

		[Preserve]
		protected ResourceRouter (UrhoObjectFlag emptyFlag) : base (emptyFlag)
		{
			OnResourceRouterCreated ();
		}
	}
}
