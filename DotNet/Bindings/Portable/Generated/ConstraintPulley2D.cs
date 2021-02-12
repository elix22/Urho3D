// WARNING - AUTOGENERATED - DO NOT EDIT
// 
// Generated using `sharpie urho`
// 
// ConstraintPulley2D.cs
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

namespace Urho.Urho2D
{
	/// <summary>
	/// 2D pulley constraint component.
	/// </summary>
	public unsafe partial class ConstraintPulley2D : Constraint2D
	{
		unsafe partial void OnConstraintPulley2DCreated ();

		[Preserve]
		public ConstraintPulley2D (IntPtr handle) : base (handle)
		{
			OnConstraintPulley2DCreated ();
		}

		[Preserve]
		protected ConstraintPulley2D (UrhoObjectFlag emptyFlag) : base (emptyFlag)
		{
			OnConstraintPulley2DCreated ();
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern int ConstraintPulley2D_GetType (IntPtr handle);

		private StringHash UrhoGetType ()
		{
			Runtime.ValidateRefCounted (this);
			return new StringHash (ConstraintPulley2D_GetType (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr ConstraintPulley2D_GetTypeName (IntPtr handle);

		private string GetTypeName ()
		{
			Runtime.ValidateRefCounted (this);
			return Marshal.PtrToStringAnsi (ConstraintPulley2D_GetTypeName (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern int ConstraintPulley2D_GetTypeStatic ();

		private static StringHash GetTypeStatic ()
		{
			Runtime.Validate (typeof(ConstraintPulley2D));
			return new StringHash (ConstraintPulley2D_GetTypeStatic ());
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr ConstraintPulley2D_GetTypeNameStatic ();

		private static string GetTypeNameStatic ()
		{
			Runtime.Validate (typeof(ConstraintPulley2D));
			return Marshal.PtrToStringAnsi (ConstraintPulley2D_GetTypeNameStatic ());
		}

		[Preserve]
		public ConstraintPulley2D () : this (Application.CurrentContext)
		{
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr ConstraintPulley2D_ConstraintPulley2D (IntPtr context);

		[Preserve]
		public ConstraintPulley2D (Context context) : base (UrhoObjectFlag.Empty)
		{
			Runtime.Validate (typeof(ConstraintPulley2D));
			handle = ConstraintPulley2D_ConstraintPulley2D ((object)context == null ? IntPtr.Zero : context.Handle);
			Runtime.RegisterObject (this);
			OnConstraintPulley2DCreated ();
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void ConstraintPulley2D_RegisterObject (IntPtr context);

		/// <summary>
		/// Register object factory.
		/// </summary>
		public new static void RegisterObject (Context context)
		{
			Runtime.Validate (typeof(ConstraintPulley2D));
			ConstraintPulley2D_RegisterObject ((object)context == null ? IntPtr.Zero : context.Handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void ConstraintPulley2D_SetOwnerBodyGroundAnchor (IntPtr handle, ref Urho.Vector2 groundAnchor);

		/// <summary>
		/// Set other body ground anchor point.
		/// </summary>
		private void SetOwnerBodyGroundAnchor (Urho.Vector2 groundAnchor)
		{
			Runtime.ValidateRefCounted (this);
			ConstraintPulley2D_SetOwnerBodyGroundAnchor (handle, ref groundAnchor);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void ConstraintPulley2D_SetOtherBodyGroundAnchor (IntPtr handle, ref Urho.Vector2 groundAnchor);

		/// <summary>
		/// Set other body ground anchor point.
		/// </summary>
		private void SetOtherBodyGroundAnchor (Urho.Vector2 groundAnchor)
		{
			Runtime.ValidateRefCounted (this);
			ConstraintPulley2D_SetOtherBodyGroundAnchor (handle, ref groundAnchor);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void ConstraintPulley2D_SetOwnerBodyAnchor (IntPtr handle, ref Urho.Vector2 anchor);

		/// <summary>
		/// Set owner body anchor point.
		/// </summary>
		private void SetOwnerBodyAnchor (Urho.Vector2 anchor)
		{
			Runtime.ValidateRefCounted (this);
			ConstraintPulley2D_SetOwnerBodyAnchor (handle, ref anchor);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void ConstraintPulley2D_SetOtherBodyAnchor (IntPtr handle, ref Urho.Vector2 anchor);

		/// <summary>
		/// Set other body anchor point.
		/// </summary>
		private void SetOtherBodyAnchor (Urho.Vector2 anchor)
		{
			Runtime.ValidateRefCounted (this);
			ConstraintPulley2D_SetOtherBodyAnchor (handle, ref anchor);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void ConstraintPulley2D_SetRatio (IntPtr handle, float ratio);

		/// <summary>
		/// Set ratio.
		/// </summary>
		private void SetRatio (float ratio)
		{
			Runtime.ValidateRefCounted (this);
			ConstraintPulley2D_SetRatio (handle, ratio);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern Urho.Vector2 ConstraintPulley2D_GetOwnerBodyGroundAnchor (IntPtr handle);

		/// <summary>
		/// Return owner body ground anchor.
		/// </summary>
		private Urho.Vector2 GetOwnerBodyGroundAnchor ()
		{
			Runtime.ValidateRefCounted (this);
			return ConstraintPulley2D_GetOwnerBodyGroundAnchor (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern Urho.Vector2 ConstraintPulley2D_GetOtherBodyGroundAnchor (IntPtr handle);

		/// <summary>
		/// return other body ground anchor.
		/// </summary>
		private Urho.Vector2 GetOtherBodyGroundAnchor ()
		{
			Runtime.ValidateRefCounted (this);
			return ConstraintPulley2D_GetOtherBodyGroundAnchor (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern Urho.Vector2 ConstraintPulley2D_GetOwnerBodyAnchor (IntPtr handle);

		/// <summary>
		/// Return owner body anchor.
		/// </summary>
		private Urho.Vector2 GetOwnerBodyAnchor ()
		{
			Runtime.ValidateRefCounted (this);
			return ConstraintPulley2D_GetOwnerBodyAnchor (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern Urho.Vector2 ConstraintPulley2D_GetOtherBodyAnchor (IntPtr handle);

		/// <summary>
		/// Return other body anchor.
		/// </summary>
		private Urho.Vector2 GetOtherBodyAnchor ()
		{
			Runtime.ValidateRefCounted (this);
			return ConstraintPulley2D_GetOtherBodyAnchor (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern float ConstraintPulley2D_GetRatio (IntPtr handle);

		/// <summary>
		/// Return ratio.
		/// </summary>
		private float GetRatio ()
		{
			Runtime.ValidateRefCounted (this);
			return ConstraintPulley2D_GetRatio (handle);
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

		/// <summary>
		/// Return owner body ground anchor.
		/// Or
		/// Set other body ground anchor point.
		/// </summary>
		public Urho.Vector2 OwnerBodyGroundAnchor {
			get {
				return GetOwnerBodyGroundAnchor ();
			}
			set {
				SetOwnerBodyGroundAnchor (value);
			}
		}

		/// <summary>
		/// return other body ground anchor.
		/// Or
		/// Set other body ground anchor point.
		/// </summary>
		public Urho.Vector2 OtherBodyGroundAnchor {
			get {
				return GetOtherBodyGroundAnchor ();
			}
			set {
				SetOtherBodyGroundAnchor (value);
			}
		}

		/// <summary>
		/// Return owner body anchor.
		/// Or
		/// Set owner body anchor point.
		/// </summary>
		public Urho.Vector2 OwnerBodyAnchor {
			get {
				return GetOwnerBodyAnchor ();
			}
			set {
				SetOwnerBodyAnchor (value);
			}
		}

		/// <summary>
		/// Return other body anchor.
		/// Or
		/// Set other body anchor point.
		/// </summary>
		public Urho.Vector2 OtherBodyAnchor {
			get {
				return GetOtherBodyAnchor ();
			}
			set {
				SetOtherBodyAnchor (value);
			}
		}

		/// <summary>
		/// Return ratio.
		/// Or
		/// Set ratio.
		/// </summary>
		public float Ratio {
			get {
				return GetRatio ();
			}
			set {
				SetRatio (value);
			}
		}
	}
}
