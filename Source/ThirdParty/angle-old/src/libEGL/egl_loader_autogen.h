// GENERATED FILE - DO NOT EDIT.
// Generated by generate_loader.py using data from egl.xml and egl_angle_ext.xml.
//
// Copyright 2019 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// egl_loader_autogen.h:
//   Simple EGL function loader.

#ifndef LIBEGL_EGL_LOADER_AUTOGEN_H_
#define LIBEGL_EGL_LOADER_AUTOGEN_H_

#include <EGL/egl.h>
#include <EGL/eglext.h>

extern PFNEGLCHOOSECONFIGPROC EGL_ChooseConfig;
extern PFNEGLCOPYBUFFERSPROC EGL_CopyBuffers;
extern PFNEGLCREATECONTEXTPROC EGL_CreateContext;
extern PFNEGLCREATEPBUFFERSURFACEPROC EGL_CreatePbufferSurface;
extern PFNEGLCREATEPIXMAPSURFACEPROC EGL_CreatePixmapSurface;
extern PFNEGLCREATEWINDOWSURFACEPROC EGL_CreateWindowSurface;
extern PFNEGLDESTROYCONTEXTPROC EGL_DestroyContext;
extern PFNEGLDESTROYSURFACEPROC EGL_DestroySurface;
extern PFNEGLGETCONFIGATTRIBPROC EGL_GetConfigAttrib;
extern PFNEGLGETCONFIGSPROC EGL_GetConfigs;
extern PFNEGLGETCURRENTDISPLAYPROC EGL_GetCurrentDisplay;
extern PFNEGLGETCURRENTSURFACEPROC EGL_GetCurrentSurface;
extern PFNEGLGETDISPLAYPROC EGL_GetDisplay;
extern PFNEGLGETERRORPROC EGL_GetError;
extern PFNEGLGETPROCADDRESSPROC EGL_GetProcAddress;
extern PFNEGLINITIALIZEPROC EGL_Initialize;
extern PFNEGLMAKECURRENTPROC EGL_MakeCurrent;
extern PFNEGLQUERYCONTEXTPROC EGL_QueryContext;
extern PFNEGLQUERYSTRINGPROC EGL_QueryString;
extern PFNEGLQUERYSURFACEPROC EGL_QuerySurface;
extern PFNEGLSWAPBUFFERSPROC EGL_SwapBuffers;
extern PFNEGLTERMINATEPROC EGL_Terminate;
extern PFNEGLWAITGLPROC EGL_WaitGL;
extern PFNEGLWAITNATIVEPROC EGL_WaitNative;
extern PFNEGLBINDTEXIMAGEPROC EGL_BindTexImage;
extern PFNEGLRELEASETEXIMAGEPROC EGL_ReleaseTexImage;
extern PFNEGLSURFACEATTRIBPROC EGL_SurfaceAttrib;
extern PFNEGLSWAPINTERVALPROC EGL_SwapInterval;
extern PFNEGLBINDAPIPROC EGL_BindAPI;
extern PFNEGLQUERYAPIPROC EGL_QueryAPI;
extern PFNEGLCREATEPBUFFERFROMCLIENTBUFFERPROC EGL_CreatePbufferFromClientBuffer;
extern PFNEGLRELEASETHREADPROC EGL_ReleaseThread;
extern PFNEGLWAITCLIENTPROC EGL_WaitClient;
extern PFNEGLGETCURRENTCONTEXTPROC EGL_GetCurrentContext;
extern PFNEGLCREATESYNCPROC EGL_CreateSync;
extern PFNEGLDESTROYSYNCPROC EGL_DestroySync;
extern PFNEGLCLIENTWAITSYNCPROC EGL_ClientWaitSync;
extern PFNEGLGETSYNCATTRIBPROC EGL_GetSyncAttrib;
extern PFNEGLCREATEIMAGEPROC EGL_CreateImage;
extern PFNEGLDESTROYIMAGEPROC EGL_DestroyImage;
extern PFNEGLGETPLATFORMDISPLAYPROC EGL_GetPlatformDisplay;
extern PFNEGLCREATEPLATFORMWINDOWSURFACEPROC EGL_CreatePlatformWindowSurface;
extern PFNEGLCREATEPLATFORMPIXMAPSURFACEPROC EGL_CreatePlatformPixmapSurface;
extern PFNEGLWAITSYNCPROC EGL_WaitSync;
extern PFNEGLSETBLOBCACHEFUNCSANDROIDPROC EGL_SetBlobCacheFuncsANDROID;
extern PFNEGLGETCOMPOSITORTIMINGANDROIDPROC EGL_GetCompositorTimingANDROID;
extern PFNEGLGETCOMPOSITORTIMINGSUPPORTEDANDROIDPROC EGL_GetCompositorTimingSupportedANDROID;
extern PFNEGLGETFRAMETIMESTAMPSUPPORTEDANDROIDPROC EGL_GetFrameTimestampSupportedANDROID;
extern PFNEGLGETFRAMETIMESTAMPSANDROIDPROC EGL_GetFrameTimestampsANDROID;
extern PFNEGLGETNEXTFRAMEIDANDROIDPROC EGL_GetNextFrameIdANDROID;
extern PFNEGLPRESENTATIONTIMEANDROIDPROC EGL_PresentationTimeANDROID;
extern PFNEGLCREATEDEVICEANGLEPROC EGL_CreateDeviceANGLE;
extern PFNEGLRELEASEDEVICEANGLEPROC EGL_ReleaseDeviceANGLE;
extern PFNEGLPROGRAMCACHEGETATTRIBANGLEPROC EGL_ProgramCacheGetAttribANGLE;
extern PFNEGLPROGRAMCACHEPOPULATEANGLEPROC EGL_ProgramCachePopulateANGLE;
extern PFNEGLPROGRAMCACHEQUERYANGLEPROC EGL_ProgramCacheQueryANGLE;
extern PFNEGLPROGRAMCACHERESIZEANGLEPROC EGL_ProgramCacheResizeANGLE;
extern PFNEGLQUERYSURFACEPOINTERANGLEPROC EGL_QuerySurfacePointerANGLE;
extern PFNEGLCREATESTREAMPRODUCERD3DTEXTUREANGLEPROC EGL_CreateStreamProducerD3DTextureANGLE;
extern PFNEGLSTREAMPOSTD3DTEXTUREANGLEPROC EGL_StreamPostD3DTextureANGLE;
extern PFNEGLGETSYNCVALUESCHROMIUMPROC EGL_GetSyncValuesCHROMIUM;
extern PFNEGLQUERYDEVICEATTRIBEXTPROC EGL_QueryDeviceAttribEXT;
extern PFNEGLQUERYDEVICESTRINGEXTPROC EGL_QueryDeviceStringEXT;
extern PFNEGLQUERYDISPLAYATTRIBEXTPROC EGL_QueryDisplayAttribEXT;
extern PFNEGLCREATEPLATFORMPIXMAPSURFACEEXTPROC EGL_CreatePlatformPixmapSurfaceEXT;
extern PFNEGLCREATEPLATFORMWINDOWSURFACEEXTPROC EGL_CreatePlatformWindowSurfaceEXT;
extern PFNEGLGETPLATFORMDISPLAYEXTPROC EGL_GetPlatformDisplayEXT;
extern PFNEGLDEBUGMESSAGECONTROLKHRPROC EGL_DebugMessageControlKHR;
extern PFNEGLLABELOBJECTKHRPROC EGL_LabelObjectKHR;
extern PFNEGLQUERYDEBUGKHRPROC EGL_QueryDebugKHR;
extern PFNEGLCLIENTWAITSYNCKHRPROC EGL_ClientWaitSyncKHR;
extern PFNEGLCREATESYNCKHRPROC EGL_CreateSyncKHR;
extern PFNEGLDESTROYSYNCKHRPROC EGL_DestroySyncKHR;
extern PFNEGLGETSYNCATTRIBKHRPROC EGL_GetSyncAttribKHR;
extern PFNEGLCREATEIMAGEKHRPROC EGL_CreateImageKHR;
extern PFNEGLDESTROYIMAGEKHRPROC EGL_DestroyImageKHR;
extern PFNEGLCREATESTREAMKHRPROC EGL_CreateStreamKHR;
extern PFNEGLDESTROYSTREAMKHRPROC EGL_DestroyStreamKHR;
extern PFNEGLQUERYSTREAMKHRPROC EGL_QueryStreamKHR;
extern PFNEGLQUERYSTREAMU64KHRPROC EGL_QueryStreamu64KHR;
extern PFNEGLSTREAMATTRIBKHRPROC EGL_StreamAttribKHR;
extern PFNEGLSTREAMCONSUMERACQUIREKHRPROC EGL_StreamConsumerAcquireKHR;
extern PFNEGLSTREAMCONSUMERGLTEXTUREEXTERNALKHRPROC EGL_StreamConsumerGLTextureExternalKHR;
extern PFNEGLSTREAMCONSUMERRELEASEKHRPROC EGL_StreamConsumerReleaseKHR;
extern PFNEGLSWAPBUFFERSWITHDAMAGEKHRPROC EGL_SwapBuffersWithDamageKHR;
extern PFNEGLWAITSYNCKHRPROC EGL_WaitSyncKHR;
extern PFNEGLPOSTSUBBUFFERNVPROC EGL_PostSubBufferNV;
extern PFNEGLSTREAMCONSUMERGLTEXTUREEXTERNALATTRIBSNVPROC
    EGL_StreamConsumerGLTextureExternalAttribsNV;

namespace angle
{
using GenericProc = void (*)();
using LoadProc    = GenericProc(KHRONOS_APIENTRY *)(const char *);
void LoadEGL(LoadProc loadProc);
}  // namespace angle

#endif  // LIBEGL_EGL_LOADER_AUTOGEN_H_
