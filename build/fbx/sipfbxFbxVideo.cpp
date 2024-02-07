/*
 * Interface wrapper code.
 *
 * Generated by SIP 6.6.2
 *
 * Copyright (C) 2023 Autodesk, Inc. and/or its licensors.
 * All Rights Reserved.
 * 
 * The coded instructions, statements, computer programs, and/or related material 
 * (collectively the "Data") in these files contain unpublished information 
 * proprietary to Autodesk, Inc. and/or its licensors, which is protected by 
 * Canada and United States of America federal copyright law and by international 
 * treaties. 
 * 
 * The Data may not be disclosed or distributed to third parties, in whole or in
 * part, without the prior written consent of Autodesk, Inc. ("Autodesk").
 * 
 * THE DATA IS PROVIDED "AS IS" AND WITHOUT WARRANTY.
 * ALL WARRANTIES ARE EXPRESSLY EXCLUDED AND DISCLAIMED. AUTODESK MAKES NO
 * WARRANTY OF ANY KIND WITH RESPECT TO THE DATA, EXPRESS, IMPLIED OR ARISING
 * BY CUSTOM OR TRADE USAGE, AND DISCLAIMS ANY IMPLIED WARRANTIES OF TITLE, 
 * NON-INFRINGEMENT, MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE OR USE. 
 * WITHOUT LIMITING THE FOREGOING, AUTODESK DOES NOT WARRANT THAT THE OPERATION
 * OF THE DATA WILL BE UNINTERRUPTED OR ERROR FREE. 
 * 
 * IN NO EVENT SHALL AUTODESK, ITS AFFILIATES, PARENT COMPANIES, LICENSORS
 * OR SUPPLIERS ("AUTODESK GROUP") BE LIABLE FOR ANY LOSSES, DAMAGES OR EXPENSES
 * OF ANY KIND (INCLUDING WITHOUT LIMITATION PUNITIVE OR MULTIPLE DAMAGES OR OTHER
 * SPECIAL, DIRECT, INDIRECT, EXEMPLARY, INCIDENTAL, LOSS OF PROFITS, REVENUE
 * OR DATA, COST OF COVER OR CONSEQUENTIAL LOSSES OR DAMAGES OF ANY KIND),
 * HOWEVER CAUSED, AND REGARDLESS OF THE THEORY OF LIABILITY, WHETHER DERIVED
 * FROM CONTRACT, TORT (INCLUDING, BUT NOT LIMITED TO, NEGLIGENCE), OR OTHERWISE,
 * ARISING OUT OF OR RELATING TO THE DATA OR ITS USE OR ANY OTHER PERFORMANCE,
 * WHETHER OR NOT AUTODESK HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH LOSS
 * OR DAMAGE. 
 */

#include "sipAPIfbx.h"




PyDoc_STRVAR(doc_FbxVideo_Create, "Create(FbxManager, str) -> FbxVideo\n"
"Create(FbxObject, str) -> FbxVideo");

extern "C" {static PyObject *meth_FbxVideo_Create(PyObject *, PyObject *);}
static PyObject *meth_FbxVideo_Create(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxManager* a0;
        const char* a1;
        PyObject *a1Keep;

        if (sipParseArgs(&sipParseErr, sipArgs, "CJ8A8", &sipSelf, sipType_FbxManager, &a0, &a1Keep, &a1))
        {
             ::FbxVideo*sipRes;

            sipRes =  ::FbxVideo::Create(a0,a1);
            Py_DECREF(a1Keep);

            return sipConvertFromType(sipRes,sipType_FbxVideo,SIP_NULLPTR);
        }
    }

    {
         ::FbxObject* a0;
        const char* a1;
        PyObject *a1Keep;

        if (sipParseArgs(&sipParseErr, sipArgs, "CJ8A8", &sipSelf, sipType_FbxObject, &a0, &a1Keep, &a1))
        {
             ::FbxVideo*sipRes;

            sipRes =  ::FbxVideo::Create(a0,a1);
            Py_DECREF(a1Keep);

            return sipConvertFromType(sipRes,sipType_FbxVideo,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxVideo, sipName_Create, doc_FbxVideo_Create);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxVideo_GetClassId, "GetClassId(self) -> FbxClassId");

extern "C" {static PyObject *meth_FbxVideo_GetClassId(PyObject *, PyObject *);}
static PyObject *meth_FbxVideo_GetClassId(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_FbxVideo)) || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::FbxVideo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxVideo, &sipCpp))
        {
             ::FbxClassId*sipRes;

            sipRes = new  ::FbxClassId((sipSelfWasArg ? sipCpp-> ::FbxVideo::GetClassId() : sipCpp->GetClassId()));

            return sipConvertFromNewType(sipRes,sipType_FbxClassId,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxVideo, sipName_GetClassId, doc_FbxVideo_GetClassId);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxVideo_Reset, "Reset(self)");

extern "C" {static PyObject *meth_FbxVideo_Reset(PyObject *, PyObject *);}
static PyObject *meth_FbxVideo_Reset(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxVideo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxVideo, &sipCpp))
        {
            sipCpp->Reset();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxVideo, sipName_Reset, doc_FbxVideo_Reset);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxVideo_ImageTextureSetMipMap, "ImageTextureSetMipMap(self, bool)");

extern "C" {static PyObject *meth_FbxVideo_ImageTextureSetMipMap(PyObject *, PyObject *);}
static PyObject *meth_FbxVideo_ImageTextureSetMipMap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        bool a0;
         ::FbxVideo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_FbxVideo, &sipCpp, &a0))
        {
            sipCpp->ImageTextureSetMipMap(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxVideo, sipName_ImageTextureSetMipMap, doc_FbxVideo_ImageTextureSetMipMap);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxVideo_ImageTextureGetMipMap, "ImageTextureGetMipMap(self) -> bool");

extern "C" {static PyObject *meth_FbxVideo_ImageTextureGetMipMap(PyObject *, PyObject *);}
static PyObject *meth_FbxVideo_ImageTextureGetMipMap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxVideo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxVideo, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->ImageTextureGetMipMap();

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxVideo, sipName_ImageTextureGetMipMap, doc_FbxVideo_ImageTextureGetMipMap);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxVideo_GetFrameRate, "GetFrameRate(self) -> float");

extern "C" {static PyObject *meth_FbxVideo_GetFrameRate(PyObject *, PyObject *);}
static PyObject *meth_FbxVideo_GetFrameRate(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxVideo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxVideo, &sipCpp))
        {
            double sipRes;

            sipRes = sipCpp->GetFrameRate();

            return PyFloat_FromDouble(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxVideo, sipName_GetFrameRate, doc_FbxVideo_GetFrameRate);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxVideo_GetLastFrame, "GetLastFrame(self) -> int");

extern "C" {static PyObject *meth_FbxVideo_GetLastFrame(PyObject *, PyObject *);}
static PyObject *meth_FbxVideo_GetLastFrame(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxVideo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxVideo, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->GetLastFrame();

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxVideo, sipName_GetLastFrame, doc_FbxVideo_GetLastFrame);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxVideo_GetWidth, "GetWidth(self) -> int");

extern "C" {static PyObject *meth_FbxVideo_GetWidth(PyObject *, PyObject *);}
static PyObject *meth_FbxVideo_GetWidth(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxVideo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxVideo, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->GetWidth();

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxVideo, sipName_GetWidth, doc_FbxVideo_GetWidth);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxVideo_GetHeight, "GetHeight(self) -> int");

extern "C" {static PyObject *meth_FbxVideo_GetHeight(PyObject *, PyObject *);}
static PyObject *meth_FbxVideo_GetHeight(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxVideo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxVideo, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->GetHeight();

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxVideo, sipName_GetHeight, doc_FbxVideo_GetHeight);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxVideo_SetStartFrame, "SetStartFrame(self, int)");

extern "C" {static PyObject *meth_FbxVideo_SetStartFrame(PyObject *, PyObject *);}
static PyObject *meth_FbxVideo_SetStartFrame(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
         ::FbxVideo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_FbxVideo, &sipCpp, &a0))
        {
            sipCpp->SetStartFrame(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxVideo, sipName_SetStartFrame, doc_FbxVideo_SetStartFrame);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxVideo_GetStartFrame, "GetStartFrame(self) -> int");

extern "C" {static PyObject *meth_FbxVideo_GetStartFrame(PyObject *, PyObject *);}
static PyObject *meth_FbxVideo_GetStartFrame(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxVideo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxVideo, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->GetStartFrame();

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxVideo, sipName_GetStartFrame, doc_FbxVideo_GetStartFrame);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxVideo_SetStopFrame, "SetStopFrame(self, int)");

extern "C" {static PyObject *meth_FbxVideo_SetStopFrame(PyObject *, PyObject *);}
static PyObject *meth_FbxVideo_SetStopFrame(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
         ::FbxVideo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_FbxVideo, &sipCpp, &a0))
        {
            sipCpp->SetStopFrame(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxVideo, sipName_SetStopFrame, doc_FbxVideo_SetStopFrame);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxVideo_GetStopFrame, "GetStopFrame(self) -> int");

extern "C" {static PyObject *meth_FbxVideo_GetStopFrame(PyObject *, PyObject *);}
static PyObject *meth_FbxVideo_GetStopFrame(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxVideo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxVideo, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->GetStopFrame();

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxVideo, sipName_GetStopFrame, doc_FbxVideo_GetStopFrame);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxVideo_SetInterlaceMode, "SetInterlaceMode(self, FbxVideo.EInterlaceMode)");

extern "C" {static PyObject *meth_FbxVideo_SetInterlaceMode(PyObject *, PyObject *);}
static PyObject *meth_FbxVideo_SetInterlaceMode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxVideo::EInterlaceMode a0;
         ::FbxVideo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_FbxVideo, &sipCpp, sipType_FbxVideo_EInterlaceMode, &a0))
        {
            sipCpp->SetInterlaceMode(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxVideo, sipName_SetInterlaceMode, doc_FbxVideo_SetInterlaceMode);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxVideo_GetInterlaceMode, "GetInterlaceMode(self) -> FbxVideo.EInterlaceMode");

extern "C" {static PyObject *meth_FbxVideo_GetInterlaceMode(PyObject *, PyObject *);}
static PyObject *meth_FbxVideo_GetInterlaceMode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxVideo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxVideo, &sipCpp))
        {
             ::FbxVideo::EInterlaceMode sipRes;

            sipRes = sipCpp->GetInterlaceMode();

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_FbxVideo_EInterlaceMode);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxVideo, sipName_GetInterlaceMode, doc_FbxVideo_GetInterlaceMode);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *slot_FbxVideo___ne__(PyObject *,PyObject *);}
static PyObject *slot_FbxVideo___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxVideo *sipCpp = reinterpret_cast< ::FbxVideo *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxVideo));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxVideo* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxVideo, &a0))
        {
            bool sipRes;

            sipRes = !sipCpp-> ::FbxVideo::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_fbx, ne_slot, sipType_FbxVideo, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_FbxVideo___eq__(PyObject *,PyObject *);}
static PyObject *slot_FbxVideo___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxVideo *sipCpp = reinterpret_cast< ::FbxVideo *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxVideo));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxVideo* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxVideo, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::FbxVideo::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_fbx, eq_slot, sipType_FbxVideo, sipSelf, sipArg);
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_FbxVideo(void *, const sipTypeDef *);}
static void *cast_FbxVideo(void *sipCppV, const sipTypeDef *targetType)
{
     ::FbxVideo *sipCpp = reinterpret_cast< ::FbxVideo *>(sipCppV);

    if (targetType == sipType_FbxVideo)
        return sipCppV;

    sipCppV = ((const sipClassTypeDef *)sipType_FbxMediaClip)->ctd_cast(static_cast< ::FbxMediaClip *>(sipCpp), targetType);
    if (sipCppV)
        return sipCppV;

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_FbxVideo(void *, int);}
static void release_FbxVideo(void *, int)
{
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_FbxVideo[] = {{221, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_FbxVideo[] = {
    {(void *)slot_FbxVideo___ne__, ne_slot},
    {(void *)slot_FbxVideo___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_FbxVideo[] = {
    {sipName_Create, meth_FbxVideo_Create, METH_VARARGS, doc_FbxVideo_Create},
    {sipName_GetClassId, meth_FbxVideo_GetClassId, METH_VARARGS, doc_FbxVideo_GetClassId},
    {sipName_GetFrameRate, meth_FbxVideo_GetFrameRate, METH_VARARGS, doc_FbxVideo_GetFrameRate},
    {sipName_GetHeight, meth_FbxVideo_GetHeight, METH_VARARGS, doc_FbxVideo_GetHeight},
    {sipName_GetInterlaceMode, meth_FbxVideo_GetInterlaceMode, METH_VARARGS, doc_FbxVideo_GetInterlaceMode},
    {sipName_GetLastFrame, meth_FbxVideo_GetLastFrame, METH_VARARGS, doc_FbxVideo_GetLastFrame},
    {sipName_GetStartFrame, meth_FbxVideo_GetStartFrame, METH_VARARGS, doc_FbxVideo_GetStartFrame},
    {sipName_GetStopFrame, meth_FbxVideo_GetStopFrame, METH_VARARGS, doc_FbxVideo_GetStopFrame},
    {sipName_GetWidth, meth_FbxVideo_GetWidth, METH_VARARGS, doc_FbxVideo_GetWidth},
    {sipName_ImageTextureGetMipMap, meth_FbxVideo_ImageTextureGetMipMap, METH_VARARGS, doc_FbxVideo_ImageTextureGetMipMap},
    {sipName_ImageTextureSetMipMap, meth_FbxVideo_ImageTextureSetMipMap, METH_VARARGS, doc_FbxVideo_ImageTextureSetMipMap},
    {sipName_Reset, meth_FbxVideo_Reset, METH_VARARGS, doc_FbxVideo_Reset},
    {sipName_SetInterlaceMode, meth_FbxVideo_SetInterlaceMode, METH_VARARGS, doc_FbxVideo_SetInterlaceMode},
    {sipName_SetStartFrame, meth_FbxVideo_SetStartFrame, METH_VARARGS, doc_FbxVideo_SetStartFrame},
    {sipName_SetStopFrame, meth_FbxVideo_SetStopFrame, METH_VARARGS, doc_FbxVideo_SetStopFrame}
};


extern "C" {static PyObject *varget_FbxVideo_ClassId(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxVideo_ClassId(void *, PyObject *sipPySelf, PyObject *)
{
    static PyObject *sipPy = SIP_NULLPTR;
     ::FbxClassId*sipVal;

    if (sipPy)
    {
        Py_INCREF(sipPy);
        return sipPy;
    }

    sipVal = & ::FbxVideo::ClassId;

    sipPy = sipConvertFromType(sipVal, sipType_FbxClassId, SIP_NULLPTR);

    if (sipPy)
    {
        sipKeepReference(sipPy, -1367, sipPySelf);
        Py_INCREF(sipPy);
    }

    return sipPy;
}


extern "C" {static int varset_FbxVideo_ClassId(void *, PyObject *, PyObject *);}
static int varset_FbxVideo_ClassId(void *, PyObject *sipPy, PyObject *)
{
     ::FbxClassId*sipVal;
    int sipIsErr = 0;
    sipVal = reinterpret_cast< ::FbxClassId *>(sipForceConvertToType(sipPy, sipType_FbxClassId, SIP_NULLPTR, SIP_NOT_NONE, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

     ::FbxVideo::ClassId = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxVideo_FrameRate(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxVideo_FrameRate(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
     ::FbxPropertyDouble1*sipVal;
     ::FbxVideo *sipCpp = reinterpret_cast< ::FbxVideo *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -1369);

    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->FrameRate;

    sipPy = sipConvertFromType(sipVal, sipType_FbxPropertyDouble1, SIP_NULLPTR);

    if (sipPy)
    {
        sipKeepReference(sipPy, -1368, sipPySelf);
        sipKeepReference(sipPySelf, -1369, sipPy);
    }

    return sipPy;
}


extern "C" {static int varset_FbxVideo_FrameRate(void *, PyObject *, PyObject *);}
static int varset_FbxVideo_FrameRate(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::FbxPropertyDouble1*sipVal;
     ::FbxVideo *sipCpp = reinterpret_cast< ::FbxVideo *>(sipSelf);

    int sipIsErr = 0;
    sipVal = reinterpret_cast< ::FbxPropertyDouble1 *>(sipForceConvertToType(sipPy, sipType_FbxPropertyDouble1, SIP_NULLPTR, SIP_NOT_NONE, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->FrameRate = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxVideo_Height(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxVideo_Height(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
     ::FbxPropertyInteger1*sipVal;
     ::FbxVideo *sipCpp = reinterpret_cast< ::FbxVideo *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -1371);

    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->Height;

    sipPy = sipConvertFromType(sipVal, sipType_FbxPropertyInteger1, SIP_NULLPTR);

    if (sipPy)
    {
        sipKeepReference(sipPy, -1370, sipPySelf);
        sipKeepReference(sipPySelf, -1371, sipPy);
    }

    return sipPy;
}


extern "C" {static int varset_FbxVideo_Height(void *, PyObject *, PyObject *);}
static int varset_FbxVideo_Height(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::FbxPropertyInteger1*sipVal;
     ::FbxVideo *sipCpp = reinterpret_cast< ::FbxVideo *>(sipSelf);

    int sipIsErr = 0;
    sipVal = reinterpret_cast< ::FbxPropertyInteger1 *>(sipForceConvertToType(sipPy, sipType_FbxPropertyInteger1, SIP_NULLPTR, SIP_NOT_NONE, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->Height = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxVideo_ImageSequence(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxVideo_ImageSequence(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
     ::FbxPropertyBool1*sipVal;
     ::FbxVideo *sipCpp = reinterpret_cast< ::FbxVideo *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -1373);

    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->ImageSequence;

    sipPy = sipConvertFromType(sipVal, sipType_FbxPropertyBool1, SIP_NULLPTR);

    if (sipPy)
    {
        sipKeepReference(sipPy, -1372, sipPySelf);
        sipKeepReference(sipPySelf, -1373, sipPy);
    }

    return sipPy;
}


extern "C" {static int varset_FbxVideo_ImageSequence(void *, PyObject *, PyObject *);}
static int varset_FbxVideo_ImageSequence(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::FbxPropertyBool1*sipVal;
     ::FbxVideo *sipCpp = reinterpret_cast< ::FbxVideo *>(sipSelf);

    int sipIsErr = 0;
    sipVal = reinterpret_cast< ::FbxPropertyBool1 *>(sipForceConvertToType(sipPy, sipType_FbxPropertyBool1, SIP_NULLPTR, SIP_NOT_NONE, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->ImageSequence = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxVideo_ImageSequenceOffset(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxVideo_ImageSequenceOffset(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
     ::FbxPropertyInteger1*sipVal;
     ::FbxVideo *sipCpp = reinterpret_cast< ::FbxVideo *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -1375);

    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->ImageSequenceOffset;

    sipPy = sipConvertFromType(sipVal, sipType_FbxPropertyInteger1, SIP_NULLPTR);

    if (sipPy)
    {
        sipKeepReference(sipPy, -1374, sipPySelf);
        sipKeepReference(sipPySelf, -1375, sipPy);
    }

    return sipPy;
}


extern "C" {static int varset_FbxVideo_ImageSequenceOffset(void *, PyObject *, PyObject *);}
static int varset_FbxVideo_ImageSequenceOffset(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::FbxPropertyInteger1*sipVal;
     ::FbxVideo *sipCpp = reinterpret_cast< ::FbxVideo *>(sipSelf);

    int sipIsErr = 0;
    sipVal = reinterpret_cast< ::FbxPropertyInteger1 *>(sipForceConvertToType(sipPy, sipType_FbxPropertyInteger1, SIP_NULLPTR, SIP_NOT_NONE, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->ImageSequenceOffset = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxVideo_InterlaceMode(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxVideo_InterlaceMode(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
     ::FbxPropertyFbxVideoEInterlaceMode*sipVal;
     ::FbxVideo *sipCpp = reinterpret_cast< ::FbxVideo *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -1377);

    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->InterlaceMode;

    sipPy = sipConvertFromType(sipVal, sipType_FbxPropertyFbxVideoEInterlaceMode, SIP_NULLPTR);

    if (sipPy)
    {
        sipKeepReference(sipPy, -1376, sipPySelf);
        sipKeepReference(sipPySelf, -1377, sipPy);
    }

    return sipPy;
}


extern "C" {static int varset_FbxVideo_InterlaceMode(void *, PyObject *, PyObject *);}
static int varset_FbxVideo_InterlaceMode(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::FbxPropertyFbxVideoEInterlaceMode*sipVal;
     ::FbxVideo *sipCpp = reinterpret_cast< ::FbxVideo *>(sipSelf);

    int sipIsErr = 0;
    sipVal = reinterpret_cast< ::FbxPropertyFbxVideoEInterlaceMode *>(sipForceConvertToType(sipPy, sipType_FbxPropertyFbxVideoEInterlaceMode, SIP_NULLPTR, SIP_NOT_NONE, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->InterlaceMode = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxVideo_LastFrame(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxVideo_LastFrame(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
     ::FbxPropertyInteger1*sipVal;
     ::FbxVideo *sipCpp = reinterpret_cast< ::FbxVideo *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -1379);

    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->LastFrame;

    sipPy = sipConvertFromType(sipVal, sipType_FbxPropertyInteger1, SIP_NULLPTR);

    if (sipPy)
    {
        sipKeepReference(sipPy, -1378, sipPySelf);
        sipKeepReference(sipPySelf, -1379, sipPy);
    }

    return sipPy;
}


extern "C" {static int varset_FbxVideo_LastFrame(void *, PyObject *, PyObject *);}
static int varset_FbxVideo_LastFrame(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::FbxPropertyInteger1*sipVal;
     ::FbxVideo *sipCpp = reinterpret_cast< ::FbxVideo *>(sipSelf);

    int sipIsErr = 0;
    sipVal = reinterpret_cast< ::FbxPropertyInteger1 *>(sipForceConvertToType(sipPy, sipType_FbxPropertyInteger1, SIP_NULLPTR, SIP_NOT_NONE, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->LastFrame = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxVideo_StartFrame(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxVideo_StartFrame(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
     ::FbxPropertyInteger1*sipVal;
     ::FbxVideo *sipCpp = reinterpret_cast< ::FbxVideo *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -1381);

    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->StartFrame;

    sipPy = sipConvertFromType(sipVal, sipType_FbxPropertyInteger1, SIP_NULLPTR);

    if (sipPy)
    {
        sipKeepReference(sipPy, -1380, sipPySelf);
        sipKeepReference(sipPySelf, -1381, sipPy);
    }

    return sipPy;
}


extern "C" {static int varset_FbxVideo_StartFrame(void *, PyObject *, PyObject *);}
static int varset_FbxVideo_StartFrame(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::FbxPropertyInteger1*sipVal;
     ::FbxVideo *sipCpp = reinterpret_cast< ::FbxVideo *>(sipSelf);

    int sipIsErr = 0;
    sipVal = reinterpret_cast< ::FbxPropertyInteger1 *>(sipForceConvertToType(sipPy, sipType_FbxPropertyInteger1, SIP_NULLPTR, SIP_NOT_NONE, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->StartFrame = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxVideo_StopFrame(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxVideo_StopFrame(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
     ::FbxPropertyInteger1*sipVal;
     ::FbxVideo *sipCpp = reinterpret_cast< ::FbxVideo *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -1383);

    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->StopFrame;

    sipPy = sipConvertFromType(sipVal, sipType_FbxPropertyInteger1, SIP_NULLPTR);

    if (sipPy)
    {
        sipKeepReference(sipPy, -1382, sipPySelf);
        sipKeepReference(sipPySelf, -1383, sipPy);
    }

    return sipPy;
}


extern "C" {static int varset_FbxVideo_StopFrame(void *, PyObject *, PyObject *);}
static int varset_FbxVideo_StopFrame(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::FbxPropertyInteger1*sipVal;
     ::FbxVideo *sipCpp = reinterpret_cast< ::FbxVideo *>(sipSelf);

    int sipIsErr = 0;
    sipVal = reinterpret_cast< ::FbxPropertyInteger1 *>(sipForceConvertToType(sipPy, sipType_FbxPropertyInteger1, SIP_NULLPTR, SIP_NOT_NONE, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->StopFrame = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxVideo_Width(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxVideo_Width(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
     ::FbxPropertyInteger1*sipVal;
     ::FbxVideo *sipCpp = reinterpret_cast< ::FbxVideo *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -1385);

    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->Width;

    sipPy = sipConvertFromType(sipVal, sipType_FbxPropertyInteger1, SIP_NULLPTR);

    if (sipPy)
    {
        sipKeepReference(sipPy, -1384, sipPySelf);
        sipKeepReference(sipPySelf, -1385, sipPy);
    }

    return sipPy;
}


extern "C" {static int varset_FbxVideo_Width(void *, PyObject *, PyObject *);}
static int varset_FbxVideo_Width(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::FbxPropertyInteger1*sipVal;
     ::FbxVideo *sipCpp = reinterpret_cast< ::FbxVideo *>(sipSelf);

    int sipIsErr = 0;
    sipVal = reinterpret_cast< ::FbxPropertyInteger1 *>(sipForceConvertToType(sipPy, sipType_FbxPropertyInteger1, SIP_NULLPTR, SIP_NOT_NONE, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->Width = *sipVal;

    return 0;
}

sipVariableDef variables_FbxVideo[] = {
    {ClassVariable, sipName_ClassId, (PyMethodDef *)varget_FbxVideo_ClassId, (PyMethodDef *)varset_FbxVideo_ClassId, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_FrameRate, (PyMethodDef *)varget_FbxVideo_FrameRate, (PyMethodDef *)varset_FbxVideo_FrameRate, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_Height, (PyMethodDef *)varget_FbxVideo_Height, (PyMethodDef *)varset_FbxVideo_Height, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_ImageSequence, (PyMethodDef *)varget_FbxVideo_ImageSequence, (PyMethodDef *)varset_FbxVideo_ImageSequence, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_ImageSequenceOffset, (PyMethodDef *)varget_FbxVideo_ImageSequenceOffset, (PyMethodDef *)varset_FbxVideo_ImageSequenceOffset, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_InterlaceMode, (PyMethodDef *)varget_FbxVideo_InterlaceMode, (PyMethodDef *)varset_FbxVideo_InterlaceMode, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_LastFrame, (PyMethodDef *)varget_FbxVideo_LastFrame, (PyMethodDef *)varset_FbxVideo_LastFrame, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_StartFrame, (PyMethodDef *)varget_FbxVideo_StartFrame, (PyMethodDef *)varset_FbxVideo_StartFrame, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_StopFrame, (PyMethodDef *)varget_FbxVideo_StopFrame, (PyMethodDef *)varset_FbxVideo_StopFrame, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_Width, (PyMethodDef *)varget_FbxVideo_Width, (PyMethodDef *)varset_FbxVideo_Width, SIP_NULLPTR, SIP_NULLPTR},
};


/* Define the enum members and ints to be added to this type. */
static sipIntInstanceDef intInstances_FbxVideo[] = {
    {sipName_eNone, static_cast<int>( ::FbxVideo::eNone)},
    {sipName_eFields, static_cast<int>( ::FbxVideo::eFields)},
    {sipName_eHalfEven, static_cast<int>( ::FbxVideo::eHalfEven)},
    {sipName_eHalfOdd, static_cast<int>( ::FbxVideo::eHalfOdd)},
    {sipName_eFullEven, static_cast<int>( ::FbxVideo::eFullEven)},
    {sipName_eFullOdd, static_cast<int>( ::FbxVideo::eFullOdd)},
    {sipName_eFullEvenOdd, static_cast<int>( ::FbxVideo::eFullEvenOdd)},
    {sipName_eFullOddEven, static_cast<int>( ::FbxVideo::eFullOddEven)},
    {0, 0}
};


sipClassTypeDef sipTypeDef_fbx_FbxVideo = {
    {
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_FbxVideo,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_FbxVideo,
        {0, 0, 1},
        15, methods_FbxVideo,
        10, variables_FbxVideo,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, intInstances_FbxVideo, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    SIP_NULLPTR,
    -1,
    -1,
    supers_FbxVideo,
    slots_FbxVideo,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_FbxVideo,
    cast_FbxVideo,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};
