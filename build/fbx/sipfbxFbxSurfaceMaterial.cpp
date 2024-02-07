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




PyDoc_STRVAR(doc_FbxSurfaceMaterial_Create, "Create(FbxManager, str) -> FbxSurfaceMaterial\n"
"Create(FbxObject, str) -> FbxSurfaceMaterial");

extern "C" {static PyObject *meth_FbxSurfaceMaterial_Create(PyObject *, PyObject *);}
static PyObject *meth_FbxSurfaceMaterial_Create(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxManager* a0;
        const char* a1;
        PyObject *a1Keep;

        if (sipParseArgs(&sipParseErr, sipArgs, "CJ8A8", &sipSelf, sipType_FbxManager, &a0, &a1Keep, &a1))
        {
             ::FbxSurfaceMaterial*sipRes;

            sipRes =  ::FbxSurfaceMaterial::Create(a0,a1);
            Py_DECREF(a1Keep);

            return sipConvertFromType(sipRes,sipType_FbxSurfaceMaterial,SIP_NULLPTR);
        }
    }

    {
         ::FbxObject* a0;
        const char* a1;
        PyObject *a1Keep;

        if (sipParseArgs(&sipParseErr, sipArgs, "CJ8A8", &sipSelf, sipType_FbxObject, &a0, &a1Keep, &a1))
        {
             ::FbxSurfaceMaterial*sipRes;

            sipRes =  ::FbxSurfaceMaterial::Create(a0,a1);
            Py_DECREF(a1Keep);

            return sipConvertFromType(sipRes,sipType_FbxSurfaceMaterial,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxSurfaceMaterial, sipName_Create, doc_FbxSurfaceMaterial_Create);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxSurfaceMaterial_GetClassId, "GetClassId(self) -> FbxClassId");

extern "C" {static PyObject *meth_FbxSurfaceMaterial_GetClassId(PyObject *, PyObject *);}
static PyObject *meth_FbxSurfaceMaterial_GetClassId(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_FbxSurfaceMaterial)) || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::FbxSurfaceMaterial *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxSurfaceMaterial, &sipCpp))
        {
             ::FbxClassId*sipRes;

            sipRes = new  ::FbxClassId((sipSelfWasArg ? sipCpp-> ::FbxSurfaceMaterial::GetClassId() : sipCpp->GetClassId()));

            return sipConvertFromNewType(sipRes,sipType_FbxClassId,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxSurfaceMaterial, sipName_GetClassId, doc_FbxSurfaceMaterial_GetClassId);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *slot_FbxSurfaceMaterial___ne__(PyObject *,PyObject *);}
static PyObject *slot_FbxSurfaceMaterial___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxSurfaceMaterial *sipCpp = reinterpret_cast< ::FbxSurfaceMaterial *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxSurfaceMaterial));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxSurfaceMaterial* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxSurfaceMaterial, &a0))
        {
            bool sipRes;

            sipRes = !sipCpp-> ::FbxSurfaceMaterial::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_fbx, ne_slot, sipType_FbxSurfaceMaterial, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_FbxSurfaceMaterial___eq__(PyObject *,PyObject *);}
static PyObject *slot_FbxSurfaceMaterial___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxSurfaceMaterial *sipCpp = reinterpret_cast< ::FbxSurfaceMaterial *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxSurfaceMaterial));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxSurfaceMaterial* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxSurfaceMaterial, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::FbxSurfaceMaterial::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_fbx, eq_slot, sipType_FbxSurfaceMaterial, sipSelf, sipArg);
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_FbxSurfaceMaterial(void *, const sipTypeDef *);}
static void *cast_FbxSurfaceMaterial(void *sipCppV, const sipTypeDef *targetType)
{
     ::FbxSurfaceMaterial *sipCpp = reinterpret_cast< ::FbxSurfaceMaterial *>(sipCppV);

    if (targetType == sipType_FbxSurfaceMaterial)
        return sipCppV;

    if (targetType == sipType_FbxObject)
        return static_cast< ::FbxObject *>(sipCpp);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_FbxSurfaceMaterial(void *, int);}
static void release_FbxSurfaceMaterial(void *, int)
{
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_FbxSurfaceMaterial[] = {{244, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_FbxSurfaceMaterial[] = {
    {(void *)slot_FbxSurfaceMaterial___ne__, ne_slot},
    {(void *)slot_FbxSurfaceMaterial___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_FbxSurfaceMaterial[] = {
    {sipName_Create, meth_FbxSurfaceMaterial_Create, METH_VARARGS, doc_FbxSurfaceMaterial_Create},
    {sipName_GetClassId, meth_FbxSurfaceMaterial_GetClassId, METH_VARARGS, doc_FbxSurfaceMaterial_GetClassId}
};


extern "C" {static PyObject *varget_FbxSurfaceMaterial_ClassId(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxSurfaceMaterial_ClassId(void *, PyObject *sipPySelf, PyObject *)
{
    static PyObject *sipPy = SIP_NULLPTR;
     ::FbxClassId*sipVal;

    if (sipPy)
    {
        Py_INCREF(sipPy);
        return sipPy;
    }

    sipVal = & ::FbxSurfaceMaterial::ClassId;

    sipPy = sipConvertFromType(sipVal, sipType_FbxClassId, SIP_NULLPTR);

    if (sipPy)
    {
        sipKeepReference(sipPy, -421, sipPySelf);
        Py_INCREF(sipPy);
    }

    return sipPy;
}


extern "C" {static int varset_FbxSurfaceMaterial_ClassId(void *, PyObject *, PyObject *);}
static int varset_FbxSurfaceMaterial_ClassId(void *, PyObject *sipPy, PyObject *)
{
     ::FbxClassId*sipVal;
    int sipIsErr = 0;
    sipVal = reinterpret_cast< ::FbxClassId *>(sipForceConvertToType(sipPy, sipType_FbxClassId, SIP_NULLPTR, SIP_NOT_NONE, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

     ::FbxSurfaceMaterial::ClassId = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxSurfaceMaterial_MultiLayer(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxSurfaceMaterial_MultiLayer(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
     ::FbxPropertyBool1*sipVal;
     ::FbxSurfaceMaterial *sipCpp = reinterpret_cast< ::FbxSurfaceMaterial *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -423);

    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->MultiLayer;

    sipPy = sipConvertFromType(sipVal, sipType_FbxPropertyBool1, SIP_NULLPTR);

    if (sipPy)
    {
        sipKeepReference(sipPy, -422, sipPySelf);
        sipKeepReference(sipPySelf, -423, sipPy);
    }

    return sipPy;
}


extern "C" {static int varset_FbxSurfaceMaterial_MultiLayer(void *, PyObject *, PyObject *);}
static int varset_FbxSurfaceMaterial_MultiLayer(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::FbxPropertyBool1*sipVal;
     ::FbxSurfaceMaterial *sipCpp = reinterpret_cast< ::FbxSurfaceMaterial *>(sipSelf);

    int sipIsErr = 0;
    sipVal = reinterpret_cast< ::FbxPropertyBool1 *>(sipForceConvertToType(sipPy, sipType_FbxPropertyBool1, SIP_NULLPTR, SIP_NOT_NONE, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->MultiLayer = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxSurfaceMaterial_ShadingModel(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxSurfaceMaterial_ShadingModel(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
     ::FbxPropertyString*sipVal;
     ::FbxSurfaceMaterial *sipCpp = reinterpret_cast< ::FbxSurfaceMaterial *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -425);

    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->ShadingModel;

    sipPy = sipConvertFromType(sipVal, sipType_FbxPropertyString, SIP_NULLPTR);

    if (sipPy)
    {
        sipKeepReference(sipPy, -424, sipPySelf);
        sipKeepReference(sipPySelf, -425, sipPy);
    }

    return sipPy;
}


extern "C" {static int varset_FbxSurfaceMaterial_ShadingModel(void *, PyObject *, PyObject *);}
static int varset_FbxSurfaceMaterial_ShadingModel(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::FbxPropertyString*sipVal;
     ::FbxSurfaceMaterial *sipCpp = reinterpret_cast< ::FbxSurfaceMaterial *>(sipSelf);

    int sipIsErr = 0;
    sipVal = reinterpret_cast< ::FbxPropertyString *>(sipForceConvertToType(sipPy, sipType_FbxPropertyString, SIP_NULLPTR, SIP_NOT_NONE, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->ShadingModel = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxSurfaceMaterial_sAmbient(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxSurfaceMaterial_sAmbient(void *, PyObject *, PyObject *)
{
    const char*sipVal;

    sipVal =  ::FbxSurfaceMaterial::sAmbient;

    if (sipVal == SIP_NULLPTR)
    {
        Py_INCREF(Py_None);
        return Py_None;
    }

    return PyUnicode_FromString(sipVal);
}


extern "C" {static int varset_FbxSurfaceMaterial_sAmbient(void *, PyObject *, PyObject *);}
static int varset_FbxSurfaceMaterial_sAmbient(void *, PyObject *sipPy, PyObject *)
{
    const char*sipVal;
    sipVal = sipString_AsUTF8String(&sipPy);

    if (PyErr_Occurred() != SIP_NULLPTR)
        return -1;

     ::FbxSurfaceMaterial::sAmbient = sipVal;

    static PyObject *sipKeep = SIP_NULLPTR;

    Py_XDECREF(sipKeep);
    sipKeep = sipPy;
    Py_INCREF(sipKeep);

    return 0;
}


extern "C" {static PyObject *varget_FbxSurfaceMaterial_sAmbientFactor(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxSurfaceMaterial_sAmbientFactor(void *, PyObject *, PyObject *)
{
    const char*sipVal;

    sipVal =  ::FbxSurfaceMaterial::sAmbientFactor;

    if (sipVal == SIP_NULLPTR)
    {
        Py_INCREF(Py_None);
        return Py_None;
    }

    return PyUnicode_FromString(sipVal);
}


extern "C" {static int varset_FbxSurfaceMaterial_sAmbientFactor(void *, PyObject *, PyObject *);}
static int varset_FbxSurfaceMaterial_sAmbientFactor(void *, PyObject *sipPy, PyObject *)
{
    const char*sipVal;
    sipVal = sipString_AsUTF8String(&sipPy);

    if (PyErr_Occurred() != SIP_NULLPTR)
        return -1;

     ::FbxSurfaceMaterial::sAmbientFactor = sipVal;

    static PyObject *sipKeep = SIP_NULLPTR;

    Py_XDECREF(sipKeep);
    sipKeep = sipPy;
    Py_INCREF(sipKeep);

    return 0;
}


extern "C" {static PyObject *varget_FbxSurfaceMaterial_sBump(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxSurfaceMaterial_sBump(void *, PyObject *, PyObject *)
{
    const char*sipVal;

    sipVal =  ::FbxSurfaceMaterial::sBump;

    if (sipVal == SIP_NULLPTR)
    {
        Py_INCREF(Py_None);
        return Py_None;
    }

    return PyUnicode_FromString(sipVal);
}


extern "C" {static int varset_FbxSurfaceMaterial_sBump(void *, PyObject *, PyObject *);}
static int varset_FbxSurfaceMaterial_sBump(void *, PyObject *sipPy, PyObject *)
{
    const char*sipVal;
    sipVal = sipString_AsUTF8String(&sipPy);

    if (PyErr_Occurred() != SIP_NULLPTR)
        return -1;

     ::FbxSurfaceMaterial::sBump = sipVal;

    static PyObject *sipKeep = SIP_NULLPTR;

    Py_XDECREF(sipKeep);
    sipKeep = sipPy;
    Py_INCREF(sipKeep);

    return 0;
}


extern "C" {static PyObject *varget_FbxSurfaceMaterial_sBumpFactor(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxSurfaceMaterial_sBumpFactor(void *, PyObject *, PyObject *)
{
    const char*sipVal;

    sipVal =  ::FbxSurfaceMaterial::sBumpFactor;

    if (sipVal == SIP_NULLPTR)
    {
        Py_INCREF(Py_None);
        return Py_None;
    }

    return PyUnicode_FromString(sipVal);
}


extern "C" {static int varset_FbxSurfaceMaterial_sBumpFactor(void *, PyObject *, PyObject *);}
static int varset_FbxSurfaceMaterial_sBumpFactor(void *, PyObject *sipPy, PyObject *)
{
    const char*sipVal;
    sipVal = sipString_AsUTF8String(&sipPy);

    if (PyErr_Occurred() != SIP_NULLPTR)
        return -1;

     ::FbxSurfaceMaterial::sBumpFactor = sipVal;

    static PyObject *sipKeep = SIP_NULLPTR;

    Py_XDECREF(sipKeep);
    sipKeep = sipPy;
    Py_INCREF(sipKeep);

    return 0;
}


extern "C" {static PyObject *varget_FbxSurfaceMaterial_sDiffuse(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxSurfaceMaterial_sDiffuse(void *, PyObject *, PyObject *)
{
    const char*sipVal;

    sipVal =  ::FbxSurfaceMaterial::sDiffuse;

    if (sipVal == SIP_NULLPTR)
    {
        Py_INCREF(Py_None);
        return Py_None;
    }

    return PyUnicode_FromString(sipVal);
}


extern "C" {static int varset_FbxSurfaceMaterial_sDiffuse(void *, PyObject *, PyObject *);}
static int varset_FbxSurfaceMaterial_sDiffuse(void *, PyObject *sipPy, PyObject *)
{
    const char*sipVal;
    sipVal = sipString_AsUTF8String(&sipPy);

    if (PyErr_Occurred() != SIP_NULLPTR)
        return -1;

     ::FbxSurfaceMaterial::sDiffuse = sipVal;

    static PyObject *sipKeep = SIP_NULLPTR;

    Py_XDECREF(sipKeep);
    sipKeep = sipPy;
    Py_INCREF(sipKeep);

    return 0;
}


extern "C" {static PyObject *varget_FbxSurfaceMaterial_sDiffuseFactor(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxSurfaceMaterial_sDiffuseFactor(void *, PyObject *, PyObject *)
{
    const char*sipVal;

    sipVal =  ::FbxSurfaceMaterial::sDiffuseFactor;

    if (sipVal == SIP_NULLPTR)
    {
        Py_INCREF(Py_None);
        return Py_None;
    }

    return PyUnicode_FromString(sipVal);
}


extern "C" {static int varset_FbxSurfaceMaterial_sDiffuseFactor(void *, PyObject *, PyObject *);}
static int varset_FbxSurfaceMaterial_sDiffuseFactor(void *, PyObject *sipPy, PyObject *)
{
    const char*sipVal;
    sipVal = sipString_AsUTF8String(&sipPy);

    if (PyErr_Occurred() != SIP_NULLPTR)
        return -1;

     ::FbxSurfaceMaterial::sDiffuseFactor = sipVal;

    static PyObject *sipKeep = SIP_NULLPTR;

    Py_XDECREF(sipKeep);
    sipKeep = sipPy;
    Py_INCREF(sipKeep);

    return 0;
}


extern "C" {static PyObject *varget_FbxSurfaceMaterial_sDisplacementColor(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxSurfaceMaterial_sDisplacementColor(void *, PyObject *, PyObject *)
{
    const char*sipVal;

    sipVal =  ::FbxSurfaceMaterial::sDisplacementColor;

    if (sipVal == SIP_NULLPTR)
    {
        Py_INCREF(Py_None);
        return Py_None;
    }

    return PyUnicode_FromString(sipVal);
}


extern "C" {static int varset_FbxSurfaceMaterial_sDisplacementColor(void *, PyObject *, PyObject *);}
static int varset_FbxSurfaceMaterial_sDisplacementColor(void *, PyObject *sipPy, PyObject *)
{
    const char*sipVal;
    sipVal = sipString_AsUTF8String(&sipPy);

    if (PyErr_Occurred() != SIP_NULLPTR)
        return -1;

     ::FbxSurfaceMaterial::sDisplacementColor = sipVal;

    static PyObject *sipKeep = SIP_NULLPTR;

    Py_XDECREF(sipKeep);
    sipKeep = sipPy;
    Py_INCREF(sipKeep);

    return 0;
}


extern "C" {static PyObject *varget_FbxSurfaceMaterial_sDisplacementFactor(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxSurfaceMaterial_sDisplacementFactor(void *, PyObject *, PyObject *)
{
    const char*sipVal;

    sipVal =  ::FbxSurfaceMaterial::sDisplacementFactor;

    if (sipVal == SIP_NULLPTR)
    {
        Py_INCREF(Py_None);
        return Py_None;
    }

    return PyUnicode_FromString(sipVal);
}


extern "C" {static int varset_FbxSurfaceMaterial_sDisplacementFactor(void *, PyObject *, PyObject *);}
static int varset_FbxSurfaceMaterial_sDisplacementFactor(void *, PyObject *sipPy, PyObject *)
{
    const char*sipVal;
    sipVal = sipString_AsUTF8String(&sipPy);

    if (PyErr_Occurred() != SIP_NULLPTR)
        return -1;

     ::FbxSurfaceMaterial::sDisplacementFactor = sipVal;

    static PyObject *sipKeep = SIP_NULLPTR;

    Py_XDECREF(sipKeep);
    sipKeep = sipPy;
    Py_INCREF(sipKeep);

    return 0;
}


extern "C" {static PyObject *varget_FbxSurfaceMaterial_sEmissive(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxSurfaceMaterial_sEmissive(void *, PyObject *, PyObject *)
{
    const char*sipVal;

    sipVal =  ::FbxSurfaceMaterial::sEmissive;

    if (sipVal == SIP_NULLPTR)
    {
        Py_INCREF(Py_None);
        return Py_None;
    }

    return PyUnicode_FromString(sipVal);
}


extern "C" {static int varset_FbxSurfaceMaterial_sEmissive(void *, PyObject *, PyObject *);}
static int varset_FbxSurfaceMaterial_sEmissive(void *, PyObject *sipPy, PyObject *)
{
    const char*sipVal;
    sipVal = sipString_AsUTF8String(&sipPy);

    if (PyErr_Occurred() != SIP_NULLPTR)
        return -1;

     ::FbxSurfaceMaterial::sEmissive = sipVal;

    static PyObject *sipKeep = SIP_NULLPTR;

    Py_XDECREF(sipKeep);
    sipKeep = sipPy;
    Py_INCREF(sipKeep);

    return 0;
}


extern "C" {static PyObject *varget_FbxSurfaceMaterial_sEmissiveFactor(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxSurfaceMaterial_sEmissiveFactor(void *, PyObject *, PyObject *)
{
    const char*sipVal;

    sipVal =  ::FbxSurfaceMaterial::sEmissiveFactor;

    if (sipVal == SIP_NULLPTR)
    {
        Py_INCREF(Py_None);
        return Py_None;
    }

    return PyUnicode_FromString(sipVal);
}


extern "C" {static int varset_FbxSurfaceMaterial_sEmissiveFactor(void *, PyObject *, PyObject *);}
static int varset_FbxSurfaceMaterial_sEmissiveFactor(void *, PyObject *sipPy, PyObject *)
{
    const char*sipVal;
    sipVal = sipString_AsUTF8String(&sipPy);

    if (PyErr_Occurred() != SIP_NULLPTR)
        return -1;

     ::FbxSurfaceMaterial::sEmissiveFactor = sipVal;

    static PyObject *sipKeep = SIP_NULLPTR;

    Py_XDECREF(sipKeep);
    sipKeep = sipPy;
    Py_INCREF(sipKeep);

    return 0;
}


extern "C" {static PyObject *varget_FbxSurfaceMaterial_sMultiLayer(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxSurfaceMaterial_sMultiLayer(void *, PyObject *, PyObject *)
{
    const char*sipVal;

    sipVal =  ::FbxSurfaceMaterial::sMultiLayer;

    if (sipVal == SIP_NULLPTR)
    {
        Py_INCREF(Py_None);
        return Py_None;
    }

    return PyUnicode_FromString(sipVal);
}


extern "C" {static int varset_FbxSurfaceMaterial_sMultiLayer(void *, PyObject *, PyObject *);}
static int varset_FbxSurfaceMaterial_sMultiLayer(void *, PyObject *sipPy, PyObject *)
{
    const char*sipVal;
    sipVal = sipString_AsUTF8String(&sipPy);

    if (PyErr_Occurred() != SIP_NULLPTR)
        return -1;

     ::FbxSurfaceMaterial::sMultiLayer = sipVal;

    static PyObject *sipKeep = SIP_NULLPTR;

    Py_XDECREF(sipKeep);
    sipKeep = sipPy;
    Py_INCREF(sipKeep);

    return 0;
}


extern "C" {static PyObject *varget_FbxSurfaceMaterial_sMultiLayerDefault(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxSurfaceMaterial_sMultiLayerDefault(void *, PyObject *, PyObject *)
{
     ::FbxBool sipVal;

    sipVal =  ::FbxSurfaceMaterial::sMultiLayerDefault;

    return PyBool_FromLong(sipVal);
}


extern "C" {static PyObject *varget_FbxSurfaceMaterial_sNormalMap(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxSurfaceMaterial_sNormalMap(void *, PyObject *, PyObject *)
{
    const char*sipVal;

    sipVal =  ::FbxSurfaceMaterial::sNormalMap;

    if (sipVal == SIP_NULLPTR)
    {
        Py_INCREF(Py_None);
        return Py_None;
    }

    return PyUnicode_FromString(sipVal);
}


extern "C" {static int varset_FbxSurfaceMaterial_sNormalMap(void *, PyObject *, PyObject *);}
static int varset_FbxSurfaceMaterial_sNormalMap(void *, PyObject *sipPy, PyObject *)
{
    const char*sipVal;
    sipVal = sipString_AsUTF8String(&sipPy);

    if (PyErr_Occurred() != SIP_NULLPTR)
        return -1;

     ::FbxSurfaceMaterial::sNormalMap = sipVal;

    static PyObject *sipKeep = SIP_NULLPTR;

    Py_XDECREF(sipKeep);
    sipKeep = sipPy;
    Py_INCREF(sipKeep);

    return 0;
}


extern "C" {static PyObject *varget_FbxSurfaceMaterial_sReflection(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxSurfaceMaterial_sReflection(void *, PyObject *, PyObject *)
{
    const char*sipVal;

    sipVal =  ::FbxSurfaceMaterial::sReflection;

    if (sipVal == SIP_NULLPTR)
    {
        Py_INCREF(Py_None);
        return Py_None;
    }

    return PyUnicode_FromString(sipVal);
}


extern "C" {static int varset_FbxSurfaceMaterial_sReflection(void *, PyObject *, PyObject *);}
static int varset_FbxSurfaceMaterial_sReflection(void *, PyObject *sipPy, PyObject *)
{
    const char*sipVal;
    sipVal = sipString_AsUTF8String(&sipPy);

    if (PyErr_Occurred() != SIP_NULLPTR)
        return -1;

     ::FbxSurfaceMaterial::sReflection = sipVal;

    static PyObject *sipKeep = SIP_NULLPTR;

    Py_XDECREF(sipKeep);
    sipKeep = sipPy;
    Py_INCREF(sipKeep);

    return 0;
}


extern "C" {static PyObject *varget_FbxSurfaceMaterial_sReflectionFactor(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxSurfaceMaterial_sReflectionFactor(void *, PyObject *, PyObject *)
{
    const char*sipVal;

    sipVal =  ::FbxSurfaceMaterial::sReflectionFactor;

    if (sipVal == SIP_NULLPTR)
    {
        Py_INCREF(Py_None);
        return Py_None;
    }

    return PyUnicode_FromString(sipVal);
}


extern "C" {static int varset_FbxSurfaceMaterial_sReflectionFactor(void *, PyObject *, PyObject *);}
static int varset_FbxSurfaceMaterial_sReflectionFactor(void *, PyObject *sipPy, PyObject *)
{
    const char*sipVal;
    sipVal = sipString_AsUTF8String(&sipPy);

    if (PyErr_Occurred() != SIP_NULLPTR)
        return -1;

     ::FbxSurfaceMaterial::sReflectionFactor = sipVal;

    static PyObject *sipKeep = SIP_NULLPTR;

    Py_XDECREF(sipKeep);
    sipKeep = sipPy;
    Py_INCREF(sipKeep);

    return 0;
}


extern "C" {static PyObject *varget_FbxSurfaceMaterial_sShadingModel(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxSurfaceMaterial_sShadingModel(void *, PyObject *, PyObject *)
{
    const char*sipVal;

    sipVal =  ::FbxSurfaceMaterial::sShadingModel;

    if (sipVal == SIP_NULLPTR)
    {
        Py_INCREF(Py_None);
        return Py_None;
    }

    return PyUnicode_FromString(sipVal);
}


extern "C" {static int varset_FbxSurfaceMaterial_sShadingModel(void *, PyObject *, PyObject *);}
static int varset_FbxSurfaceMaterial_sShadingModel(void *, PyObject *sipPy, PyObject *)
{
    const char*sipVal;
    sipVal = sipString_AsUTF8String(&sipPy);

    if (PyErr_Occurred() != SIP_NULLPTR)
        return -1;

     ::FbxSurfaceMaterial::sShadingModel = sipVal;

    static PyObject *sipKeep = SIP_NULLPTR;

    Py_XDECREF(sipKeep);
    sipKeep = sipPy;
    Py_INCREF(sipKeep);

    return 0;
}


extern "C" {static PyObject *varget_FbxSurfaceMaterial_sShadingModelDefault(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxSurfaceMaterial_sShadingModelDefault(void *, PyObject *, PyObject *)
{
    const char*sipVal;

    sipVal =  ::FbxSurfaceMaterial::sShadingModelDefault;

    if (sipVal == SIP_NULLPTR)
    {
        Py_INCREF(Py_None);
        return Py_None;
    }

    return PyUnicode_FromString(sipVal);
}


extern "C" {static int varset_FbxSurfaceMaterial_sShadingModelDefault(void *, PyObject *, PyObject *);}
static int varset_FbxSurfaceMaterial_sShadingModelDefault(void *, PyObject *sipPy, PyObject *)
{
    const char*sipVal;
    sipVal = sipString_AsUTF8String(&sipPy);

    if (PyErr_Occurred() != SIP_NULLPTR)
        return -1;

     ::FbxSurfaceMaterial::sShadingModelDefault = sipVal;

    static PyObject *sipKeep = SIP_NULLPTR;

    Py_XDECREF(sipKeep);
    sipKeep = sipPy;
    Py_INCREF(sipKeep);

    return 0;
}


extern "C" {static PyObject *varget_FbxSurfaceMaterial_sShininess(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxSurfaceMaterial_sShininess(void *, PyObject *, PyObject *)
{
    const char*sipVal;

    sipVal =  ::FbxSurfaceMaterial::sShininess;

    if (sipVal == SIP_NULLPTR)
    {
        Py_INCREF(Py_None);
        return Py_None;
    }

    return PyUnicode_FromString(sipVal);
}


extern "C" {static int varset_FbxSurfaceMaterial_sShininess(void *, PyObject *, PyObject *);}
static int varset_FbxSurfaceMaterial_sShininess(void *, PyObject *sipPy, PyObject *)
{
    const char*sipVal;
    sipVal = sipString_AsUTF8String(&sipPy);

    if (PyErr_Occurred() != SIP_NULLPTR)
        return -1;

     ::FbxSurfaceMaterial::sShininess = sipVal;

    static PyObject *sipKeep = SIP_NULLPTR;

    Py_XDECREF(sipKeep);
    sipKeep = sipPy;
    Py_INCREF(sipKeep);

    return 0;
}


extern "C" {static PyObject *varget_FbxSurfaceMaterial_sSpecular(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxSurfaceMaterial_sSpecular(void *, PyObject *, PyObject *)
{
    const char*sipVal;

    sipVal =  ::FbxSurfaceMaterial::sSpecular;

    if (sipVal == SIP_NULLPTR)
    {
        Py_INCREF(Py_None);
        return Py_None;
    }

    return PyUnicode_FromString(sipVal);
}


extern "C" {static int varset_FbxSurfaceMaterial_sSpecular(void *, PyObject *, PyObject *);}
static int varset_FbxSurfaceMaterial_sSpecular(void *, PyObject *sipPy, PyObject *)
{
    const char*sipVal;
    sipVal = sipString_AsUTF8String(&sipPy);

    if (PyErr_Occurred() != SIP_NULLPTR)
        return -1;

     ::FbxSurfaceMaterial::sSpecular = sipVal;

    static PyObject *sipKeep = SIP_NULLPTR;

    Py_XDECREF(sipKeep);
    sipKeep = sipPy;
    Py_INCREF(sipKeep);

    return 0;
}


extern "C" {static PyObject *varget_FbxSurfaceMaterial_sSpecularFactor(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxSurfaceMaterial_sSpecularFactor(void *, PyObject *, PyObject *)
{
    const char*sipVal;

    sipVal =  ::FbxSurfaceMaterial::sSpecularFactor;

    if (sipVal == SIP_NULLPTR)
    {
        Py_INCREF(Py_None);
        return Py_None;
    }

    return PyUnicode_FromString(sipVal);
}


extern "C" {static int varset_FbxSurfaceMaterial_sSpecularFactor(void *, PyObject *, PyObject *);}
static int varset_FbxSurfaceMaterial_sSpecularFactor(void *, PyObject *sipPy, PyObject *)
{
    const char*sipVal;
    sipVal = sipString_AsUTF8String(&sipPy);

    if (PyErr_Occurred() != SIP_NULLPTR)
        return -1;

     ::FbxSurfaceMaterial::sSpecularFactor = sipVal;

    static PyObject *sipKeep = SIP_NULLPTR;

    Py_XDECREF(sipKeep);
    sipKeep = sipPy;
    Py_INCREF(sipKeep);

    return 0;
}


extern "C" {static PyObject *varget_FbxSurfaceMaterial_sTransparencyFactor(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxSurfaceMaterial_sTransparencyFactor(void *, PyObject *, PyObject *)
{
    const char*sipVal;

    sipVal =  ::FbxSurfaceMaterial::sTransparencyFactor;

    if (sipVal == SIP_NULLPTR)
    {
        Py_INCREF(Py_None);
        return Py_None;
    }

    return PyUnicode_FromString(sipVal);
}


extern "C" {static int varset_FbxSurfaceMaterial_sTransparencyFactor(void *, PyObject *, PyObject *);}
static int varset_FbxSurfaceMaterial_sTransparencyFactor(void *, PyObject *sipPy, PyObject *)
{
    const char*sipVal;
    sipVal = sipString_AsUTF8String(&sipPy);

    if (PyErr_Occurred() != SIP_NULLPTR)
        return -1;

     ::FbxSurfaceMaterial::sTransparencyFactor = sipVal;

    static PyObject *sipKeep = SIP_NULLPTR;

    Py_XDECREF(sipKeep);
    sipKeep = sipPy;
    Py_INCREF(sipKeep);

    return 0;
}


extern "C" {static PyObject *varget_FbxSurfaceMaterial_sTransparentColor(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxSurfaceMaterial_sTransparentColor(void *, PyObject *, PyObject *)
{
    const char*sipVal;

    sipVal =  ::FbxSurfaceMaterial::sTransparentColor;

    if (sipVal == SIP_NULLPTR)
    {
        Py_INCREF(Py_None);
        return Py_None;
    }

    return PyUnicode_FromString(sipVal);
}


extern "C" {static int varset_FbxSurfaceMaterial_sTransparentColor(void *, PyObject *, PyObject *);}
static int varset_FbxSurfaceMaterial_sTransparentColor(void *, PyObject *sipPy, PyObject *)
{
    const char*sipVal;
    sipVal = sipString_AsUTF8String(&sipPy);

    if (PyErr_Occurred() != SIP_NULLPTR)
        return -1;

     ::FbxSurfaceMaterial::sTransparentColor = sipVal;

    static PyObject *sipKeep = SIP_NULLPTR;

    Py_XDECREF(sipKeep);
    sipKeep = sipPy;
    Py_INCREF(sipKeep);

    return 0;
}

sipVariableDef variables_FbxSurfaceMaterial[] = {
    {ClassVariable, sipName_ClassId, (PyMethodDef *)varget_FbxSurfaceMaterial_ClassId, (PyMethodDef *)varset_FbxSurfaceMaterial_ClassId, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_MultiLayer, (PyMethodDef *)varget_FbxSurfaceMaterial_MultiLayer, (PyMethodDef *)varset_FbxSurfaceMaterial_MultiLayer, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_ShadingModel, (PyMethodDef *)varget_FbxSurfaceMaterial_ShadingModel, (PyMethodDef *)varset_FbxSurfaceMaterial_ShadingModel, SIP_NULLPTR, SIP_NULLPTR},
    {ClassVariable, sipName_sAmbient, (PyMethodDef *)varget_FbxSurfaceMaterial_sAmbient, (PyMethodDef *)varset_FbxSurfaceMaterial_sAmbient, SIP_NULLPTR, SIP_NULLPTR},
    {ClassVariable, sipName_sAmbientFactor, (PyMethodDef *)varget_FbxSurfaceMaterial_sAmbientFactor, (PyMethodDef *)varset_FbxSurfaceMaterial_sAmbientFactor, SIP_NULLPTR, SIP_NULLPTR},
    {ClassVariable, sipName_sBump, (PyMethodDef *)varget_FbxSurfaceMaterial_sBump, (PyMethodDef *)varset_FbxSurfaceMaterial_sBump, SIP_NULLPTR, SIP_NULLPTR},
    {ClassVariable, sipName_sBumpFactor, (PyMethodDef *)varget_FbxSurfaceMaterial_sBumpFactor, (PyMethodDef *)varset_FbxSurfaceMaterial_sBumpFactor, SIP_NULLPTR, SIP_NULLPTR},
    {ClassVariable, sipName_sDiffuse, (PyMethodDef *)varget_FbxSurfaceMaterial_sDiffuse, (PyMethodDef *)varset_FbxSurfaceMaterial_sDiffuse, SIP_NULLPTR, SIP_NULLPTR},
    {ClassVariable, sipName_sDiffuseFactor, (PyMethodDef *)varget_FbxSurfaceMaterial_sDiffuseFactor, (PyMethodDef *)varset_FbxSurfaceMaterial_sDiffuseFactor, SIP_NULLPTR, SIP_NULLPTR},
    {ClassVariable, sipName_sDisplacementColor, (PyMethodDef *)varget_FbxSurfaceMaterial_sDisplacementColor, (PyMethodDef *)varset_FbxSurfaceMaterial_sDisplacementColor, SIP_NULLPTR, SIP_NULLPTR},
    {ClassVariable, sipName_sDisplacementFactor, (PyMethodDef *)varget_FbxSurfaceMaterial_sDisplacementFactor, (PyMethodDef *)varset_FbxSurfaceMaterial_sDisplacementFactor, SIP_NULLPTR, SIP_NULLPTR},
    {ClassVariable, sipName_sEmissive, (PyMethodDef *)varget_FbxSurfaceMaterial_sEmissive, (PyMethodDef *)varset_FbxSurfaceMaterial_sEmissive, SIP_NULLPTR, SIP_NULLPTR},
    {ClassVariable, sipName_sEmissiveFactor, (PyMethodDef *)varget_FbxSurfaceMaterial_sEmissiveFactor, (PyMethodDef *)varset_FbxSurfaceMaterial_sEmissiveFactor, SIP_NULLPTR, SIP_NULLPTR},
    {ClassVariable, sipName_sMultiLayer, (PyMethodDef *)varget_FbxSurfaceMaterial_sMultiLayer, (PyMethodDef *)varset_FbxSurfaceMaterial_sMultiLayer, SIP_NULLPTR, SIP_NULLPTR},
    {ClassVariable, sipName_sMultiLayerDefault, (PyMethodDef *)varget_FbxSurfaceMaterial_sMultiLayerDefault, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {ClassVariable, sipName_sNormalMap, (PyMethodDef *)varget_FbxSurfaceMaterial_sNormalMap, (PyMethodDef *)varset_FbxSurfaceMaterial_sNormalMap, SIP_NULLPTR, SIP_NULLPTR},
    {ClassVariable, sipName_sReflection, (PyMethodDef *)varget_FbxSurfaceMaterial_sReflection, (PyMethodDef *)varset_FbxSurfaceMaterial_sReflection, SIP_NULLPTR, SIP_NULLPTR},
    {ClassVariable, sipName_sReflectionFactor, (PyMethodDef *)varget_FbxSurfaceMaterial_sReflectionFactor, (PyMethodDef *)varset_FbxSurfaceMaterial_sReflectionFactor, SIP_NULLPTR, SIP_NULLPTR},
    {ClassVariable, sipName_sShadingModel, (PyMethodDef *)varget_FbxSurfaceMaterial_sShadingModel, (PyMethodDef *)varset_FbxSurfaceMaterial_sShadingModel, SIP_NULLPTR, SIP_NULLPTR},
    {ClassVariable, sipName_sShadingModelDefault, (PyMethodDef *)varget_FbxSurfaceMaterial_sShadingModelDefault, (PyMethodDef *)varset_FbxSurfaceMaterial_sShadingModelDefault, SIP_NULLPTR, SIP_NULLPTR},
    {ClassVariable, sipName_sShininess, (PyMethodDef *)varget_FbxSurfaceMaterial_sShininess, (PyMethodDef *)varset_FbxSurfaceMaterial_sShininess, SIP_NULLPTR, SIP_NULLPTR},
    {ClassVariable, sipName_sSpecular, (PyMethodDef *)varget_FbxSurfaceMaterial_sSpecular, (PyMethodDef *)varset_FbxSurfaceMaterial_sSpecular, SIP_NULLPTR, SIP_NULLPTR},
    {ClassVariable, sipName_sSpecularFactor, (PyMethodDef *)varget_FbxSurfaceMaterial_sSpecularFactor, (PyMethodDef *)varset_FbxSurfaceMaterial_sSpecularFactor, SIP_NULLPTR, SIP_NULLPTR},
    {ClassVariable, sipName_sTransparencyFactor, (PyMethodDef *)varget_FbxSurfaceMaterial_sTransparencyFactor, (PyMethodDef *)varset_FbxSurfaceMaterial_sTransparencyFactor, SIP_NULLPTR, SIP_NULLPTR},
    {ClassVariable, sipName_sTransparentColor, (PyMethodDef *)varget_FbxSurfaceMaterial_sTransparentColor, (PyMethodDef *)varset_FbxSurfaceMaterial_sTransparentColor, SIP_NULLPTR, SIP_NULLPTR},
};


sipClassTypeDef sipTypeDef_fbx_FbxSurfaceMaterial = {
    {
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_FbxSurfaceMaterial,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_FbxSurfaceMaterial,
        {0, 0, 1},
        2, methods_FbxSurfaceMaterial,
        25, variables_FbxSurfaceMaterial,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    SIP_NULLPTR,
    -1,
    -1,
    supers_FbxSurfaceMaterial,
    slots_FbxSurfaceMaterial,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_FbxSurfaceMaterial,
    cast_FbxSurfaceMaterial,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};
