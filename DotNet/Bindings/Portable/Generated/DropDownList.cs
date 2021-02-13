// WARNING - AUTOGENERATED - DO NOT EDIT
// 
// Generated using `sharpie urho`
// 
// DropDownList.cs
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
	/// %Menu %UI element that displays a popup list view.
	/// </summary>
	public unsafe partial class DropDownList : Menu
	{
		unsafe partial void OnDropDownListCreated ();

		[Preserve]
		public DropDownList (IntPtr handle) : base (handle)
		{
			OnDropDownListCreated ();
		}

		[Preserve]
		protected DropDownList (UrhoObjectFlag emptyFlag) : base (emptyFlag)
		{
			OnDropDownListCreated ();
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern int DropDownList_GetType (IntPtr handle);

		private StringHash UrhoGetType ()
		{
			Runtime.ValidateRefCounted (this);
			return new StringHash (DropDownList_GetType (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr DropDownList_GetTypeName (IntPtr handle);

		private string GetTypeName ()
		{
			Runtime.ValidateRefCounted (this);
			return Marshal.PtrToStringAnsi (DropDownList_GetTypeName (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern int DropDownList_GetTypeStatic ();

		private static StringHash GetTypeStatic ()
		{
			Runtime.Validate (typeof(DropDownList));
			return new StringHash (DropDownList_GetTypeStatic ());
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr DropDownList_GetTypeNameStatic ();

		private static string GetTypeNameStatic ()
		{
			Runtime.Validate (typeof(DropDownList));
			return Marshal.PtrToStringAnsi (DropDownList_GetTypeNameStatic ());
		}

		[Preserve]
		public DropDownList () : this (Application.CurrentContext)
		{
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr DropDownList_DropDownList (IntPtr context);

		[Preserve]
		public DropDownList (Context context) : base (UrhoObjectFlag.Empty)
		{
			Runtime.Validate (typeof(DropDownList));
			handle = DropDownList_DropDownList ((object)context == null ? IntPtr.Zero : context.Handle);
			Runtime.RegisterObject (this);
			OnDropDownListCreated ();
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void DropDownList_RegisterObject (IntPtr context);

		/// <summary>
		/// Register object factory.
		/// 
		/// </summary>
		public new static void RegisterObject (Context context)
		{
			Runtime.Validate (typeof(DropDownList));
			DropDownList_RegisterObject ((object)context == null ? IntPtr.Zero : context.Handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void DropDownList_ApplyAttributes (IntPtr handle);

		/// <summary>
		/// Apply attribute changes that can not be applied immediately.
		/// </summary>
		public override void ApplyAttributes ()
		{
			Runtime.ValidateRefCounted (this);
			DropDownList_ApplyAttributes (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void DropDownList_OnShowPopup (IntPtr handle);

		/// <summary>
		/// React to the popup being shown.
		/// </summary>
		public override void OnShowPopup ()
		{
			Runtime.ValidateRefCounted (this);
			DropDownList_OnShowPopup (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void DropDownList_OnHidePopup (IntPtr handle);

		/// <summary>
		/// React to the popup being hidden.
		/// </summary>
		public override void OnHidePopup ()
		{
			Runtime.ValidateRefCounted (this);
			DropDownList_OnHidePopup (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void DropDownList_OnSetEditable (IntPtr handle);

		/// <summary>
		/// React to editable status change.
		/// </summary>
		public override void OnSetEditable ()
		{
			Runtime.ValidateRefCounted (this);
			DropDownList_OnSetEditable (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void DropDownList_AddItem (IntPtr handle, IntPtr item);

		/// <summary>
		/// Add item to the end of the list.
		/// </summary>
		public void AddItem (UIElement item)
		{
			Runtime.ValidateRefCounted (this);
			DropDownList_AddItem (handle, (object)item == null ? IntPtr.Zero : item.Handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void DropDownList_InsertItem (IntPtr handle, uint index, IntPtr item);

		/// <summary>
		/// Insert item to a specific position.
		/// </summary>
		public void InsertItem (uint index, UIElement item)
		{
			Runtime.ValidateRefCounted (this);
			DropDownList_InsertItem (handle, index, (object)item == null ? IntPtr.Zero : item.Handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void DropDownList_RemoveItem (IntPtr handle, IntPtr item);

		/// <summary>
		/// Remove specific item.
		/// </summary>
		public void RemoveItem (UIElement item)
		{
			Runtime.ValidateRefCounted (this);
			DropDownList_RemoveItem (handle, (object)item == null ? IntPtr.Zero : item.Handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void DropDownList_RemoveItem0 (IntPtr handle, uint index);

		/// <summary>
		/// Remove item at index.
		/// </summary>
		public void RemoveItem (uint index)
		{
			Runtime.ValidateRefCounted (this);
			DropDownList_RemoveItem0 (handle, index);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void DropDownList_RemoveAllItems (IntPtr handle);

		/// <summary>
		/// Remove all items.
		/// </summary>
		public void RemoveAllItems ()
		{
			Runtime.ValidateRefCounted (this);
			DropDownList_RemoveAllItems (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void DropDownList_SetSelection (IntPtr handle, uint index);

		/// <summary>
		/// Set selection.
		/// 
		/// </summary>
		private void SetSelection (uint index)
		{
			Runtime.ValidateRefCounted (this);
			DropDownList_SetSelection (handle, index);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void DropDownList_SetPlaceholderText (IntPtr handle, string text);

		/// <summary>
		/// Set place holder text. This is the text shown when there is no selection (-1) in drop down list. Note that if the list has items, the default is to show the first item, so the "no selection" state has to be set explicitly.
		/// 
		/// </summary>
		private void SetPlaceholderText (string text)
		{
			Runtime.ValidateRefCounted (this);
			DropDownList_SetPlaceholderText (handle, text);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void DropDownList_SetResizePopup (IntPtr handle, bool enable);

		/// <summary>
		/// Set whether popup should be automatically resized to match the dropdown button width.
		/// 
		/// </summary>
		private void SetResizePopup (bool enable)
		{
			Runtime.ValidateRefCounted (this);
			DropDownList_SetResizePopup (handle, enable);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern uint DropDownList_GetNumItems (IntPtr handle);

		/// <summary>
		/// Return number of items.
		/// 
		/// </summary>
		private uint GetNumItems ()
		{
			Runtime.ValidateRefCounted (this);
			return DropDownList_GetNumItems (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr DropDownList_GetItem (IntPtr handle, uint index);

		/// <summary>
		/// Return item at index.
		/// 
		/// </summary>
		public UIElement GetItem (uint index)
		{
			Runtime.ValidateRefCounted (this);
			return Runtime.LookupObject<UIElement> (DropDownList_GetItem (handle, index));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern uint DropDownList_GetSelection (IntPtr handle);

		/// <summary>
		/// Return selection index, or M_MAX_UNSIGNED if none selected.
		/// 
		/// </summary>
		private uint GetSelection ()
		{
			Runtime.ValidateRefCounted (this);
			return DropDownList_GetSelection (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr DropDownList_GetSelectedItem (IntPtr handle);

		/// <summary>
		/// Return selected item, or null if none selected.
		/// 
		/// </summary>
		private UIElement GetSelectedItem ()
		{
			Runtime.ValidateRefCounted (this);
			return Runtime.LookupObject<UIElement> (DropDownList_GetSelectedItem (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr DropDownList_GetListView (IntPtr handle);

		/// <summary>
		/// Return listview element.
		/// 
		/// </summary>
		private ListView GetListView ()
		{
			Runtime.ValidateRefCounted (this);
			return Runtime.LookupObject<ListView> (DropDownList_GetListView (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr DropDownList_GetPlaceholder (IntPtr handle);

		/// <summary>
		/// Return selected item placeholder element.
		/// 
		/// </summary>
		private UIElement GetPlaceholder ()
		{
			Runtime.ValidateRefCounted (this);
			return Runtime.LookupObject<UIElement> (DropDownList_GetPlaceholder (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr DropDownList_GetPlaceholderText (IntPtr handle);

		/// <summary>
		/// Return place holder text.
		/// 
		/// </summary>
		private string GetPlaceholderText ()
		{
			Runtime.ValidateRefCounted (this);
			return Marshal.PtrToStringAnsi (DropDownList_GetPlaceholderText (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool DropDownList_GetResizePopup (IntPtr handle);

		/// <summary>
		/// Return whether popup should be automatically resized.
		/// 
		/// </summary>
		private bool GetResizePopup ()
		{
			Runtime.ValidateRefCounted (this);
			return DropDownList_GetResizePopup (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void DropDownList_SetSelectionAttr (IntPtr handle, uint index);

		/// <summary>
		/// Set selection attribute.
		/// </summary>
		public void SetSelectionAttr (uint index)
		{
			Runtime.ValidateRefCounted (this);
			DropDownList_SetSelectionAttr (handle, index);
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
		/// Return selection index, or M_MAX_UNSIGNED if none selected.
		/// 
		/// Or
		/// Set selection.
		/// 
		/// </summary>
		public uint Selection {
			get {
				return GetSelection ();
			}
			set {
				SetSelection (value);
			}
		}

		/// <summary>
		/// Return place holder text.
		/// 
		/// Or
		/// Set place holder text. This is the text shown when there is no selection (-1) in drop down list. Note that if the list has items, the default is to show the first item, so the "no selection" state has to be set explicitly.
		/// 
		/// </summary>
		public string PlaceholderText {
			get {
				return GetPlaceholderText ();
			}
			set {
				SetPlaceholderText (value);
			}
		}

		/// <summary>
		/// Return whether popup should be automatically resized.
		/// 
		/// Or
		/// Set whether popup should be automatically resized to match the dropdown button width.
		/// 
		/// </summary>
		public bool ResizePopup {
			get {
				return GetResizePopup ();
			}
			set {
				SetResizePopup (value);
			}
		}

		/// <summary>
		/// Return number of items.
		/// 
		/// </summary>
		public uint NumItems {
			get {
				return GetNumItems ();
			}
		}

		/// <summary>
		/// Return selected item, or null if none selected.
		/// 
		/// </summary>
		public UIElement SelectedItem {
			get {
				return GetSelectedItem ();
			}
		}

		/// <summary>
		/// Return listview element.
		/// 
		/// </summary>
		public ListView ListView {
			get {
				return GetListView ();
			}
		}

		/// <summary>
		/// Return selected item placeholder element.
		/// 
		/// </summary>
		public UIElement Placeholder {
			get {
				return GetPlaceholder ();
			}
		}
	}
}
