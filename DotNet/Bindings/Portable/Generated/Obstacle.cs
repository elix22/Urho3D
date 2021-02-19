// WARNING - AUTOGENERATED - DO NOT EDIT
// 
// Obstacle.cs
// 
using System;
using System.Runtime.InteropServices;
using System.Collections.Generic;
using Urho.Urho2D;
using Urho.Gui;
using Urho.Resources;
using Urho.IO;
using Urho.Navigation;
using Urho.Network;

namespace Urho.Navigation
{
	/// <summary>
	/// Obstacle for dynamic navigation mesh.
	/// </summary>
	public unsafe partial class Obstacle : Component
	{
		unsafe partial void OnObstacleCreated ();

		[Preserve]
		public Obstacle (IntPtr handle) : base (handle)
		{
			OnObstacleCreated ();
		}

		[Preserve]
		protected Obstacle (UrhoObjectFlag emptyFlag) : base (emptyFlag)
		{
			OnObstacleCreated ();
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern int Obstacle_GetType (IntPtr handle);

		private StringHash UrhoGetType ()
		{
			Runtime.ValidateRefCounted (this);
			return new StringHash (Obstacle_GetType (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr Obstacle_GetTypeName (IntPtr handle);

		private string GetTypeName ()
		{
			Runtime.ValidateRefCounted (this);
			return Marshal.PtrToStringAnsi (Obstacle_GetTypeName (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern int Obstacle_GetTypeStatic ();

		private static StringHash GetTypeStatic ()
		{
			Runtime.Validate (typeof(Obstacle));
			return new StringHash (Obstacle_GetTypeStatic ());
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr Obstacle_GetTypeNameStatic ();

		private static string GetTypeNameStatic ()
		{
			Runtime.Validate (typeof(Obstacle));
			return Marshal.PtrToStringAnsi (Obstacle_GetTypeNameStatic ());
		}

		[Preserve]
		public Obstacle () : this (Application.CurrentContext)
		{
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr Obstacle_Obstacle (IntPtr context);

		[Preserve]
		public Obstacle (Context context) : base (UrhoObjectFlag.Empty)
		{
			Runtime.Validate (typeof(Obstacle));
			handle = Obstacle_Obstacle ((object)context == null ? IntPtr.Zero : context.Handle);
			Runtime.RegisterObject (this);
			OnObstacleCreated ();
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Obstacle_RegisterObject (IntPtr context);

		/// <summary>
		/// Register Obstacle with engine context.
		/// 
		/// </summary>
		public new static void RegisterObject (Context context)
		{
			Runtime.Validate (typeof(Obstacle));
			Obstacle_RegisterObject ((object)context == null ? IntPtr.Zero : context.Handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Obstacle_OnSetEnabled (IntPtr handle);

		/// <summary>
		/// Update the owning mesh when enabled status has changed.
		/// </summary>
		public override void OnSetEnabled ()
		{
			Runtime.ValidateRefCounted (this);
			Obstacle_OnSetEnabled (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern float Obstacle_GetHeight (IntPtr handle);

		/// <summary>
		/// Get the height of this obstacle.
		/// 
		/// </summary>
		private float GetHeight ()
		{
			Runtime.ValidateRefCounted (this);
			return Obstacle_GetHeight (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Obstacle_SetHeight (IntPtr handle, float newHeight);

		/// <summary>
		/// Set the height of this obstacle.
		/// 
		/// </summary>
		private void SetHeight (float newHeight)
		{
			Runtime.ValidateRefCounted (this);
			Obstacle_SetHeight (handle, newHeight);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern float Obstacle_GetRadius (IntPtr handle);

		/// <summary>
		/// Get the blocking radius of this obstacle.
		/// 
		/// </summary>
		private float GetRadius ()
		{
			Runtime.ValidateRefCounted (this);
			return Obstacle_GetRadius (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Obstacle_SetRadius (IntPtr handle, float newRadius);

		/// <summary>
		/// Set the blocking radius of this obstacle.
		/// 
		/// </summary>
		private void SetRadius (float newRadius)
		{
			Runtime.ValidateRefCounted (this);
			Obstacle_SetRadius (handle, newRadius);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern uint Obstacle_GetObstacleID (IntPtr handle);

		/// <summary>
		/// Get the internal obstacle ID.
		/// 
		/// </summary>
		private uint GetObstacleID ()
		{
			Runtime.ValidateRefCounted (this);
			return Obstacle_GetObstacleID (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Obstacle_DrawDebugGeometry (IntPtr handle, IntPtr debug, bool depthTest);

		/// <summary>
		/// Render debug information.
		/// </summary>
		public override void DrawDebugGeometry (DebugRenderer debug, bool depthTest)
		{
			Runtime.ValidateRefCounted (this);
			Obstacle_DrawDebugGeometry (handle, (object)debug == null ? IntPtr.Zero : debug.Handle, depthTest);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Obstacle_DrawDebugGeometry0 (IntPtr handle, bool depthTest);

		/// <summary>
		/// Simplified rendering of debug information for script usage.
		/// </summary>
		public void DrawDebugGeometry (bool depthTest)
		{
			Runtime.ValidateRefCounted (this);
			Obstacle_DrawDebugGeometry0 (handle, depthTest);
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
		/// Get the height of this obstacle.
		/// 
		/// Or
		/// Set the height of this obstacle.
		/// 
		/// </summary>
		public float Height {
			get {
				return GetHeight ();
			}
			set {
				SetHeight (value);
			}
		}

		/// <summary>
		/// Get the blocking radius of this obstacle.
		/// 
		/// Or
		/// Set the blocking radius of this obstacle.
		/// 
		/// </summary>
		public float Radius {
			get {
				return GetRadius ();
			}
			set {
				SetRadius (value);
			}
		}

		/// <summary>
		/// Get the internal obstacle ID.
		/// 
		/// </summary>
		public uint ObstacleID {
			get {
				return GetObstacleID ();
			}
		}
	}
}
