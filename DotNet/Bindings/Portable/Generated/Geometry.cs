// WARNING - AUTOGENERATED - DO NOT EDIT
// 
// Generated using `sharpie urho`
// 
// Geometry.cs
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
	/// Defines one or more vertex buffers, an index buffer and a draw range.
	/// </summary>
	public unsafe partial class Geometry : UrhoObject
	{
		unsafe partial void OnGeometryCreated ();

		[Preserve]
		public Geometry (IntPtr handle) : base (handle)
		{
			OnGeometryCreated ();
		}

		[Preserve]
		protected Geometry (UrhoObjectFlag emptyFlag) : base (emptyFlag)
		{
			OnGeometryCreated ();
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern int Geometry_GetType (IntPtr handle);

		private StringHash UrhoGetType ()
		{
			Runtime.ValidateRefCounted (this);
			return new StringHash (Geometry_GetType (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr Geometry_GetTypeName (IntPtr handle);

		private string GetTypeName ()
		{
			Runtime.ValidateRefCounted (this);
			return Marshal.PtrToStringAnsi (Geometry_GetTypeName (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern int Geometry_GetTypeStatic ();

		private static StringHash GetTypeStatic ()
		{
			Runtime.Validate (typeof(Geometry));
			return new StringHash (Geometry_GetTypeStatic ());
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr Geometry_GetTypeNameStatic ();

		private static string GetTypeNameStatic ()
		{
			Runtime.Validate (typeof(Geometry));
			return Marshal.PtrToStringAnsi (Geometry_GetTypeNameStatic ());
		}

		[Preserve]
		public Geometry () : this (Application.CurrentContext)
		{
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr Geometry_Geometry (IntPtr context);

		[Preserve]
		public Geometry (Context context) : base (UrhoObjectFlag.Empty)
		{
			Runtime.Validate (typeof(Geometry));
			handle = Geometry_Geometry ((object)context == null ? IntPtr.Zero : context.Handle);
			Runtime.RegisterObject (this);
			OnGeometryCreated ();
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool Geometry_SetNumVertexBuffers (IntPtr handle, uint num);

		/// <summary>
		/// Set number of vertex buffers.
		/// 
		/// </summary>
		public bool SetNumVertexBuffers (uint num)
		{
			Runtime.ValidateRefCounted (this);
			return Geometry_SetNumVertexBuffers (handle, num);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool Geometry_SetVertexBuffer (IntPtr handle, uint index, IntPtr buffer);

		/// <summary>
		/// Set a vertex buffer by index.
		/// </summary>
		public bool SetVertexBuffer (uint index, VertexBuffer buffer)
		{
			Runtime.ValidateRefCounted (this);
			return Geometry_SetVertexBuffer (handle, index, (object)buffer == null ? IntPtr.Zero : buffer.Handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Geometry_SetIndexBuffer (IntPtr handle, IntPtr buffer);

		/// <summary>
		/// Set the index buffer.
		/// 
		/// </summary>
		private void SetIndexBuffer (IndexBuffer buffer)
		{
			Runtime.ValidateRefCounted (this);
			Geometry_SetIndexBuffer (handle, (object)buffer == null ? IntPtr.Zero : buffer.Handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool Geometry_SetDrawRange (IntPtr handle, PrimitiveType type, uint indexStart, uint indexCount, bool getUsedVertexRange);

		/// <summary>
		/// Set the draw range.
		/// </summary>
		public bool SetDrawRange (PrimitiveType type, uint indexStart, uint indexCount, bool getUsedVertexRange = true)
		{
			Runtime.ValidateRefCounted (this);
			return Geometry_SetDrawRange (handle, type, indexStart, indexCount, getUsedVertexRange);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool Geometry_SetDrawRange0 (IntPtr handle, PrimitiveType type, uint indexStart, uint indexCount, uint vertexStart, uint vertexCount, bool checkIllegal);

		/// <summary>
		/// Set the draw range.
		/// </summary>
		public bool SetDrawRange (PrimitiveType type, uint indexStart, uint indexCount, uint vertexStart, uint vertexCount, bool checkIllegal = true)
		{
			Runtime.ValidateRefCounted (this);
			return Geometry_SetDrawRange0 (handle, type, indexStart, indexCount, vertexStart, vertexCount, checkIllegal);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Geometry_SetLodDistance (IntPtr handle, float distance);

		/// <summary>
		/// Set the LOD distance.
		/// 
		/// </summary>
		private void SetLodDistance (float distance)
		{
			Runtime.ValidateRefCounted (this);
			Geometry_SetLodDistance (handle, distance);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Geometry_Draw (IntPtr handle, IntPtr graphics);

		/// <summary>
		/// Draw.
		/// </summary>
		public void Draw (Graphics graphics)
		{
			Runtime.ValidateRefCounted (this);
			Geometry_Draw (handle, (object)graphics == null ? IntPtr.Zero : graphics.Handle);
		}

		private IReadOnlyList<VertexBuffer> _GetVertexBuffers_cache;

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr Geometry_GetVertexBuffers (IntPtr handle);

		/// <summary>
		/// Return all vertex buffers.
		/// </summary>
		private IReadOnlyList<VertexBuffer> GetVertexBuffers ()
		{
			Runtime.ValidateRefCounted (this);
			return _GetVertexBuffers_cache != null ? _GetVertexBuffers_cache : _GetVertexBuffers_cache = Runtime.CreateVectorSharedPtrProxy<VertexBuffer> (Geometry_GetVertexBuffers (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern uint Geometry_GetNumVertexBuffers (IntPtr handle);

		/// <summary>
		/// Return number of vertex buffers.
		/// 
		/// </summary>
		private uint GetNumVertexBuffers ()
		{
			Runtime.ValidateRefCounted (this);
			return Geometry_GetNumVertexBuffers (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr Geometry_GetVertexBuffer (IntPtr handle, uint index);

		/// <summary>
		/// Return vertex buffer by index.
		/// 
		/// </summary>
		public VertexBuffer GetVertexBuffer (uint index)
		{
			Runtime.ValidateRefCounted (this);
			return Runtime.LookupObject<VertexBuffer> (Geometry_GetVertexBuffer (handle, index));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr Geometry_GetIndexBuffer (IntPtr handle);

		/// <summary>
		/// Return the index buffer.
		/// 
		/// </summary>
		private IndexBuffer GetIndexBuffer ()
		{
			Runtime.ValidateRefCounted (this);
			return Runtime.LookupObject<IndexBuffer> (Geometry_GetIndexBuffer (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern PrimitiveType Geometry_GetPrimitiveType (IntPtr handle);

		/// <summary>
		/// Return primitive type.
		/// 
		/// </summary>
		private PrimitiveType GetPrimitiveType ()
		{
			Runtime.ValidateRefCounted (this);
			return Geometry_GetPrimitiveType (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern uint Geometry_GetIndexStart (IntPtr handle);

		/// <summary>
		/// Return start index.
		/// 
		/// </summary>
		private uint GetIndexStart ()
		{
			Runtime.ValidateRefCounted (this);
			return Geometry_GetIndexStart (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern uint Geometry_GetIndexCount (IntPtr handle);

		/// <summary>
		/// Return number of indices.
		/// 
		/// </summary>
		private uint GetIndexCount ()
		{
			Runtime.ValidateRefCounted (this);
			return Geometry_GetIndexCount (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern uint Geometry_GetVertexStart (IntPtr handle);

		/// <summary>
		/// Return first used vertex.
		/// 
		/// </summary>
		private uint GetVertexStart ()
		{
			Runtime.ValidateRefCounted (this);
			return Geometry_GetVertexStart (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern uint Geometry_GetVertexCount (IntPtr handle);

		/// <summary>
		/// Return number of used vertices.
		/// 
		/// </summary>
		private uint GetVertexCount ()
		{
			Runtime.ValidateRefCounted (this);
			return Geometry_GetVertexCount (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern float Geometry_GetLodDistance (IntPtr handle);

		/// <summary>
		/// Return LOD distance.
		/// 
		/// </summary>
		private float GetLodDistance ()
		{
			Runtime.ValidateRefCounted (this);
			return Geometry_GetLodDistance (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern ushort Geometry_GetBufferHash (IntPtr handle);

		/// <summary>
		/// Return buffers' combined hash value for state sorting.
		/// </summary>
		private ushort GetBufferHash ()
		{
			Runtime.ValidateRefCounted (this);
			return Geometry_GetBufferHash (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern float Geometry_GetHitDistance (IntPtr handle, ref Urho.Ray ray, Vector3* outNormal, Vector2* outUV);

		/// <summary>
		/// Return ray hit distance or infinity if no hit. Requires raw data to be set. Optionally return hit normal and hit uv coordinates at intersect point.
		/// </summary>
		public float GetHitDistance (Urho.Ray ray, Vector3* outNormal = null, Vector2* outUV = null)
		{
			Runtime.ValidateRefCounted (this);
			return Geometry_GetHitDistance (handle, ref ray, outNormal, outUV);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool Geometry_IsInside (IntPtr handle, ref Urho.Ray ray);

		/// <summary>
		/// Return whether or not the ray is inside geometry.
		/// </summary>
		public bool IsInside (Urho.Ray ray)
		{
			Runtime.ValidateRefCounted (this);
			return Geometry_IsInside (handle, ref ray);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool Geometry_IsEmpty (IntPtr handle);

		/// <summary>
		/// Return whether has empty draw range.
		/// 
		/// </summary>
		private bool IsEmpty ()
		{
			Runtime.ValidateRefCounted (this);
			return Geometry_IsEmpty (handle);
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
		/// Return number of vertex buffers.
		/// 
		/// Or
		/// Set number of vertex buffers.
		/// 
		/// </summary>
		public uint NumVertexBuffers {
			get {
				return GetNumVertexBuffers ();
			}
			set {
				SetNumVertexBuffers (value);
			}
		}

		/// <summary>
		/// Return the index buffer.
		/// 
		/// Or
		/// Set the index buffer.
		/// 
		/// </summary>
		public IndexBuffer IndexBuffer {
			get {
				return GetIndexBuffer ();
			}
			set {
				SetIndexBuffer (value);
			}
		}

		/// <summary>
		/// Return LOD distance.
		/// 
		/// Or
		/// Set the LOD distance.
		/// 
		/// </summary>
		public float LodDistance {
			get {
				return GetLodDistance ();
			}
			set {
				SetLodDistance (value);
			}
		}

		/// <summary>
		/// Return all vertex buffers.
		/// </summary>
		public IReadOnlyList<VertexBuffer> VertexBuffers {
			get {
				return GetVertexBuffers ();
			}
		}

		/// <summary>
		/// Return primitive type.
		/// 
		/// </summary>
		public PrimitiveType PrimitiveType {
			get {
				return GetPrimitiveType ();
			}
		}

		/// <summary>
		/// Return start index.
		/// 
		/// </summary>
		public uint IndexStart {
			get {
				return GetIndexStart ();
			}
		}

		/// <summary>
		/// Return number of indices.
		/// 
		/// </summary>
		public uint IndexCount {
			get {
				return GetIndexCount ();
			}
		}

		/// <summary>
		/// Return first used vertex.
		/// 
		/// </summary>
		public uint VertexStart {
			get {
				return GetVertexStart ();
			}
		}

		/// <summary>
		/// Return number of used vertices.
		/// 
		/// </summary>
		public uint VertexCount {
			get {
				return GetVertexCount ();
			}
		}

		/// <summary>
		/// Return buffers' combined hash value for state sorting.
		/// </summary>
		public ushort BufferHash {
			get {
				return GetBufferHash ();
			}
		}

		/// <summary>
		/// Return whether has empty draw range.
		/// 
		/// </summary>
		public bool Empty {
			get {
				return IsEmpty ();
			}
		}
	}
}
