// GENERATED FILE - DO NOT EDIT.
// Generated by generate_entry_points.py using data from gl.xml.
//
// Copyright 2019 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// entry_points_gl_1_5_autogen.h:
//   Defines the GL 1.5 entry points.

#ifndef LIBGL_ENTRY_POINTS_GL_1_5_AUTOGEN_H_
#define LIBGL_ENTRY_POINTS_GL_1_5_AUTOGEN_H_

#include <export.h>
#include "angle_gl.h"

#include "WGL/wgl.h"
#include "windows.h"

namespace gl
{
ANGLE_EXPORT void GL_APIENTRY BeginQuery(GLenum target, GLuint id);
ANGLE_EXPORT void GL_APIENTRY BindBuffer(GLenum target, GLuint buffer);
ANGLE_EXPORT void GL_APIENTRY BufferData(GLenum target,
                                         GLsizeiptr size,
                                         const void *data,
                                         GLenum usage);
ANGLE_EXPORT void GL_APIENTRY BufferSubData(GLenum target,
                                            GLintptr offset,
                                            GLsizeiptr size,
                                            const void *data);
ANGLE_EXPORT void GL_APIENTRY DeleteBuffers(GLsizei n, const GLuint *buffers);
ANGLE_EXPORT void GL_APIENTRY DeleteQueries(GLsizei n, const GLuint *ids);
ANGLE_EXPORT void GL_APIENTRY EndQuery(GLenum target);
ANGLE_EXPORT void GL_APIENTRY GenBuffers(GLsizei n, GLuint *buffers);
ANGLE_EXPORT void GL_APIENTRY GenQueries(GLsizei n, GLuint *ids);
ANGLE_EXPORT void GL_APIENTRY GetBufferParameteriv(GLenum target, GLenum pname, GLint *params);
ANGLE_EXPORT void GL_APIENTRY GetBufferPointerv(GLenum target, GLenum pname, void **params);
ANGLE_EXPORT void GL_APIENTRY GetBufferSubData(GLenum target,
                                               GLintptr offset,
                                               GLsizeiptr size,
                                               void *data);
ANGLE_EXPORT void GL_APIENTRY GetQueryObjectiv(GLuint id, GLenum pname, GLint *params);
ANGLE_EXPORT void GL_APIENTRY GetQueryObjectuiv(GLuint id, GLenum pname, GLuint *params);
ANGLE_EXPORT void GL_APIENTRY GetQueryiv(GLenum target, GLenum pname, GLint *params);
ANGLE_EXPORT GLboolean GL_APIENTRY IsBuffer(GLuint buffer);
ANGLE_EXPORT GLboolean GL_APIENTRY IsQuery(GLuint id);
ANGLE_EXPORT void *GL_APIENTRY MapBuffer(GLenum target, GLenum access);
ANGLE_EXPORT GLboolean GL_APIENTRY UnmapBuffer(GLenum target);
}  // namespace gl

#endif  // LIBGL_ENTRY_POINTS_GL_1_5_AUTOGEN_H_
