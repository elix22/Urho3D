// WARNING - AUTOGENERATED - DO NOT EDIT
// 
// Generated using `sharpie urho`
// 
// IKSolver.cs
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
	/// 
	/// </summary>
	public unsafe partial class IKSolver : Component
	{
		unsafe partial void OnIKSolverCreated ();

		[Preserve]
		public IKSolver (IntPtr handle) : base (handle)
		{
			OnIKSolverCreated ();
		}

		[Preserve]
		protected IKSolver (UrhoObjectFlag emptyFlag) : base (emptyFlag)
		{
			OnIKSolverCreated ();
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern int IKSolver_GetType (IntPtr handle);

		private StringHash UrhoGetType ()
		{
			Runtime.ValidateRefCounted (this);
			return new StringHash (IKSolver_GetType (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr IKSolver_GetTypeName (IntPtr handle);

		private string GetTypeName ()
		{
			Runtime.ValidateRefCounted (this);
			return Marshal.PtrToStringAnsi (IKSolver_GetTypeName (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern int IKSolver_GetTypeStatic ();

		private static StringHash GetTypeStatic ()
		{
			Runtime.Validate (typeof(IKSolver));
			return new StringHash (IKSolver_GetTypeStatic ());
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr IKSolver_GetTypeNameStatic ();

		private static string GetTypeNameStatic ()
		{
			Runtime.Validate (typeof(IKSolver));
			return Marshal.PtrToStringAnsi (IKSolver_GetTypeNameStatic ());
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
