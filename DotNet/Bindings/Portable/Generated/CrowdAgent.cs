// WARNING - AUTOGENERATED - DO NOT EDIT
// 
// Generated using `sharpie urho`
// 
// CrowdAgent.cs
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

namespace Urho.Navigation
{
	/// <summary>
	/// Crowd agent component, requires a CrowdManager component in the scene. When not set explicitly, agent's radius and height are defaulted to navigation mesh's agent radius and height, respectively.
	/// </summary>
	public unsafe partial class CrowdAgent : Component
	{
		unsafe partial void OnCrowdAgentCreated ();

		[Preserve]
		public CrowdAgent (IntPtr handle) : base (handle)
		{
			OnCrowdAgentCreated ();
		}

		[Preserve]
		protected CrowdAgent (UrhoObjectFlag emptyFlag) : base (emptyFlag)
		{
			OnCrowdAgentCreated ();
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern int CrowdAgent_GetType (IntPtr handle);

		private StringHash UrhoGetType ()
		{
			Runtime.ValidateRefCounted (this);
			return new StringHash (CrowdAgent_GetType (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr CrowdAgent_GetTypeName (IntPtr handle);

		private string GetTypeName ()
		{
			Runtime.ValidateRefCounted (this);
			return Marshal.PtrToStringAnsi (CrowdAgent_GetTypeName (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern int CrowdAgent_GetTypeStatic ();

		private static StringHash GetTypeStatic ()
		{
			Runtime.Validate (typeof(CrowdAgent));
			return new StringHash (CrowdAgent_GetTypeStatic ());
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr CrowdAgent_GetTypeNameStatic ();

		private static string GetTypeNameStatic ()
		{
			Runtime.Validate (typeof(CrowdAgent));
			return Marshal.PtrToStringAnsi (CrowdAgent_GetTypeNameStatic ());
		}

		[Preserve]
		public CrowdAgent () : this (Application.CurrentContext)
		{
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr CrowdAgent_CrowdAgent (IntPtr context);

		[Preserve]
		public CrowdAgent (Context context) : base (UrhoObjectFlag.Empty)
		{
			Runtime.Validate (typeof(CrowdAgent));
			handle = CrowdAgent_CrowdAgent ((object)context == null ? IntPtr.Zero : context.Handle);
			Runtime.RegisterObject (this);
			OnCrowdAgentCreated ();
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void CrowdAgent_RegisterObject (IntPtr context);

		/// <summary>
		/// Register object factory.
		/// 
		/// </summary>
		public new static void RegisterObject (Context context)
		{
			Runtime.Validate (typeof(CrowdAgent));
			CrowdAgent_RegisterObject ((object)context == null ? IntPtr.Zero : context.Handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void CrowdAgent_ApplyAttributes (IntPtr handle);

		/// <summary>
		/// Apply attribute changes that can not be applied immediately. Called after scene load or a network update.
		/// </summary>
		public override void ApplyAttributes ()
		{
			Runtime.ValidateRefCounted (this);
			CrowdAgent_ApplyAttributes (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void CrowdAgent_OnSetEnabled (IntPtr handle);

		/// <summary>
		/// Handle enabled/disabled state change.
		/// </summary>
		public override void OnSetEnabled ()
		{
			Runtime.ValidateRefCounted (this);
			CrowdAgent_OnSetEnabled (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void CrowdAgent_DrawDebugGeometry (IntPtr handle, bool depthTest);

		/// <summary>
		/// Draw debug geometry.
		/// </summary>
		public void DrawDebugGeometry (bool depthTest)
		{
			Runtime.ValidateRefCounted (this);
			CrowdAgent_DrawDebugGeometry (handle, depthTest);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void CrowdAgent_DrawDebugGeometry0 (IntPtr handle, IntPtr debug, bool depthTest);

		/// <summary>
		/// Draw debug feelers.
		/// </summary>
		public override void DrawDebugGeometry (DebugRenderer debug, bool depthTest)
		{
			Runtime.ValidateRefCounted (this);
			CrowdAgent_DrawDebugGeometry0 (handle, (object)debug == null ? IntPtr.Zero : debug.Handle, depthTest);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void CrowdAgent_SetTargetPosition (IntPtr handle, ref Urho.Vector3 position);

		/// <summary>
		/// Submit a new target position request for this agent.
		/// 
		/// </summary>
		private void SetTargetPosition (Urho.Vector3 position)
		{
			Runtime.ValidateRefCounted (this);
			CrowdAgent_SetTargetPosition (handle, ref position);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void CrowdAgent_SetTargetVelocity (IntPtr handle, ref Urho.Vector3 velocity);

		/// <summary>
		/// Submit a new target velocity request for this agent.
		/// 
		/// </summary>
		private void SetTargetVelocity (Urho.Vector3 velocity)
		{
			Runtime.ValidateRefCounted (this);
			CrowdAgent_SetTargetVelocity (handle, ref velocity);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void CrowdAgent_ResetTarget (IntPtr handle);

		/// <summary>
		/// Reset any target request for the specified agent. Note that the agent will continue to move into the current direction; set a zero target velocity to actually stop.
		/// </summary>
		public void ResetTarget ()
		{
			Runtime.ValidateRefCounted (this);
			CrowdAgent_ResetTarget (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void CrowdAgent_SetUpdateNodePosition (IntPtr handle, bool unodepos);

		/// <summary>
		/// Update the node position. When set to false, the node position should be updated by other means (e.g. using Physics) in response to the E_CROWD_AGENT_REPOSITION event.
		/// 
		/// </summary>
		private void SetUpdateNodePosition (bool unodepos)
		{
			Runtime.ValidateRefCounted (this);
			CrowdAgent_SetUpdateNodePosition (handle, unodepos);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void CrowdAgent_SetMaxAccel (IntPtr handle, float maxAccel);

		/// <summary>
		/// Set the agent's max acceleration.
		/// 
		/// </summary>
		private void SetMaxAccel (float maxAccel)
		{
			Runtime.ValidateRefCounted (this);
			CrowdAgent_SetMaxAccel (handle, maxAccel);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void CrowdAgent_SetMaxSpeed (IntPtr handle, float maxSpeed);

		/// <summary>
		/// Set the agent's max velocity.
		/// 
		/// </summary>
		private void SetMaxSpeed (float maxSpeed)
		{
			Runtime.ValidateRefCounted (this);
			CrowdAgent_SetMaxSpeed (handle, maxSpeed);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void CrowdAgent_SetRadius (IntPtr handle, float radius);

		/// <summary>
		/// Set the agent's radius.
		/// 
		/// </summary>
		private void SetRadius (float radius)
		{
			Runtime.ValidateRefCounted (this);
			CrowdAgent_SetRadius (handle, radius);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void CrowdAgent_SetHeight (IntPtr handle, float height);

		/// <summary>
		/// Set the agent's height.
		/// 
		/// </summary>
		private void SetHeight (float height)
		{
			Runtime.ValidateRefCounted (this);
			CrowdAgent_SetHeight (handle, height);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void CrowdAgent_SetQueryFilterType (IntPtr handle, uint queryFilterType);

		/// <summary>
		/// Set the agent's query filter type.
		/// 
		/// </summary>
		private void SetQueryFilterType (uint queryFilterType)
		{
			Runtime.ValidateRefCounted (this);
			CrowdAgent_SetQueryFilterType (handle, queryFilterType);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void CrowdAgent_SetObstacleAvoidanceType (IntPtr handle, uint obstacleAvoidanceType);

		/// <summary>
		/// Set the agent's obstacle avoidance type.
		/// 
		/// </summary>
		private void SetObstacleAvoidanceType (uint obstacleAvoidanceType)
		{
			Runtime.ValidateRefCounted (this);
			CrowdAgent_SetObstacleAvoidanceType (handle, obstacleAvoidanceType);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void CrowdAgent_SetNavigationQuality (IntPtr handle, NavigationQuality val);

		/// <summary>
		/// Set the agent's navigation quality.
		/// 
		/// </summary>
		private void SetNavigationQuality (NavigationQuality val)
		{
			Runtime.ValidateRefCounted (this);
			CrowdAgent_SetNavigationQuality (handle, val);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void CrowdAgent_SetNavigationPushiness (IntPtr handle, NavigationPushiness val);

		/// <summary>
		/// Set the agent's navigation pushiness.
		/// 
		/// </summary>
		private void SetNavigationPushiness (NavigationPushiness val)
		{
			Runtime.ValidateRefCounted (this);
			CrowdAgent_SetNavigationPushiness (handle, val);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern Vector3 CrowdAgent_GetPosition (IntPtr handle);

		/// <summary>
		/// Return the agent's position.
		/// 
		/// </summary>
		private Vector3 GetPosition ()
		{
			Runtime.ValidateRefCounted (this);
			return CrowdAgent_GetPosition (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern Vector3 CrowdAgent_GetDesiredVelocity (IntPtr handle);

		/// <summary>
		/// Return the agent's desired velocity.
		/// 
		/// </summary>
		private Vector3 GetDesiredVelocity ()
		{
			Runtime.ValidateRefCounted (this);
			return CrowdAgent_GetDesiredVelocity (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern Vector3 CrowdAgent_GetActualVelocity (IntPtr handle);

		/// <summary>
		/// Return the agent's actual velocity.
		/// 
		/// </summary>
		private Vector3 GetActualVelocity ()
		{
			Runtime.ValidateRefCounted (this);
			return CrowdAgent_GetActualVelocity (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern Urho.Vector3 CrowdAgent_GetTargetPosition (IntPtr handle);

		/// <summary>
		/// Return the agent's requested target position.
		/// 
		/// </summary>
		private Urho.Vector3 GetTargetPosition ()
		{
			Runtime.ValidateRefCounted (this);
			return CrowdAgent_GetTargetPosition (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern Urho.Vector3 CrowdAgent_GetTargetVelocity (IntPtr handle);

		/// <summary>
		/// Return the agent's requested target velocity.
		/// 
		/// </summary>
		private Urho.Vector3 GetTargetVelocity ()
		{
			Runtime.ValidateRefCounted (this);
			return CrowdAgent_GetTargetVelocity (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern CrowdAgentRequestedTarget CrowdAgent_GetRequestedTargetType (IntPtr handle);

		/// <summary>
		/// Return the agent's requested target type, if any.
		/// 
		/// </summary>
		private CrowdAgentRequestedTarget GetRequestedTargetType ()
		{
			Runtime.ValidateRefCounted (this);
			return CrowdAgent_GetRequestedTargetType (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern CrowdAgentState CrowdAgent_GetAgentState (IntPtr handle);

		/// <summary>
		/// Return the agent's  state.
		/// 
		/// </summary>
		private CrowdAgentState GetAgentState ()
		{
			Runtime.ValidateRefCounted (this);
			return CrowdAgent_GetAgentState (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern CrowdAgentTargetState CrowdAgent_GetTargetState (IntPtr handle);

		/// <summary>
		/// Return the agent's target state.
		/// 
		/// </summary>
		private CrowdAgentTargetState GetTargetState ()
		{
			Runtime.ValidateRefCounted (this);
			return CrowdAgent_GetTargetState (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool CrowdAgent_GetUpdateNodePosition (IntPtr handle);

		/// <summary>
		/// Return true when the node's position should be updated by the CrowdManager.
		/// 
		/// </summary>
		private bool GetUpdateNodePosition ()
		{
			Runtime.ValidateRefCounted (this);
			return CrowdAgent_GetUpdateNodePosition (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern int CrowdAgent_GetAgentCrowdId (IntPtr handle);

		/// <summary>
		/// Return the agent id.
		/// </summary>
		private int GetAgentCrowdId ()
		{
			Runtime.ValidateRefCounted (this);
			return CrowdAgent_GetAgentCrowdId (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern float CrowdAgent_GetMaxAccel (IntPtr handle);

		/// <summary>
		/// Get the agent's max acceleration.
		/// 
		/// </summary>
		private float GetMaxAccel ()
		{
			Runtime.ValidateRefCounted (this);
			return CrowdAgent_GetMaxAccel (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern float CrowdAgent_GetMaxSpeed (IntPtr handle);

		/// <summary>
		/// Get the agent's max velocity.
		/// 
		/// </summary>
		private float GetMaxSpeed ()
		{
			Runtime.ValidateRefCounted (this);
			return CrowdAgent_GetMaxSpeed (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern float CrowdAgent_GetRadius (IntPtr handle);

		/// <summary>
		/// Get the agent's radius.
		/// 
		/// </summary>
		private float GetRadius ()
		{
			Runtime.ValidateRefCounted (this);
			return CrowdAgent_GetRadius (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern float CrowdAgent_GetHeight (IntPtr handle);

		/// <summary>
		/// Get the agent's height.
		/// 
		/// </summary>
		private float GetHeight ()
		{
			Runtime.ValidateRefCounted (this);
			return CrowdAgent_GetHeight (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern uint CrowdAgent_GetQueryFilterType (IntPtr handle);

		/// <summary>
		/// Get the agent's query filter type.
		/// 
		/// </summary>
		private uint GetQueryFilterType ()
		{
			Runtime.ValidateRefCounted (this);
			return CrowdAgent_GetQueryFilterType (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern uint CrowdAgent_GetObstacleAvoidanceType (IntPtr handle);

		/// <summary>
		/// Get the agent's obstacle avoidance type.
		/// 
		/// </summary>
		private uint GetObstacleAvoidanceType ()
		{
			Runtime.ValidateRefCounted (this);
			return CrowdAgent_GetObstacleAvoidanceType (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern NavigationQuality CrowdAgent_GetNavigationQuality (IntPtr handle);

		/// <summary>
		/// Get the agent's navigation quality.
		/// 
		/// </summary>
		private NavigationQuality GetNavigationQuality ()
		{
			Runtime.ValidateRefCounted (this);
			return CrowdAgent_GetNavigationQuality (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern NavigationPushiness CrowdAgent_GetNavigationPushiness (IntPtr handle);

		/// <summary>
		/// Get the agent's navigation pushiness.
		/// 
		/// </summary>
		private NavigationPushiness GetNavigationPushiness ()
		{
			Runtime.ValidateRefCounted (this);
			return CrowdAgent_GetNavigationPushiness (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool CrowdAgent_HasRequestedTarget (IntPtr handle);

		/// <summary>
		/// Return true when the agent has a target.
		/// 
		/// </summary>
		public bool HasRequestedTarget ()
		{
			Runtime.ValidateRefCounted (this);
			return CrowdAgent_HasRequestedTarget (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool CrowdAgent_HasArrived (IntPtr handle);

		/// <summary>
		/// Return true when the agent has arrived at its target.
		/// 
		/// </summary>
		public bool HasArrived ()
		{
			Runtime.ValidateRefCounted (this);
			return CrowdAgent_HasArrived (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool CrowdAgent_IsInCrowd (IntPtr handle);

		/// <summary>
		/// Return true when the agent is in crowd (being managed by a crowd manager).
		/// 
		/// </summary>
		private bool IsInCrowd ()
		{
			Runtime.ValidateRefCounted (this);
			return CrowdAgent_IsInCrowd (handle);
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
		/// Return the agent's requested target position.
		/// 
		/// Or
		/// Submit a new target position request for this agent.
		/// 
		/// </summary>
		public Urho.Vector3 TargetPosition {
			get {
				return GetTargetPosition ();
			}
			set {
				SetTargetPosition (value);
			}
		}

		/// <summary>
		/// Return the agent's requested target velocity.
		/// 
		/// Or
		/// Submit a new target velocity request for this agent.
		/// 
		/// </summary>
		public Urho.Vector3 TargetVelocity {
			get {
				return GetTargetVelocity ();
			}
			set {
				SetTargetVelocity (value);
			}
		}

		/// <summary>
		/// Return true when the node's position should be updated by the CrowdManager.
		/// 
		/// Or
		/// Update the node position. When set to false, the node position should be updated by other means (e.g. using Physics) in response to the E_CROWD_AGENT_REPOSITION event.
		/// 
		/// </summary>
		public bool UpdateNodePosition {
			get {
				return GetUpdateNodePosition ();
			}
			set {
				SetUpdateNodePosition (value);
			}
		}

		/// <summary>
		/// Get the agent's max acceleration.
		/// 
		/// Or
		/// Set the agent's max acceleration.
		/// 
		/// </summary>
		public float MaxAccel {
			get {
				return GetMaxAccel ();
			}
			set {
				SetMaxAccel (value);
			}
		}

		/// <summary>
		/// Get the agent's max velocity.
		/// 
		/// Or
		/// Set the agent's max velocity.
		/// 
		/// </summary>
		public float MaxSpeed {
			get {
				return GetMaxSpeed ();
			}
			set {
				SetMaxSpeed (value);
			}
		}

		/// <summary>
		/// Get the agent's radius.
		/// 
		/// Or
		/// Set the agent's radius.
		/// 
		/// </summary>
		public float Radius {
			get {
				return GetRadius ();
			}
			set {
				SetRadius (value);
			}
		}

		/// <summary>
		/// Get the agent's height.
		/// 
		/// Or
		/// Set the agent's height.
		/// 
		/// </summary>
		public float Height {
			get {
				return GetHeight ();
			}
			set {
				SetHeight (value);
			}
		}

		/// <summary>
		/// Get the agent's query filter type.
		/// 
		/// Or
		/// Set the agent's query filter type.
		/// 
		/// </summary>
		public uint QueryFilterType {
			get {
				return GetQueryFilterType ();
			}
			set {
				SetQueryFilterType (value);
			}
		}

		/// <summary>
		/// Get the agent's obstacle avoidance type.
		/// 
		/// Or
		/// Set the agent's obstacle avoidance type.
		/// 
		/// </summary>
		public uint ObstacleAvoidanceType {
			get {
				return GetObstacleAvoidanceType ();
			}
			set {
				SetObstacleAvoidanceType (value);
			}
		}

		/// <summary>
		/// Get the agent's navigation quality.
		/// 
		/// Or
		/// Set the agent's navigation quality.
		/// 
		/// </summary>
		public NavigationQuality NavigationQuality {
			get {
				return GetNavigationQuality ();
			}
			set {
				SetNavigationQuality (value);
			}
		}

		/// <summary>
		/// Get the agent's navigation pushiness.
		/// 
		/// Or
		/// Set the agent's navigation pushiness.
		/// 
		/// </summary>
		public NavigationPushiness NavigationPushiness {
			get {
				return GetNavigationPushiness ();
			}
			set {
				SetNavigationPushiness (value);
			}
		}

		/// <summary>
		/// Return the agent's position.
		/// 
		/// </summary>
		public Vector3 Position {
			get {
				return GetPosition ();
			}
		}

		/// <summary>
		/// Return the agent's desired velocity.
		/// 
		/// </summary>
		public Vector3 DesiredVelocity {
			get {
				return GetDesiredVelocity ();
			}
		}

		/// <summary>
		/// Return the agent's actual velocity.
		/// 
		/// </summary>
		public Vector3 ActualVelocity {
			get {
				return GetActualVelocity ();
			}
		}

		/// <summary>
		/// Return the agent's requested target type, if any.
		/// 
		/// </summary>
		public CrowdAgentRequestedTarget RequestedTargetType {
			get {
				return GetRequestedTargetType ();
			}
		}

		/// <summary>
		/// Return the agent's  state.
		/// 
		/// </summary>
		public CrowdAgentState AgentState {
			get {
				return GetAgentState ();
			}
		}

		/// <summary>
		/// Return the agent's target state.
		/// 
		/// </summary>
		public CrowdAgentTargetState TargetState {
			get {
				return GetTargetState ();
			}
		}

		/// <summary>
		/// Return the agent id.
		/// </summary>
		public int AgentCrowdId {
			get {
				return GetAgentCrowdId ();
			}
		}

		/// <summary>
		/// Return true when the agent is in crowd (being managed by a crowd manager).
		/// 
		/// </summary>
		public bool InCrowd {
			get {
				return IsInCrowd ();
			}
		}
	}
}
