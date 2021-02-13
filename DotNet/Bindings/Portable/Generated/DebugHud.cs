// WARNING - AUTOGENERATED - DO NOT EDIT
// 
// Generated using `sharpie urho`
// 
// DebugHud.cs
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
	/// Displays rendering stats and profiling information.
	/// </summary>
	public unsafe partial class DebugHud : UrhoObject
	{
		unsafe partial void OnDebugHudCreated ();

		[Preserve]
		public DebugHud (IntPtr handle) : base (handle)
		{
			OnDebugHudCreated ();
		}

		[Preserve]
		protected DebugHud (UrhoObjectFlag emptyFlag) : base (emptyFlag)
		{
			OnDebugHudCreated ();
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern int DebugHud_GetType (IntPtr handle);

		private StringHash UrhoGetType ()
		{
			Runtime.ValidateRefCounted (this);
			return new StringHash (DebugHud_GetType (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr DebugHud_GetTypeName (IntPtr handle);

		private string GetTypeName ()
		{
			Runtime.ValidateRefCounted (this);
			return Marshal.PtrToStringAnsi (DebugHud_GetTypeName (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern int DebugHud_GetTypeStatic ();

		private static StringHash GetTypeStatic ()
		{
			Runtime.Validate (typeof(DebugHud));
			return new StringHash (DebugHud_GetTypeStatic ());
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr DebugHud_GetTypeNameStatic ();

		private static string GetTypeNameStatic ()
		{
			Runtime.Validate (typeof(DebugHud));
			return Marshal.PtrToStringAnsi (DebugHud_GetTypeNameStatic ());
		}

		[Preserve]
		public DebugHud () : this (Application.CurrentContext)
		{
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr DebugHud_DebugHud (IntPtr context);

		[Preserve]
		public DebugHud (Context context) : base (UrhoObjectFlag.Empty)
		{
			Runtime.Validate (typeof(DebugHud));
			handle = DebugHud_DebugHud ((object)context == null ? IntPtr.Zero : context.Handle);
			Runtime.RegisterObject (this);
			OnDebugHudCreated ();
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void DebugHud_Update (IntPtr handle);

		/// <summary>
		/// Update. Called by HandlePostUpdate().
		/// </summary>
		public void Update ()
		{
			Runtime.ValidateRefCounted (this);
			DebugHud_Update (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void DebugHud_SetDefaultStyle (IntPtr handle, IntPtr style);

		/// <summary>
		/// Set UI elements' style from an XML file.
		/// 
		/// </summary>
		private void SetDefaultStyle (Urho.Resources.XmlFile style)
		{
			Runtime.ValidateRefCounted (this);
			DebugHud_SetDefaultStyle (handle, (object)style == null ? IntPtr.Zero : style.Handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void DebugHud_SetMode (IntPtr handle, uint mode);

		/// <summary>
		/// Set elements to show.
		/// 
		/// </summary>
		private void SetMode (uint mode)
		{
			Runtime.ValidateRefCounted (this);
			DebugHud_SetMode (handle, mode);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void DebugHud_SetProfilerMaxDepth (IntPtr handle, uint depth);

		/// <summary>
		/// Set maximum profiler block depth, default unlimited.
		/// 
		/// </summary>
		private void SetProfilerMaxDepth (uint depth)
		{
			Runtime.ValidateRefCounted (this);
			DebugHud_SetProfilerMaxDepth (handle, depth);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void DebugHud_SetProfilerInterval (IntPtr handle, float interval);

		/// <summary>
		/// Set profiler accumulation interval in seconds.
		/// 
		/// </summary>
		private void SetProfilerInterval (float interval)
		{
			Runtime.ValidateRefCounted (this);
			DebugHud_SetProfilerInterval (handle, interval);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void DebugHud_SetUseRendererStats (IntPtr handle, bool enable);

		/// <summary>
		/// Set whether to show 3D geometry primitive/batch count only. Default false.
		/// 
		/// </summary>
		private void SetUseRendererStats (bool enable)
		{
			Runtime.ValidateRefCounted (this);
			DebugHud_SetUseRendererStats (handle, enable);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void DebugHud_Toggle (IntPtr handle, uint mode);

		/// <summary>
		/// Toggle elements.
		/// </summary>
		public void Toggle (uint mode)
		{
			Runtime.ValidateRefCounted (this);
			DebugHud_Toggle (handle, mode);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void DebugHud_ToggleAll (IntPtr handle);

		/// <summary>
		/// Toggle all elements.
		/// </summary>
		public void ToggleAll ()
		{
			Runtime.ValidateRefCounted (this);
			DebugHud_ToggleAll (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr DebugHud_GetDefaultStyle (IntPtr handle);

		/// <summary>
		/// Return the UI style file.
		/// 
		/// </summary>
		private Urho.Resources.XmlFile GetDefaultStyle ()
		{
			Runtime.ValidateRefCounted (this);
			return Runtime.LookupObject<Urho.Resources.XmlFile> (DebugHud_GetDefaultStyle (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr DebugHud_GetStatsText (IntPtr handle);

		/// <summary>
		/// Return rendering stats text.
		/// 
		/// </summary>
		private Text GetStatsText ()
		{
			Runtime.ValidateRefCounted (this);
			return Runtime.LookupObject<Text> (DebugHud_GetStatsText (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr DebugHud_GetModeText (IntPtr handle);

		/// <summary>
		/// Return rendering mode text.
		/// 
		/// </summary>
		private Text GetModeText ()
		{
			Runtime.ValidateRefCounted (this);
			return Runtime.LookupObject<Text> (DebugHud_GetModeText (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr DebugHud_GetProfilerText (IntPtr handle);

		/// <summary>
		/// Return profiler text.
		/// 
		/// </summary>
		private Text GetProfilerText ()
		{
			Runtime.ValidateRefCounted (this);
			return Runtime.LookupObject<Text> (DebugHud_GetProfilerText (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr DebugHud_GetMemoryText (IntPtr handle);

		/// <summary>
		/// Return memory text.
		/// 
		/// </summary>
		private Text GetMemoryText ()
		{
			Runtime.ValidateRefCounted (this);
			return Runtime.LookupObject<Text> (DebugHud_GetMemoryText (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern uint DebugHud_GetMode (IntPtr handle);

		/// <summary>
		/// Return currently shown elements.
		/// 
		/// </summary>
		private uint GetMode ()
		{
			Runtime.ValidateRefCounted (this);
			return DebugHud_GetMode (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern uint DebugHud_GetProfilerMaxDepth (IntPtr handle);

		/// <summary>
		/// Return maximum profiler block depth.
		/// 
		/// </summary>
		private uint GetProfilerMaxDepth ()
		{
			Runtime.ValidateRefCounted (this);
			return DebugHud_GetProfilerMaxDepth (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern float DebugHud_GetProfilerInterval (IntPtr handle);

		/// <summary>
		/// Return profiler accumulation interval in seconds.
		/// 
		/// </summary>
		private float GetProfilerInterval ()
		{
			Runtime.ValidateRefCounted (this);
			return DebugHud_GetProfilerInterval (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool DebugHud_GetUseRendererStats (IntPtr handle);

		/// <summary>
		/// Return whether showing 3D geometry primitive/batch count only.
		/// 
		/// </summary>
		private bool GetUseRendererStats ()
		{
			Runtime.ValidateRefCounted (this);
			return DebugHud_GetUseRendererStats (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void DebugHud_SetAppStats (IntPtr handle, string label, string stats);

		/// <summary>
		/// Set application-specific stats.
		/// </summary>
		public void SetAppStats (string label, string stats)
		{
			Runtime.ValidateRefCounted (this);
			DebugHud_SetAppStats (handle, label, stats);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool DebugHud_ResetAppStats (IntPtr handle, string label);

		/// <summary>
		/// Reset application-specific stats. Return true if it was erased successfully.
		/// </summary>
		public bool ResetAppStats (string label)
		{
			Runtime.ValidateRefCounted (this);
			return DebugHud_ResetAppStats (handle, label);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void DebugHud_ClearAppStats (IntPtr handle);

		/// <summary>
		/// Clear all application-specific stats.
		/// </summary>
		public void ClearAppStats ()
		{
			Runtime.ValidateRefCounted (this);
			DebugHud_ClearAppStats (handle);
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
		public static StringHash TypeStatic {
			get {
				return GetTypeStatic ();
			}
		}

		public static string TypeNameStatic {
			get {
				return GetTypeNameStatic ();
			}
		}

		/// <summary>
		/// Return the UI style file.
		/// 
		/// Or
		/// Set UI elements' style from an XML file.
		/// 
		/// </summary>
		public Urho.Resources.XmlFile DefaultStyle {
			get {
				return GetDefaultStyle ();
			}
			set {
				SetDefaultStyle (value);
			}
		}

		/// <summary>
		/// Return currently shown elements.
		/// 
		/// Or
		/// Set elements to show.
		/// 
		/// </summary>
		public uint Mode {
			get {
				return GetMode ();
			}
			set {
				SetMode (value);
			}
		}

		/// <summary>
		/// Return maximum profiler block depth.
		/// 
		/// Or
		/// Set maximum profiler block depth, default unlimited.
		/// 
		/// </summary>
		public uint ProfilerMaxDepth {
			get {
				return GetProfilerMaxDepth ();
			}
			set {
				SetProfilerMaxDepth (value);
			}
		}

		/// <summary>
		/// Return profiler accumulation interval in seconds.
		/// 
		/// Or
		/// Set profiler accumulation interval in seconds.
		/// 
		/// </summary>
		public float ProfilerInterval {
			get {
				return GetProfilerInterval ();
			}
			set {
				SetProfilerInterval (value);
			}
		}

		/// <summary>
		/// Return whether showing 3D geometry primitive/batch count only.
		/// 
		/// Or
		/// Set whether to show 3D geometry primitive/batch count only. Default false.
		/// 
		/// </summary>
		public bool UseRendererStats {
			get {
				return GetUseRendererStats ();
			}
			set {
				SetUseRendererStats (value);
			}
		}

		/// <summary>
		/// Return rendering stats text.
		/// 
		/// </summary>
		public Text StatsText {
			get {
				return GetStatsText ();
			}
		}

		/// <summary>
		/// Return rendering mode text.
		/// 
		/// </summary>
		public Text ModeText {
			get {
				return GetModeText ();
			}
		}

		/// <summary>
		/// Return profiler text.
		/// 
		/// </summary>
		public Text ProfilerText {
			get {
				return GetProfilerText ();
			}
		}

		/// <summary>
		/// Return memory text.
		/// 
		/// </summary>
		public Text MemoryText {
			get {
				return GetMemoryText ();
			}
		}
	}
}
