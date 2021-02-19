// WARNING - AUTOGENERATED - DO NOT EDIT
// 
// FontFace.cs
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

namespace Urho.Gui
{
	/// <summary>
	/// %Font face description.
	/// </summary>
	public unsafe partial class FontFace : RefCounted
	{
		unsafe partial void OnFontFaceCreated ();

		[Preserve]
		public FontFace (IntPtr handle) : base (handle)
		{
			OnFontFaceCreated ();
		}

		[Preserve]
		protected FontFace (UrhoObjectFlag emptyFlag) : base (emptyFlag)
		{
			OnFontFaceCreated ();
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool FontFace_Load (IntPtr handle, byte* fontData, uint fontDataSize, float pointSize);

		/// <summary>
		/// Load font face.
		/// </summary>
		public virtual bool Load (byte* fontData, uint fontDataSize, float pointSize)
		{
			Runtime.ValidateRefCounted (this);
			return FontFace_Load (handle, fontData, fontDataSize, pointSize);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern FontGlyph* FontFace_GetGlyph (IntPtr handle, uint c);

		/// <summary>
		/// Return pointer to the glyph structure corresponding to a character. Return null if glyph not found.
		/// </summary>
		public virtual FontGlyph* GetGlyph (uint c)
		{
			Runtime.ValidateRefCounted (this);
			return FontFace_GetGlyph (handle, c);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool FontFace_HasMutableGlyphs (IntPtr handle);

		/// <summary>
		/// Return if font face uses mutable glyphs.
		/// </summary>
		public virtual bool HasMutableGlyphs ()
		{
			Runtime.ValidateRefCounted (this);
			return FontFace_HasMutableGlyphs (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern float FontFace_GetKerning (IntPtr handle, uint c, uint d);

		/// <summary>
		/// Return the kerning for a character and the next character.
		/// </summary>
		public float GetKerning (uint c, uint d)
		{
			Runtime.ValidateRefCounted (this);
			return FontFace_GetKerning (handle, c, d);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool FontFace_IsDataLost (IntPtr handle);

		/// <summary>
		/// Return true when one of the texture has a data loss.
		/// </summary>
		private bool IsDataLost ()
		{
			Runtime.ValidateRefCounted (this);
			return FontFace_IsDataLost (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern float FontFace_GetPointSize (IntPtr handle);

		/// <summary>
		/// Return point size.
		/// </summary>
		private float GetPointSize ()
		{
			Runtime.ValidateRefCounted (this);
			return FontFace_GetPointSize (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern float FontFace_GetRowHeight (IntPtr handle);

		/// <summary>
		/// Return row height.
		/// </summary>
		private float GetRowHeight ()
		{
			Runtime.ValidateRefCounted (this);
			return FontFace_GetRowHeight (handle);
		}

		private IReadOnlyList<Texture2D> _GetTextures_cache;

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr FontFace_GetTextures (IntPtr handle);

		/// <summary>
		/// Return textures.
		/// </summary>
		private IReadOnlyList<Texture2D> GetTextures ()
		{
			Runtime.ValidateRefCounted (this);
			return _GetTextures_cache != null ? _GetTextures_cache : _GetTextures_cache = Runtime.CreateVectorSharedPtrProxy<Texture2D> (FontFace_GetTextures (handle));
		}

		/// <summary>
		/// Return true when one of the texture has a data loss.
		/// </summary>
		public bool DataLost {
			get {
				return IsDataLost ();
			}
		}

		/// <summary>
		/// Return point size.
		/// </summary>
		public float PointSize {
			get {
				return GetPointSize ();
			}
		}

		/// <summary>
		/// Return row height.
		/// </summary>
		public float RowHeight {
			get {
				return GetRowHeight ();
			}
		}

		/// <summary>
		/// Return textures.
		/// </summary>
		public IReadOnlyList<Texture2D> Textures {
			get {
				return GetTextures ();
			}
		}
	}
}
