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




PyDoc_STRVAR(doc_FbxNodeAttribute_Create, "Create(FbxManager, str) -> FbxNodeAttribute\n"
"Create(FbxObject, str) -> FbxNodeAttribute");

extern "C" {static PyObject *meth_FbxNodeAttribute_Create(PyObject *, PyObject *);}
static PyObject *meth_FbxNodeAttribute_Create(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxManager* a0;
        const char* a1;
        PyObject *a1Keep;

        if (sipParseArgs(&sipParseErr, sipArgs, "CJ8A8", &sipSelf, sipType_FbxManager, &a0, &a1Keep, &a1))
        {
             ::FbxNodeAttribute*sipRes;

            sipRes =  ::FbxNodeAttribute::Create(a0,a1);
            Py_DECREF(a1Keep);

            return sipConvertFromType(sipRes,sipType_FbxNodeAttribute,SIP_NULLPTR);
        }
    }

    {
         ::FbxObject* a0;
        const char* a1;
        PyObject *a1Keep;

        if (sipParseArgs(&sipParseErr, sipArgs, "CJ8A8", &sipSelf, sipType_FbxObject, &a0, &a1Keep, &a1))
        {
             ::FbxNodeAttribute*sipRes;

            sipRes =  ::FbxNodeAttribute::Create(a0,a1);
            Py_DECREF(a1Keep);

            return sipConvertFromType(sipRes,sipType_FbxNodeAttribute,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxNodeAttribute, sipName_Create, doc_FbxNodeAttribute_Create);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxNodeAttribute_GetClassId, "GetClassId(self) -> FbxClassId");

extern "C" {static PyObject *meth_FbxNodeAttribute_GetClassId(PyObject *, PyObject *);}
static PyObject *meth_FbxNodeAttribute_GetClassId(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_FbxNodeAttribute)) || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::FbxNodeAttribute *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxNodeAttribute, &sipCpp))
        {
             ::FbxClassId*sipRes;

            sipRes = new  ::FbxClassId((sipSelfWasArg ? sipCpp-> ::FbxNodeAttribute::GetClassId() : sipCpp->GetClassId()));

            return sipConvertFromNewType(sipRes,sipType_FbxClassId,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxNodeAttribute, sipName_GetClassId, doc_FbxNodeAttribute_GetClassId);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxNodeAttribute_GetAttributeType, "GetAttributeType(self) -> FbxNodeAttribute.EType");

extern "C" {static PyObject *meth_FbxNodeAttribute_GetAttributeType(PyObject *, PyObject *);}
static PyObject *meth_FbxNodeAttribute_GetAttributeType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_FbxNodeAttribute)) || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::FbxNodeAttribute *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxNodeAttribute, &sipCpp))
        {
             ::FbxNodeAttribute::EType sipRes;

            sipRes = (sipSelfWasArg ? sipCpp-> ::FbxNodeAttribute::GetAttributeType() : sipCpp->GetAttributeType());

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_FbxNodeAttribute_EType);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxNodeAttribute, sipName_GetAttributeType, doc_FbxNodeAttribute_GetAttributeType);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxNodeAttribute_GetNodeCount, "GetNodeCount(self) -> int");

extern "C" {static PyObject *meth_FbxNodeAttribute_GetNodeCount(PyObject *, PyObject *);}
static PyObject *meth_FbxNodeAttribute_GetNodeCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxNodeAttribute *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxNodeAttribute, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->GetNodeCount();

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxNodeAttribute, sipName_GetNodeCount, doc_FbxNodeAttribute_GetNodeCount);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxNodeAttribute_GetNode, "GetNode(self, int = 0) -> FbxNode");

extern "C" {static PyObject *meth_FbxNodeAttribute_GetNode(PyObject *, PyObject *);}
static PyObject *meth_FbxNodeAttribute_GetNode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0 = 0;
        const  ::FbxNodeAttribute *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B|i", &sipSelf, sipType_FbxNodeAttribute, &sipCpp, &a0))
        {
             ::FbxNode*sipRes;

            sipRes = sipCpp->GetNode(a0);

            return sipConvertFromType(sipRes,sipType_FbxNode,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxNodeAttribute, sipName_GetNode, doc_FbxNodeAttribute_GetNode);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *slot_FbxNodeAttribute___ne__(PyObject *,PyObject *);}
static PyObject *slot_FbxNodeAttribute___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxNodeAttribute *sipCpp = reinterpret_cast< ::FbxNodeAttribute *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxNodeAttribute));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxNodeAttribute* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxNodeAttribute, &a0))
        {
            bool sipRes;

            sipRes = !sipCpp-> ::FbxNodeAttribute::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_fbx, ne_slot, sipType_FbxNodeAttribute, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_FbxNodeAttribute___eq__(PyObject *,PyObject *);}
static PyObject *slot_FbxNodeAttribute___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxNodeAttribute *sipCpp = reinterpret_cast< ::FbxNodeAttribute *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxNodeAttribute));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxNodeAttribute* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxNodeAttribute, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::FbxNodeAttribute::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_fbx, eq_slot, sipType_FbxNodeAttribute, sipSelf, sipArg);
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_FbxNodeAttribute(void *, const sipTypeDef *);}
static void *cast_FbxNodeAttribute(void *sipCppV, const sipTypeDef *targetType)
{
     ::FbxNodeAttribute *sipCpp = reinterpret_cast< ::FbxNodeAttribute *>(sipCppV);

    if (targetType == sipType_FbxNodeAttribute)
        return sipCppV;

    if (targetType == sipType_FbxObject)
        return static_cast< ::FbxObject *>(sipCpp);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_FbxNodeAttribute(void *, int);}
static void release_FbxNodeAttribute(void *, int)
{
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_FbxNodeAttribute[] = {{244, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_FbxNodeAttribute[] = {
    {(void *)slot_FbxNodeAttribute___ne__, ne_slot},
    {(void *)slot_FbxNodeAttribute___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_FbxNodeAttribute[] = {
    {sipName_Create, meth_FbxNodeAttribute_Create, METH_VARARGS, doc_FbxNodeAttribute_Create},
    {sipName_GetAttributeType, meth_FbxNodeAttribute_GetAttributeType, METH_VARARGS, doc_FbxNodeAttribute_GetAttributeType},
    {sipName_GetClassId, meth_FbxNodeAttribute_GetClassId, METH_VARARGS, doc_FbxNodeAttribute_GetClassId},
    {sipName_GetNode, meth_FbxNodeAttribute_GetNode, METH_VARARGS, doc_FbxNodeAttribute_GetNode},
    {sipName_GetNodeCount, meth_FbxNodeAttribute_GetNodeCount, METH_VARARGS, doc_FbxNodeAttribute_GetNodeCount}
};


extern "C" {static PyObject *varget_FbxNodeAttribute_ClassId(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxNodeAttribute_ClassId(void *, PyObject *sipPySelf, PyObject *)
{
    static PyObject *sipPy = SIP_NULLPTR;
     ::FbxClassId*sipVal;

    if (sipPy)
    {
        Py_INCREF(sipPy);
        return sipPy;
    }

    sipVal = & ::FbxNodeAttribute::ClassId;

    sipPy = sipConvertFromType(sipVal, sipType_FbxClassId, SIP_NULLPTR);

    if (sipPy)
    {
        sipKeepReference(sipPy, -376, sipPySelf);
        Py_INCREF(sipPy);
    }

    return sipPy;
}


extern "C" {static int varset_FbxNodeAttribute_ClassId(void *, PyObject *, PyObject *);}
static int varset_FbxNodeAttribute_ClassId(void *, PyObject *sipPy, PyObject *)
{
     ::FbxClassId*sipVal;
    int sipIsErr = 0;
    sipVal = reinterpret_cast< ::FbxClassId *>(sipForceConvertToType(sipPy, sipType_FbxClassId, SIP_NULLPTR, SIP_NOT_NONE, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

     ::FbxNodeAttribute::ClassId = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxNodeAttribute_Color(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxNodeAttribute_Color(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
     ::FbxPropertyDouble3*sipVal;
     ::FbxNodeAttribute *sipCpp = reinterpret_cast< ::FbxNodeAttribute *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -378);

    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->Color;

    sipPy = sipConvertFromType(sipVal, sipType_FbxPropertyDouble3, SIP_NULLPTR);

    if (sipPy)
    {
        sipKeepReference(sipPy, -377, sipPySelf);
        sipKeepReference(sipPySelf, -378, sipPy);
    }

    return sipPy;
}


extern "C" {static int varset_FbxNodeAttribute_Color(void *, PyObject *, PyObject *);}
static int varset_FbxNodeAttribute_Color(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::FbxPropertyDouble3*sipVal;
     ::FbxNodeAttribute *sipCpp = reinterpret_cast< ::FbxNodeAttribute *>(sipSelf);

    int sipIsErr = 0;
    sipVal = reinterpret_cast< ::FbxPropertyDouble3 *>(sipForceConvertToType(sipPy, sipType_FbxPropertyDouble3, SIP_NULLPTR, SIP_NOT_NONE, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->Color = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxNodeAttribute_sColor(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxNodeAttribute_sColor(void *, PyObject *, PyObject *)
{
    const char*sipVal;

    sipVal =  ::FbxNodeAttribute::sColor;

    if (sipVal == SIP_NULLPTR)
    {
        Py_INCREF(Py_None);
        return Py_None;
    }

    return PyUnicode_FromString(sipVal);
}


extern "C" {static int varset_FbxNodeAttribute_sColor(void *, PyObject *, PyObject *);}
static int varset_FbxNodeAttribute_sColor(void *, PyObject *sipPy, PyObject *)
{
    const char*sipVal;
    sipVal = sipString_AsUTF8String(&sipPy);

    if (PyErr_Occurred() != SIP_NULLPTR)
        return -1;

     ::FbxNodeAttribute::sColor = sipVal;

    static PyObject *sipKeep = SIP_NULLPTR;

    Py_XDECREF(sipKeep);
    sipKeep = sipPy;
    Py_INCREF(sipKeep);

    return 0;
}


extern "C" {static PyObject *varget_FbxNodeAttribute_sDefaultColor(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxNodeAttribute_sDefaultColor(void *, PyObject *, PyObject *)
{
    const  ::FbxDouble3*sipVal;

    sipVal = new  ::FbxDouble3( ::FbxNodeAttribute::sDefaultColor);

    return sipConvertFromNewType(const_cast< ::FbxDouble3 *>(sipVal), sipType_FbxDouble3, SIP_NULLPTR);
}

sipVariableDef variables_FbxNodeAttribute[] = {
    {ClassVariable, sipName_ClassId, (PyMethodDef *)varget_FbxNodeAttribute_ClassId, (PyMethodDef *)varset_FbxNodeAttribute_ClassId, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_Color, (PyMethodDef *)varget_FbxNodeAttribute_Color, (PyMethodDef *)varset_FbxNodeAttribute_Color, SIP_NULLPTR, SIP_NULLPTR},
    {ClassVariable, sipName_sColor, (PyMethodDef *)varget_FbxNodeAttribute_sColor, (PyMethodDef *)varset_FbxNodeAttribute_sColor, SIP_NULLPTR, SIP_NULLPTR},
    {ClassVariable, sipName_sDefaultColor, (PyMethodDef *)varget_FbxNodeAttribute_sDefaultColor, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
};


/* Define the enum members and ints to be added to this type. */
static sipIntInstanceDef intInstances_FbxNodeAttribute[] = {
    {sipName_eUnknown, static_cast<int>( ::FbxNodeAttribute::eUnknown)},
    {sipName_eNull, static_cast<int>( ::FbxNodeAttribute::eNull)},
    {sipName_eMarker, static_cast<int>( ::FbxNodeAttribute::eMarker)},
    {sipName_eSkeleton, static_cast<int>( ::FbxNodeAttribute::eSkeleton)},
    {sipName_eMesh, static_cast<int>( ::FbxNodeAttribute::eMesh)},
    {sipName_eNurbs, static_cast<int>( ::FbxNodeAttribute::eNurbs)},
    {sipName_ePatch, static_cast<int>( ::FbxNodeAttribute::ePatch)},
    {sipName_eCamera, static_cast<int>( ::FbxNodeAttribute::eCamera)},
    {sipName_eCameraStereo, static_cast<int>( ::FbxNodeAttribute::eCameraStereo)},
    {sipName_eCameraSwitcher, static_cast<int>( ::FbxNodeAttribute::eCameraSwitcher)},
    {sipName_eLight, static_cast<int>( ::FbxNodeAttribute::eLight)},
    {sipName_eOpticalReference, static_cast<int>( ::FbxNodeAttribute::eOpticalReference)},
    {sipName_eOpticalMarker, static_cast<int>( ::FbxNodeAttribute::eOpticalMarker)},
    {sipName_eNurbsCurve, static_cast<int>( ::FbxNodeAttribute::eNurbsCurve)},
    {sipName_eTrimNurbsSurface, static_cast<int>( ::FbxNodeAttribute::eTrimNurbsSurface)},
    {sipName_eBoundary, static_cast<int>( ::FbxNodeAttribute::eBoundary)},
    {sipName_eNurbsSurface, static_cast<int>( ::FbxNodeAttribute::eNurbsSurface)},
    {sipName_eShape, static_cast<int>( ::FbxNodeAttribute::eShape)},
    {sipName_eLODGroup, static_cast<int>( ::FbxNodeAttribute::eLODGroup)},
    {sipName_eSubDiv, static_cast<int>( ::FbxNodeAttribute::eSubDiv)},
    {sipName_eCachedEffect, static_cast<int>( ::FbxNodeAttribute::eCachedEffect)},
    {sipName_eLine, static_cast<int>( ::FbxNodeAttribute::eLine)},
    {0, 0}
};


sipClassTypeDef sipTypeDef_fbx_FbxNodeAttribute = {
    {
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_FbxNodeAttribute,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_FbxNodeAttribute,
        {0, 0, 1},
        5, methods_FbxNodeAttribute,
        4, variables_FbxNodeAttribute,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, intInstances_FbxNodeAttribute, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    SIP_NULLPTR,
    -1,
    -1,
    supers_FbxNodeAttribute,
    slots_FbxNodeAttribute,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_FbxNodeAttribute,
    cast_FbxNodeAttribute,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};
