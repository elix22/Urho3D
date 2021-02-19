// WARNING - AUTOGENERATED - DO NOT EDIT
// 
// AnimatedSprite2D.cs
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

namespace Urho.Urho2D
{
	/// <summary>
	/// Animated sprite component, it uses to play animation created by Spine (http://www.esotericsoftware.com) and Spriter (http://www.brashmonkey.com/).
	/// </summary>
	public unsafe partial class AnimatedSprite2D : StaticSprite2D
	{
		unsafe partial void OnAnimatedSprite2DCreated ();

		[Preserve]
		public AnimatedSprite2D (IntPtr handle) : base (handle)
		{
			OnAnimatedSprite2DCreated ();
		}

		[Preserve]
		protected AnimatedSprite2D (UrhoObjectFlag emptyFlag) : base (emptyFlag)
		{
			OnAnimatedSprite2DCreated ();
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern int AnimatedSprite2D_GetType (IntPtr handle);

		private StringHash UrhoGetType ()
		{
			Runtime.ValidateRefCounted (this);
			return new StringHash (AnimatedSprite2D_GetType (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr AnimatedSprite2D_GetTypeName (IntPtr handle);

		private string GetTypeName ()
		{
			Runtime.ValidateRefCounted (this);
			return Marshal.PtrToStringAnsi (AnimatedSprite2D_GetTypeName (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern int AnimatedSprite2D_GetTypeStatic ();

		private static StringHash GetTypeStatic ()
		{
			Runtime.Validate (typeof(AnimatedSprite2D));
			return new StringHash (AnimatedSprite2D_GetTypeStatic ());
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr AnimatedSprite2D_GetTypeNameStatic ();

		private static string GetTypeNameStatic ()
		{
			Runtime.Validate (typeof(AnimatedSprite2D));
			return Marshal.PtrToStringAnsi (AnimatedSprite2D_GetTypeNameStatic ());
		}

		[Preserve]
		public AnimatedSprite2D () : this (Application.CurrentContext)
		{
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr AnimatedSprite2D_AnimatedSprite2D (IntPtr context);

		[Preserve]
		public AnimatedSprite2D (Context context) : base (UrhoObjectFlag.Empty)
		{
			Runtime.Validate (typeof(AnimatedSprite2D));
			handle = AnimatedSprite2D_AnimatedSprite2D ((object)context == null ? IntPtr.Zero : context.Handle);
			Runtime.RegisterObject (this);
			OnAnimatedSprite2DCreated ();
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void AnimatedSprite2D_RegisterObject (IntPtr context);

		/// <summary>
		/// Register object factory.
		/// 
		/// </summary>
		public new static void RegisterObject (Context context)
		{
			Runtime.Validate (typeof(AnimatedSprite2D));
			AnimatedSprite2D_RegisterObject ((object)context == null ? IntPtr.Zero : context.Handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void AnimatedSprite2D_OnSetEnabled (IntPtr handle);

		/// <summary>
		/// Handle enabled/disabled state change.
		/// </summary>
		public override void OnSetEnabled ()
		{
			Runtime.ValidateRefCounted (this);
			AnimatedSprite2D_OnSetEnabled (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void AnimatedSprite2D_SetAnimationSet (IntPtr handle, IntPtr animationSet);

		/// <summary>
		/// Set animation set.
		/// 
		/// </summary>
		private void SetAnimationSet (AnimationSet2D animationSet)
		{
			Runtime.ValidateRefCounted (this);
			AnimatedSprite2D_SetAnimationSet (handle, (object)animationSet == null ? IntPtr.Zero : animationSet.Handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void AnimatedSprite2D_SetEntity (IntPtr handle, string entity);

		/// <summary>
		/// Set entity name (skin name for spine, entity name for spriter).
		/// 
		/// </summary>
		private void SetEntity (string entity)
		{
			Runtime.ValidateRefCounted (this);
			AnimatedSprite2D_SetEntity (handle, entity);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void AnimatedSprite2D_SetAnimation (IntPtr handle, string name, LoopMode2D loopMode);

		/// <summary>
		/// Set animation by name and loop mode.
		/// </summary>
		public void SetAnimation (string name, LoopMode2D loopMode = LoopMode2D.Default)
		{
			Runtime.ValidateRefCounted (this);
			AnimatedSprite2D_SetAnimation (handle, name, loopMode);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void AnimatedSprite2D_SetLoopMode (IntPtr handle, LoopMode2D loopMode);

		/// <summary>
		/// Set loop mode.
		/// 
		/// </summary>
		private void SetLoopMode (LoopMode2D loopMode)
		{
			Runtime.ValidateRefCounted (this);
			AnimatedSprite2D_SetLoopMode (handle, loopMode);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void AnimatedSprite2D_SetSpeed (IntPtr handle, float speed);

		/// <summary>
		/// Set speed.
		/// 
		/// </summary>
		private void SetSpeed (float speed)
		{
			Runtime.ValidateRefCounted (this);
			AnimatedSprite2D_SetSpeed (handle, speed);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr AnimatedSprite2D_GetAnimationSet (IntPtr handle);

		/// <summary>
		/// Return animation.
		/// 
		/// </summary>
		private AnimationSet2D GetAnimationSet ()
		{
			Runtime.ValidateRefCounted (this);
			return Runtime.LookupObject<AnimationSet2D> (AnimatedSprite2D_GetAnimationSet (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr AnimatedSprite2D_GetEntity (IntPtr handle);

		/// <summary>
		/// Return entity name.
		/// 
		/// </summary>
		private string GetEntity ()
		{
			Runtime.ValidateRefCounted (this);
			return Marshal.PtrToStringAnsi (AnimatedSprite2D_GetEntity (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr AnimatedSprite2D_GetAnimation (IntPtr handle);

		/// <summary>
		/// Return animation name.
		/// 
		/// </summary>
		private string GetAnimation ()
		{
			Runtime.ValidateRefCounted (this);
			return Marshal.PtrToStringAnsi (AnimatedSprite2D_GetAnimation (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern LoopMode2D AnimatedSprite2D_GetLoopMode (IntPtr handle);

		/// <summary>
		/// Return loop mode.
		/// 
		/// </summary>
		private LoopMode2D GetLoopMode ()
		{
			Runtime.ValidateRefCounted (this);
			return AnimatedSprite2D_GetLoopMode (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern float AnimatedSprite2D_GetSpeed (IntPtr handle);

		/// <summary>
		/// Return speed.
		/// 
		/// </summary>
		private float GetSpeed ()
		{
			Runtime.ValidateRefCounted (this);
			return AnimatedSprite2D_GetSpeed (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern ResourceRef AnimatedSprite2D_GetAnimationSetAttr (IntPtr handle);

		/// <summary>
		/// Return animation set attribute.
		/// </summary>
		private ResourceRef GetAnimationSetAttr ()
		{
			Runtime.ValidateRefCounted (this);
			return AnimatedSprite2D_GetAnimationSetAttr (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void AnimatedSprite2D_SetAnimationAttr (IntPtr handle, string name);

		/// <summary>
		/// Set animation by name.
		/// 
		/// </summary>
		public void SetAnimationAttr (string name)
		{
			Runtime.ValidateRefCounted (this);
			AnimatedSprite2D_SetAnimationAttr (handle, name);
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
		/// Return animation.
		/// 
		/// Or
		/// Set animation set.
		/// 
		/// </summary>
		public AnimationSet2D AnimationSet {
			get {
				return GetAnimationSet ();
			}
			set {
				SetAnimationSet (value);
			}
		}

		/// <summary>
		/// Return entity name.
		/// 
		/// Or
		/// Set entity name (skin name for spine, entity name for spriter).
		/// 
		/// </summary>
		public string Entity {
			get {
				return GetEntity ();
			}
			set {
				SetEntity (value);
			}
		}

		/// <summary>
		/// Return loop mode.
		/// 
		/// Or
		/// Set loop mode.
		/// 
		/// </summary>
		public LoopMode2D LoopMode {
			get {
				return GetLoopMode ();
			}
			set {
				SetLoopMode (value);
			}
		}

		/// <summary>
		/// Return speed.
		/// 
		/// Or
		/// Set speed.
		/// 
		/// </summary>
		public float Speed {
			get {
				return GetSpeed ();
			}
			set {
				SetSpeed (value);
			}
		}

		/// <summary>
		/// Return animation name.
		/// 
		/// </summary>
		public string Animation {
			get {
				return GetAnimation ();
			}
		}

		/// <summary>
		/// Return animation set attribute.
		/// </summary>
		public ResourceRef AnimationSetAttr {
			get {
				return GetAnimationSetAttr ();
			}
		}
	}
}
