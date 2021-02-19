// WARNING - AUTOGENERATED - DO NOT EDIT
// 
// OffMeshConnection.cs
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
	/// A link between otherwise unconnected regions of the navigation mesh.
	/// </summary>
	public unsafe partial class OffMeshConnection : Component
	{
		unsafe partial void OnOffMeshConnectionCreated ();

		[Preserve]
		public OffMeshConnection (IntPtr handle) : base (handle)
		{
			OnOffMeshConnectionCreated ();
		}

		[Preserve]
		protected OffMeshConnection (UrhoObjectFlag emptyFlag) : base (emptyFlag)
		{
			OnOffMeshConnectionCreated ();
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern int OffMeshConnection_GetType (IntPtr handle);

		private StringHash UrhoGetType ()
		{
			Runtime.ValidateRefCounted (this);
			return new StringHash (OffMeshConnection_GetType (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr OffMeshConnection_GetTypeName (IntPtr handle);

		private string GetTypeName ()
		{
			Runtime.ValidateRefCounted (this);
			return Marshal.PtrToStringAnsi (OffMeshConnection_GetTypeName (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern int OffMeshConnection_GetTypeStatic ();

		private static StringHash GetTypeStatic ()
		{
			Runtime.Validate (typeof(OffMeshConnection));
			return new StringHash (OffMeshConnection_GetTypeStatic ());
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr OffMeshConnection_GetTypeNameStatic ();

		private static string GetTypeNameStatic ()
		{
			Runtime.Validate (typeof(OffMeshConnection));
			return Marshal.PtrToStringAnsi (OffMeshConnection_GetTypeNameStatic ());
		}

		[Preserve]
		public OffMeshConnection () : this (Application.CurrentContext)
		{
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr OffMeshConnection_OffMeshConnection (IntPtr context);

		[Preserve]
		public OffMeshConnection (Context context) : base (UrhoObjectFlag.Empty)
		{
			Runtime.Validate (typeof(OffMeshConnection));
			handle = OffMeshConnection_OffMeshConnection ((object)context == null ? IntPtr.Zero : context.Handle);
			Runtime.RegisterObject (this);
			OnOffMeshConnectionCreated ();
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void OffMeshConnection_RegisterObject (IntPtr context);

		/// <summary>
		/// Register object factory.
		/// 
		/// </summary>
		public new static void RegisterObject (Context context)
		{
			Runtime.Validate (typeof(OffMeshConnection));
			OffMeshConnection_RegisterObject ((object)context == null ? IntPtr.Zero : context.Handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void OffMeshConnection_ApplyAttributes (IntPtr handle);

		/// <summary>
		/// Apply attribute changes that can not be applied immediately. Called after scene load or a network update.
		/// </summary>
		public override void ApplyAttributes ()
		{
			Runtime.ValidateRefCounted (this);
			OffMeshConnection_ApplyAttributes (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void OffMeshConnection_DrawDebugGeometry (IntPtr handle, IntPtr debug, bool depthTest);

		/// <summary>
		/// Visualize the component as debug geometry.
		/// </summary>
		public override void DrawDebugGeometry (DebugRenderer debug, bool depthTest)
		{
			Runtime.ValidateRefCounted (this);
			OffMeshConnection_DrawDebugGeometry (handle, (object)debug == null ? IntPtr.Zero : debug.Handle, depthTest);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void OffMeshConnection_SetEndPoint (IntPtr handle, IntPtr node);

		/// <summary>
		/// Set endpoint node.
		/// 
		/// </summary>
		private void SetEndPoint (Node node)
		{
			Runtime.ValidateRefCounted (this);
			OffMeshConnection_SetEndPoint (handle, (object)node == null ? IntPtr.Zero : node.Handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void OffMeshConnection_SetRadius (IntPtr handle, float radius);

		/// <summary>
		/// Set radius.
		/// 
		/// </summary>
		private void SetRadius (float radius)
		{
			Runtime.ValidateRefCounted (this);
			OffMeshConnection_SetRadius (handle, radius);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void OffMeshConnection_SetBidirectional (IntPtr handle, bool enabled);

		/// <summary>
		/// Set bidirectional flag. Default true.
		/// 
		/// </summary>
		private void SetBidirectional (bool enabled)
		{
			Runtime.ValidateRefCounted (this);
			OffMeshConnection_SetBidirectional (handle, enabled);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void OffMeshConnection_SetMask (IntPtr handle, uint newMask);

		/// <summary>
		/// Set a user assigned mask.
		/// 
		/// </summary>
		private void SetMask (uint newMask)
		{
			Runtime.ValidateRefCounted (this);
			OffMeshConnection_SetMask (handle, newMask);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void OffMeshConnection_SetAreaID (IntPtr handle, uint newAreaID);

		/// <summary>
		/// Sets the assigned area Id for the connection.
		/// 
		/// </summary>
		private void SetAreaID (uint newAreaID)
		{
			Runtime.ValidateRefCounted (this);
			OffMeshConnection_SetAreaID (handle, newAreaID);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr OffMeshConnection_GetEndPoint (IntPtr handle);

		/// <summary>
		/// Return endpoint node.
		/// 
		/// </summary>
		private Node GetEndPoint ()
		{
			Runtime.ValidateRefCounted (this);
			return Runtime.LookupObject<Node> (OffMeshConnection_GetEndPoint (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern float OffMeshConnection_GetRadius (IntPtr handle);

		/// <summary>
		/// Return radius.
		/// 
		/// </summary>
		private float GetRadius ()
		{
			Runtime.ValidateRefCounted (this);
			return OffMeshConnection_GetRadius (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool OffMeshConnection_IsBidirectional (IntPtr handle);

		/// <summary>
		/// Return whether is bidirectional.
		/// 
		/// </summary>
		private bool IsBidirectional ()
		{
			Runtime.ValidateRefCounted (this);
			return OffMeshConnection_IsBidirectional (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern uint OffMeshConnection_GetMask (IntPtr handle);

		/// <summary>
		/// Return the user assigned mask.
		/// 
		/// </summary>
		private uint GetMask ()
		{
			Runtime.ValidateRefCounted (this);
			return OffMeshConnection_GetMask (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern uint OffMeshConnection_GetAreaID (IntPtr handle);

		/// <summary>
		/// Return the user assigned area ID.
		/// 
		/// </summary>
		private uint GetAreaID ()
		{
			Runtime.ValidateRefCounted (this);
			return OffMeshConnection_GetAreaID (handle);
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
		/// Return endpoint node.
		/// 
		/// Or
		/// Set endpoint node.
		/// 
		/// </summary>
		public Node EndPoint {
			get {
				return GetEndPoint ();
			}
			set {
				SetEndPoint (value);
			}
		}

		/// <summary>
		/// Return radius.
		/// 
		/// Or
		/// Set radius.
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
		/// Return whether is bidirectional.
		/// 
		/// Or
		/// Set bidirectional flag. Default true.
		/// 
		/// </summary>
		public bool Bidirectional {
			get {
				return IsBidirectional ();
			}
			set {
				SetBidirectional (value);
			}
		}

		/// <summary>
		/// Return the user assigned mask.
		/// 
		/// Or
		/// Set a user assigned mask.
		/// 
		/// </summary>
		public uint Mask {
			get {
				return GetMask ();
			}
			set {
				SetMask (value);
			}
		}

		/// <summary>
		/// Return the user assigned area ID.
		/// 
		/// Or
		/// Sets the assigned area Id for the connection.
		/// 
		/// </summary>
		public uint AreaID {
			get {
				return GetAreaID ();
			}
			set {
				SetAreaID (value);
			}
		}
	}
}
