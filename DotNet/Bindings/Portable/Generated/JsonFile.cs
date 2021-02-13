// WARNING - AUTOGENERATED - DO NOT EDIT
// 
// Generated using `sharpie urho`
// 
// JsonFile.cs
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

namespace Urho.Resources
{
	/// <summary>
	/// JSON document resource.
	/// </summary>
	public unsafe partial class JsonFile : Resource
	{
		unsafe partial void OnJsonFileCreated ();

		[Preserve]
		public JsonFile (IntPtr handle) : base (handle)
		{
			OnJsonFileCreated ();
		}

		[Preserve]
		protected JsonFile (UrhoObjectFlag emptyFlag) : base (emptyFlag)
		{
			OnJsonFileCreated ();
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern int JsonFile_GetType (IntPtr handle);

		private StringHash UrhoGetType ()
		{
			Runtime.ValidateRefCounted (this);
			return new StringHash (JsonFile_GetType (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr JsonFile_GetTypeName (IntPtr handle);

		private string GetTypeName ()
		{
			Runtime.ValidateRefCounted (this);
			return Marshal.PtrToStringAnsi (JsonFile_GetTypeName (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern int JsonFile_GetTypeStatic ();

		private static StringHash GetTypeStatic ()
		{
			Runtime.Validate (typeof(JsonFile));
			return new StringHash (JsonFile_GetTypeStatic ());
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr JsonFile_GetTypeNameStatic ();

		private static string GetTypeNameStatic ()
		{
			Runtime.Validate (typeof(JsonFile));
			return Marshal.PtrToStringAnsi (JsonFile_GetTypeNameStatic ());
		}

		[Preserve]
		public JsonFile () : this (Application.CurrentContext)
		{
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr JsonFile_JSONFile (IntPtr context);

		[Preserve]
		public JsonFile (Context context) : base (UrhoObjectFlag.Empty)
		{
			Runtime.Validate (typeof(JsonFile));
			handle = JsonFile_JSONFile ((object)context == null ? IntPtr.Zero : context.Handle);
			Runtime.RegisterObject (this);
			OnJsonFileCreated ();
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void JsonFile_RegisterObject (IntPtr context);

		/// <summary>
		/// Register object factory.
		/// 
		/// </summary>
		public static void RegisterObject (Context context)
		{
			Runtime.Validate (typeof(JsonFile));
			JsonFile_RegisterObject ((object)context == null ? IntPtr.Zero : context.Handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool JsonFile_BeginLoad_File (IntPtr handle, IntPtr source);

		/// <summary>
		/// Load resource from stream. May be called from a worker thread. Return true if successful.
		/// </summary>
		public override bool BeginLoad (File source)
		{
			Runtime.ValidateRefCounted (this);
			return JsonFile_BeginLoad_File (handle, (object)source == null ? IntPtr.Zero : source.Handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool JsonFile_BeginLoad_MemoryBuffer (IntPtr handle, IntPtr source);

		/// <summary>
		/// Load resource from stream. May be called from a worker thread. Return true if successful.
		/// </summary>
		public override bool BeginLoad (MemoryBuffer source)
		{
			Runtime.ValidateRefCounted (this);
			return JsonFile_BeginLoad_MemoryBuffer (handle, (object)source == null ? IntPtr.Zero : source.Handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool JsonFile_Save_File (IntPtr handle, IntPtr dest);

		/// <summary>
		/// Save resource with default indentation (one tab). Return true if successful.
		/// </summary>
		public override bool Save (File dest)
		{
			Runtime.ValidateRefCounted (this);
			return JsonFile_Save_File (handle, (object)dest == null ? IntPtr.Zero : dest.Handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool JsonFile_Save_MemoryBuffer (IntPtr handle, IntPtr dest);

		/// <summary>
		/// Save resource with default indentation (one tab). Return true if successful.
		/// </summary>
		public override bool Save (MemoryBuffer dest)
		{
			Runtime.ValidateRefCounted (this);
			return JsonFile_Save_MemoryBuffer (handle, (object)dest == null ? IntPtr.Zero : dest.Handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool JsonFile_Save0_File (IntPtr handle, IntPtr dest, string indendation);

		/// <summary>
		/// Save resource with user-defined indentation, only the first character (if any) of the string is used and the length of the string defines the character count. Return true if successful.
		/// </summary>
		public bool Save (File dest, string indendation)
		{
			Runtime.ValidateRefCounted (this);
			return JsonFile_Save0_File (handle, (object)dest == null ? IntPtr.Zero : dest.Handle, indendation);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool JsonFile_Save0_MemoryBuffer (IntPtr handle, IntPtr dest, string indendation);

		/// <summary>
		/// Save resource with user-defined indentation, only the first character (if any) of the string is used and the length of the string defines the character count. Return true if successful.
		/// </summary>
		public bool Save (MemoryBuffer dest, string indendation)
		{
			Runtime.ValidateRefCounted (this);
			return JsonFile_Save0_MemoryBuffer (handle, (object)dest == null ? IntPtr.Zero : dest.Handle, indendation);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool JsonFile_FromString (IntPtr handle, string source);

		/// <summary>
		/// Deserialize from a string. Return true if successful.
		/// </summary>
		public bool FromString (string source)
		{
			Runtime.ValidateRefCounted (this);
			return JsonFile_FromString (handle, source);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr JsonFile_ToString (IntPtr handle, string indendation);

		/// <summary>
		/// Save to a string.
		/// </summary>
		public string ToDebugString (string indendation = "\t")
		{
			Runtime.ValidateRefCounted (this);
			return Marshal.PtrToStringAnsi (JsonFile_ToString (handle, indendation));
		}

		public override StringHash Type {
			get {
				return UrhoGetType ();
			}
		}

		public override string TypeName {
			get {
				return GetTypeName ();
			}
		}

		[Preserve]
		public new static StringHash TypeStatic {
			get {
				return GetTypeStatic ();
			}
		}

		public new static string TypeNameStatic {
			get {
				return GetTypeNameStatic ();
			}
		}
	}
}
