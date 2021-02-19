// WARNING - AUTOGENERATED - DO NOT EDIT
// 
// RigidBody2D.cs
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
	/// 2D rigid body component.
	/// </summary>
	public unsafe partial class RigidBody2D : Component
	{
		unsafe partial void OnRigidBody2DCreated ();

		[Preserve]
		public RigidBody2D (IntPtr handle) : base (handle)
		{
			OnRigidBody2DCreated ();
		}

		[Preserve]
		protected RigidBody2D (UrhoObjectFlag emptyFlag) : base (emptyFlag)
		{
			OnRigidBody2DCreated ();
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern int RigidBody2D_GetType (IntPtr handle);

		private StringHash UrhoGetType ()
		{
			Runtime.ValidateRefCounted (this);
			return new StringHash (RigidBody2D_GetType (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr RigidBody2D_GetTypeName (IntPtr handle);

		private string GetTypeName ()
		{
			Runtime.ValidateRefCounted (this);
			return Marshal.PtrToStringAnsi (RigidBody2D_GetTypeName (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern int RigidBody2D_GetTypeStatic ();

		private static StringHash GetTypeStatic ()
		{
			Runtime.Validate (typeof(RigidBody2D));
			return new StringHash (RigidBody2D_GetTypeStatic ());
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr RigidBody2D_GetTypeNameStatic ();

		private static string GetTypeNameStatic ()
		{
			Runtime.Validate (typeof(RigidBody2D));
			return Marshal.PtrToStringAnsi (RigidBody2D_GetTypeNameStatic ());
		}

		[Preserve]
		public RigidBody2D () : this (Application.CurrentContext)
		{
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr RigidBody2D_RigidBody2D (IntPtr context);

		[Preserve]
		public RigidBody2D (Context context) : base (UrhoObjectFlag.Empty)
		{
			Runtime.Validate (typeof(RigidBody2D));
			handle = RigidBody2D_RigidBody2D ((object)context == null ? IntPtr.Zero : context.Handle);
			Runtime.RegisterObject (this);
			OnRigidBody2DCreated ();
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void RigidBody2D_RegisterObject (IntPtr context);

		/// <summary>
		/// Register object factory.
		/// 
		/// </summary>
		public new static void RegisterObject (Context context)
		{
			Runtime.Validate (typeof(RigidBody2D));
			RigidBody2D_RegisterObject ((object)context == null ? IntPtr.Zero : context.Handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void RigidBody2D_OnSetEnabled (IntPtr handle);

		/// <summary>
		/// Handle enabled/disabled state change.
		/// </summary>
		public override void OnSetEnabled ()
		{
			Runtime.ValidateRefCounted (this);
			RigidBody2D_OnSetEnabled (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void RigidBody2D_SetBodyType (IntPtr handle, BodyType2D type);

		/// <summary>
		/// Set body type.
		/// 
		/// </summary>
		private void SetBodyType (BodyType2D type)
		{
			Runtime.ValidateRefCounted (this);
			RigidBody2D_SetBodyType (handle, type);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void RigidBody2D_SetMass (IntPtr handle, float mass);

		/// <summary>
		/// Set mass.
		/// 
		/// </summary>
		private void SetMass (float mass)
		{
			Runtime.ValidateRefCounted (this);
			RigidBody2D_SetMass (handle, mass);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void RigidBody2D_SetInertia (IntPtr handle, float inertia);

		/// <summary>
		/// Set inertia.
		/// 
		/// </summary>
		private void SetInertia (float inertia)
		{
			Runtime.ValidateRefCounted (this);
			RigidBody2D_SetInertia (handle, inertia);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void RigidBody2D_SetMassCenter (IntPtr handle, ref Urho.Vector2 center);

		/// <summary>
		/// Set mass center.
		/// 
		/// </summary>
		public void SetMassCenter (Urho.Vector2 center)
		{
			Runtime.ValidateRefCounted (this);
			RigidBody2D_SetMassCenter (handle, ref center);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void RigidBody2D_SetUseFixtureMass (IntPtr handle, bool useFixtureMass);

		/// <summary>
		/// Set whether to automatically calculate mass and inertia from collision shapes. Default true.
		/// 
		/// </summary>
		private void SetUseFixtureMass (bool useFixtureMass)
		{
			Runtime.ValidateRefCounted (this);
			RigidBody2D_SetUseFixtureMass (handle, useFixtureMass);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void RigidBody2D_SetLinearDamping (IntPtr handle, float linearDamping);

		/// <summary>
		/// Set linear damping.
		/// 
		/// </summary>
		private void SetLinearDamping (float linearDamping)
		{
			Runtime.ValidateRefCounted (this);
			RigidBody2D_SetLinearDamping (handle, linearDamping);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void RigidBody2D_SetAngularDamping (IntPtr handle, float angularDamping);

		/// <summary>
		/// Set angular damping.
		/// 
		/// </summary>
		private void SetAngularDamping (float angularDamping)
		{
			Runtime.ValidateRefCounted (this);
			RigidBody2D_SetAngularDamping (handle, angularDamping);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void RigidBody2D_SetAllowSleep (IntPtr handle, bool allowSleep);

		/// <summary>
		/// Set allow sleep.
		/// 
		/// </summary>
		private void SetAllowSleep (bool allowSleep)
		{
			Runtime.ValidateRefCounted (this);
			RigidBody2D_SetAllowSleep (handle, allowSleep);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void RigidBody2D_SetFixedRotation (IntPtr handle, bool fixedRotation);

		/// <summary>
		/// Set fixed rotation.
		/// 
		/// </summary>
		private void SetFixedRotation (bool fixedRotation)
		{
			Runtime.ValidateRefCounted (this);
			RigidBody2D_SetFixedRotation (handle, fixedRotation);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void RigidBody2D_SetBullet (IntPtr handle, bool bullet);

		/// <summary>
		/// Set bullet mode.
		/// 
		/// </summary>
		private void SetBullet (bool bullet)
		{
			Runtime.ValidateRefCounted (this);
			RigidBody2D_SetBullet (handle, bullet);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void RigidBody2D_SetGravityScale (IntPtr handle, float gravityScale);

		/// <summary>
		/// Set gravity scale.
		/// 
		/// </summary>
		private void SetGravityScale (float gravityScale)
		{
			Runtime.ValidateRefCounted (this);
			RigidBody2D_SetGravityScale (handle, gravityScale);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void RigidBody2D_SetAwake (IntPtr handle, bool awake);

		/// <summary>
		/// Set awake.
		/// 
		/// </summary>
		private void SetAwake (bool awake)
		{
			Runtime.ValidateRefCounted (this);
			RigidBody2D_SetAwake (handle, awake);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void RigidBody2D_SetLinearVelocity (IntPtr handle, ref Urho.Vector2 linearVelocity);

		/// <summary>
		/// Set linear velocity.
		/// 
		/// </summary>
		public void SetLinearVelocity (Urho.Vector2 linearVelocity)
		{
			Runtime.ValidateRefCounted (this);
			RigidBody2D_SetLinearVelocity (handle, ref linearVelocity);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void RigidBody2D_SetAngularVelocity (IntPtr handle, float angularVelocity);

		/// <summary>
		/// Set angular velocity.
		/// </summary>
		private void SetAngularVelocity (float angularVelocity)
		{
			Runtime.ValidateRefCounted (this);
			RigidBody2D_SetAngularVelocity (handle, angularVelocity);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void RigidBody2D_ApplyForce (IntPtr handle, ref Urho.Vector2 force, ref Urho.Vector2 point, bool wake);

		/// <summary>
		/// Apply force.
		/// </summary>
		public void ApplyForce (Urho.Vector2 force, Urho.Vector2 point, bool wake)
		{
			Runtime.ValidateRefCounted (this);
			RigidBody2D_ApplyForce (handle, ref force, ref point, wake);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void RigidBody2D_ApplyForceToCenter (IntPtr handle, ref Urho.Vector2 force, bool wake);

		/// <summary>
		/// Apply force to center.
		/// </summary>
		public void ApplyForceToCenter (Urho.Vector2 force, bool wake)
		{
			Runtime.ValidateRefCounted (this);
			RigidBody2D_ApplyForceToCenter (handle, ref force, wake);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void RigidBody2D_ApplyTorque (IntPtr handle, float torque, bool wake);

		/// <summary>
		/// Apply Torque.
		/// </summary>
		public void ApplyTorque (float torque, bool wake)
		{
			Runtime.ValidateRefCounted (this);
			RigidBody2D_ApplyTorque (handle, torque, wake);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void RigidBody2D_ApplyLinearImpulse (IntPtr handle, ref Urho.Vector2 impulse, ref Urho.Vector2 point, bool wake);

		/// <summary>
		/// Apply linear impulse.
		/// </summary>
		public void ApplyLinearImpulse (Urho.Vector2 impulse, Urho.Vector2 point, bool wake)
		{
			Runtime.ValidateRefCounted (this);
			RigidBody2D_ApplyLinearImpulse (handle, ref impulse, ref point, wake);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void RigidBody2D_ApplyLinearImpulseToCenter (IntPtr handle, ref Urho.Vector2 impulse, bool wake);

		/// <summary>
		/// Apply linear impulse to center.
		/// </summary>
		public void ApplyLinearImpulseToCenter (Urho.Vector2 impulse, bool wake)
		{
			Runtime.ValidateRefCounted (this);
			RigidBody2D_ApplyLinearImpulseToCenter (handle, ref impulse, wake);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void RigidBody2D_ApplyAngularImpulse (IntPtr handle, float impulse, bool wake);

		/// <summary>
		/// Apply angular impulse.
		/// </summary>
		public void ApplyAngularImpulse (float impulse, bool wake)
		{
			Runtime.ValidateRefCounted (this);
			RigidBody2D_ApplyAngularImpulse (handle, impulse, wake);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void RigidBody2D_CreateBody (IntPtr handle);

		/// <summary>
		/// Create body.
		/// </summary>
		public void CreateBody ()
		{
			Runtime.ValidateRefCounted (this);
			RigidBody2D_CreateBody (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void RigidBody2D_ReleaseBody (IntPtr handle);

		/// <summary>
		/// Release body.
		/// </summary>
		public void ReleaseBody ()
		{
			Runtime.ValidateRefCounted (this);
			RigidBody2D_ReleaseBody (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void RigidBody2D_ApplyWorldTransform (IntPtr handle);

		/// <summary>
		/// Apply world transform from the Box2D body. Called by PhysicsWorld2D.
		/// </summary>
		public void ApplyWorldTransform ()
		{
			Runtime.ValidateRefCounted (this);
			RigidBody2D_ApplyWorldTransform (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void RigidBody2D_ApplyWorldTransform0 (IntPtr handle, ref Urho.Vector3 newWorldPosition, ref Urho.Quaternion newWorldRotation);

		/// <summary>
		/// Apply specified world position
		/// &
		/// rotation. Called by PhysicsWorld2D.
		/// </summary>
		public void ApplyWorldTransform (Urho.Vector3 newWorldPosition, Urho.Quaternion newWorldRotation)
		{
			Runtime.ValidateRefCounted (this);
			RigidBody2D_ApplyWorldTransform0 (handle, ref newWorldPosition, ref newWorldRotation);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void RigidBody2D_AddCollisionShape2D (IntPtr handle, IntPtr collisionShape);

		/// <summary>
		/// Add collision shape.
		/// </summary>
		public void AddCollisionShape2D (CollisionShape2D collisionShape)
		{
			Runtime.ValidateRefCounted (this);
			RigidBody2D_AddCollisionShape2D (handle, (object)collisionShape == null ? IntPtr.Zero : collisionShape.Handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void RigidBody2D_RemoveCollisionShape2D (IntPtr handle, IntPtr collisionShape);

		/// <summary>
		/// Remove collision shape.
		/// </summary>
		public void RemoveCollisionShape2D (CollisionShape2D collisionShape)
		{
			Runtime.ValidateRefCounted (this);
			RigidBody2D_RemoveCollisionShape2D (handle, (object)collisionShape == null ? IntPtr.Zero : collisionShape.Handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void RigidBody2D_AddConstraint2D (IntPtr handle, IntPtr constraint);

		/// <summary>
		/// Add constraint.
		/// </summary>
		public void AddConstraint2D (Constraint2D constraint)
		{
			Runtime.ValidateRefCounted (this);
			RigidBody2D_AddConstraint2D (handle, (object)constraint == null ? IntPtr.Zero : constraint.Handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void RigidBody2D_RemoveConstraint2D (IntPtr handle, IntPtr constraint);

		/// <summary>
		/// Remove constraint.
		/// </summary>
		public void RemoveConstraint2D (Constraint2D constraint)
		{
			Runtime.ValidateRefCounted (this);
			RigidBody2D_RemoveConstraint2D (handle, (object)constraint == null ? IntPtr.Zero : constraint.Handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern BodyType2D RigidBody2D_GetBodyType (IntPtr handle);

		/// <summary>
		/// Return body type.
		/// 
		/// </summary>
		private BodyType2D GetBodyType ()
		{
			Runtime.ValidateRefCounted (this);
			return RigidBody2D_GetBodyType (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern float RigidBody2D_GetMass (IntPtr handle);

		/// <summary>
		/// Return mass.
		/// 
		/// </summary>
		private float GetMass ()
		{
			Runtime.ValidateRefCounted (this);
			return RigidBody2D_GetMass (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern float RigidBody2D_GetInertia (IntPtr handle);

		/// <summary>
		/// Return inertia.
		/// 
		/// </summary>
		private float GetInertia ()
		{
			Runtime.ValidateRefCounted (this);
			return RigidBody2D_GetInertia (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern Vector2 RigidBody2D_GetMassCenter (IntPtr handle);

		/// <summary>
		/// Return mass center.
		/// 
		/// </summary>
		private Vector2 GetMassCenter ()
		{
			Runtime.ValidateRefCounted (this);
			return RigidBody2D_GetMassCenter (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool RigidBody2D_GetUseFixtureMass (IntPtr handle);

		/// <summary>
		/// Return whether to calculate mass and inertia from collision shapes automatically.
		/// 
		/// </summary>
		private bool GetUseFixtureMass ()
		{
			Runtime.ValidateRefCounted (this);
			return RigidBody2D_GetUseFixtureMass (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern float RigidBody2D_GetLinearDamping (IntPtr handle);

		/// <summary>
		/// Return linear damping.
		/// 
		/// </summary>
		private float GetLinearDamping ()
		{
			Runtime.ValidateRefCounted (this);
			return RigidBody2D_GetLinearDamping (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern float RigidBody2D_GetAngularDamping (IntPtr handle);

		/// <summary>
		/// Return angular damping.
		/// 
		/// </summary>
		private float GetAngularDamping ()
		{
			Runtime.ValidateRefCounted (this);
			return RigidBody2D_GetAngularDamping (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool RigidBody2D_IsAllowSleep (IntPtr handle);

		/// <summary>
		/// Return allow sleep.
		/// 
		/// </summary>
		private bool IsAllowSleep ()
		{
			Runtime.ValidateRefCounted (this);
			return RigidBody2D_IsAllowSleep (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool RigidBody2D_IsFixedRotation (IntPtr handle);

		/// <summary>
		/// Return fixed rotation.
		/// 
		/// </summary>
		private bool IsFixedRotation ()
		{
			Runtime.ValidateRefCounted (this);
			return RigidBody2D_IsFixedRotation (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool RigidBody2D_IsBullet (IntPtr handle);

		/// <summary>
		/// Return bullet mode.
		/// 
		/// </summary>
		private bool IsBullet ()
		{
			Runtime.ValidateRefCounted (this);
			return RigidBody2D_IsBullet (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern float RigidBody2D_GetGravityScale (IntPtr handle);

		/// <summary>
		/// Return gravity scale.
		/// 
		/// </summary>
		private float GetGravityScale ()
		{
			Runtime.ValidateRefCounted (this);
			return RigidBody2D_GetGravityScale (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool RigidBody2D_IsAwake (IntPtr handle);

		/// <summary>
		/// Return awake.
		/// 
		/// </summary>
		private bool IsAwake ()
		{
			Runtime.ValidateRefCounted (this);
			return RigidBody2D_IsAwake (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern Vector2 RigidBody2D_GetLinearVelocity (IntPtr handle);

		/// <summary>
		/// Return linear velocity.
		/// 
		/// </summary>
		private Vector2 GetLinearVelocity ()
		{
			Runtime.ValidateRefCounted (this);
			return RigidBody2D_GetLinearVelocity (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern float RigidBody2D_GetAngularVelocity (IntPtr handle);

		/// <summary>
		/// Return angular velocity.
		/// </summary>
		private float GetAngularVelocity ()
		{
			Runtime.ValidateRefCounted (this);
			return RigidBody2D_GetAngularVelocity (handle);
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
		/// Return body type.
		/// 
		/// Or
		/// Set body type.
		/// 
		/// </summary>
		public BodyType2D BodyType {
			get {
				return GetBodyType ();
			}
			set {
				SetBodyType (value);
			}
		}

		/// <summary>
		/// Return mass.
		/// 
		/// Or
		/// Set mass.
		/// 
		/// </summary>
		public float Mass {
			get {
				return GetMass ();
			}
			set {
				SetMass (value);
			}
		}

		/// <summary>
		/// Return inertia.
		/// 
		/// Or
		/// Set inertia.
		/// 
		/// </summary>
		public float Inertia {
			get {
				return GetInertia ();
			}
			set {
				SetInertia (value);
			}
		}

		/// <summary>
		/// Return mass center.
		/// 
		/// </summary>
		public Vector2 MassCenter {
			get {
				return GetMassCenter ();
			}
		}

		/// <summary>
		/// Return whether to calculate mass and inertia from collision shapes automatically.
		/// 
		/// Or
		/// Set whether to automatically calculate mass and inertia from collision shapes. Default true.
		/// 
		/// </summary>
		public bool UseFixtureMass {
			get {
				return GetUseFixtureMass ();
			}
			set {
				SetUseFixtureMass (value);
			}
		}

		/// <summary>
		/// Return linear damping.
		/// 
		/// Or
		/// Set linear damping.
		/// 
		/// </summary>
		public float LinearDamping {
			get {
				return GetLinearDamping ();
			}
			set {
				SetLinearDamping (value);
			}
		}

		/// <summary>
		/// Return angular damping.
		/// 
		/// Or
		/// Set angular damping.
		/// 
		/// </summary>
		public float AngularDamping {
			get {
				return GetAngularDamping ();
			}
			set {
				SetAngularDamping (value);
			}
		}

		/// <summary>
		/// Return allow sleep.
		/// 
		/// Or
		/// Set allow sleep.
		/// 
		/// </summary>
		public bool AllowSleep {
			get {
				return IsAllowSleep ();
			}
			set {
				SetAllowSleep (value);
			}
		}

		/// <summary>
		/// Return fixed rotation.
		/// 
		/// Or
		/// Set fixed rotation.
		/// 
		/// </summary>
		public bool FixedRotation {
			get {
				return IsFixedRotation ();
			}
			set {
				SetFixedRotation (value);
			}
		}

		/// <summary>
		/// Return bullet mode.
		/// 
		/// Or
		/// Set bullet mode.
		/// 
		/// </summary>
		public bool Bullet {
			get {
				return IsBullet ();
			}
			set {
				SetBullet (value);
			}
		}

		/// <summary>
		/// Return gravity scale.
		/// 
		/// Or
		/// Set gravity scale.
		/// 
		/// </summary>
		public float GravityScale {
			get {
				return GetGravityScale ();
			}
			set {
				SetGravityScale (value);
			}
		}

		/// <summary>
		/// Return awake.
		/// 
		/// Or
		/// Set awake.
		/// 
		/// </summary>
		public bool Awake {
			get {
				return IsAwake ();
			}
			set {
				SetAwake (value);
			}
		}

		/// <summary>
		/// Return linear velocity.
		/// 
		/// </summary>
		public Vector2 LinearVelocity {
			get {
				return GetLinearVelocity ();
			}
		}

		/// <summary>
		/// Return angular velocity.
		/// Or
		/// Set angular velocity.
		/// </summary>
		public float AngularVelocity {
			get {
				return GetAngularVelocity ();
			}
			set {
				SetAngularVelocity (value);
			}
		}
	}
}
