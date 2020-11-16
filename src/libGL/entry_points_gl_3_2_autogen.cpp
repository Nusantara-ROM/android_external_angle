// GENERATED FILE - DO NOT EDIT.
// Generated by generate_entry_points.py using data from gl.xml.
//
// Copyright 2020 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// entry_points_gl_3_2_autogen.cpp:
//   Defines the GL 3.2 entry points.

#include "libGL/entry_points_gl_3_2_autogen.h"

#include "libANGLE/Context.h"
#include "libANGLE/Context.inl.h"
#include "libANGLE/entry_points_utils.h"
#include "libANGLE/gl_enum_utils.h"
#include "libANGLE/validationEGL.h"
#include "libANGLE/validationES.h"
#include "libANGLE/validationES1.h"
#include "libANGLE/validationES2.h"
#include "libANGLE/validationES3.h"
#include "libANGLE/validationES31.h"
#include "libANGLE/validationES32.h"
#include "libANGLE/validationESEXT.h"
#include "libANGLE/validationGL32_autogen.h"
#include "libGLESv2/global_state.h"

namespace gl
{
GLenum GL_APIENTRY ClientWaitSync(GLsync sync, GLbitfield flags, GLuint64 timeout)
{
    Context *context = GetValidGlobalContext();
    EVENT(context, gl::EntryPoint::ClientWaitSync, "glClientWaitSync",
          "context = %d, sync = 0x%016" PRIxPTR ", flags = %s, timeout = %llu", CID(context),
          (uintptr_t)sync, GLbitfieldToString(GLenumGroup::SyncObjectMask, flags).c_str(),
          static_cast<unsigned long long>(timeout));

    GLenum returnValue;
    if (context)
    {
        std::unique_lock<angle::GlobalMutex> shareContextLock = GetShareGroupLock(context);
        bool isCallValid =
            (context->skipValidation() || ValidateClientWaitSync(context, sync, flags, timeout));
        if (isCallValid)
        {
            returnValue = context->clientWaitSync(sync, flags, timeout);
        }
        else
        {
            returnValue = GetDefaultReturnValue<EntryPoint::ClientWaitSync, GLenum>();
        }
        ANGLE_CAPTURE(ClientWaitSync, isCallValid, context, sync, flags, timeout, returnValue);
    }
    else
    {
        GenerateContextLostErrorOnCurrentGlobalContext();
        returnValue = GetDefaultReturnValue<EntryPoint::ClientWaitSync, GLenum>();
    }
    return returnValue;
}

void GL_APIENTRY DeleteSync(GLsync sync)
{
    Context *context = GetValidGlobalContext();
    EVENT(context, gl::EntryPoint::DeleteSync, "glDeleteSync",
          "context = %d, sync = 0x%016" PRIxPTR "", CID(context), (uintptr_t)sync);

    if (context)
    {
        std::unique_lock<angle::GlobalMutex> shareContextLock = GetShareGroupLock(context);
        bool isCallValid = (context->skipValidation() || ValidateDeleteSync(context, sync));
        if (isCallValid)
        {
            context->deleteSync(sync);
        }
        ANGLE_CAPTURE(DeleteSync, isCallValid, context, sync);
    }
    else
    {
        GenerateContextLostErrorOnCurrentGlobalContext();
    }
}

void GL_APIENTRY DrawElementsBaseVertex(GLenum mode,
                                        GLsizei count,
                                        GLenum type,
                                        const void *indices,
                                        GLint basevertex)
{
    Context *context = GetValidGlobalContext();
    EVENT(context, gl::EntryPoint::DrawElementsBaseVertex, "glDrawElementsBaseVertex",
          "context = %d, mode = %s, count = %d, type = %s, indices = 0x%016" PRIxPTR
          ", basevertex = %d",
          CID(context), GLenumToString(GLenumGroup::PrimitiveType, mode), count,
          GLenumToString(GLenumGroup::DrawElementsType, type), (uintptr_t)indices, basevertex);

    if (context)
    {
        PrimitiveMode modePacked                              = FromGL<PrimitiveMode>(mode);
        DrawElementsType typePacked                           = FromGL<DrawElementsType>(type);
        std::unique_lock<angle::GlobalMutex> shareContextLock = GetShareGroupLock(context);
        bool isCallValid                                      = (context->skipValidation() ||
                            ValidateDrawElementsBaseVertex(context, modePacked, count, typePacked,
                                                           indices, basevertex));
        if (isCallValid)
        {
            context->drawElementsBaseVertex(modePacked, count, typePacked, indices, basevertex);
        }
        ANGLE_CAPTURE(DrawElementsBaseVertex, isCallValid, context, modePacked, count, typePacked,
                      indices, basevertex);
    }
    else
    {
        GenerateContextLostErrorOnCurrentGlobalContext();
    }
}

void GL_APIENTRY DrawElementsInstancedBaseVertex(GLenum mode,
                                                 GLsizei count,
                                                 GLenum type,
                                                 const void *indices,
                                                 GLsizei instancecount,
                                                 GLint basevertex)
{
    Context *context = GetValidGlobalContext();
    EVENT(context, gl::EntryPoint::DrawElementsInstancedBaseVertex,
          "glDrawElementsInstancedBaseVertex",
          "context = %d, mode = %s, count = %d, type = %s, indices = 0x%016" PRIxPTR
          ", instancecount = %d, basevertex = %d",
          CID(context), GLenumToString(GLenumGroup::PrimitiveType, mode), count,
          GLenumToString(GLenumGroup::DrawElementsType, type), (uintptr_t)indices, instancecount,
          basevertex);

    if (context)
    {
        PrimitiveMode modePacked                              = FromGL<PrimitiveMode>(mode);
        DrawElementsType typePacked                           = FromGL<DrawElementsType>(type);
        std::unique_lock<angle::GlobalMutex> shareContextLock = GetShareGroupLock(context);
        bool isCallValid = (context->skipValidation() || ValidateDrawElementsInstancedBaseVertex(
                                                             context, modePacked, count, typePacked,
                                                             indices, instancecount, basevertex));
        if (isCallValid)
        {
            context->drawElementsInstancedBaseVertex(modePacked, count, typePacked, indices,
                                                     instancecount, basevertex);
        }
        ANGLE_CAPTURE(DrawElementsInstancedBaseVertex, isCallValid, context, modePacked, count,
                      typePacked, indices, instancecount, basevertex);
    }
    else
    {
        GenerateContextLostErrorOnCurrentGlobalContext();
    }
}

void GL_APIENTRY DrawRangeElementsBaseVertex(GLenum mode,
                                             GLuint start,
                                             GLuint end,
                                             GLsizei count,
                                             GLenum type,
                                             const void *indices,
                                             GLint basevertex)
{
    Context *context = GetValidGlobalContext();
    EVENT(context, gl::EntryPoint::DrawRangeElementsBaseVertex, "glDrawRangeElementsBaseVertex",
          "context = %d, mode = %s, start = %u, end = %u, count = %d, type = %s, indices = "
          "0x%016" PRIxPTR ", basevertex = %d",
          CID(context), GLenumToString(GLenumGroup::PrimitiveType, mode), start, end, count,
          GLenumToString(GLenumGroup::DrawElementsType, type), (uintptr_t)indices, basevertex);

    if (context)
    {
        PrimitiveMode modePacked                              = FromGL<PrimitiveMode>(mode);
        DrawElementsType typePacked                           = FromGL<DrawElementsType>(type);
        std::unique_lock<angle::GlobalMutex> shareContextLock = GetShareGroupLock(context);
        bool isCallValid = (context->skipValidation() || ValidateDrawRangeElementsBaseVertex(
                                                             context, modePacked, start, end, count,
                                                             typePacked, indices, basevertex));
        if (isCallValid)
        {
            context->drawRangeElementsBaseVertex(modePacked, start, end, count, typePacked, indices,
                                                 basevertex);
        }
        ANGLE_CAPTURE(DrawRangeElementsBaseVertex, isCallValid, context, modePacked, start, end,
                      count, typePacked, indices, basevertex);
    }
    else
    {
        GenerateContextLostErrorOnCurrentGlobalContext();
    }
}

GLsync GL_APIENTRY FenceSync(GLenum condition, GLbitfield flags)
{
    Context *context = GetValidGlobalContext();
    EVENT(context, gl::EntryPoint::FenceSync, "glFenceSync",
          "context = %d, condition = %s, flags = %s", CID(context),
          GLenumToString(GLenumGroup::SyncCondition, condition),
          GLbitfieldToString(GLenumGroup::DefaultGroup, flags).c_str());

    GLsync returnValue;
    if (context)
    {
        std::unique_lock<angle::GlobalMutex> shareContextLock = GetShareGroupLock(context);
        bool isCallValid =
            (context->skipValidation() || ValidateFenceSync(context, condition, flags));
        if (isCallValid)
        {
            returnValue = context->fenceSync(condition, flags);
        }
        else
        {
            returnValue = GetDefaultReturnValue<EntryPoint::FenceSync, GLsync>();
        }
        ANGLE_CAPTURE(FenceSync, isCallValid, context, condition, flags, returnValue);
    }
    else
    {
        GenerateContextLostErrorOnCurrentGlobalContext();
        returnValue = GetDefaultReturnValue<EntryPoint::FenceSync, GLsync>();
    }
    return returnValue;
}

void GL_APIENTRY FramebufferTexture(GLenum target, GLenum attachment, GLuint texture, GLint level)
{
    Context *context = GetValidGlobalContext();
    EVENT(context, gl::EntryPoint::FramebufferTexture, "glFramebufferTexture",
          "context = %d, target = %s, attachment = %s, texture = %u, level = %d", CID(context),
          GLenumToString(GLenumGroup::FramebufferTarget, target),
          GLenumToString(GLenumGroup::FramebufferAttachment, attachment), texture, level);

    if (context)
    {
        TextureID texturePacked                               = FromGL<TextureID>(texture);
        std::unique_lock<angle::GlobalMutex> shareContextLock = GetShareGroupLock(context);
        bool isCallValid =
            (context->skipValidation() ||
             ValidateFramebufferTexture(context, target, attachment, texturePacked, level));
        if (isCallValid)
        {
            context->framebufferTexture(target, attachment, texturePacked, level);
        }
        ANGLE_CAPTURE(FramebufferTexture, isCallValid, context, target, attachment, texturePacked,
                      level);
    }
    else
    {
        GenerateContextLostErrorOnCurrentGlobalContext();
    }
}

void GL_APIENTRY GetBufferParameteri64v(GLenum target, GLenum pname, GLint64 *params)
{
    Context *context = GetValidGlobalContext();
    EVENT(context, gl::EntryPoint::GetBufferParameteri64v, "glGetBufferParameteri64v",
          "context = %d, target = %s, pname = %s, params = 0x%016" PRIxPTR "", CID(context),
          GLenumToString(GLenumGroup::BufferTargetARB, target),
          GLenumToString(GLenumGroup::DefaultGroup, pname), (uintptr_t)params);

    if (context)
    {
        BufferBinding targetPacked                            = FromGL<BufferBinding>(target);
        std::unique_lock<angle::GlobalMutex> shareContextLock = GetShareGroupLock(context);
        bool isCallValid                                      = (context->skipValidation() ||
                            ValidateGetBufferParameteri64v(context, targetPacked, pname, params));
        if (isCallValid)
        {
            context->getBufferParameteri64v(targetPacked, pname, params);
        }
        ANGLE_CAPTURE(GetBufferParameteri64v, isCallValid, context, targetPacked, pname, params);
    }
    else
    {
        GenerateContextLostErrorOnCurrentGlobalContext();
    }
}

void GL_APIENTRY GetInteger64i_v(GLenum target, GLuint index, GLint64 *data)
{
    Context *context = GetValidGlobalContext();
    EVENT(context, gl::EntryPoint::GetInteger64i_v, "glGetInteger64i_v",
          "context = %d, target = %s, index = %u, data = 0x%016" PRIxPTR "", CID(context),
          GLenumToString(GLenumGroup::TypeEnum, target), index, (uintptr_t)data);

    if (context)
    {
        std::unique_lock<angle::GlobalMutex> shareContextLock = GetShareGroupLock(context);
        bool isCallValid =
            (context->skipValidation() || ValidateGetInteger64i_v(context, target, index, data));
        if (isCallValid)
        {
            context->getInteger64i_v(target, index, data);
        }
        ANGLE_CAPTURE(GetInteger64i_v, isCallValid, context, target, index, data);
    }
    else
    {
        GenerateContextLostErrorOnCurrentGlobalContext();
    }
}

void GL_APIENTRY GetInteger64v(GLenum pname, GLint64 *data)
{
    Context *context = GetValidGlobalContext();
    EVENT(context, gl::EntryPoint::GetInteger64v, "glGetInteger64v",
          "context = %d, pname = %s, data = 0x%016" PRIxPTR "", CID(context),
          GLenumToString(GLenumGroup::GetPName, pname), (uintptr_t)data);

    if (context)
    {
        std::unique_lock<angle::GlobalMutex> shareContextLock = GetShareGroupLock(context);
        bool isCallValid =
            (context->skipValidation() || ValidateGetInteger64v(context, pname, data));
        if (isCallValid)
        {
            context->getInteger64v(pname, data);
        }
        ANGLE_CAPTURE(GetInteger64v, isCallValid, context, pname, data);
    }
    else
    {
        GenerateContextLostErrorOnCurrentGlobalContext();
    }
}

void GL_APIENTRY GetMultisamplefv(GLenum pname, GLuint index, GLfloat *val)
{
    Context *context = GetValidGlobalContext();
    EVENT(context, gl::EntryPoint::GetMultisamplefv, "glGetMultisamplefv",
          "context = %d, pname = %s, index = %u, val = 0x%016" PRIxPTR "", CID(context),
          GLenumToString(GLenumGroup::DefaultGroup, pname), index, (uintptr_t)val);

    if (context)
    {
        std::unique_lock<angle::GlobalMutex> shareContextLock = GetShareGroupLock(context);
        bool isCallValid =
            (context->skipValidation() || ValidateGetMultisamplefv(context, pname, index, val));
        if (isCallValid)
        {
            context->getMultisamplefv(pname, index, val);
        }
        ANGLE_CAPTURE(GetMultisamplefv, isCallValid, context, pname, index, val);
    }
    else
    {
        GenerateContextLostErrorOnCurrentGlobalContext();
    }
}

void GL_APIENTRY
GetSynciv(GLsync sync, GLenum pname, GLsizei bufSize, GLsizei *length, GLint *values)
{
    Context *context = GetGlobalContext();
    EVENT(context, gl::EntryPoint::GetSynciv, "glGetSynciv",
          "context = %d, sync = 0x%016" PRIxPTR
          ", pname = %s, bufSize = %d, length = 0x%016" PRIxPTR ", values = 0x%016" PRIxPTR "",
          CID(context), (uintptr_t)sync, GLenumToString(GLenumGroup::SyncParameterName, pname),
          bufSize, (uintptr_t)length, (uintptr_t)values);

    if (context)
    {
        std::unique_lock<angle::GlobalMutex> shareContextLock = GetShareGroupLock(context);
        bool isCallValid                                      = (context->skipValidation() ||
                            ValidateGetSynciv(context, sync, pname, bufSize, length, values));
        if (isCallValid)
        {
            context->getSynciv(sync, pname, bufSize, length, values);
        }
        ANGLE_CAPTURE(GetSynciv, isCallValid, context, sync, pname, bufSize, length, values);
    }
    else
    {}
}

GLboolean GL_APIENTRY IsSync(GLsync sync)
{
    Context *context = GetValidGlobalContext();
    EVENT(context, gl::EntryPoint::IsSync, "glIsSync", "context = %d, sync = 0x%016" PRIxPTR "",
          CID(context), (uintptr_t)sync);

    GLboolean returnValue;
    if (context)
    {
        std::unique_lock<angle::GlobalMutex> shareContextLock = GetShareGroupLock(context);
        bool isCallValid = (context->skipValidation() || ValidateIsSync(context, sync));
        if (isCallValid)
        {
            returnValue = context->isSync(sync);
        }
        else
        {
            returnValue = GetDefaultReturnValue<EntryPoint::IsSync, GLboolean>();
        }
        ANGLE_CAPTURE(IsSync, isCallValid, context, sync, returnValue);
    }
    else
    {
        GenerateContextLostErrorOnCurrentGlobalContext();
        returnValue = GetDefaultReturnValue<EntryPoint::IsSync, GLboolean>();
    }
    return returnValue;
}

void GL_APIENTRY MultiDrawElementsBaseVertex(GLenum mode,
                                             const GLsizei *count,
                                             GLenum type,
                                             const void *const *indices,
                                             GLsizei drawcount,
                                             const GLint *basevertex)
{
    Context *context = GetValidGlobalContext();
    EVENT(context, gl::EntryPoint::MultiDrawElementsBaseVertex, "glMultiDrawElementsBaseVertex",
          "context = %d, mode = %s, count = 0x%016" PRIxPTR ", type = %s, indices = 0x%016" PRIxPTR
          ", drawcount = %d, basevertex = 0x%016" PRIxPTR "",
          CID(context), GLenumToString(GLenumGroup::PrimitiveType, mode), (uintptr_t)count,
          GLenumToString(GLenumGroup::DrawElementsType, type), (uintptr_t)indices, drawcount,
          (uintptr_t)basevertex);

    if (context)
    {
        PrimitiveMode modePacked                              = FromGL<PrimitiveMode>(mode);
        DrawElementsType typePacked                           = FromGL<DrawElementsType>(type);
        std::unique_lock<angle::GlobalMutex> shareContextLock = GetShareGroupLock(context);
        bool isCallValid = (context->skipValidation() || ValidateMultiDrawElementsBaseVertex(
                                                             context, modePacked, count, typePacked,
                                                             indices, drawcount, basevertex));
        if (isCallValid)
        {
            context->multiDrawElementsBaseVertex(modePacked, count, typePacked, indices, drawcount,
                                                 basevertex);
        }
        ANGLE_CAPTURE(MultiDrawElementsBaseVertex, isCallValid, context, modePacked, count,
                      typePacked, indices, drawcount, basevertex);
    }
    else
    {
        GenerateContextLostErrorOnCurrentGlobalContext();
    }
}

void GL_APIENTRY ProvokingVertex(GLenum mode)
{
    Context *context = GetValidGlobalContext();
    EVENT(context, gl::EntryPoint::ProvokingVertex, "glProvokingVertex", "context = %d, mode = %s",
          CID(context), GLenumToString(GLenumGroup::VertexProvokingMode, mode));

    if (context)
    {
        ProvokingVertexConvention modePacked = FromGL<ProvokingVertexConvention>(mode);
        std::unique_lock<angle::GlobalMutex> shareContextLock = GetShareGroupLock(context);
        bool isCallValid =
            (context->skipValidation() || ValidateProvokingVertex(context, modePacked));
        if (isCallValid)
        {
            context->provokingVertex(modePacked);
        }
        ANGLE_CAPTURE(ProvokingVertex, isCallValid, context, modePacked);
    }
    else
    {
        GenerateContextLostErrorOnCurrentGlobalContext();
    }
}

void GL_APIENTRY SampleMaski(GLuint maskNumber, GLbitfield mask)
{
    Context *context = GetValidGlobalContext();
    EVENT(context, gl::EntryPoint::SampleMaski, "glSampleMaski",
          "context = %d, maskNumber = %u, mask = %s", CID(context), maskNumber,
          GLbitfieldToString(GLenumGroup::DefaultGroup, mask).c_str());

    if (context)
    {
        std::unique_lock<angle::GlobalMutex> shareContextLock = GetShareGroupLock(context);
        bool isCallValid =
            (context->skipValidation() || ValidateSampleMaski(context, maskNumber, mask));
        if (isCallValid)
        {
            context->sampleMaski(maskNumber, mask);
        }
        ANGLE_CAPTURE(SampleMaski, isCallValid, context, maskNumber, mask);
    }
    else
    {
        GenerateContextLostErrorOnCurrentGlobalContext();
    }
}

void GL_APIENTRY TexImage2DMultisample(GLenum target,
                                       GLsizei samples,
                                       GLenum internalformat,
                                       GLsizei width,
                                       GLsizei height,
                                       GLboolean fixedsamplelocations)
{
    Context *context = GetValidGlobalContext();
    EVENT(context, gl::EntryPoint::TexImage2DMultisample, "glTexImage2DMultisample",
          "context = %d, target = %s, samples = %d, internalformat = %s, width = %d, height = %d, "
          "fixedsamplelocations = %s",
          CID(context), GLenumToString(GLenumGroup::TextureTarget, target), samples,
          GLenumToString(GLenumGroup::InternalFormat, internalformat), width, height,
          GLbooleanToString(fixedsamplelocations));

    if (context)
    {
        std::unique_lock<angle::GlobalMutex> shareContextLock = GetShareGroupLock(context);
        bool isCallValid                                      = (context->skipValidation() ||
                            ValidateTexImage2DMultisample(context, target, samples, internalformat,
                                                          width, height, fixedsamplelocations));
        if (isCallValid)
        {
            context->texImage2DMultisample(target, samples, internalformat, width, height,
                                           fixedsamplelocations);
        }
        ANGLE_CAPTURE(TexImage2DMultisample, isCallValid, context, target, samples, internalformat,
                      width, height, fixedsamplelocations);
    }
    else
    {
        GenerateContextLostErrorOnCurrentGlobalContext();
    }
}

void GL_APIENTRY TexImage3DMultisample(GLenum target,
                                       GLsizei samples,
                                       GLenum internalformat,
                                       GLsizei width,
                                       GLsizei height,
                                       GLsizei depth,
                                       GLboolean fixedsamplelocations)
{
    Context *context = GetValidGlobalContext();
    EVENT(context, gl::EntryPoint::TexImage3DMultisample, "glTexImage3DMultisample",
          "context = %d, target = %s, samples = %d, internalformat = %s, width = %d, height = %d, "
          "depth = %d, fixedsamplelocations = %s",
          CID(context), GLenumToString(GLenumGroup::TextureTarget, target), samples,
          GLenumToString(GLenumGroup::InternalFormat, internalformat), width, height, depth,
          GLbooleanToString(fixedsamplelocations));

    if (context)
    {
        std::unique_lock<angle::GlobalMutex> shareContextLock = GetShareGroupLock(context);
        bool isCallValid =
            (context->skipValidation() ||
             ValidateTexImage3DMultisample(context, target, samples, internalformat, width, height,
                                           depth, fixedsamplelocations));
        if (isCallValid)
        {
            context->texImage3DMultisample(target, samples, internalformat, width, height, depth,
                                           fixedsamplelocations);
        }
        ANGLE_CAPTURE(TexImage3DMultisample, isCallValid, context, target, samples, internalformat,
                      width, height, depth, fixedsamplelocations);
    }
    else
    {
        GenerateContextLostErrorOnCurrentGlobalContext();
    }
}

void GL_APIENTRY WaitSync(GLsync sync, GLbitfield flags, GLuint64 timeout)
{
    Context *context = GetValidGlobalContext();
    EVENT(context, gl::EntryPoint::WaitSync, "glWaitSync",
          "context = %d, sync = 0x%016" PRIxPTR ", flags = %s, timeout = %llu", CID(context),
          (uintptr_t)sync, GLbitfieldToString(GLenumGroup::DefaultGroup, flags).c_str(),
          static_cast<unsigned long long>(timeout));

    if (context)
    {
        std::unique_lock<angle::GlobalMutex> shareContextLock = GetShareGroupLock(context);
        bool isCallValid =
            (context->skipValidation() || ValidateWaitSync(context, sync, flags, timeout));
        if (isCallValid)
        {
            context->waitSync(sync, flags, timeout);
        }
        ANGLE_CAPTURE(WaitSync, isCallValid, context, sync, flags, timeout);
    }
    else
    {
        GenerateContextLostErrorOnCurrentGlobalContext();
    }
}
}  // namespace gl
