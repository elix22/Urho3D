// WARNING - AUTOGENERATED - DO NOT EDIT
// 
// Generated using `sharpie urho`
// 
// CollisionShape.cs
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

namespace Urho.Physics
{
	/// <summary>
	/// Physics collision shape component.
	/// </summary>
	public unsafe partial class CollisionShape : Component
	{
		unsafe partial void OnCollisionShapeCreated ();

		[Preserve]
		public CollisionShape (IntPtr handle) : base (handle)
		{
			OnCollisionShapeCreated ();
		}

		[Preserve]
		protected CollisionShape (UrhoObjectFlag emptyFlag) : base (emptyFlag)
		{
			OnCollisionShapeCreated ();
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern int CollisionShape_GetType (IntPtr handle);

		private StringHash UrhoGetType ()
		{
			Runtime.ValidateRefCounted (this);
			return new StringHash (CollisionShape_GetType (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr CollisionShape_GetTypeName (IntPtr handle);

		private string GetTypeName ()
		{
			Runtime.ValidateRefCounted (this);
			return Marshal.PtrToStringAnsi (CollisionShape_GetTypeName (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern int CollisionShape_GetTypeStatic ();

		private static StringHash GetTypeStatic ()
		{
			Runtime.Validate (typeof(CollisionShape));
			return new StringHash (CollisionShape_GetTypeStatic ());
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr CollisionShape_GetTypeNameStatic ();

		private static string GetTypeNameStatic ()
		{
			Runtime.Validate (typeof(CollisionShape));
			return Marshal.PtrToStringAnsi (CollisionShape_GetTypeNameStatic ());
		}

		[Preserve]
		public CollisionShape () : this (Application.CurrentContext)
		{
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr CollisionShape_CollisionShape (IntPtr context);

		[Preserve]
		public CollisionShape (Context context) : base (UrhoObjectFlag.Empty)
		{
			Runtime.Validate (typeof(CollisionShape));
			handle = CollisionShape_CollisionShape ((object)context == null ? IntPtr.Zero : context.Handle);
			Runtime.RegisterObject (this);
			OnCollisionShapeCreated ();
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void CollisionShape_RegisterObject (IntPtr context);

		/// <summary>
		/// Register object factory.
		/// </summary>
		public new static void RegisterObject (Context context)
		{
			Runtime.Validate (typeof(CollisionShape));
			CollisionShape_RegisterObject ((object)context == null ? IntPtr.Zero : context.Handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void CollisionShape_ApplyAttributes (IntPtr handle);

		/// <summary>
		/// Apply attribute changes that can not be applied immediately. Called after scene load or a network update.
		/// </summary>
		public override void ApplyAttributes ()
		{
			Runtime.ValidateRefCounted (this);
			CollisionShape_ApplyAttributes (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void CollisionShape_OnSetEnabled (IntPtr handle);

		/// <summary>
		/// Handle enabled/disabled state change.
		/// </summary>
		public override void OnSetEnabled ()
		{
			Runtime.ValidateRefCounted (this);
			CollisionShape_OnSetEnabled (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void CollisionShape_DrawDebugGeometry (IntPtr handle, IntPtr debug, bool depthTest);

		/// <summary>
		/// Visualize the component as debug geometry.
		/// </summary>
		public override void DrawDebugGeometry (DebugRenderer debug, bool depthTest)
		{
			Runtime.ValidateRefCounted (this);
			CollisionShape_DrawDebugGeometry (handle, (object)debug == null ? IntPtr.Zero : debug.Handle, depthTest);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void CollisionShape_SetBox (IntPtr handle, ref Urho.Vector3 size, ref Urho.Vector3 position, ref Urho.Quaternion rotation);

		/// <summary>
		/// Set as a box.
		/// </summary>
		public void SetBox (Urho.Vector3 size, Urho.Vector3 position, Urho.Quaternion rotation)
		{
			Runtime.ValidateRefCounted (this);
			CollisionShape_SetBox (handle, ref size, ref position, ref rotation);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void CollisionShape_SetSphere (IntPtr handle, float diameter, ref Urho.Vector3 position, ref Urho.Quaternion rotation);

		/// <summary>
		/// Set as a sphere.
		/// </summary>
		public void SetSphere (float diameter, Urho.Vector3 position, Urho.Quaternion rotation)
		{
			Runtime.ValidateRefCounted (this);
			CollisionShape_SetSphere (handle, diameter, ref position, ref rotation);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void CollisionShape_SetStaticPlane (IntPtr handle, ref Urho.Vector3 position, ref Urho.Quaternion rotation);

		/// <summary>
		/// Set as a static plane.
		/// </summary>
		public void SetStaticPlane (Urho.Vector3 position, Urho.Quaternion rotation)
		{
			Runtime.ValidateRefCounted (this);
			CollisionShape_SetStaticPlane (handle, ref position, ref rotation);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void CollisionShape_SetCylinder (IntPtr handle, float diameter, float height, ref Urho.Vector3 position, ref Urho.Quaternion rotation);

		/// <summary>
		/// Set as a cylinder.
		/// </summary>
		public void SetCylinder (float diameter, float height, Urho.Vector3 position, Urho.Quaternion rotation)
		{
			Runtime.ValidateRefCounted (this);
			CollisionShape_SetCylinder (handle, diameter, height, ref position, ref rotation);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void CollisionShape_SetCapsule (IntPtr handle, float diameter, float height, ref Urho.Vector3 position, ref Urho.Quaternion rotation);

		/// <summary>
		/// Set as a capsule.
		/// </summary>
		public void SetCapsule (float diameter, float height, Urho.Vector3 position, Urho.Quaternion rotation)
		{
			Runtime.ValidateRefCounted (this);
			CollisionShape_SetCapsule (handle, diameter, height, ref position, ref rotation);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void CollisionShape_SetCone (IntPtr handle, float diameter, float height, ref Urho.Vector3 position, ref Urho.Quaternion rotation);

		/// <summary>
		/// Set as a cone.
		/// </summary>
		public void SetCone (float diameter, float height, Urho.Vector3 position, Urho.Quaternion rotation)
		{
			Runtime.ValidateRefCounted (this);
			CollisionShape_SetCone (handle, diameter, height, ref position, ref rotation);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void CollisionShape_SetTriangleMesh (IntPtr handle, IntPtr model, uint lodLevel, ref Urho.Vector3 scale, ref Urho.Vector3 position, ref Urho.Quaternion rotation);

		/// <summary>
		/// Set as a triangle mesh from Model. If you update a model's geometry and want to reapply the shape, call physicsWorld->RemoveCachedGeometry(model) first.
		/// </summary>
		public void SetTriangleMesh (Model model, uint lodLevel, Urho.Vector3 scale, Urho.Vector3 position, Urho.Quaternion rotation)
		{
			Runtime.ValidateRefCounted (this);
			CollisionShape_SetTriangleMesh (handle, (object)model == null ? IntPtr.Zero : model.Handle, lodLevel, ref scale, ref position, ref rotation);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void CollisionShape_SetCustomTriangleMesh (IntPtr handle, IntPtr custom, ref Urho.Vector3 scale, ref Urho.Vector3 position, ref Urho.Quaternion rotation);

		/// <summary>
		/// Set as a triangle mesh from CustomGeometry.
		/// </summary>
		public void SetCustomTriangleMesh (CustomGeometry custom, Urho.Vector3 scale, Urho.Vector3 position, Urho.Quaternion rotation)
		{
			Runtime.ValidateRefCounted (this);
			CollisionShape_SetCustomTriangleMesh (handle, (object)custom == null ? IntPtr.Zero : custom.Handle, ref scale, ref position, ref rotation);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void CollisionShape_SetConvexHull (IntPtr handle, IntPtr model, uint lodLevel, ref Urho.Vector3 scale, ref Urho.Vector3 position, ref Urho.Quaternion rotation);

		/// <summary>
		/// Set as a convex hull from Model.
		/// </summary>
		public void SetConvexHull (Model model, uint lodLevel, Urho.Vector3 scale, Urho.Vector3 position, Urho.Quaternion rotation)
		{
			Runtime.ValidateRefCounted (this);
			CollisionShape_SetConvexHull (handle, (object)model == null ? IntPtr.Zero : model.Handle, lodLevel, ref scale, ref position, ref rotation);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void CollisionShape_SetCustomConvexHull (IntPtr handle, IntPtr custom, ref Urho.Vector3 scale, ref Urho.Vector3 position, ref Urho.Quaternion rotation);

		/// <summary>
		/// Set as a convex hull from CustomGeometry.
		/// </summary>
		public void SetCustomConvexHull (CustomGeometry custom, Urho.Vector3 scale, Urho.Vector3 position, Urho.Quaternion rotation)
		{
			Runtime.ValidateRefCounted (this);
			CollisionShape_SetCustomConvexHull (handle, (object)custom == null ? IntPtr.Zero : custom.Handle, ref scale, ref position, ref rotation);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void CollisionShape_SetGImpactMesh (IntPtr handle, IntPtr model, uint lodLevel, ref Urho.Vector3 scale, ref Urho.Vector3 position, ref Urho.Quaternion rotation);

		/// <summary>
		/// Set as a triangle mesh from Model. If you update a model's geometry and want to reapply the shape, call physicsWorld->RemoveCachedGeometry(model) first.
		/// </summary>
		public void SetGImpactMesh (Model model, uint lodLevel, Urho.Vector3 scale, Urho.Vector3 position, Urho.Quaternion rotation)
		{
			Runtime.ValidateRefCounted (this);
			CollisionShape_SetGImpactMesh (handle, (object)model == null ? IntPtr.Zero : model.Handle, lodLevel, ref scale, ref position, ref rotation);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void CollisionShape_SetCustomGImpactMesh (IntPtr handle, IntPtr custom, ref Urho.Vector3 scale, ref Urho.Vector3 position, ref Urho.Quaternion rotation);

		/// <summary>
		/// Set as a triangle mesh from CustomGeometry.
		/// </summary>
		public void SetCustomGImpactMesh (CustomGeometry custom, Urho.Vector3 scale, Urho.Vector3 position, Urho.Quaternion rotation)
		{
			Runtime.ValidateRefCounted (this);
			CollisionShape_SetCustomGImpactMesh (handle, (object)custom == null ? IntPtr.Zero : custom.Handle, ref scale, ref position, ref rotation);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void CollisionShape_SetTerrain (IntPtr handle, uint lodLevel);

		/// <summary>
		/// Set as a terrain. Only works if the same scene node contains a Terrain component.
		/// </summary>
		public void SetTerrain (uint lodLevel = 0)
		{
			Runtime.ValidateRefCounted (this);
			CollisionShape_SetTerrain (handle, lodLevel);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void CollisionShape_SetShapeType (IntPtr handle, ShapeType type);

		/// <summary>
		/// Set shape type.
		/// </summary>
		private void SetShapeType (ShapeType type)
		{
			Runtime.ValidateRefCounted (this);
			CollisionShape_SetShapeType (handle, type);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void CollisionShape_SetSize (IntPtr handle, ref Urho.Vector3 size);

		/// <summary>
		/// Set shape size.
		/// </summary>
		private void SetSize (Urho.Vector3 size)
		{
			Runtime.ValidateRefCounted (this);
			CollisionShape_SetSize (handle, ref size);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void CollisionShape_SetPosition (IntPtr handle, ref Urho.Vector3 position);

		/// <summary>
		/// Set offset position.
		/// </summary>
		private void SetPosition (Urho.Vector3 position)
		{
			Runtime.ValidateRefCounted (this);
			CollisionShape_SetPosition (handle, ref position);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void CollisionShape_SetRotation (IntPtr handle, ref Urho.Quaternion rotation);

		/// <summary>
		/// Set offset rotation.
		/// </summary>
		private void SetRotation (Urho.Quaternion rotation)
		{
			Runtime.ValidateRefCounted (this);
			CollisionShape_SetRotation (handle, ref rotation);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void CollisionShape_SetTransform (IntPtr handle, ref Urho.Vector3 position, ref Urho.Quaternion rotation);

		/// <summary>
		/// Set offset transform.
		/// </summary>
		public void SetTransform (Urho.Vector3 position, Urho.Quaternion rotation)
		{
			Runtime.ValidateRefCounted (this);
			CollisionShape_SetTransform (handle, ref position, ref rotation);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void CollisionShape_SetMargin (IntPtr handle, float margin);

		/// <summary>
		/// Set collision margin.
		/// </summary>
		private void SetMargin (float margin)
		{
			Runtime.ValidateRefCounted (this);
			CollisionShape_SetMargin (handle, margin);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void CollisionShape_SetModel (IntPtr handle, IntPtr model);

		/// <summary>
		/// Set triangle mesh / convex hull model.
		/// </summary>
		private void SetModel (Model model)
		{
			Runtime.ValidateRefCounted (this);
			CollisionShape_SetModel (handle, (object)model == null ? IntPtr.Zero : model.Handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void CollisionShape_SetLodLevel (IntPtr handle, uint lodLevel);

		/// <summary>
		/// Set model LOD level.
		/// </summary>
		private void SetLodLevel (uint lodLevel)
		{
			Runtime.ValidateRefCounted (this);
			CollisionShape_SetLodLevel (handle, lodLevel);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr CollisionShape_GetPhysicsWorld (IntPtr handle);

		/// <summary>
		/// Return physics world.
		/// </summary>
		private PhysicsWorld GetPhysicsWorld ()
		{
			Runtime.ValidateRefCounted (this);
			return Runtime.LookupObject<PhysicsWorld> (CollisionShape_GetPhysicsWorld (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern ShapeType CollisionShape_GetShapeType (IntPtr handle);

		/// <summary>
		/// Return shape type.
		/// </summary>
		private ShapeType GetShapeType ()
		{
			Runtime.ValidateRefCounted (this);
			return CollisionShape_GetShapeType (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern Urho.Vector3 CollisionShape_GetSize (IntPtr handle);

		/// <summary>
		/// Return shape size.
		/// </summary>
		private Urho.Vector3 GetSize ()
		{
			Runtime.ValidateRefCounted (this);
			return CollisionShape_GetSize (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern Urho.Vector3 CollisionShape_GetPosition (IntPtr handle);

		/// <summary>
		/// Return offset position.
		/// </summary>
		private Urho.Vector3 GetPosition ()
		{
			Runtime.ValidateRefCounted (this);
			return CollisionShape_GetPosition (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern Urho.Quaternion CollisionShape_GetRotation (IntPtr handle);

		/// <summary>
		/// Return offset rotation.
		/// </summary>
		private Urho.Quaternion GetRotation ()
		{
			Runtime.ValidateRefCounted (this);
			return CollisionShape_GetRotation (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern float CollisionShape_GetMargin (IntPtr handle);

		/// <summary>
		/// Return collision margin.
		/// </summary>
		private float GetMargin ()
		{
			Runtime.ValidateRefCounted (this);
			return CollisionShape_GetMargin (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr CollisionShape_GetModel (IntPtr handle);

		/// <summary>
		/// Return triangle mesh / convex hull model.
		/// </summary>
		private Model GetModel ()
		{
			Runtime.ValidateRefCounted (this);
			return Runtime.LookupObject<Model> (CollisionShape_GetModel (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern uint CollisionShape_GetLodLevel (IntPtr handle);

		/// <summary>
		/// Return model LOD level.
		/// </summary>
		private uint GetLodLevel ()
		{
			Runtime.ValidateRefCounted (this);
			return CollisionShape_GetLodLevel (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern BoundingBox CollisionShape_GetWorldBoundingBox (IntPtr handle);

		/// <summary>
		/// Return world-space bounding box.
		/// </summary>
		private BoundingBox GetWorldBoundingBox ()
		{
			Runtime.ValidateRefCounted (this);
			return CollisionShape_GetWorldBoundingBox (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void CollisionShape_NotifyRigidBody (IntPtr handle, bool updateMass);

		/// <summary>
		/// Update the new collision shape to the RigidBody.
		/// </summary>
		public void NotifyRigidBody (bool updateMass = true)
		{
			Runtime.ValidateRefCounted (this);
			CollisionShape_NotifyRigidBody (handle, updateMass);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern ResourceRef CollisionShape_GetModelAttr (IntPtr handle);

		/// <summary>
		/// Return model attribute.
		/// </summary>
		private ResourceRef GetModelAttr ()
		{
			Runtime.ValidateRefCounted (this);
			return CollisionShape_GetModelAttr (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void CollisionShape_ReleaseShape (IntPtr handle);

		/// <summary>
		/// Release the collision shape.
		/// </summary>
		public void ReleaseShape ()
		{
			Runtime.ValidateRefCounted (this);
			CollisionShape_ReleaseShape (handle);
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
		/// Return shape type.
		/// Or
		/// Set shape type.
		/// </summary>
		public ShapeType ShapeType {
			get {
				return GetShapeType ();
			}
			set {
				SetShapeType (value);
			}
		}

		/// <summary>
		/// Return shape size.
		/// Or
		/// Set shape size.
		/// </summary>
		public Urho.Vector3 Size {
			get {
				return GetSize ();
			}
			set {
				SetSize (value);
			}
		}

		/// <summary>
		/// Return offset position.
		/// Or
		/// Set offset position.
		/// </summary>
		public Urho.Vector3 Position {
			get {
				return GetPosition ();
			}
			set {
				SetPosition (value);
			}
		}

		/// <summary>
		/// Return offset rotation.
		/// Or
		/// Set offset rotation.
		/// </summary>
		public Urho.Quaternion Rotation {
			get {
				return GetRotation ();
			}
			set {
				SetRotation (value);
			}
		}

		/// <summary>
		/// Return collision margin.
		/// Or
		/// Set collision margin.
		/// </summary>
		public float Margin {
			get {
				return GetMargin ();
			}
			set {
				SetMargin (value);
			}
		}

		/// <summary>
		/// Return triangle mesh / convex hull model.
		/// Or
		/// Set triangle mesh / convex hull model.
		/// </summary>
		public Model Model {
			get {
				return GetModel ();
			}
			set {
				SetModel (value);
			}
		}

		/// <summary>
		/// Return model LOD level.
		/// Or
		/// Set model LOD level.
		/// </summary>
		public uint LodLevel {
			get {
				return GetLodLevel ();
			}
			set {
				SetLodLevel (value);
			}
		}

		/// <summary>
		/// Return physics world.
		/// </summary>
		public PhysicsWorld PhysicsWorld {
			get {
				return GetPhysicsWorld ();
			}
		}

		/// <summary>
		/// Return world-space bounding box.
		/// </summary>
		public BoundingBox WorldBoundingBox {
			get {
				return GetWorldBoundingBox ();
			}
		}

		/// <summary>
		/// Return model attribute.
		/// </summary>
		public ResourceRef ModelAttr {
			get {
				return GetModelAttr ();
			}
		}
	}
}
