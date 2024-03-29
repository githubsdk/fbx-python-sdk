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




PyDoc_STRVAR(doc_FbxAnimLayer_Create, "Create(FbxManager, str) -> FbxAnimLayer\n"
"Create(FbxObject, str) -> FbxAnimLayer");

extern "C" {static PyObject *meth_FbxAnimLayer_Create(PyObject *, PyObject *);}
static PyObject *meth_FbxAnimLayer_Create(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxManager* a0;
        const char* a1;
        PyObject *a1Keep;

        if (sipParseArgs(&sipParseErr, sipArgs, "CJ8A8", &sipSelf, sipType_FbxManager, &a0, &a1Keep, &a1))
        {
             ::FbxAnimLayer*sipRes;

            sipRes =  ::FbxAnimLayer::Create(a0,a1);
            Py_DECREF(a1Keep);

            return sipConvertFromType(sipRes,sipType_FbxAnimLayer,SIP_NULLPTR);
        }
    }

    {
         ::FbxObject* a0;
        const char* a1;
        PyObject *a1Keep;

        if (sipParseArgs(&sipParseErr, sipArgs, "CJ8A8", &sipSelf, sipType_FbxObject, &a0, &a1Keep, &a1))
        {
             ::FbxAnimLayer*sipRes;

            sipRes =  ::FbxAnimLayer::Create(a0,a1);
            Py_DECREF(a1Keep);

            return sipConvertFromType(sipRes,sipType_FbxAnimLayer,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxAnimLayer, sipName_Create, doc_FbxAnimLayer_Create);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxAnimLayer_GetClassId, "GetClassId(self) -> FbxClassId");

extern "C" {static PyObject *meth_FbxAnimLayer_GetClassId(PyObject *, PyObject *);}
static PyObject *meth_FbxAnimLayer_GetClassId(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_FbxAnimLayer)) || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::FbxAnimLayer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxAnimLayer, &sipCpp))
        {
             ::FbxClassId*sipRes;

            sipRes = new  ::FbxClassId((sipSelfWasArg ? sipCpp-> ::FbxAnimLayer::GetClassId() : sipCpp->GetClassId()));

            return sipConvertFromNewType(sipRes,sipType_FbxClassId,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxAnimLayer, sipName_GetClassId, doc_FbxAnimLayer_GetClassId);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxAnimLayer_Reset, "Reset(self)");

extern "C" {static PyObject *meth_FbxAnimLayer_Reset(PyObject *, PyObject *);}
static PyObject *meth_FbxAnimLayer_Reset(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxAnimLayer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxAnimLayer, &sipCpp))
        {
            sipCpp->Reset();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxAnimLayer, sipName_Reset, doc_FbxAnimLayer_Reset);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxAnimLayer_SetBlendModeBypass, "SetBlendModeBypass(self, EFbxType, bool)");

extern "C" {static PyObject *meth_FbxAnimLayer_SetBlendModeBypass(PyObject *, PyObject *);}
static PyObject *meth_FbxAnimLayer_SetBlendModeBypass(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::EFbxType a0;
        bool a1;
         ::FbxAnimLayer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BEb", &sipSelf, sipType_FbxAnimLayer, &sipCpp, sipType_EFbxType, &a0, &a1))
        {
            sipCpp->SetBlendModeBypass(a0,a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxAnimLayer, sipName_SetBlendModeBypass, doc_FbxAnimLayer_SetBlendModeBypass);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxAnimLayer_GetBlendModeBypass, "GetBlendModeBypass(self, EFbxType) -> bool");

extern "C" {static PyObject *meth_FbxAnimLayer_GetBlendModeBypass(PyObject *, PyObject *);}
static PyObject *meth_FbxAnimLayer_GetBlendModeBypass(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::EFbxType a0;
         ::FbxAnimLayer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_FbxAnimLayer, &sipCpp, sipType_EFbxType, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->GetBlendModeBypass(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxAnimLayer, sipName_GetBlendModeBypass, doc_FbxAnimLayer_GetBlendModeBypass);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxAnimLayer_CreateCurveNode, "CreateCurveNode(self, FbxProperty) -> FbxAnimCurveNode");

extern "C" {static PyObject *meth_FbxAnimLayer_CreateCurveNode(PyObject *, PyObject *);}
static PyObject *meth_FbxAnimLayer_CreateCurveNode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxProperty* a0;
         ::FbxAnimLayer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_FbxAnimLayer, &sipCpp, sipType_FbxProperty, &a0))
        {
             ::FbxAnimCurveNode*sipRes;

            sipRes = sipCpp->CreateCurveNode(*a0);

            return sipConvertFromType(sipRes,sipType_FbxAnimCurveNode,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxAnimLayer, sipName_CreateCurveNode, doc_FbxAnimLayer_CreateCurveNode);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *slot_FbxAnimLayer___ne__(PyObject *,PyObject *);}
static PyObject *slot_FbxAnimLayer___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxAnimLayer *sipCpp = reinterpret_cast< ::FbxAnimLayer *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxAnimLayer));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxAnimLayer* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxAnimLayer, &a0))
        {
            bool sipRes;

            sipRes = !sipCpp-> ::FbxAnimLayer::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_fbx, ne_slot, sipType_FbxAnimLayer, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_FbxAnimLayer___eq__(PyObject *,PyObject *);}
static PyObject *slot_FbxAnimLayer___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxAnimLayer *sipCpp = reinterpret_cast< ::FbxAnimLayer *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxAnimLayer));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxAnimLayer* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxAnimLayer, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::FbxAnimLayer::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_fbx, eq_slot, sipType_FbxAnimLayer, sipSelf, sipArg);
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_FbxAnimLayer(void *, const sipTypeDef *);}
static void *cast_FbxAnimLayer(void *sipCppV, const sipTypeDef *targetType)
{
     ::FbxAnimLayer *sipCpp = reinterpret_cast< ::FbxAnimLayer *>(sipCppV);

    if (targetType == sipType_FbxAnimLayer)
        return sipCppV;

    sipCppV = ((const sipClassTypeDef *)sipType_FbxCollection)->ctd_cast(static_cast< ::FbxCollection *>(sipCpp), targetType);
    if (sipCppV)
        return sipCppV;

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_FbxAnimLayer(void *, int);}
static void release_FbxAnimLayer(void *, int)
{
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_FbxAnimLayer[] = {{100, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_FbxAnimLayer[] = {
    {(void *)slot_FbxAnimLayer___ne__, ne_slot},
    {(void *)slot_FbxAnimLayer___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_FbxAnimLayer[] = {
    {sipName_Create, meth_FbxAnimLayer_Create, METH_VARARGS, doc_FbxAnimLayer_Create},
    {sipName_CreateCurveNode, meth_FbxAnimLayer_CreateCurveNode, METH_VARARGS, doc_FbxAnimLayer_CreateCurveNode},
    {sipName_GetBlendModeBypass, meth_FbxAnimLayer_GetBlendModeBypass, METH_VARARGS, doc_FbxAnimLayer_GetBlendModeBypass},
    {sipName_GetClassId, meth_FbxAnimLayer_GetClassId, METH_VARARGS, doc_FbxAnimLayer_GetClassId},
    {sipName_Reset, meth_FbxAnimLayer_Reset, METH_VARARGS, doc_FbxAnimLayer_Reset},
    {sipName_SetBlendModeBypass, meth_FbxAnimLayer_SetBlendModeBypass, METH_VARARGS, doc_FbxAnimLayer_SetBlendModeBypass}
};


extern "C" {static PyObject *varget_FbxAnimLayer_BlendMode(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxAnimLayer_BlendMode(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
     ::FbxPropertyEnum*sipVal;
     ::FbxAnimLayer *sipCpp = reinterpret_cast< ::FbxAnimLayer *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -1157);

    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->BlendMode;

    sipPy = sipConvertFromType(sipVal, sipType_FbxPropertyEnum, SIP_NULLPTR);

    if (sipPy)
    {
        sipKeepReference(sipPy, -1156, sipPySelf);
        sipKeepReference(sipPySelf, -1157, sipPy);
    }

    return sipPy;
}


extern "C" {static int varset_FbxAnimLayer_BlendMode(void *, PyObject *, PyObject *);}
static int varset_FbxAnimLayer_BlendMode(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::FbxPropertyEnum*sipVal;
     ::FbxAnimLayer *sipCpp = reinterpret_cast< ::FbxAnimLayer *>(sipSelf);

    int sipIsErr = 0;
    sipVal = reinterpret_cast< ::FbxPropertyEnum *>(sipForceConvertToType(sipPy, sipType_FbxPropertyEnum, SIP_NULLPTR, SIP_NOT_NONE, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->BlendMode = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxAnimLayer_ClassId(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxAnimLayer_ClassId(void *, PyObject *sipPySelf, PyObject *)
{
    static PyObject *sipPy = SIP_NULLPTR;
     ::FbxClassId*sipVal;

    if (sipPy)
    {
        Py_INCREF(sipPy);
        return sipPy;
    }

    sipVal = & ::FbxAnimLayer::ClassId;

    sipPy = sipConvertFromType(sipVal, sipType_FbxClassId, SIP_NULLPTR);

    if (sipPy)
    {
        sipKeepReference(sipPy, -1158, sipPySelf);
        Py_INCREF(sipPy);
    }

    return sipPy;
}


extern "C" {static int varset_FbxAnimLayer_ClassId(void *, PyObject *, PyObject *);}
static int varset_FbxAnimLayer_ClassId(void *, PyObject *sipPy, PyObject *)
{
     ::FbxClassId*sipVal;
    int sipIsErr = 0;
    sipVal = reinterpret_cast< ::FbxClassId *>(sipForceConvertToType(sipPy, sipType_FbxClassId, SIP_NULLPTR, SIP_NOT_NONE, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

     ::FbxAnimLayer::ClassId = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxAnimLayer_Color(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxAnimLayer_Color(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
     ::FbxPropertyDouble3*sipVal;
     ::FbxAnimLayer *sipCpp = reinterpret_cast< ::FbxAnimLayer *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -1160);

    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->Color;

    sipPy = sipConvertFromType(sipVal, sipType_FbxPropertyDouble3, SIP_NULLPTR);

    if (sipPy)
    {
        sipKeepReference(sipPy, -1159, sipPySelf);
        sipKeepReference(sipPySelf, -1160, sipPy);
    }

    return sipPy;
}


extern "C" {static int varset_FbxAnimLayer_Color(void *, PyObject *, PyObject *);}
static int varset_FbxAnimLayer_Color(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::FbxPropertyDouble3*sipVal;
     ::FbxAnimLayer *sipCpp = reinterpret_cast< ::FbxAnimLayer *>(sipSelf);

    int sipIsErr = 0;
    sipVal = reinterpret_cast< ::FbxPropertyDouble3 *>(sipForceConvertToType(sipPy, sipType_FbxPropertyDouble3, SIP_NULLPTR, SIP_NOT_NONE, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->Color = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxAnimLayer_Lock(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxAnimLayer_Lock(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
     ::FbxPropertyBool1*sipVal;
     ::FbxAnimLayer *sipCpp = reinterpret_cast< ::FbxAnimLayer *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -1162);

    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->Lock;

    sipPy = sipConvertFromType(sipVal, sipType_FbxPropertyBool1, SIP_NULLPTR);

    if (sipPy)
    {
        sipKeepReference(sipPy, -1161, sipPySelf);
        sipKeepReference(sipPySelf, -1162, sipPy);
    }

    return sipPy;
}


extern "C" {static int varset_FbxAnimLayer_Lock(void *, PyObject *, PyObject *);}
static int varset_FbxAnimLayer_Lock(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::FbxPropertyBool1*sipVal;
     ::FbxAnimLayer *sipCpp = reinterpret_cast< ::FbxAnimLayer *>(sipSelf);

    int sipIsErr = 0;
    sipVal = reinterpret_cast< ::FbxPropertyBool1 *>(sipForceConvertToType(sipPy, sipType_FbxPropertyBool1, SIP_NULLPTR, SIP_NOT_NONE, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->Lock = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxAnimLayer_Mute(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxAnimLayer_Mute(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
     ::FbxPropertyBool1*sipVal;
     ::FbxAnimLayer *sipCpp = reinterpret_cast< ::FbxAnimLayer *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -1164);

    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->Mute;

    sipPy = sipConvertFromType(sipVal, sipType_FbxPropertyBool1, SIP_NULLPTR);

    if (sipPy)
    {
        sipKeepReference(sipPy, -1163, sipPySelf);
        sipKeepReference(sipPySelf, -1164, sipPy);
    }

    return sipPy;
}


extern "C" {static int varset_FbxAnimLayer_Mute(void *, PyObject *, PyObject *);}
static int varset_FbxAnimLayer_Mute(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::FbxPropertyBool1*sipVal;
     ::FbxAnimLayer *sipCpp = reinterpret_cast< ::FbxAnimLayer *>(sipSelf);

    int sipIsErr = 0;
    sipVal = reinterpret_cast< ::FbxPropertyBool1 *>(sipForceConvertToType(sipPy, sipType_FbxPropertyBool1, SIP_NULLPTR, SIP_NOT_NONE, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->Mute = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxAnimLayer_RotationAccumulationMode(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxAnimLayer_RotationAccumulationMode(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
     ::FbxPropertyEnum*sipVal;
     ::FbxAnimLayer *sipCpp = reinterpret_cast< ::FbxAnimLayer *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -1166);

    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->RotationAccumulationMode;

    sipPy = sipConvertFromType(sipVal, sipType_FbxPropertyEnum, SIP_NULLPTR);

    if (sipPy)
    {
        sipKeepReference(sipPy, -1165, sipPySelf);
        sipKeepReference(sipPySelf, -1166, sipPy);
    }

    return sipPy;
}


extern "C" {static int varset_FbxAnimLayer_RotationAccumulationMode(void *, PyObject *, PyObject *);}
static int varset_FbxAnimLayer_RotationAccumulationMode(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::FbxPropertyEnum*sipVal;
     ::FbxAnimLayer *sipCpp = reinterpret_cast< ::FbxAnimLayer *>(sipSelf);

    int sipIsErr = 0;
    sipVal = reinterpret_cast< ::FbxPropertyEnum *>(sipForceConvertToType(sipPy, sipType_FbxPropertyEnum, SIP_NULLPTR, SIP_NOT_NONE, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->RotationAccumulationMode = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxAnimLayer_ScaleAccumulationMode(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxAnimLayer_ScaleAccumulationMode(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
     ::FbxPropertyEnum*sipVal;
     ::FbxAnimLayer *sipCpp = reinterpret_cast< ::FbxAnimLayer *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -1168);

    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->ScaleAccumulationMode;

    sipPy = sipConvertFromType(sipVal, sipType_FbxPropertyEnum, SIP_NULLPTR);

    if (sipPy)
    {
        sipKeepReference(sipPy, -1167, sipPySelf);
        sipKeepReference(sipPySelf, -1168, sipPy);
    }

    return sipPy;
}


extern "C" {static int varset_FbxAnimLayer_ScaleAccumulationMode(void *, PyObject *, PyObject *);}
static int varset_FbxAnimLayer_ScaleAccumulationMode(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::FbxPropertyEnum*sipVal;
     ::FbxAnimLayer *sipCpp = reinterpret_cast< ::FbxAnimLayer *>(sipSelf);

    int sipIsErr = 0;
    sipVal = reinterpret_cast< ::FbxPropertyEnum *>(sipForceConvertToType(sipPy, sipType_FbxPropertyEnum, SIP_NULLPTR, SIP_NOT_NONE, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->ScaleAccumulationMode = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxAnimLayer_Solo(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxAnimLayer_Solo(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
     ::FbxPropertyBool1*sipVal;
     ::FbxAnimLayer *sipCpp = reinterpret_cast< ::FbxAnimLayer *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -1170);

    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->Solo;

    sipPy = sipConvertFromType(sipVal, sipType_FbxPropertyBool1, SIP_NULLPTR);

    if (sipPy)
    {
        sipKeepReference(sipPy, -1169, sipPySelf);
        sipKeepReference(sipPySelf, -1170, sipPy);
    }

    return sipPy;
}


extern "C" {static int varset_FbxAnimLayer_Solo(void *, PyObject *, PyObject *);}
static int varset_FbxAnimLayer_Solo(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::FbxPropertyBool1*sipVal;
     ::FbxAnimLayer *sipCpp = reinterpret_cast< ::FbxAnimLayer *>(sipSelf);

    int sipIsErr = 0;
    sipVal = reinterpret_cast< ::FbxPropertyBool1 *>(sipForceConvertToType(sipPy, sipType_FbxPropertyBool1, SIP_NULLPTR, SIP_NOT_NONE, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->Solo = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxAnimLayer_Weight(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxAnimLayer_Weight(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
     ::FbxPropertyDouble1*sipVal;
     ::FbxAnimLayer *sipCpp = reinterpret_cast< ::FbxAnimLayer *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -1172);

    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->Weight;

    sipPy = sipConvertFromType(sipVal, sipType_FbxPropertyDouble1, SIP_NULLPTR);

    if (sipPy)
    {
        sipKeepReference(sipPy, -1171, sipPySelf);
        sipKeepReference(sipPySelf, -1172, sipPy);
    }

    return sipPy;
}


extern "C" {static int varset_FbxAnimLayer_Weight(void *, PyObject *, PyObject *);}
static int varset_FbxAnimLayer_Weight(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::FbxPropertyDouble1*sipVal;
     ::FbxAnimLayer *sipCpp = reinterpret_cast< ::FbxAnimLayer *>(sipSelf);

    int sipIsErr = 0;
    sipVal = reinterpret_cast< ::FbxPropertyDouble1 *>(sipForceConvertToType(sipPy, sipType_FbxPropertyDouble1, SIP_NULLPTR, SIP_NOT_NONE, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->Weight = *sipVal;

    return 0;
}

sipVariableDef variables_FbxAnimLayer[] = {
    {InstanceVariable, sipName_BlendMode, (PyMethodDef *)varget_FbxAnimLayer_BlendMode, (PyMethodDef *)varset_FbxAnimLayer_BlendMode, SIP_NULLPTR, SIP_NULLPTR},
    {ClassVariable, sipName_ClassId, (PyMethodDef *)varget_FbxAnimLayer_ClassId, (PyMethodDef *)varset_FbxAnimLayer_ClassId, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_Color, (PyMethodDef *)varget_FbxAnimLayer_Color, (PyMethodDef *)varset_FbxAnimLayer_Color, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_Lock, (PyMethodDef *)varget_FbxAnimLayer_Lock, (PyMethodDef *)varset_FbxAnimLayer_Lock, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_Mute, (PyMethodDef *)varget_FbxAnimLayer_Mute, (PyMethodDef *)varset_FbxAnimLayer_Mute, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_RotationAccumulationMode, (PyMethodDef *)varget_FbxAnimLayer_RotationAccumulationMode, (PyMethodDef *)varset_FbxAnimLayer_RotationAccumulationMode, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_ScaleAccumulationMode, (PyMethodDef *)varget_FbxAnimLayer_ScaleAccumulationMode, (PyMethodDef *)varset_FbxAnimLayer_ScaleAccumulationMode, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_Solo, (PyMethodDef *)varget_FbxAnimLayer_Solo, (PyMethodDef *)varset_FbxAnimLayer_Solo, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_Weight, (PyMethodDef *)varget_FbxAnimLayer_Weight, (PyMethodDef *)varset_FbxAnimLayer_Weight, SIP_NULLPTR, SIP_NULLPTR},
};


/* Define the enum members and ints to be added to this type. */
static sipIntInstanceDef intInstances_FbxAnimLayer[] = {
    {sipName_eBlendAdditive, static_cast<int>( ::FbxAnimLayer::eBlendAdditive)},
    {sipName_eBlendOverride, static_cast<int>( ::FbxAnimLayer::eBlendOverride)},
    {sipName_eBlendOverridePassthrough, static_cast<int>( ::FbxAnimLayer::eBlendOverridePassthrough)},
    {sipName_eRotationByLayer, static_cast<int>( ::FbxAnimLayer::eRotationByLayer)},
    {sipName_eRotationByChannel, static_cast<int>( ::FbxAnimLayer::eRotationByChannel)},
    {sipName_eScaleMultiply, static_cast<int>( ::FbxAnimLayer::eScaleMultiply)},
    {sipName_eScaleAdditive, static_cast<int>( ::FbxAnimLayer::eScaleAdditive)},
    {0, 0}
};


sipClassTypeDef sipTypeDef_fbx_FbxAnimLayer = {
    {
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_FbxAnimLayer,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_FbxAnimLayer,
        {0, 0, 1},
        6, methods_FbxAnimLayer,
        9, variables_FbxAnimLayer,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, intInstances_FbxAnimLayer, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    SIP_NULLPTR,
    -1,
    -1,
    supers_FbxAnimLayer,
    slots_FbxAnimLayer,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_FbxAnimLayer,
    cast_FbxAnimLayer,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};
