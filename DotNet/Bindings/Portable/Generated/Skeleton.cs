// WARNING - AUTOGENERATED - DO NOT EDIT
// 
// Skeleton.cs
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
	/// Hierarchical collection of bones.
	/// </summary>
	public unsafe partial class Skeleton
	{
		unsafe partial void OnSkeletonCreated ();

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool Skeleton_Load_File (IntPtr handle, IntPtr source);

		/// <summary>
		/// Read from a stream. Return true if successful.
		/// </summary>
		public bool Load (File source)
		{
			Runtime.ValidateObject (this);
			return Skeleton_Load_File (handle, (object)source == null ? IntPtr.Zero : source.Handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool Skeleton_Load_MemoryBuffer (IntPtr handle, IntPtr source);

		/// <summary>
		/// Read from a stream. Return true if successful.
		/// </summary>
		public bool Load (MemoryBuffer source)
		{
			Runtime.ValidateObject (this);
			return Skeleton_Load_MemoryBuffer (handle, (object)source == null ? IntPtr.Zero : source.Handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool Skeleton_Save_File (IntPtr handle, IntPtr dest);

		/// <summary>
		/// Write to a stream. Return true if successful.
		/// </summary>
		public bool Save (File dest)
		{
			Runtime.ValidateObject (this);
			return Skeleton_Save_File (handle, (object)dest == null ? IntPtr.Zero : dest.Handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool Skeleton_Save_MemoryBuffer (IntPtr handle, IntPtr dest);

		/// <summary>
		/// Write to a stream. Return true if successful.
		/// </summary>
		public bool Save (MemoryBuffer dest)
		{
			Runtime.ValidateObject (this);
			return Skeleton_Save_MemoryBuffer (handle, (object)dest == null ? IntPtr.Zero : dest.Handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Skeleton_SetRootBoneIndex (IntPtr handle, uint index);

		/// <summary>
		/// Set root bone's index.
		/// </summary>
		public void SetRootBoneIndex (uint index)
		{
			Runtime.ValidateObject (this);
			Skeleton_SetRootBoneIndex (handle, index);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Skeleton_ClearBones (IntPtr handle);

		/// <summary>
		/// Clear bones.
		/// </summary>
		public void ClearBones ()
		{
			Runtime.ValidateObject (this);
			Skeleton_ClearBones (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Skeleton_Reset (IntPtr handle);

		/// <summary>
		/// Reset all animating bones to initial positions.
		/// </summary>
		public void Reset ()
		{
			Runtime.ValidateObject (this);
			Skeleton_Reset (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern uint Skeleton_GetNumBones (IntPtr handle);

		/// <summary>
		/// Return number of bones.
		/// 
		/// </summary>
		private uint GetNumBones ()
		{
			Runtime.ValidateObject (this);
			return Skeleton_GetNumBones (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern Bone* Skeleton_GetRootBone (IntPtr handle);

		/// <summary>
		/// Return root bone.
		/// 
		/// </summary>
		private Bone* GetRootBone ()
		{
			Runtime.ValidateObject (this);
			return Skeleton_GetRootBone (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern uint Skeleton_GetBoneIndex (IntPtr handle, string boneName);

		/// <summary>
		/// Return index of the bone by name. Return M_MAX_UNSIGNED if not found.
		/// </summary>
		public uint GetBoneIndex (string boneName)
		{
			Runtime.ValidateObject (this);
			return Skeleton_GetBoneIndex (handle, boneName);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern uint Skeleton_GetBoneIndex0 (IntPtr handle, Bone* bone);

		/// <summary>
		/// Return index of the bone by the bone pointer. Return M_MAX_UNSIGNED if not found.
		/// </summary>
		public uint GetBoneIndex (Bone* bone)
		{
			Runtime.ValidateObject (this);
			return Skeleton_GetBoneIndex0 (handle, bone);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern Bone* Skeleton_GetBoneParent (IntPtr handle, Bone* bone);

		/// <summary>
		/// Return parent of the given bone. Return null for root bones.
		/// </summary>
		public Bone* GetBoneParent (Bone* bone)
		{
			Runtime.ValidateObject (this);
			return Skeleton_GetBoneParent (handle, bone);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern Bone* Skeleton_GetBone (IntPtr handle, uint index);

		/// <summary>
		/// Return bone by index.
		/// 
		/// </summary>
		public Bone* GetBone (uint index)
		{
			Runtime.ValidateObject (this);
			return Skeleton_GetBone (handle, index);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Skeleton_ResetSilent (IntPtr handle);

		/// <summary>
		/// Reset all animating bones to initial positions without marking the nodes dirty. Requires the node dirtying to be performed later.
		/// </summary>
		public void ResetSilent ()
		{
			Runtime.ValidateObject (this);
			Skeleton_ResetSilent (handle);
		}

		/// <summary>
		/// Return number of bones.
		/// 
		/// </summary>
		public uint NumBones {
			get {
				return GetNumBones ();
			}
		}

		/// <summary>
		/// Return root bone.
		/// 
		/// </summary>
		public Bone* RootBone {
			get {
				return GetRootBone ();
			}
		}
	}
}
