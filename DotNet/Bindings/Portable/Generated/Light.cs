// WARNING - AUTOGENERATED - DO NOT EDIT
// 
// Light.cs
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
	/// %Light component.
	/// </summary>
	public unsafe partial class Light : Drawable
	{
		unsafe partial void OnLightCreated ();

		[Preserve]
		public Light (IntPtr handle) : base (handle)
		{
			OnLightCreated ();
		}

		[Preserve]
		protected Light (UrhoObjectFlag emptyFlag) : base (emptyFlag)
		{
			OnLightCreated ();
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern int Light_GetType (IntPtr handle);

		private StringHash UrhoGetType ()
		{
			Runtime.ValidateRefCounted (this);
			return new StringHash (Light_GetType (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr Light_GetTypeName (IntPtr handle);

		private string GetTypeName ()
		{
			Runtime.ValidateRefCounted (this);
			return Marshal.PtrToStringAnsi (Light_GetTypeName (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern int Light_GetTypeStatic ();

		private static StringHash GetTypeStatic ()
		{
			Runtime.Validate (typeof(Light));
			return new StringHash (Light_GetTypeStatic ());
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr Light_GetTypeNameStatic ();

		private static string GetTypeNameStatic ()
		{
			Runtime.Validate (typeof(Light));
			return Marshal.PtrToStringAnsi (Light_GetTypeNameStatic ());
		}

		[Preserve]
		public Light () : this (Application.CurrentContext)
		{
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr Light_Light (IntPtr context);

		[Preserve]
		public Light (Context context) : base (UrhoObjectFlag.Empty)
		{
			Runtime.Validate (typeof(Light));
			handle = Light_Light ((object)context == null ? IntPtr.Zero : context.Handle);
			Runtime.RegisterObject (this);
			OnLightCreated ();
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Light_RegisterObject (IntPtr context);

		/// <summary>
		/// Register object factory. Drawable must be registered first.
		/// 
		/// </summary>
		public new static void RegisterObject (Context context)
		{
			Runtime.Validate (typeof(Light));
			Light_RegisterObject ((object)context == null ? IntPtr.Zero : context.Handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Light_DrawDebugGeometry (IntPtr handle, IntPtr debug, bool depthTest);

		/// <summary>
		/// Visualize the component as debug geometry.
		/// </summary>
		public override void DrawDebugGeometry (DebugRenderer debug, bool depthTest)
		{
			Runtime.ValidateRefCounted (this);
			Light_DrawDebugGeometry (handle, (object)debug == null ? IntPtr.Zero : debug.Handle, depthTest);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Light_SetLightType (IntPtr handle, LightType type);

		/// <summary>
		/// Set light type.
		/// 
		/// </summary>
		private void SetLightType (LightType type)
		{
			Runtime.ValidateRefCounted (this);
			Light_SetLightType (handle, type);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Light_SetPerVertex (IntPtr handle, bool enable);

		/// <summary>
		/// Set vertex lighting mode.
		/// 
		/// </summary>
		private void SetPerVertex (bool enable)
		{
			Runtime.ValidateRefCounted (this);
			Light_SetPerVertex (handle, enable);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Light_SetColor (IntPtr handle, ref Urho.Color color);

		/// <summary>
		/// Set color.
		/// 
		/// </summary>
		private void SetColor (Urho.Color color)
		{
			Runtime.ValidateRefCounted (this);
			Light_SetColor (handle, ref color);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Light_SetTemperature (IntPtr handle, float temperature);

		/// <summary>
		/// Set temperature of the light in Kelvin. Modulates the light color when "use physical values" is enabled.
		/// 
		/// </summary>
		private void SetTemperature (float temperature)
		{
			Runtime.ValidateRefCounted (this);
			Light_SetTemperature (handle, temperature);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Light_SetRadius (IntPtr handle, float radius);

		/// <summary>
		/// Set area light radius. Greater than zero activates area light mode. Works only with PBR shaders.
		/// 
		/// </summary>
		private void SetRadius (float radius)
		{
			Runtime.ValidateRefCounted (this);
			Light_SetRadius (handle, radius);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Light_SetLength (IntPtr handle, float length);

		/// <summary>
		/// Set tube area light length. Works only with PBR shaders.
		/// 
		/// </summary>
		private void SetLength (float length)
		{
			Runtime.ValidateRefCounted (this);
			Light_SetLength (handle, length);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Light_SetUsePhysicalValues (IntPtr handle, bool enable);

		/// <summary>
		/// Set use physical light values.
		/// 
		/// </summary>
		private void SetUsePhysicalValues (bool enable)
		{
			Runtime.ValidateRefCounted (this);
			Light_SetUsePhysicalValues (handle, enable);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Light_SetSpecularIntensity (IntPtr handle, float intensity);

		/// <summary>
		/// Set specular intensity. Zero disables specular calculations.
		/// 
		/// </summary>
		private void SetSpecularIntensity (float intensity)
		{
			Runtime.ValidateRefCounted (this);
			Light_SetSpecularIntensity (handle, intensity);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Light_SetBrightness (IntPtr handle, float brightness);

		/// <summary>
		/// Set light brightness multiplier. Both the color and specular intensity are multiplied with this. When "use physical values" is enabled, the value is specified in lumens.
		/// 
		/// </summary>
		private void SetBrightness (float brightness)
		{
			Runtime.ValidateRefCounted (this);
			Light_SetBrightness (handle, brightness);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Light_SetRange (IntPtr handle, float range);

		/// <summary>
		/// Set range.
		/// 
		/// </summary>
		private void SetRange (float range)
		{
			Runtime.ValidateRefCounted (this);
			Light_SetRange (handle, range);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Light_SetFov (IntPtr handle, float fov);

		/// <summary>
		/// Set spotlight field of view.
		/// 
		/// </summary>
		private void SetFov (float fov)
		{
			Runtime.ValidateRefCounted (this);
			Light_SetFov (handle, fov);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Light_SetAspectRatio (IntPtr handle, float aspectRatio);

		/// <summary>
		/// Set spotlight aspect ratio.
		/// 
		/// </summary>
		private void SetAspectRatio (float aspectRatio)
		{
			Runtime.ValidateRefCounted (this);
			Light_SetAspectRatio (handle, aspectRatio);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Light_SetFadeDistance (IntPtr handle, float distance);

		/// <summary>
		/// Set fade out start distance.
		/// 
		/// </summary>
		private void SetFadeDistance (float distance)
		{
			Runtime.ValidateRefCounted (this);
			Light_SetFadeDistance (handle, distance);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Light_SetShadowFadeDistance (IntPtr handle, float distance);

		/// <summary>
		/// Set shadow fade out start distance. Only has effect if shadow distance is also non-zero.
		/// 
		/// </summary>
		private void SetShadowFadeDistance (float distance)
		{
			Runtime.ValidateRefCounted (this);
			Light_SetShadowFadeDistance (handle, distance);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Light_SetShadowBias (IntPtr handle, ref BiasParameters parameters);

		/// <summary>
		/// Set shadow depth bias parameters.
		/// 
		/// </summary>
		private void SetShadowBias (BiasParameters parameters)
		{
			Runtime.ValidateRefCounted (this);
			Light_SetShadowBias (handle, ref parameters);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Light_SetShadowCascade (IntPtr handle, ref CascadeParameters parameters);

		/// <summary>
		/// Set directional light cascaded shadow parameters.
		/// 
		/// </summary>
		private void SetShadowCascade (CascadeParameters parameters)
		{
			Runtime.ValidateRefCounted (this);
			Light_SetShadowCascade (handle, ref parameters);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Light_SetShadowFocus (IntPtr handle, ref FocusParameters parameters);

		/// <summary>
		/// Set shadow map focusing parameters.
		/// 
		/// </summary>
		private void SetShadowFocus (FocusParameters parameters)
		{
			Runtime.ValidateRefCounted (this);
			Light_SetShadowFocus (handle, ref parameters);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Light_SetShadowIntensity (IntPtr handle, float intensity);

		/// <summary>
		/// Set light intensity in shadow between 0.0 - 1.0. 0.0 (the default) gives fully dark shadows.
		/// 
		/// </summary>
		private void SetShadowIntensity (float intensity)
		{
			Runtime.ValidateRefCounted (this);
			Light_SetShadowIntensity (handle, intensity);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Light_SetShadowResolution (IntPtr handle, float resolution);

		/// <summary>
		/// Set shadow resolution between 0.25 - 1.0. Determines the shadow map to use.
		/// 
		/// </summary>
		private void SetShadowResolution (float resolution)
		{
			Runtime.ValidateRefCounted (this);
			Light_SetShadowResolution (handle, resolution);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Light_SetShadowNearFarRatio (IntPtr handle, float nearFarRatio);

		/// <summary>
		/// Set shadow camera near/far clip distance ratio for spot and point lights. Does not affect directional lights, since they are orthographic and have near clip 0.
		/// 
		/// </summary>
		private void SetShadowNearFarRatio (float nearFarRatio)
		{
			Runtime.ValidateRefCounted (this);
			Light_SetShadowNearFarRatio (handle, nearFarRatio);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Light_SetShadowMaxExtrusion (IntPtr handle, float extrusion);

		/// <summary>
		/// Set maximum shadow extrusion for directional lights. The actual extrusion will be the smaller of this and camera far clip. Default 1000.
		/// 
		/// </summary>
		private void SetShadowMaxExtrusion (float extrusion)
		{
			Runtime.ValidateRefCounted (this);
			Light_SetShadowMaxExtrusion (handle, extrusion);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Light_SetRampTexture (IntPtr handle, IntPtr texture);

		/// <summary>
		/// Set range attenuation texture.
		/// 
		/// </summary>
		private void SetRampTexture (Texture texture)
		{
			Runtime.ValidateRefCounted (this);
			Light_SetRampTexture (handle, (object)texture == null ? IntPtr.Zero : texture.Handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Light_SetShapeTexture (IntPtr handle, IntPtr texture);

		/// <summary>
		/// Set spotlight attenuation texture.
		/// 
		/// </summary>
		private void SetShapeTexture (Texture texture)
		{
			Runtime.ValidateRefCounted (this);
			Light_SetShapeTexture (handle, (object)texture == null ? IntPtr.Zero : texture.Handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern LightType Light_GetLightType (IntPtr handle);

		/// <summary>
		/// Return light type.
		/// 
		/// </summary>
		private LightType GetLightType ()
		{
			Runtime.ValidateRefCounted (this);
			return Light_GetLightType (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool Light_GetPerVertex (IntPtr handle);

		/// <summary>
		/// Return vertex lighting mode.
		/// 
		/// </summary>
		private bool GetPerVertex ()
		{
			Runtime.ValidateRefCounted (this);
			return Light_GetPerVertex (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern Urho.Color Light_GetColor (IntPtr handle);

		/// <summary>
		/// Return color.
		/// 
		/// </summary>
		private Urho.Color GetColor ()
		{
			Runtime.ValidateRefCounted (this);
			return Light_GetColor (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern float Light_GetTemperature (IntPtr handle);

		/// <summary>
		/// Return the temperature of the light in Kelvin.
		/// 
		/// </summary>
		private float GetTemperature ()
		{
			Runtime.ValidateRefCounted (this);
			return Light_GetTemperature (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern float Light_GetRadius (IntPtr handle);

		/// <summary>
		/// Return area light mode radius. Works only with PBR shaders.
		/// 
		/// </summary>
		private float GetRadius ()
		{
			Runtime.ValidateRefCounted (this);
			return Light_GetRadius (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern float Light_GetLength (IntPtr handle);

		/// <summary>
		/// Return area tube light length. Works only with PBR shaders.
		/// 
		/// </summary>
		private float GetLength ()
		{
			Runtime.ValidateRefCounted (this);
			return Light_GetLength (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool Light_GetUsePhysicalValues (IntPtr handle);

		/// <summary>
		/// Return if light uses temperature and brightness in lumens.
		/// 
		/// </summary>
		private bool GetUsePhysicalValues ()
		{
			Runtime.ValidateRefCounted (this);
			return Light_GetUsePhysicalValues (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern Color Light_GetColorFromTemperature (IntPtr handle);

		/// <summary>
		/// Return the color value of the temperature in Kelvin.
		/// 
		/// </summary>
		private Color GetColorFromTemperature ()
		{
			Runtime.ValidateRefCounted (this);
			return Light_GetColorFromTemperature (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern float Light_GetSpecularIntensity (IntPtr handle);

		/// <summary>
		/// Return specular intensity.
		/// 
		/// </summary>
		private float GetSpecularIntensity ()
		{
			Runtime.ValidateRefCounted (this);
			return Light_GetSpecularIntensity (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern float Light_GetBrightness (IntPtr handle);

		/// <summary>
		/// Return brightness multiplier. Specified in lumens when "use physical values" is enabled.
		/// 
		/// </summary>
		private float GetBrightness ()
		{
			Runtime.ValidateRefCounted (this);
			return Light_GetBrightness (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern Color Light_GetEffectiveColor (IntPtr handle);

		/// <summary>
		/// Return effective color, multiplied by brightness and affected by temperature when "use physical values" is enabled. Alpha is always 1 so that can compare against the default black color to detect a light with no effect.
		/// 
		/// </summary>
		private Color GetEffectiveColor ()
		{
			Runtime.ValidateRefCounted (this);
			return Light_GetEffectiveColor (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern float Light_GetEffectiveSpecularIntensity (IntPtr handle);

		/// <summary>
		/// Return effective specular intensity, multiplied by absolute value of brightness.
		/// 
		/// </summary>
		private float GetEffectiveSpecularIntensity ()
		{
			Runtime.ValidateRefCounted (this);
			return Light_GetEffectiveSpecularIntensity (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern float Light_GetRange (IntPtr handle);

		/// <summary>
		/// Return range.
		/// 
		/// </summary>
		private float GetRange ()
		{
			Runtime.ValidateRefCounted (this);
			return Light_GetRange (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern float Light_GetFov (IntPtr handle);

		/// <summary>
		/// Return spotlight field of view.
		/// 
		/// </summary>
		private float GetFov ()
		{
			Runtime.ValidateRefCounted (this);
			return Light_GetFov (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern float Light_GetAspectRatio (IntPtr handle);

		/// <summary>
		/// Return spotlight aspect ratio.
		/// 
		/// </summary>
		private float GetAspectRatio ()
		{
			Runtime.ValidateRefCounted (this);
			return Light_GetAspectRatio (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern float Light_GetFadeDistance (IntPtr handle);

		/// <summary>
		/// Return fade start distance.
		/// 
		/// </summary>
		private float GetFadeDistance ()
		{
			Runtime.ValidateRefCounted (this);
			return Light_GetFadeDistance (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern float Light_GetShadowFadeDistance (IntPtr handle);

		/// <summary>
		/// Return shadow fade start distance.
		/// 
		/// </summary>
		private float GetShadowFadeDistance ()
		{
			Runtime.ValidateRefCounted (this);
			return Light_GetShadowFadeDistance (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern BiasParameters Light_GetShadowBias (IntPtr handle);

		/// <summary>
		/// Return shadow depth bias parameters.
		/// 
		/// </summary>
		private BiasParameters GetShadowBias ()
		{
			Runtime.ValidateRefCounted (this);
			return Light_GetShadowBias (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern CascadeParameters Light_GetShadowCascade (IntPtr handle);

		/// <summary>
		/// Return directional light cascaded shadow parameters.
		/// 
		/// </summary>
		private CascadeParameters GetShadowCascade ()
		{
			Runtime.ValidateRefCounted (this);
			return Light_GetShadowCascade (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern FocusParameters Light_GetShadowFocus (IntPtr handle);

		/// <summary>
		/// Return shadow map focus parameters.
		/// 
		/// </summary>
		private FocusParameters GetShadowFocus ()
		{
			Runtime.ValidateRefCounted (this);
			return Light_GetShadowFocus (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern float Light_GetShadowIntensity (IntPtr handle);

		/// <summary>
		/// Return light intensity in shadow.
		/// 
		/// </summary>
		private float GetShadowIntensity ()
		{
			Runtime.ValidateRefCounted (this);
			return Light_GetShadowIntensity (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern float Light_GetShadowResolution (IntPtr handle);

		/// <summary>
		/// Return shadow resolution.
		/// 
		/// </summary>
		private float GetShadowResolution ()
		{
			Runtime.ValidateRefCounted (this);
			return Light_GetShadowResolution (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern float Light_GetShadowNearFarRatio (IntPtr handle);

		/// <summary>
		/// Return shadow camera near/far clip distance ratio.
		/// 
		/// </summary>
		private float GetShadowNearFarRatio ()
		{
			Runtime.ValidateRefCounted (this);
			return Light_GetShadowNearFarRatio (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern float Light_GetShadowMaxExtrusion (IntPtr handle);

		/// <summary>
		/// Return maximum shadow extrusion distance for directional lights.
		/// 
		/// </summary>
		private float GetShadowMaxExtrusion ()
		{
			Runtime.ValidateRefCounted (this);
			return Light_GetShadowMaxExtrusion (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr Light_GetRampTexture (IntPtr handle);

		/// <summary>
		/// Return range attenuation texture.
		/// 
		/// </summary>
		private Texture GetRampTexture ()
		{
			Runtime.ValidateRefCounted (this);
			return Runtime.LookupObject<Texture> (Light_GetRampTexture (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr Light_GetShapeTexture (IntPtr handle);

		/// <summary>
		/// Return spotlight attenuation texture.
		/// 
		/// </summary>
		private Texture GetShapeTexture ()
		{
			Runtime.ValidateRefCounted (this);
			return Runtime.LookupObject<Texture> (Light_GetShapeTexture (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr Light_GetFrustum (IntPtr handle);

		/// <summary>
		/// Return spotlight frustum.
		/// 
		/// </summary>
		private Frustum GetFrustum ()
		{
			Runtime.ValidateRefCounted (this);
			return new Frustum (Light_GetFrustum (handle));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern IntPtr Light_GetViewSpaceFrustum (IntPtr handle, ref Urho.Matrix3x4 view);

		/// <summary>
		/// Return spotlight frustum in the specified view space.
		/// </summary>
		public Frustum GetViewSpaceFrustum (Urho.Matrix3x4 view)
		{
			Runtime.ValidateRefCounted (this);
			return new Frustum (Light_GetViewSpaceFrustum (handle, ref view));
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern int Light_GetNumShadowSplits (IntPtr handle);

		/// <summary>
		/// Return number of shadow map cascade splits for a directional light, considering also graphics API limitations.
		/// 
		/// </summary>
		private int GetNumShadowSplits ()
		{
			Runtime.ValidateRefCounted (this);
			return Light_GetNumShadowSplits (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern bool Light_IsNegative (IntPtr handle);

		/// <summary>
		/// Return whether light has negative (darkening) color.
		/// 
		/// </summary>
		private bool IsNegative ()
		{
			Runtime.ValidateRefCounted (this);
			return Light_IsNegative (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Light_SetIntensitySortValue (IntPtr handle, float distance);

		/// <summary>
		/// Set sort value based on intensity and view distance.
		/// </summary>
		public void SetIntensitySortValue (float distance)
		{
			Runtime.ValidateRefCounted (this);
			Light_SetIntensitySortValue (handle, distance);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Light_SetIntensitySortValue0 (IntPtr handle, ref Urho.BoundingBox box);

		/// <summary>
		/// Set sort value based on overall intensity over a bounding box.
		/// </summary>
		public void SetIntensitySortValue (Urho.BoundingBox box)
		{
			Runtime.ValidateRefCounted (this);
			Light_SetIntensitySortValue0 (handle, ref box);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern void Light_SetLightQueue (IntPtr handle, LightBatchQueue* queue);

		/// <summary>
		/// Set light queue used for this light. Called by View.
		/// </summary>
		private void SetLightQueue (LightBatchQueue* queue)
		{
			Runtime.ValidateRefCounted (this);
			Light_SetLightQueue (handle, queue);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern Urho.Matrix3x4 Light_GetVolumeTransform (IntPtr handle, IntPtr camera);

		/// <summary>
		/// Return light volume model transform.
		/// </summary>
		public Urho.Matrix3x4 GetVolumeTransform (Camera camera)
		{
			Runtime.ValidateRefCounted (this);
			return Light_GetVolumeTransform (handle, (object)camera == null ? IntPtr.Zero : camera.Handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern LightBatchQueue* Light_GetLightQueue (IntPtr handle);

		/// <summary>
		/// Return light queue. Called by View.
		/// </summary>
		private LightBatchQueue* GetLightQueue ()
		{
			Runtime.ValidateRefCounted (this);
			return Light_GetLightQueue (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern float Light_GetIntensityDivisor (IntPtr handle, float attenuation);

		/// <summary>
		/// Return a divisor value based on intensity for calculating the sort value.
		/// </summary>
		public float GetIntensityDivisor (float attenuation = 1f)
		{
			Runtime.ValidateRefCounted (this);
			return Light_GetIntensityDivisor (handle, attenuation);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern ResourceRef Light_GetRampTextureAttr (IntPtr handle);

		/// <summary>
		/// Return ramp texture attribute.
		/// </summary>
		private ResourceRef GetRampTextureAttr ()
		{
			Runtime.ValidateRefCounted (this);
			return Light_GetRampTextureAttr (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern ResourceRef Light_GetShapeTextureAttr (IntPtr handle);

		/// <summary>
		/// Return shape texture attribute.
		/// </summary>
		private ResourceRef GetShapeTextureAttr ()
		{
			Runtime.ValidateRefCounted (this);
			return Light_GetShapeTextureAttr (handle);
		}

		[DllImport (Consts.NativeImport, CallingConvention = CallingConvention.Cdecl)]
		internal static extern Matrix3x4 Light_GetFullscreenQuadTransform (IntPtr camera);

		/// <summary>
		/// Return a transform for deferred fullscreen quad (directional light) rendering.
		/// </summary>
		public static Matrix3x4 GetFullscreenQuadTransform (Camera camera)
		{
			Runtime.Validate (typeof(Light));
			return Light_GetFullscreenQuadTransform ((object)camera == null ? IntPtr.Zero : camera.Handle);
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
		/// Return light type.
		/// 
		/// Or
		/// Set light type.
		/// 
		/// </summary>
		public LightType LightType {
			get {
				return GetLightType ();
			}
			set {
				SetLightType (value);
			}
		}

		/// <summary>
		/// Return vertex lighting mode.
		/// 
		/// Or
		/// Set vertex lighting mode.
		/// 
		/// </summary>
		public bool PerVertex {
			get {
				return GetPerVertex ();
			}
			set {
				SetPerVertex (value);
			}
		}

		/// <summary>
		/// Return color.
		/// 
		/// Or
		/// Set color.
		/// 
		/// </summary>
		public Urho.Color Color {
			get {
				return GetColor ();
			}
			set {
				SetColor (value);
			}
		}

		/// <summary>
		/// Return the temperature of the light in Kelvin.
		/// 
		/// Or
		/// Set temperature of the light in Kelvin. Modulates the light color when "use physical values" is enabled.
		/// 
		/// </summary>
		public float Temperature {
			get {
				return GetTemperature ();
			}
			set {
				SetTemperature (value);
			}
		}

		/// <summary>
		/// Return area light mode radius. Works only with PBR shaders.
		/// 
		/// Or
		/// Set area light radius. Greater than zero activates area light mode. Works only with PBR shaders.
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
		/// Return area tube light length. Works only with PBR shaders.
		/// 
		/// Or
		/// Set tube area light length. Works only with PBR shaders.
		/// 
		/// </summary>
		public float Length {
			get {
				return GetLength ();
			}
			set {
				SetLength (value);
			}
		}

		/// <summary>
		/// Return if light uses temperature and brightness in lumens.
		/// 
		/// Or
		/// Set use physical light values.
		/// 
		/// </summary>
		public bool UsePhysicalValues {
			get {
				return GetUsePhysicalValues ();
			}
			set {
				SetUsePhysicalValues (value);
			}
		}

		/// <summary>
		/// Return specular intensity.
		/// 
		/// Or
		/// Set specular intensity. Zero disables specular calculations.
		/// 
		/// </summary>
		public float SpecularIntensity {
			get {
				return GetSpecularIntensity ();
			}
			set {
				SetSpecularIntensity (value);
			}
		}

		/// <summary>
		/// Return brightness multiplier. Specified in lumens when "use physical values" is enabled.
		/// 
		/// Or
		/// Set light brightness multiplier. Both the color and specular intensity are multiplied with this. When "use physical values" is enabled, the value is specified in lumens.
		/// 
		/// </summary>
		public float Brightness {
			get {
				return GetBrightness ();
			}
			set {
				SetBrightness (value);
			}
		}

		/// <summary>
		/// Return range.
		/// 
		/// Or
		/// Set range.
		/// 
		/// </summary>
		public float Range {
			get {
				return GetRange ();
			}
			set {
				SetRange (value);
			}
		}

		/// <summary>
		/// Return spotlight field of view.
		/// 
		/// Or
		/// Set spotlight field of view.
		/// 
		/// </summary>
		public float Fov {
			get {
				return GetFov ();
			}
			set {
				SetFov (value);
			}
		}

		/// <summary>
		/// Return spotlight aspect ratio.
		/// 
		/// Or
		/// Set spotlight aspect ratio.
		/// 
		/// </summary>
		public float AspectRatio {
			get {
				return GetAspectRatio ();
			}
			set {
				SetAspectRatio (value);
			}
		}

		/// <summary>
		/// Return fade start distance.
		/// 
		/// Or
		/// Set fade out start distance.
		/// 
		/// </summary>
		public float FadeDistance {
			get {
				return GetFadeDistance ();
			}
			set {
				SetFadeDistance (value);
			}
		}

		/// <summary>
		/// Return shadow fade start distance.
		/// 
		/// Or
		/// Set shadow fade out start distance. Only has effect if shadow distance is also non-zero.
		/// 
		/// </summary>
		public float ShadowFadeDistance {
			get {
				return GetShadowFadeDistance ();
			}
			set {
				SetShadowFadeDistance (value);
			}
		}

		/// <summary>
		/// Return shadow depth bias parameters.
		/// 
		/// Or
		/// Set shadow depth bias parameters.
		/// 
		/// </summary>
		public BiasParameters ShadowBias {
			get {
				return GetShadowBias ();
			}
			set {
				SetShadowBias (value);
			}
		}

		/// <summary>
		/// Return directional light cascaded shadow parameters.
		/// 
		/// Or
		/// Set directional light cascaded shadow parameters.
		/// 
		/// </summary>
		public CascadeParameters ShadowCascade {
			get {
				return GetShadowCascade ();
			}
			set {
				SetShadowCascade (value);
			}
		}

		/// <summary>
		/// Return shadow map focus parameters.
		/// 
		/// Or
		/// Set shadow map focusing parameters.
		/// 
		/// </summary>
		public FocusParameters ShadowFocus {
			get {
				return GetShadowFocus ();
			}
			set {
				SetShadowFocus (value);
			}
		}

		/// <summary>
		/// Return light intensity in shadow.
		/// 
		/// Or
		/// Set light intensity in shadow between 0.0 - 1.0. 0.0 (the default) gives fully dark shadows.
		/// 
		/// </summary>
		public float ShadowIntensity {
			get {
				return GetShadowIntensity ();
			}
			set {
				SetShadowIntensity (value);
			}
		}

		/// <summary>
		/// Return shadow resolution.
		/// 
		/// Or
		/// Set shadow resolution between 0.25 - 1.0. Determines the shadow map to use.
		/// 
		/// </summary>
		public float ShadowResolution {
			get {
				return GetShadowResolution ();
			}
			set {
				SetShadowResolution (value);
			}
		}

		/// <summary>
		/// Return shadow camera near/far clip distance ratio.
		/// 
		/// Or
		/// Set shadow camera near/far clip distance ratio for spot and point lights. Does not affect directional lights, since they are orthographic and have near clip 0.
		/// 
		/// </summary>
		public float ShadowNearFarRatio {
			get {
				return GetShadowNearFarRatio ();
			}
			set {
				SetShadowNearFarRatio (value);
			}
		}

		/// <summary>
		/// Return maximum shadow extrusion distance for directional lights.
		/// 
		/// Or
		/// Set maximum shadow extrusion for directional lights. The actual extrusion will be the smaller of this and camera far clip. Default 1000.
		/// 
		/// </summary>
		public float ShadowMaxExtrusion {
			get {
				return GetShadowMaxExtrusion ();
			}
			set {
				SetShadowMaxExtrusion (value);
			}
		}

		/// <summary>
		/// Return range attenuation texture.
		/// 
		/// Or
		/// Set range attenuation texture.
		/// 
		/// </summary>
		public Texture RampTexture {
			get {
				return GetRampTexture ();
			}
			set {
				SetRampTexture (value);
			}
		}

		/// <summary>
		/// Return spotlight attenuation texture.
		/// 
		/// Or
		/// Set spotlight attenuation texture.
		/// 
		/// </summary>
		public Texture ShapeTexture {
			get {
				return GetShapeTexture ();
			}
			set {
				SetShapeTexture (value);
			}
		}

		/// <summary>
		/// Return the color value of the temperature in Kelvin.
		/// 
		/// </summary>
		public Color ColorFromTemperature {
			get {
				return GetColorFromTemperature ();
			}
		}

		/// <summary>
		/// Return effective color, multiplied by brightness and affected by temperature when "use physical values" is enabled. Alpha is always 1 so that can compare against the default black color to detect a light with no effect.
		/// 
		/// </summary>
		public Color EffectiveColor {
			get {
				return GetEffectiveColor ();
			}
		}

		/// <summary>
		/// Return effective specular intensity, multiplied by absolute value of brightness.
		/// 
		/// </summary>
		public float EffectiveSpecularIntensity {
			get {
				return GetEffectiveSpecularIntensity ();
			}
		}

		/// <summary>
		/// Return spotlight frustum.
		/// 
		/// </summary>
		public Frustum Frustum {
			get {
				return GetFrustum ();
			}
		}

		/// <summary>
		/// Return number of shadow map cascade splits for a directional light, considering also graphics API limitations.
		/// 
		/// </summary>
		public int NumShadowSplits {
			get {
				return GetNumShadowSplits ();
			}
		}

		/// <summary>
		/// Return whether light has negative (darkening) color.
		/// 
		/// </summary>
		public bool Negative {
			get {
				return IsNegative ();
			}
		}

		/// <summary>
		/// Return light queue. Called by View.
		/// Or
		/// Set light queue used for this light. Called by View.
		/// </summary>
		public LightBatchQueue* LightQueue {
			get {
				return GetLightQueue ();
			}
			set {
				SetLightQueue (value);
			}
		}

		/// <summary>
		/// Return ramp texture attribute.
		/// </summary>
		public ResourceRef RampTextureAttr {
			get {
				return GetRampTextureAttr ();
			}
		}

		/// <summary>
		/// Return shape texture attribute.
		/// </summary>
		public ResourceRef ShapeTextureAttr {
			get {
				return GetShapeTextureAttr ();
			}
		}
	}
}
