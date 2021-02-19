// WARNING - AUTOGENERATED - DO NOT EDIT
// 
// OcclusionBuffer.cs
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

namespace Urho
{
	/// <summary>
	/// Software renderer for occlusion.
	/// </summary>
	public unsafe partial class OcclusionBuffer : UrhoObject
	{
		unsafe partial void OnOcclusionBufferCreated ();

		[Preserve]
		public OcclusionBuffer (IntPtr handle) : base (handle)
		{
			OnOcclusionBufferCreated ();
		}

		[Preserve]
		protected OcclusionBuffer (UrhoObjectFlag emptyFlag) : base (emptyFlag)
		{
			OnOcclusionBufferCreated ();
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern int OcclusionBuffer_GetType (IntPtr handle);

		private StringHash UrhoGetType ()
		{
			Runtime.ValidateRefCounted (this);
			return new StringHash (OcclusionBuffer_GetType (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr OcclusionBuffer_GetTypeName (IntPtr handle);

		private string GetTypeName ()
		{
			Runtime.ValidateRefCounted (this);
			return Marshal.PtrToStringAnsi (OcclusionBuffer_GetTypeName (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern int OcclusionBuffer_GetTypeStatic ();

		private static StringHash GetTypeStatic ()
		{
			Runtime.Validate (typeof(OcclusionBuffer));
			return new StringHash (OcclusionBuffer_GetTypeStatic ());
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr OcclusionBuffer_GetTypeNameStatic ();

		private static string GetTypeNameStatic ()
		{
			Runtime.Validate (typeof(OcclusionBuffer));
			return Marshal.PtrToStringAnsi (OcclusionBuffer_GetTypeNameStatic ());
		}

		[Preserve]
		public OcclusionBuffer () : this (Application.CurrentContext)
		{
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr OcclusionBuffer_OcclusionBuffer (IntPtr context);

		[Preserve]
		public OcclusionBuffer (Context context) : base (UrhoObjectFlag.Empty)
		{
			Runtime.Validate (typeof(OcclusionBuffer));
			handle = OcclusionBuffer_OcclusionBuffer ((object)context == null ? IntPtr.Zero : context.Handle);
			Runtime.RegisterObject (this);
			OnOcclusionBufferCreated ();
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool OcclusionBuffer_SetSize (IntPtr handle, int width, int height, bool threaded);

		/// <summary>
		/// Set occlusion buffer size and whether to reserve multiple buffers for threading optimization.
		/// </summary>
		public bool SetSize (int width, int height, bool threaded)
		{
			Runtime.ValidateRefCounted (this);
			return OcclusionBuffer_SetSize (handle, width, height, threaded);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void OcclusionBuffer_SetView (IntPtr handle, IntPtr camera);

		/// <summary>
		/// Set camera view to render from.
		/// </summary>
		public void SetView (Camera camera)
		{
			Runtime.ValidateRefCounted (this);
			OcclusionBuffer_SetView (handle, (object)camera == null ? IntPtr.Zero : camera.Handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void OcclusionBuffer_SetMaxTriangles (IntPtr handle, uint triangles);

		/// <summary>
		/// Set maximum triangles to render.
		/// </summary>
		private void SetMaxTriangles (uint triangles)
		{
			Runtime.ValidateRefCounted (this);
			OcclusionBuffer_SetMaxTriangles (handle, triangles);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void OcclusionBuffer_SetCullMode (IntPtr handle, CullMode mode);

		/// <summary>
		/// Set culling mode.
		/// </summary>
		private void SetCullMode (CullMode mode)
		{
			Runtime.ValidateRefCounted (this);
			OcclusionBuffer_SetCullMode (handle, mode);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void OcclusionBuffer_Reset (IntPtr handle);

		/// <summary>
		/// Reset number of triangles.
		/// </summary>
		public void Reset ()
		{
			Runtime.ValidateRefCounted (this);
			OcclusionBuffer_Reset (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void OcclusionBuffer_Clear (IntPtr handle);

		/// <summary>
		/// Clear the buffer.
		/// </summary>
		public void Clear ()
		{
			Runtime.ValidateRefCounted (this);
			OcclusionBuffer_Clear (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool OcclusionBuffer_AddTriangles (IntPtr handle, ref Urho.Matrix3x4 model, void* vertexData, uint vertexSize, uint vertexStart, uint vertexCount);

		/// <summary>
		/// Submit a triangle mesh to the buffer using non-indexed geometry. Return true if did not overflow the allowed triangle count.
		/// </summary>
		public bool AddTriangles (Urho.Matrix3x4 model, void* vertexData, uint vertexSize, uint vertexStart, uint vertexCount)
		{
			Runtime.ValidateRefCounted (this);
			return OcclusionBuffer_AddTriangles (handle, ref model, vertexData, vertexSize, vertexStart, vertexCount);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool OcclusionBuffer_AddTriangles0 (IntPtr handle, ref Urho.Matrix3x4 model, void* vertexData, uint vertexSize, void* indexData, uint indexSize, uint indexStart, uint indexCount);

		/// <summary>
		/// Submit a triangle mesh to the buffer using indexed geometry. Return true if did not overflow the allowed triangle count.
		/// </summary>
		public bool AddTriangles (Urho.Matrix3x4 model, void* vertexData, uint vertexSize, void* indexData, uint indexSize, uint indexStart, uint indexCount)
		{
			Runtime.ValidateRefCounted (this);
			return OcclusionBuffer_AddTriangles0 (handle, ref model, vertexData, vertexSize, indexData, indexSize, indexStart, indexCount);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void OcclusionBuffer_DrawTriangles (IntPtr handle);

		/// <summary>
		/// Draw submitted batches. Uses worker threads if enabled during SetSize().
		/// </summary>
		public void DrawTriangles ()
		{
			Runtime.ValidateRefCounted (this);
			OcclusionBuffer_DrawTriangles (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void OcclusionBuffer_BuildDepthHierarchy (IntPtr handle);

		/// <summary>
		/// Build reduced size mip levels.
		/// </summary>
		public void BuildDepthHierarchy ()
		{
			Runtime.ValidateRefCounted (this);
			OcclusionBuffer_BuildDepthHierarchy (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void OcclusionBuffer_ResetUseTimer (IntPtr handle);

		/// <summary>
		/// Reset last used timer.
		/// </summary>
		public void ResetUseTimer ()
		{
			Runtime.ValidateRefCounted (this);
			OcclusionBuffer_ResetUseTimer (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern int* OcclusionBuffer_GetBuffer (IntPtr handle);

		/// <summary>
		/// Return highest level depth values.
		/// </summary>
		private int* GetBuffer ()
		{
			Runtime.ValidateRefCounted (this);
			return OcclusionBuffer_GetBuffer (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern Urho.Matrix3x4 OcclusionBuffer_GetView (IntPtr handle);

		/// <summary>
		/// Return view transform matrix.
		/// </summary>
		private Urho.Matrix3x4 GetView ()
		{
			Runtime.ValidateRefCounted (this);
			return OcclusionBuffer_GetView (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern Urho.Matrix4 OcclusionBuffer_GetProjection (IntPtr handle);

		/// <summary>
		/// Return projection matrix.
		/// </summary>
		private Urho.Matrix4 GetProjection ()
		{
			Runtime.ValidateRefCounted (this);
			return OcclusionBuffer_GetProjection (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern int OcclusionBuffer_GetWidth (IntPtr handle);

		/// <summary>
		/// Return buffer width.
		/// </summary>
		private int GetWidth ()
		{
			Runtime.ValidateRefCounted (this);
			return OcclusionBuffer_GetWidth (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern int OcclusionBuffer_GetHeight (IntPtr handle);

		/// <summary>
		/// Return buffer height.
		/// </summary>
		private int GetHeight ()
		{
			Runtime.ValidateRefCounted (this);
			return OcclusionBuffer_GetHeight (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern uint OcclusionBuffer_GetNumTriangles (IntPtr handle);

		/// <summary>
		/// Return number of rendered triangles.
		/// </summary>
		private uint GetNumTriangles ()
		{
			Runtime.ValidateRefCounted (this);
			return OcclusionBuffer_GetNumTriangles (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern uint OcclusionBuffer_GetMaxTriangles (IntPtr handle);

		/// <summary>
		/// Return maximum number of triangles.
		/// </summary>
		private uint GetMaxTriangles ()
		{
			Runtime.ValidateRefCounted (this);
			return OcclusionBuffer_GetMaxTriangles (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern CullMode OcclusionBuffer_GetCullMode (IntPtr handle);

		/// <summary>
		/// Return culling mode.
		/// </summary>
		private CullMode GetCullMode ()
		{
			Runtime.ValidateRefCounted (this);
			return OcclusionBuffer_GetCullMode (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool OcclusionBuffer_IsThreaded (IntPtr handle);

		/// <summary>
		/// Return whether is using threads to speed up rendering.
		/// </summary>
		private bool IsThreaded ()
		{
			Runtime.ValidateRefCounted (this);
			return OcclusionBuffer_IsThreaded (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool OcclusionBuffer_IsVisible (IntPtr handle, ref Urho.BoundingBox worldSpaceBox);

		/// <summary>
		/// Test a bounding box for visibility. For best performance, build depth hierarchy first.
		/// </summary>
		public bool IsVisible (Urho.BoundingBox worldSpaceBox)
		{
			Runtime.ValidateRefCounted (this);
			return OcclusionBuffer_IsVisible (handle, ref worldSpaceBox);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern uint OcclusionBuffer_GetUseTimer (IntPtr handle);

		/// <summary>
		/// Return time since last use in milliseconds.
		/// </summary>
		private uint GetUseTimer ()
		{
			Runtime.ValidateRefCounted (this);
			return OcclusionBuffer_GetUseTimer (handle);
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
		/// Return view transform matrix.
		/// </summary>
		public Urho.Matrix3x4 View {
			get {
				return GetView ();
			}
		}

		/// <summary>
		/// Return maximum number of triangles.
		/// Or
		/// Set maximum triangles to render.
		/// </summary>
		public uint MaxTriangles {
			get {
				return GetMaxTriangles ();
			}
			set {
				SetMaxTriangles (value);
			}
		}

		/// <summary>
		/// Return culling mode.
		/// Or
		/// Set culling mode.
		/// </summary>
		public CullMode CullMode {
			get {
				return GetCullMode ();
			}
			set {
				SetCullMode (value);
			}
		}

		/// <summary>
		/// Return highest level depth values.
		/// </summary>
		public int* Buffer {
			get {
				return GetBuffer ();
			}
		}

		/// <summary>
		/// Return projection matrix.
		/// </summary>
		public Urho.Matrix4 Projection {
			get {
				return GetProjection ();
			}
		}

		/// <summary>
		/// Return buffer width.
		/// </summary>
		public int Width {
			get {
				return GetWidth ();
			}
		}

		/// <summary>
		/// Return buffer height.
		/// </summary>
		public int Height {
			get {
				return GetHeight ();
			}
		}

		/// <summary>
		/// Return number of rendered triangles.
		/// </summary>
		public uint NumTriangles {
			get {
				return GetNumTriangles ();
			}
		}

		/// <summary>
		/// Return whether is using threads to speed up rendering.
		/// </summary>
		public bool Threaded {
			get {
				return IsThreaded ();
			}
		}

		/// <summary>
		/// Return time since last use in milliseconds.
		/// </summary>
		public uint UseTimer {
			get {
				return GetUseTimer ();
			}
		}
	}
}
