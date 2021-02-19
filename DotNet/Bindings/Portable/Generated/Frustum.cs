// WARNING - AUTOGENERATED - DO NOT EDIT
// 
// Frustum.cs
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
	/// Convex constructed of 6 planes.
	/// </summary>
	public unsafe partial class Frustum
	{
		unsafe partial void OnFrustumCreated ();

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr Frustum_Frustum ();

		[Preserve]
		public Frustum ()
		{
			Runtime.Validate (typeof(Frustum));
			handle = Frustum_Frustum ();
			OnFrustumCreated ();
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr Frustum_Frustum0 (IntPtr frustum);

		[Preserve]
		public Frustum (Frustum frustum)
		{
			Runtime.Validate (typeof(Frustum));
			handle = Frustum_Frustum0 ((object)frustum == null ? IntPtr.Zero : frustum.Handle);
			OnFrustumCreated ();
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Frustum_Define (IntPtr handle, float fov, float aspectRatio, float zoom, float nearZ, float farZ, ref Urho.Matrix3x4 transform);

		/// <summary>
		/// Define with projection parameters and a transform matrix.
		/// </summary>
		public void Define (float fov, float aspectRatio, float zoom, float nearZ, float farZ, Urho.Matrix3x4 transform)
		{
			Runtime.ValidateObject (this);
			Frustum_Define (handle, fov, aspectRatio, zoom, nearZ, farZ, ref transform);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Frustum_Define1 (IntPtr handle, ref Urho.Vector3 nearValue, ref Urho.Vector3 farValue, ref Urho.Matrix3x4 transform);

		/// <summary>
		/// Define with near and far dimension vectors and a transform matrix.
		/// </summary>
		public void Define (Urho.Vector3 nearValue, Urho.Vector3 farValue, Urho.Matrix3x4 transform)
		{
			Runtime.ValidateObject (this);
			Frustum_Define1 (handle, ref nearValue, ref farValue, ref transform);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Frustum_Define2 (IntPtr handle, ref Urho.BoundingBox box, ref Urho.Matrix3x4 transform);

		/// <summary>
		/// Define with a bounding box and a transform matrix.
		/// </summary>
		public void Define (Urho.BoundingBox box, Urho.Matrix3x4 transform)
		{
			Runtime.ValidateObject (this);
			Frustum_Define2 (handle, ref box, ref transform);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Frustum_Define3 (IntPtr handle, ref Urho.Matrix4 projection);

		/// <summary>
		/// Define from a projection or view-projection matrix.
		/// </summary>
		public void Define (Urho.Matrix4 projection)
		{
			Runtime.ValidateObject (this);
			Frustum_Define3 (handle, ref projection);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Frustum_DefineOrtho (IntPtr handle, float orthoSize, float aspectRatio, float zoom, float nearZ, float farZ, ref Urho.Matrix3x4 transform);

		/// <summary>
		/// Define with orthographic projection parameters and a transform matrix.
		/// </summary>
		public void DefineOrtho (float orthoSize, float aspectRatio, float zoom, float nearZ, float farZ, Urho.Matrix3x4 transform)
		{
			Runtime.ValidateObject (this);
			Frustum_DefineOrtho (handle, orthoSize, aspectRatio, zoom, nearZ, farZ, ref transform);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Frustum_DefineSplit (IntPtr handle, ref Urho.Matrix4 projection, float nearValue, float farValue);

		/// <summary>
		/// Define a split (limited) frustum from a projection matrix, with near
		/// &
		/// far distances specified.
		/// </summary>
		public void DefineSplit (Urho.Matrix4 projection, float nearValue, float farValue)
		{
			Runtime.ValidateObject (this);
			Frustum_DefineSplit (handle, ref projection, nearValue, farValue);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Frustum_Transform (IntPtr handle, ref Urho.Matrix3x4 transform);

		/// <summary>
		/// Transform by a 3x4 matrix.
		/// </summary>
		public void Transform (Urho.Matrix3x4 transform)
		{
			Runtime.ValidateObject (this);
			Frustum_Transform (handle, ref transform);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern Intersection Frustum_IsInside (IntPtr handle, ref Urho.Vector3 point);

		/// <summary>
		/// Test if a point is inside or outside.
		/// </summary>
		public Intersection IsInside (Urho.Vector3 point)
		{
			Runtime.ValidateObject (this);
			return Frustum_IsInside (handle, ref point);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern Intersection Frustum_IsInside4 (IntPtr handle, IntPtr sphere);

		/// <summary>
		/// Test if a sphere is inside, outside or intersects.
		/// </summary>
		public Intersection IsInside (Sphere sphere)
		{
			Runtime.ValidateObject (this);
			return Frustum_IsInside4 (handle, (object)sphere == null ? IntPtr.Zero : sphere.Handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern Intersection Frustum_IsInsideFast (IntPtr handle, IntPtr sphere);

		/// <summary>
		/// Test if a sphere if (partially) inside or outside.
		/// </summary>
		public Intersection IsInsideFast (Sphere sphere)
		{
			Runtime.ValidateObject (this);
			return Frustum_IsInsideFast (handle, (object)sphere == null ? IntPtr.Zero : sphere.Handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern Intersection Frustum_IsInside5 (IntPtr handle, ref Urho.BoundingBox box);

		/// <summary>
		/// Test if a bounding box is inside, outside or intersects.
		/// </summary>
		public Intersection IsInside (Urho.BoundingBox box)
		{
			Runtime.ValidateObject (this);
			return Frustum_IsInside5 (handle, ref box);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern Intersection Frustum_IsInsideFast6 (IntPtr handle, ref Urho.BoundingBox box);

		/// <summary>
		/// Test if a bounding box is (partially) inside or outside.
		/// </summary>
		public Intersection IsInsideFast (Urho.BoundingBox box)
		{
			Runtime.ValidateObject (this);
			return Frustum_IsInsideFast6 (handle, ref box);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern float Frustum_Distance (IntPtr handle, ref Urho.Vector3 point);

		/// <summary>
		/// Return distance of a point to the frustum, or 0 if inside.
		/// </summary>
		public float Distance (Urho.Vector3 point)
		{
			Runtime.ValidateObject (this);
			return Frustum_Distance (handle, ref point);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr Frustum_Transformed (IntPtr handle, ref Urho.Matrix3x4 transform);

		/// <summary>
		/// Return transformed by a 3x4 matrix.
		/// </summary>
		public Frustum Transformed (Urho.Matrix3x4 transform)
		{
			Runtime.ValidateObject (this);
			return new Frustum (Frustum_Transformed (handle, ref transform));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern Rect Frustum_Projected (IntPtr handle, ref Urho.Matrix4 projection);

		/// <summary>
		/// Return projected by a 4x4 projection matrix.
		/// </summary>
		public Rect Projected (Urho.Matrix4 projection)
		{
			Runtime.ValidateObject (this);
			return Frustum_Projected (handle, ref projection);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Frustum_UpdatePlanes (IntPtr handle);

		/// <summary>
		/// Update the planes. Called internally.
		/// </summary>
		public void UpdatePlanes ()
		{
			Runtime.ValidateObject (this);
			Frustum_UpdatePlanes (handle);
		}
	}
}
