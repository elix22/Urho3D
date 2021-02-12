// WARNING - AUTOGENERATED - DO NOT EDIT
// 
// Generated using `sharpie urho`
// 
// ConvexData.cs
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
	/// Convex hull geometry data.
	/// </summary>
	[StructLayout (LayoutKind.Sequential)]
	public unsafe partial struct ConvexData
	{
		unsafe partial void OnConvexDataCreated ();

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr ConvexData_ConvexData (IntPtr model, uint lodLevel);

		[Preserve]
		public ConvexData (Model model, uint lodLevel)
		{
			Runtime.Validate (typeof(ConvexData));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr ConvexData_ConvexData0 (IntPtr custom);

		[Preserve]
		public ConvexData (CustomGeometry custom)
		{
			Runtime.Validate (typeof(ConvexData));
		}
	}
}
