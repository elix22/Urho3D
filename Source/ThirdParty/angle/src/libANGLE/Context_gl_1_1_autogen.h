// GENERATED FILE - DO NOT EDIT.
// Generated by generate_entry_points.py using data from gl.xml.
//
// Copyright 2019 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// Context_gl_1_1_autogen.h: Creates a macro for interfaces in Context.

#ifndef ANGLE_CONTEXT_GL_1_1_AUTOGEN_H_
#define ANGLE_CONTEXT_GL_1_1_AUTOGEN_H_

#define ANGLE_GL_1_1_CONTEXT_API                                                                \
    GLboolean areTexturesResident(GLsizei n, const GLuint *textures, GLboolean *residences);    \
    void arrayElement(GLint i);                                                                 \
    void copyTexImage1D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y,    \
                        GLsizei width, GLint border);                                           \
    void copyTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLint x, GLint y,         \
                           GLsizei width);                                                      \
    void edgeFlagPointer(GLsizei stride, const void *pointer);                                  \
    void indexPointer(GLenum type, GLsizei stride, const void *pointer);                        \
    void indexub(GLubyte c);                                                                    \
    void indexubv(const GLubyte *c);                                                            \
    void interleavedArrays(GLenum format, GLsizei stride, const void *pointer);                 \
    void popClientAttrib();                                                                     \
    void prioritizeTextures(GLsizei n, const GLuint *textures, const GLfloat *priorities);      \
    void pushClientAttrib(GLbitfield mask);                                                     \
    void texSubImage1D(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, \
                       GLenum type, const void *pixels);

#endif  // ANGLE_CONTEXT_API_1_1_AUTOGEN_H_
