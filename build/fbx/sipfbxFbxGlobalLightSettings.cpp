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


#line 4 "D:\\Program Files\\Autodesk\\FBX\\FBX Python Bindings\\2020.3.4\\sip\\fbxstatus.sip"
#include <fbxsdk.h>
#line 44 "D:\\Program Files\\Autodesk\\FBX\\FBX Python Bindings\\2020.3.4\\build\\fbx/sipfbxFbxGlobalLightSettings.cpp"


PyDoc_STRVAR(doc_FbxGlobalLightSettings_SetAmbientColor, "SetAmbientColor(self, FbxColor)");

extern "C" {static PyObject *meth_FbxGlobalLightSettings_SetAmbientColor(PyObject *, PyObject *);}
static PyObject *meth_FbxGlobalLightSettings_SetAmbientColor(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxColor* a0;
         ::FbxGlobalLightSettings *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_FbxGlobalLightSettings, &sipCpp, sipType_FbxColor, &a0))
        {
            sipCpp->SetAmbientColor(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxGlobalLightSettings, sipName_SetAmbientColor, doc_FbxGlobalLightSettings_SetAmbientColor);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxGlobalLightSettings_GetAmbientColor, "GetAmbientColor(self) -> FbxColor");

extern "C" {static PyObject *meth_FbxGlobalLightSettings_GetAmbientColor(PyObject *, PyObject *);}
static PyObject *meth_FbxGlobalLightSettings_GetAmbientColor(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxGlobalLightSettings *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxGlobalLightSettings, &sipCpp))
        {
             ::FbxColor*sipRes;

            sipRes = new  ::FbxColor(sipCpp->GetAmbientColor());

            return sipConvertFromNewType(sipRes,sipType_FbxColor,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxGlobalLightSettings, sipName_GetAmbientColor, doc_FbxGlobalLightSettings_GetAmbientColor);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxGlobalLightSettings_SetFogEnable, "SetFogEnable(self, bool)");

extern "C" {static PyObject *meth_FbxGlobalLightSettings_SetFogEnable(PyObject *, PyObject *);}
static PyObject *meth_FbxGlobalLightSettings_SetFogEnable(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        bool a0;
         ::FbxGlobalLightSettings *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_FbxGlobalLightSettings, &sipCpp, &a0))
        {
            sipCpp->SetFogEnable(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxGlobalLightSettings, sipName_SetFogEnable, doc_FbxGlobalLightSettings_SetFogEnable);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxGlobalLightSettings_GetFogEnable, "GetFogEnable(self) -> bool");

extern "C" {static PyObject *meth_FbxGlobalLightSettings_GetFogEnable(PyObject *, PyObject *);}
static PyObject *meth_FbxGlobalLightSettings_GetFogEnable(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxGlobalLightSettings *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxGlobalLightSettings, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->GetFogEnable();

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxGlobalLightSettings, sipName_GetFogEnable, doc_FbxGlobalLightSettings_GetFogEnable);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxGlobalLightSettings_SetFogColor, "SetFogColor(self, FbxColor)");

extern "C" {static PyObject *meth_FbxGlobalLightSettings_SetFogColor(PyObject *, PyObject *);}
static PyObject *meth_FbxGlobalLightSettings_SetFogColor(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxColor* a0;
         ::FbxGlobalLightSettings *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_FbxGlobalLightSettings, &sipCpp, sipType_FbxColor, &a0))
        {
            sipCpp->SetFogColor(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxGlobalLightSettings, sipName_SetFogColor, doc_FbxGlobalLightSettings_SetFogColor);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxGlobalLightSettings_GetFogColor, "GetFogColor(self) -> FbxColor");

extern "C" {static PyObject *meth_FbxGlobalLightSettings_GetFogColor(PyObject *, PyObject *);}
static PyObject *meth_FbxGlobalLightSettings_GetFogColor(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxGlobalLightSettings *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxGlobalLightSettings, &sipCpp))
        {
             ::FbxColor*sipRes;

            sipRes = new  ::FbxColor(sipCpp->GetFogColor());

            return sipConvertFromNewType(sipRes,sipType_FbxColor,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxGlobalLightSettings, sipName_GetFogColor, doc_FbxGlobalLightSettings_GetFogColor);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxGlobalLightSettings_SetFogMode, "SetFogMode(self, FbxGlobalLightSettings.EFogMode)");

extern "C" {static PyObject *meth_FbxGlobalLightSettings_SetFogMode(PyObject *, PyObject *);}
static PyObject *meth_FbxGlobalLightSettings_SetFogMode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxGlobalLightSettings::EFogMode a0;
         ::FbxGlobalLightSettings *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_FbxGlobalLightSettings, &sipCpp, sipType_FbxGlobalLightSettings_EFogMode, &a0))
        {
            sipCpp->SetFogMode(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxGlobalLightSettings, sipName_SetFogMode, doc_FbxGlobalLightSettings_SetFogMode);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxGlobalLightSettings_GetFogMode, "GetFogMode(self) -> FbxGlobalLightSettings.EFogMode");

extern "C" {static PyObject *meth_FbxGlobalLightSettings_GetFogMode(PyObject *, PyObject *);}
static PyObject *meth_FbxGlobalLightSettings_GetFogMode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxGlobalLightSettings *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxGlobalLightSettings, &sipCpp))
        {
             ::FbxGlobalLightSettings::EFogMode sipRes;

            sipRes = sipCpp->GetFogMode();

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_FbxGlobalLightSettings_EFogMode);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxGlobalLightSettings, sipName_GetFogMode, doc_FbxGlobalLightSettings_GetFogMode);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxGlobalLightSettings_SetFogDensity, "SetFogDensity(self, float)");

extern "C" {static PyObject *meth_FbxGlobalLightSettings_SetFogDensity(PyObject *, PyObject *);}
static PyObject *meth_FbxGlobalLightSettings_SetFogDensity(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        double a0;
         ::FbxGlobalLightSettings *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_FbxGlobalLightSettings, &sipCpp, &a0))
        {
            sipCpp->SetFogDensity(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxGlobalLightSettings, sipName_SetFogDensity, doc_FbxGlobalLightSettings_SetFogDensity);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxGlobalLightSettings_GetFogDensity, "GetFogDensity(self) -> float");

extern "C" {static PyObject *meth_FbxGlobalLightSettings_GetFogDensity(PyObject *, PyObject *);}
static PyObject *meth_FbxGlobalLightSettings_GetFogDensity(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxGlobalLightSettings *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxGlobalLightSettings, &sipCpp))
        {
            double sipRes;

            sipRes = sipCpp->GetFogDensity();

            return PyFloat_FromDouble(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxGlobalLightSettings, sipName_GetFogDensity, doc_FbxGlobalLightSettings_GetFogDensity);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxGlobalLightSettings_SetFogStart, "SetFogStart(self, float)");

extern "C" {static PyObject *meth_FbxGlobalLightSettings_SetFogStart(PyObject *, PyObject *);}
static PyObject *meth_FbxGlobalLightSettings_SetFogStart(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        double a0;
         ::FbxGlobalLightSettings *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_FbxGlobalLightSettings, &sipCpp, &a0))
        {
            sipCpp->SetFogStart(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxGlobalLightSettings, sipName_SetFogStart, doc_FbxGlobalLightSettings_SetFogStart);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxGlobalLightSettings_GetFogStart, "GetFogStart(self) -> float");

extern "C" {static PyObject *meth_FbxGlobalLightSettings_GetFogStart(PyObject *, PyObject *);}
static PyObject *meth_FbxGlobalLightSettings_GetFogStart(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxGlobalLightSettings *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxGlobalLightSettings, &sipCpp))
        {
            double sipRes;

            sipRes = sipCpp->GetFogStart();

            return PyFloat_FromDouble(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxGlobalLightSettings, sipName_GetFogStart, doc_FbxGlobalLightSettings_GetFogStart);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxGlobalLightSettings_SetFogEnd, "SetFogEnd(self, float)");

extern "C" {static PyObject *meth_FbxGlobalLightSettings_SetFogEnd(PyObject *, PyObject *);}
static PyObject *meth_FbxGlobalLightSettings_SetFogEnd(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        double a0;
         ::FbxGlobalLightSettings *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_FbxGlobalLightSettings, &sipCpp, &a0))
        {
            sipCpp->SetFogEnd(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxGlobalLightSettings, sipName_SetFogEnd, doc_FbxGlobalLightSettings_SetFogEnd);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxGlobalLightSettings_GetFogEnd, "GetFogEnd(self) -> float");

extern "C" {static PyObject *meth_FbxGlobalLightSettings_GetFogEnd(PyObject *, PyObject *);}
static PyObject *meth_FbxGlobalLightSettings_GetFogEnd(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxGlobalLightSettings *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxGlobalLightSettings, &sipCpp))
        {
            double sipRes;

            sipRes = sipCpp->GetFogEnd();

            return PyFloat_FromDouble(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxGlobalLightSettings, sipName_GetFogEnd, doc_FbxGlobalLightSettings_GetFogEnd);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxGlobalLightSettings_SetShadowEnable, "SetShadowEnable(self, bool)");

extern "C" {static PyObject *meth_FbxGlobalLightSettings_SetShadowEnable(PyObject *, PyObject *);}
static PyObject *meth_FbxGlobalLightSettings_SetShadowEnable(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        bool a0;
         ::FbxGlobalLightSettings *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_FbxGlobalLightSettings, &sipCpp, &a0))
        {
            sipCpp->SetShadowEnable(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxGlobalLightSettings, sipName_SetShadowEnable, doc_FbxGlobalLightSettings_SetShadowEnable);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxGlobalLightSettings_GetShadowEnable, "GetShadowEnable(self) -> bool");

extern "C" {static PyObject *meth_FbxGlobalLightSettings_GetShadowEnable(PyObject *, PyObject *);}
static PyObject *meth_FbxGlobalLightSettings_GetShadowEnable(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxGlobalLightSettings *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxGlobalLightSettings, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->GetShadowEnable();

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxGlobalLightSettings, sipName_GetShadowEnable, doc_FbxGlobalLightSettings_GetShadowEnable);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxGlobalLightSettings_SetShadowIntensity, "SetShadowIntensity(self, float)");

extern "C" {static PyObject *meth_FbxGlobalLightSettings_SetShadowIntensity(PyObject *, PyObject *);}
static PyObject *meth_FbxGlobalLightSettings_SetShadowIntensity(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        double a0;
         ::FbxGlobalLightSettings *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_FbxGlobalLightSettings, &sipCpp, &a0))
        {
            sipCpp->SetShadowIntensity(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxGlobalLightSettings, sipName_SetShadowIntensity, doc_FbxGlobalLightSettings_SetShadowIntensity);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxGlobalLightSettings_GetShadowIntensity, "GetShadowIntensity(self) -> float");

extern "C" {static PyObject *meth_FbxGlobalLightSettings_GetShadowIntensity(PyObject *, PyObject *);}
static PyObject *meth_FbxGlobalLightSettings_GetShadowIntensity(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxGlobalLightSettings *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxGlobalLightSettings, &sipCpp))
        {
            double sipRes;

            sipRes = sipCpp->GetShadowIntensity();

            return PyFloat_FromDouble(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxGlobalLightSettings, sipName_GetShadowIntensity, doc_FbxGlobalLightSettings_GetShadowIntensity);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxGlobalLightSettings_GetShadowPlaneCount, "GetShadowPlaneCount(self) -> int");

extern "C" {static PyObject *meth_FbxGlobalLightSettings_GetShadowPlaneCount(PyObject *, PyObject *);}
static PyObject *meth_FbxGlobalLightSettings_GetShadowPlaneCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxGlobalLightSettings *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxGlobalLightSettings, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->GetShadowPlaneCount();

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxGlobalLightSettings, sipName_GetShadowPlaneCount, doc_FbxGlobalLightSettings_GetShadowPlaneCount);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxGlobalLightSettings_GetShadowPlane, "GetShadowPlane(self, int, FbxStatus = None) -> FbxGlobalLightSettings.ShadowPlane");

extern "C" {static PyObject *meth_FbxGlobalLightSettings_GetShadowPlane(PyObject *, PyObject *);}
static PyObject *meth_FbxGlobalLightSettings_GetShadowPlane(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
         ::FbxStatus* a1 = 0;
         ::FbxGlobalLightSettings *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi|J8", &sipSelf, sipType_FbxGlobalLightSettings, &sipCpp, &a0, sipType_FbxStatus, &a1))
        {
             ::FbxGlobalLightSettings::ShadowPlane*sipRes;

            sipRes = sipCpp->GetShadowPlane(a0,a1);

            return sipConvertFromType(sipRes,sipType_FbxGlobalLightSettings_ShadowPlane,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxGlobalLightSettings, sipName_GetShadowPlane, doc_FbxGlobalLightSettings_GetShadowPlane);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxGlobalLightSettings_AddShadowPlane, "AddShadowPlane(self, FbxGlobalLightSettings.ShadowPlane)");

extern "C" {static PyObject *meth_FbxGlobalLightSettings_AddShadowPlane(PyObject *, PyObject *);}
static PyObject *meth_FbxGlobalLightSettings_AddShadowPlane(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxGlobalLightSettings::ShadowPlane* a0;
         ::FbxGlobalLightSettings *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_FbxGlobalLightSettings, &sipCpp, sipType_FbxGlobalLightSettings_ShadowPlane, &a0))
        {
            sipCpp->AddShadowPlane(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxGlobalLightSettings, sipName_AddShadowPlane, doc_FbxGlobalLightSettings_AddShadowPlane);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxGlobalLightSettings_RemoveAllShadowPlanes, "RemoveAllShadowPlanes(self)");

extern "C" {static PyObject *meth_FbxGlobalLightSettings_RemoveAllShadowPlanes(PyObject *, PyObject *);}
static PyObject *meth_FbxGlobalLightSettings_RemoveAllShadowPlanes(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxGlobalLightSettings *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxGlobalLightSettings, &sipCpp))
        {
            sipCpp->RemoveAllShadowPlanes();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxGlobalLightSettings, sipName_RemoveAllShadowPlanes, doc_FbxGlobalLightSettings_RemoveAllShadowPlanes);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_FbxGlobalLightSettings(void *, int);}
static void release_FbxGlobalLightSettings(void *, int)
{
}


extern "C" {static void *init_type_FbxGlobalLightSettings(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_FbxGlobalLightSettings(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::FbxGlobalLightSettings *sipCpp = SIP_NULLPTR;

    {
        const  ::FbxGlobalLightSettings* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_FbxGlobalLightSettings, &a0))
        {
            sipCpp = new  ::FbxGlobalLightSettings(*a0);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


static PyMethodDef methods_FbxGlobalLightSettings[] = {
    {sipName_AddShadowPlane, meth_FbxGlobalLightSettings_AddShadowPlane, METH_VARARGS, doc_FbxGlobalLightSettings_AddShadowPlane},
    {sipName_GetAmbientColor, meth_FbxGlobalLightSettings_GetAmbientColor, METH_VARARGS, doc_FbxGlobalLightSettings_GetAmbientColor},
    {sipName_GetFogColor, meth_FbxGlobalLightSettings_GetFogColor, METH_VARARGS, doc_FbxGlobalLightSettings_GetFogColor},
    {sipName_GetFogDensity, meth_FbxGlobalLightSettings_GetFogDensity, METH_VARARGS, doc_FbxGlobalLightSettings_GetFogDensity},
    {sipName_GetFogEnable, meth_FbxGlobalLightSettings_GetFogEnable, METH_VARARGS, doc_FbxGlobalLightSettings_GetFogEnable},
    {sipName_GetFogEnd, meth_FbxGlobalLightSettings_GetFogEnd, METH_VARARGS, doc_FbxGlobalLightSettings_GetFogEnd},
    {sipName_GetFogMode, meth_FbxGlobalLightSettings_GetFogMode, METH_VARARGS, doc_FbxGlobalLightSettings_GetFogMode},
    {sipName_GetFogStart, meth_FbxGlobalLightSettings_GetFogStart, METH_VARARGS, doc_FbxGlobalLightSettings_GetFogStart},
    {sipName_GetShadowEnable, meth_FbxGlobalLightSettings_GetShadowEnable, METH_VARARGS, doc_FbxGlobalLightSettings_GetShadowEnable},
    {sipName_GetShadowIntensity, meth_FbxGlobalLightSettings_GetShadowIntensity, METH_VARARGS, doc_FbxGlobalLightSettings_GetShadowIntensity},
    {sipName_GetShadowPlane, meth_FbxGlobalLightSettings_GetShadowPlane, METH_VARARGS, doc_FbxGlobalLightSettings_GetShadowPlane},
    {sipName_GetShadowPlaneCount, meth_FbxGlobalLightSettings_GetShadowPlaneCount, METH_VARARGS, doc_FbxGlobalLightSettings_GetShadowPlaneCount},
    {sipName_RemoveAllShadowPlanes, meth_FbxGlobalLightSettings_RemoveAllShadowPlanes, METH_VARARGS, doc_FbxGlobalLightSettings_RemoveAllShadowPlanes},
    {sipName_SetAmbientColor, meth_FbxGlobalLightSettings_SetAmbientColor, METH_VARARGS, doc_FbxGlobalLightSettings_SetAmbientColor},
    {sipName_SetFogColor, meth_FbxGlobalLightSettings_SetFogColor, METH_VARARGS, doc_FbxGlobalLightSettings_SetFogColor},
    {sipName_SetFogDensity, meth_FbxGlobalLightSettings_SetFogDensity, METH_VARARGS, doc_FbxGlobalLightSettings_SetFogDensity},
    {sipName_SetFogEnable, meth_FbxGlobalLightSettings_SetFogEnable, METH_VARARGS, doc_FbxGlobalLightSettings_SetFogEnable},
    {sipName_SetFogEnd, meth_FbxGlobalLightSettings_SetFogEnd, METH_VARARGS, doc_FbxGlobalLightSettings_SetFogEnd},
    {sipName_SetFogMode, meth_FbxGlobalLightSettings_SetFogMode, METH_VARARGS, doc_FbxGlobalLightSettings_SetFogMode},
    {sipName_SetFogStart, meth_FbxGlobalLightSettings_SetFogStart, METH_VARARGS, doc_FbxGlobalLightSettings_SetFogStart},
    {sipName_SetShadowEnable, meth_FbxGlobalLightSettings_SetShadowEnable, METH_VARARGS, doc_FbxGlobalLightSettings_SetShadowEnable},
    {sipName_SetShadowIntensity, meth_FbxGlobalLightSettings_SetShadowIntensity, METH_VARARGS, doc_FbxGlobalLightSettings_SetShadowIntensity}
};


/* Define the enum members and ints to be added to this type. */
static sipIntInstanceDef intInstances_FbxGlobalLightSettings[] = {
    {sipName_eLinear, static_cast<int>( ::FbxGlobalLightSettings::eLinear)},
    {sipName_eExponential, static_cast<int>( ::FbxGlobalLightSettings::eExponential)},
    {sipName_eExponentialSquareRoot, static_cast<int>( ::FbxGlobalLightSettings::eExponentialSquareRoot)},
    {0, 0}
};

PyDoc_STRVAR(doc_FbxGlobalLightSettings, "\1FbxGlobalLightSettings(FbxGlobalLightSettings)");


sipClassTypeDef sipTypeDef_fbx_FbxGlobalLightSettings = {
    {
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_FbxGlobalLightSettings,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_FbxGlobalLightSettings,
        {0, 0, 1},
        22, methods_FbxGlobalLightSettings,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, intInstances_FbxGlobalLightSettings, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_FbxGlobalLightSettings,
    -1,
    -1,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_FbxGlobalLightSettings,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_FbxGlobalLightSettings,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};
