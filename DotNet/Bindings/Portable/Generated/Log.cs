// WARNING - AUTOGENERATED - DO NOT EDIT
// 
// Generated using `sharpie urho`
// 
// Log.cs
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

namespace Urho.IO
{
	/// <summary>
	/// Logging subsystem.
	/// </summary>
	public unsafe partial class Log : UrhoObject
	{
		unsafe partial void OnLogCreated ();

		[Preserve]
		public Log (IntPtr handle) : base (handle)
		{
			OnLogCreated ();
		}

		[Preserve]
		protected Log (UrhoObjectFlag emptyFlag) : base (emptyFlag)
		{
			OnLogCreated ();
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern int Log_GetType (IntPtr handle);

		private StringHash UrhoGetType ()
		{
			Runtime.ValidateRefCounted (this);
			return new StringHash (Log_GetType (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr Log_GetTypeName (IntPtr handle);

		private string GetTypeName ()
		{
			Runtime.ValidateRefCounted (this);
			return Marshal.PtrToStringAnsi (Log_GetTypeName (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern int Log_GetTypeStatic ();

		private static StringHash GetTypeStatic ()
		{
			Runtime.Validate (typeof(Log));
			return new StringHash (Log_GetTypeStatic ());
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr Log_GetTypeNameStatic ();

		private static string GetTypeNameStatic ()
		{
			Runtime.Validate (typeof(Log));
			return Marshal.PtrToStringAnsi (Log_GetTypeNameStatic ());
		}

		[Preserve]
		public Log () : this (Application.CurrentContext)
		{
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr Log_Log (IntPtr context);

		[Preserve]
		public Log (Context context) : base (UrhoObjectFlag.Empty)
		{
			Runtime.Validate (typeof(Log));
			handle = Log_Log ((object)context == null ? IntPtr.Zero : context.Handle);
			Runtime.RegisterObject (this);
			OnLogCreated ();
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Log_Open (IntPtr handle, string fileName);

		/// <summary>
		/// Open the log file.
		/// </summary>
		public void Open (string fileName)
		{
			Runtime.ValidateRefCounted (this);
			Log_Open (handle, fileName);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Log_Close (IntPtr handle);

		/// <summary>
		/// Close the log file.
		/// </summary>
		public void Close ()
		{
			Runtime.ValidateRefCounted (this);
			Log_Close (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Log_SetLevel (IntPtr handle, int level);

		/// <summary>
		/// Set logging level.
		/// 
		/// </summary>
		private void SetLevel (int level)
		{
			Runtime.ValidateRefCounted (this);
			Log_SetLevel (handle, level);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Log_SetTimeStamp (IntPtr handle, bool enable);

		/// <summary>
		/// Set whether to timestamp log messages.
		/// 
		/// </summary>
		private void SetTimeStamp (bool enable)
		{
			Runtime.ValidateRefCounted (this);
			Log_SetTimeStamp (handle, enable);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Log_SetQuiet (IntPtr handle, bool quiet);

		/// <summary>
		/// Set quiet mode ie. only print error entries to standard error stream (which is normally redirected to console also). Output to log file is not affected by this mode.
		/// 
		/// </summary>
		private void SetQuiet (bool quiet)
		{
			Runtime.ValidateRefCounted (this);
			Log_SetQuiet (handle, quiet);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern int Log_GetLevel (IntPtr handle);

		/// <summary>
		/// Return logging level.
		/// 
		/// </summary>
		private int GetLevel ()
		{
			Runtime.ValidateRefCounted (this);
			return Log_GetLevel (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool Log_GetTimeStamp (IntPtr handle);

		/// <summary>
		/// Return whether log messages are timestamped.
		/// 
		/// </summary>
		private bool GetTimeStamp ()
		{
			Runtime.ValidateRefCounted (this);
			return Log_GetTimeStamp (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr Log_GetLastMessage (IntPtr handle);

		/// <summary>
		/// Return last log message.
		/// 
		/// </summary>
		private string GetLastMessage ()
		{
			Runtime.ValidateRefCounted (this);
			return Marshal.PtrToStringAnsi (Log_GetLastMessage (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool Log_IsQuiet (IntPtr handle);

		/// <summary>
		/// Return whether log is in quiet mode (only errors printed to standard error stream).
		/// 
		/// </summary>
		private bool IsQuiet ()
		{
			Runtime.ValidateRefCounted (this);
			return Log_IsQuiet (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Log_Write (int level, string message);

		/// <summary>
		/// Write to the log. If logging level is higher than the level of the message, the message is ignored.
		/// 
		/// </summary>
		public static void Write (LogLevel level, string message)
		{
			Runtime.Validate (typeof(Log));
			Log_Write ((int)level, message);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Log_WriteRaw (string message, bool error);

		/// <summary>
		/// Write raw output to the log.
		/// </summary>
		public static void WriteRaw (string message, bool error = false)
		{
			Runtime.Validate (typeof(Log));
			Log_WriteRaw (message, error);
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
		/// Return logging level.
		/// 
		/// Or
		/// Set logging level.
		/// 
		/// </summary>
		public int Level {
			get {
				return GetLevel ();
			}
			set {
				SetLevel (value);
			}
		}

		/// <summary>
		/// Return whether log messages are timestamped.
		/// 
		/// Or
		/// Set whether to timestamp log messages.
		/// 
		/// </summary>
		public bool TimeStamp {
			get {
				return GetTimeStamp ();
			}
			set {
				SetTimeStamp (value);
			}
		}

		/// <summary>
		/// Return whether log is in quiet mode (only errors printed to standard error stream).
		/// 
		/// Or
		/// Set quiet mode ie. only print error entries to standard error stream (which is normally redirected to console also). Output to log file is not affected by this mode.
		/// 
		/// </summary>
		public bool Quiet {
			get {
				return IsQuiet ();
			}
			set {
				SetQuiet (value);
			}
		}

		/// <summary>
		/// Return last log message.
		/// 
		/// </summary>
		public string LastMessage {
			get {
				return GetLastMessage ();
			}
		}
	}
}
