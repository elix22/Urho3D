// WARNING - AUTOGENERATED - DO NOT EDIT
// 
// Generated using `sharpie urho`
// 
// Sprite.cs
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

namespace Urho.Gui
{
	/// <summary>
	/// %UI element which allows sub-pixel positioning and size, as well as rotation. Only other Sprites should be added as child elements.
	/// </summary>
	public unsafe partial class Sprite : UIElement
	{
		unsafe partial void OnSpriteCreated ();

		[Preserve]
		public Sprite (IntPtr handle) : base (handle)
		{
			OnSpriteCreated ();
		}

		[Preserve]
		protected Sprite (UrhoObjectFlag emptyFlag) : base (emptyFlag)
		{
			OnSpriteCreated ();
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern int Sprite_GetType (IntPtr handle);

		private StringHash UrhoGetType ()
		{
			Runtime.ValidateRefCounted (this);
			return new StringHash (Sprite_GetType (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr Sprite_GetTypeName (IntPtr handle);

		private string GetTypeName ()
		{
			Runtime.ValidateRefCounted (this);
			return Marshal.PtrToStringAnsi (Sprite_GetTypeName (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern int Sprite_GetTypeStatic ();

		private static StringHash GetTypeStatic ()
		{
			Runtime.Validate (typeof(Sprite));
			return new StringHash (Sprite_GetTypeStatic ());
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr Sprite_GetTypeNameStatic ();

		private static string GetTypeNameStatic ()
		{
			Runtime.Validate (typeof(Sprite));
			return Marshal.PtrToStringAnsi (Sprite_GetTypeNameStatic ());
		}

		[Preserve]
		public Sprite () : this (Application.CurrentContext)
		{
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr Sprite_Sprite (IntPtr context);

		[Preserve]
		public Sprite (Context context) : base (UrhoObjectFlag.Empty)
		{
			Runtime.Validate (typeof(Sprite));
			handle = Sprite_Sprite ((object)context == null ? IntPtr.Zero : context.Handle);
			Runtime.RegisterObject (this);
			OnSpriteCreated ();
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Sprite_RegisterObject (IntPtr context);

		/// <summary>
		/// Register object factory.
		/// 
		/// </summary>
		public new static void RegisterObject (Context context)
		{
			Runtime.Validate (typeof(Sprite));
			Sprite_RegisterObject ((object)context == null ? IntPtr.Zero : context.Handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool Sprite_IsWithinScissor (IntPtr handle, ref Urho.IntRect currentScissor);

		/// <summary>
		/// Return whether is visible and inside a scissor rectangle and should be rendered.
		/// </summary>
		public override bool IsWithinScissor (Urho.IntRect currentScissor)
		{
			Runtime.ValidateRefCounted (this);
			return Sprite_IsWithinScissor (handle, ref currentScissor);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern Urho.IntVector2 Sprite_GetScreenPosition (IntPtr handle);

		/// <summary>
		/// Update and return screen position.
		/// </summary>
		private Urho.IntVector2 GetScreenPosition ()
		{
			Runtime.ValidateRefCounted (this);
			return Sprite_GetScreenPosition (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Sprite_OnPositionSet (IntPtr handle, ref Urho.IntVector2 newPosition);

		/// <summary>
		/// React to position change.
		/// </summary>
		public override void OnPositionSet (Urho.IntVector2 newPosition)
		{
			Runtime.ValidateRefCounted (this);
			Sprite_OnPositionSet (handle, ref newPosition);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern Urho.IntVector2 Sprite_ScreenToElement (IntPtr handle, ref Urho.IntVector2 screenPosition);

		/// <summary>
		/// Convert screen coordinates to element coordinates.
		/// </summary>
		public override Urho.IntVector2 ScreenToElement (Urho.IntVector2 screenPosition)
		{
			Runtime.ValidateRefCounted (this);
			return Sprite_ScreenToElement (handle, ref screenPosition);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern Urho.IntVector2 Sprite_ElementToScreen (IntPtr handle, ref Urho.IntVector2 position);

		/// <summary>
		/// Convert element coordinates to screen coordinates.
		/// </summary>
		public override Urho.IntVector2 ElementToScreen (Urho.IntVector2 position)
		{
			Runtime.ValidateRefCounted (this);
			return Sprite_ElementToScreen (handle, ref position);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Sprite_SetPosition (IntPtr handle, ref Urho.Vector2 position);

		/// <summary>
		/// Set floating point position.
		/// 
		/// </summary>
		private void SetPosition (Urho.Vector2 position)
		{
			Runtime.ValidateRefCounted (this);
			Sprite_SetPosition (handle, ref position);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Sprite_SetPosition0 (IntPtr handle, float x, float y);

		/// <summary>
		/// Set floating point position.
		/// </summary>
		public void SetPosition (float x, float y)
		{
			Runtime.ValidateRefCounted (this);
			Sprite_SetPosition0 (handle, x, y);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Sprite_SetHotSpot (IntPtr handle, ref Urho.IntVector2 hotSpot);

		/// <summary>
		/// Set hotspot for positioning and rotation.
		/// 
		/// </summary>
		private void SetHotSpot (Urho.IntVector2 hotSpot)
		{
			Runtime.ValidateRefCounted (this);
			Sprite_SetHotSpot (handle, ref hotSpot);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Sprite_SetHotSpot1 (IntPtr handle, int x, int y);

		/// <summary>
		/// Set hotspot for positioning and rotation.
		/// </summary>
		public void SetHotSpot (int x, int y)
		{
			Runtime.ValidateRefCounted (this);
			Sprite_SetHotSpot1 (handle, x, y);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Sprite_SetScale (IntPtr handle, ref Urho.Vector2 scale);

		/// <summary>
		/// Set scale. Scale also affects child sprites.
		/// 
		/// </summary>
		private void SetScale (Urho.Vector2 scale)
		{
			Runtime.ValidateRefCounted (this);
			Sprite_SetScale (handle, ref scale);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Sprite_SetScale2 (IntPtr handle, float x, float y);

		/// <summary>
		/// Set scale. Scale also affects child sprites.
		/// </summary>
		public void SetScale (float x, float y)
		{
			Runtime.ValidateRefCounted (this);
			Sprite_SetScale2 (handle, x, y);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Sprite_SetScale3 (IntPtr handle, float scale);

		/// <summary>
		/// Set uniform scale. Scale also affects child sprites.
		/// </summary>
		public void SetScale (float scale)
		{
			Runtime.ValidateRefCounted (this);
			Sprite_SetScale3 (handle, scale);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Sprite_SetRotation (IntPtr handle, float angle);

		/// <summary>
		/// Set rotation angle.
		/// 
		/// </summary>
		private void SetRotation (float angle)
		{
			Runtime.ValidateRefCounted (this);
			Sprite_SetRotation (handle, angle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Sprite_SetTexture (IntPtr handle, IntPtr texture);

		/// <summary>
		/// Set texture.
		/// 
		/// </summary>
		private void SetTexture (Texture texture)
		{
			Runtime.ValidateRefCounted (this);
			Sprite_SetTexture (handle, (object)texture == null ? IntPtr.Zero : texture.Handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Sprite_SetImageRect (IntPtr handle, ref Urho.IntRect rect);

		/// <summary>
		/// Set part of texture to use as the image.
		/// 
		/// </summary>
		private void SetImageRect (Urho.IntRect rect)
		{
			Runtime.ValidateRefCounted (this);
			Sprite_SetImageRect (handle, ref rect);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Sprite_SetFullImageRect (IntPtr handle);

		/// <summary>
		/// Use whole texture as the image.
		/// </summary>
		public void SetFullImageRect ()
		{
			Runtime.ValidateRefCounted (this);
			Sprite_SetFullImageRect (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Sprite_SetBlendMode (IntPtr handle, BlendMode mode);

		/// <summary>
		/// Set blend mode.
		/// 
		/// </summary>
		private void SetBlendMode (BlendMode mode)
		{
			Runtime.ValidateRefCounted (this);
			Sprite_SetBlendMode (handle, mode);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern Urho.Vector2 Sprite_GetPosition (IntPtr handle);

		/// <summary>
		/// Return floating point position.
		/// 
		/// </summary>
		private Urho.Vector2 GetPosition ()
		{
			Runtime.ValidateRefCounted (this);
			return Sprite_GetPosition (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern Urho.IntVector2 Sprite_GetHotSpot (IntPtr handle);

		/// <summary>
		/// Return hotspot.
		/// 
		/// </summary>
		private Urho.IntVector2 GetHotSpot ()
		{
			Runtime.ValidateRefCounted (this);
			return Sprite_GetHotSpot (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern Urho.Vector2 Sprite_GetScale (IntPtr handle);

		/// <summary>
		/// Return scale.
		/// 
		/// </summary>
		private Urho.Vector2 GetScale ()
		{
			Runtime.ValidateRefCounted (this);
			return Sprite_GetScale (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern float Sprite_GetRotation (IntPtr handle);

		/// <summary>
		/// Return rotation angle.
		/// 
		/// </summary>
		private float GetRotation ()
		{
			Runtime.ValidateRefCounted (this);
			return Sprite_GetRotation (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr Sprite_GetTexture (IntPtr handle);

		/// <summary>
		/// Return texture.
		/// 
		/// </summary>
		private Texture GetTexture ()
		{
			Runtime.ValidateRefCounted (this);
			return Runtime.LookupObject<Texture> (Sprite_GetTexture (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern Urho.IntRect Sprite_GetImageRect (IntPtr handle);

		/// <summary>
		/// Return image rectangle.
		/// 
		/// </summary>
		private Urho.IntRect GetImageRect ()
		{
			Runtime.ValidateRefCounted (this);
			return Sprite_GetImageRect (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern BlendMode Sprite_GetBlendMode (IntPtr handle);

		/// <summary>
		/// Return blend mode.
		/// 
		/// </summary>
		private BlendMode GetBlendMode ()
		{
			Runtime.ValidateRefCounted (this);
			return Sprite_GetBlendMode (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern ResourceRef Sprite_GetTextureAttr (IntPtr handle);

		/// <summary>
		/// Return texture attribute.
		/// </summary>
		private ResourceRef GetTextureAttr ()
		{
			Runtime.ValidateRefCounted (this);
			return Sprite_GetTextureAttr (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern Urho.Matrix3x4 Sprite_GetTransform (IntPtr handle);

		/// <summary>
		/// Update and return rendering transform, also used to transform child sprites.
		/// </summary>
		private Urho.Matrix3x4 GetTransform ()
		{
			Runtime.ValidateRefCounted (this);
			return Sprite_GetTransform (handle);
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
		/// Update and return screen position.
		/// </summary>
		public override Urho.IntVector2 ScreenPosition {
			get {
				return GetScreenPosition ();
			}
		}

		/// <summary>
		/// Return floating point position.
		/// 
		/// Or
		/// Set floating point position.
		/// 
		/// </summary>
		public Urho.Vector2 PositionFloat {
			get {
				return GetPosition ();
			}
			set {
				SetPosition (value);
			}
		}

		/// <summary>
		/// Return hotspot.
		/// 
		/// Or
		/// Set hotspot for positioning and rotation.
		/// 
		/// </summary>
		public Urho.IntVector2 HotSpot {
			get {
				return GetHotSpot ();
			}
			set {
				SetHotSpot (value);
			}
		}

		/// <summary>
		/// Return scale.
		/// 
		/// Or
		/// Set scale. Scale also affects child sprites.
		/// 
		/// </summary>
		public Urho.Vector2 Scale {
			get {
				return GetScale ();
			}
			set {
				SetScale (value);
			}
		}

		/// <summary>
		/// Return rotation angle.
		/// 
		/// Or
		/// Set rotation angle.
		/// 
		/// </summary>
		public float Rotation {
			get {
				return GetRotation ();
			}
			set {
				SetRotation (value);
			}
		}

		/// <summary>
		/// Return texture.
		/// 
		/// Or
		/// Set texture.
		/// 
		/// </summary>
		public Texture Texture {
			get {
				return GetTexture ();
			}
			set {
				SetTexture (value);
			}
		}

		/// <summary>
		/// Return image rectangle.
		/// 
		/// Or
		/// Set part of texture to use as the image.
		/// 
		/// </summary>
		public Urho.IntRect ImageRect {
			get {
				return GetImageRect ();
			}
			set {
				SetImageRect (value);
			}
		}

		/// <summary>
		/// Return blend mode.
		/// 
		/// Or
		/// Set blend mode.
		/// 
		/// </summary>
		public BlendMode BlendMode {
			get {
				return GetBlendMode ();
			}
			set {
				SetBlendMode (value);
			}
		}

		/// <summary>
		/// Return texture attribute.
		/// </summary>
		public ResourceRef TextureAttr {
			get {
				return GetTextureAttr ();
			}
		}

		/// <summary>
		/// Update and return rendering transform, also used to transform child sprites.
		/// </summary>
		public Urho.Matrix3x4 Transform {
			get {
				return GetTransform ();
			}
		}
	}
}
