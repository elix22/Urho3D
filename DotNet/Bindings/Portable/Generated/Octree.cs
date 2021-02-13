// WARNING - AUTOGENERATED - DO NOT EDIT
// 
// Generated using `sharpie urho`
// 
// Octree.cs
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
	/// %Octree component. Should be added only to the root scene node.
	/// </summary>
	public unsafe partial class Octree : Component
	{
		unsafe partial void OnOctreeCreated ();

		[Preserve]
		public Octree (IntPtr handle) : base (handle)
		{
			OnOctreeCreated ();
		}

		[Preserve]
		protected Octree (UrhoObjectFlag emptyFlag) : base (emptyFlag)
		{
			OnOctreeCreated ();
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern int Octree_GetType (IntPtr handle);

		private StringHash UrhoGetType ()
		{
			Runtime.ValidateRefCounted (this);
			return new StringHash (Octree_GetType (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr Octree_GetTypeName (IntPtr handle);

		private string GetTypeName ()
		{
			Runtime.ValidateRefCounted (this);
			return Marshal.PtrToStringAnsi (Octree_GetTypeName (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern int Octree_GetTypeStatic ();

		private static StringHash GetTypeStatic ()
		{
			Runtime.Validate (typeof(Octree));
			return new StringHash (Octree_GetTypeStatic ());
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr Octree_GetTypeNameStatic ();

		private static string GetTypeNameStatic ()
		{
			Runtime.Validate (typeof(Octree));
			return Marshal.PtrToStringAnsi (Octree_GetTypeNameStatic ());
		}

		[Preserve]
		public Octree () : this (Application.CurrentContext)
		{
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr Octree_Octree (IntPtr context);

		[Preserve]
		public Octree (Context context) : base (UrhoObjectFlag.Empty)
		{
			Runtime.Validate (typeof(Octree));
			handle = Octree_Octree ((object)context == null ? IntPtr.Zero : context.Handle);
			Runtime.RegisterObject (this);
			OnOctreeCreated ();
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Octree_RegisterObject (IntPtr context);

		/// <summary>
		/// Register object factory.
		/// 
		/// </summary>
		public new static void RegisterObject (Context context)
		{
			Runtime.Validate (typeof(Octree));
			Octree_RegisterObject ((object)context == null ? IntPtr.Zero : context.Handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Octree_DrawDebugGeometry (IntPtr handle, IntPtr debug, bool depthTest);

		/// <summary>
		/// Visualize the component as debug geometry.
		/// </summary>
		public override void DrawDebugGeometry (DebugRenderer debug, bool depthTest)
		{
			Runtime.ValidateRefCounted (this);
			Octree_DrawDebugGeometry (handle, (object)debug == null ? IntPtr.Zero : debug.Handle, depthTest);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Octree_SetSize (IntPtr handle, ref Urho.BoundingBox box, uint numLevels);

		/// <summary>
		/// Set size and maximum subdivision levels. If octree is not empty, drawable objects will be temporarily moved to the root.
		/// </summary>
		public void SetSize (Urho.BoundingBox box, uint numLevels)
		{
			Runtime.ValidateRefCounted (this);
			Octree_SetSize (handle, ref box, numLevels);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Octree_AddManualDrawable (IntPtr handle, IntPtr drawable);

		/// <summary>
		/// Add a drawable manually.
		/// </summary>
		public void AddManualDrawable (Drawable drawable)
		{
			Runtime.ValidateRefCounted (this);
			Octree_AddManualDrawable (handle, (object)drawable == null ? IntPtr.Zero : drawable.Handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Octree_RemoveManualDrawable (IntPtr handle, IntPtr drawable);

		/// <summary>
		/// Remove a manually added drawable.
		/// </summary>
		public void RemoveManualDrawable (Drawable drawable)
		{
			Runtime.ValidateRefCounted (this);
			Octree_RemoveManualDrawable (handle, (object)drawable == null ? IntPtr.Zero : drawable.Handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern uint Octree_GetNumLevels (IntPtr handle);

		/// <summary>
		/// Return subdivision levels.
		/// 
		/// </summary>
		private uint GetNumLevels ()
		{
			Runtime.ValidateRefCounted (this);
			return Octree_GetNumLevels (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Octree_QueueUpdate (IntPtr handle, IntPtr drawable);

		/// <summary>
		/// Mark drawable object as requiring an update and a reinsertion.
		/// </summary>
		public void QueueUpdate (Drawable drawable)
		{
			Runtime.ValidateRefCounted (this);
			Octree_QueueUpdate (handle, (object)drawable == null ? IntPtr.Zero : drawable.Handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Octree_CancelUpdate (IntPtr handle, IntPtr drawable);

		/// <summary>
		/// Cancel drawable object's update.
		/// </summary>
		public void CancelUpdate (Drawable drawable)
		{
			Runtime.ValidateRefCounted (this);
			Octree_CancelUpdate (handle, (object)drawable == null ? IntPtr.Zero : drawable.Handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Octree_DrawDebugGeometry0 (IntPtr handle, bool depthTest);

		/// <summary>
		/// Visualize the component as debug geometry.
		/// </summary>
		public void DrawDebugGeometry (bool depthTest)
		{
			Runtime.ValidateRefCounted (this);
			Octree_DrawDebugGeometry0 (handle, depthTest);
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
		/// Return subdivision levels.
		/// 
		/// </summary>
		public uint NumLevels {
			get {
				return GetNumLevels ();
			}
		}
	}
}
