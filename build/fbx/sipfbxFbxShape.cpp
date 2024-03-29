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




PyDoc_STRVAR(doc_FbxShape_Create, "Create(FbxManager, str) -> FbxShape\n"
"Create(FbxObject, str) -> FbxShape");

extern "C" {static PyObject *meth_FbxShape_Create(PyObject *, PyObject *);}
static PyObject *meth_FbxShape_Create(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxManager* a0;
        const char* a1;
        PyObject *a1Keep;

        if (sipParseArgs(&sipParseErr, sipArgs, "CJ8A8", &sipSelf, sipType_FbxManager, &a0, &a1Keep, &a1))
        {
             ::FbxShape*sipRes;

            sipRes =  ::FbxShape::Create(a0,a1);
            Py_DECREF(a1Keep);

            return sipConvertFromType(sipRes,sipType_FbxShape,SIP_NULLPTR);
        }
    }

    {
         ::FbxObject* a0;
        const char* a1;
        PyObject *a1Keep;

        if (sipParseArgs(&sipParseErr, sipArgs, "CJ8A8", &sipSelf, sipType_FbxObject, &a0, &a1Keep, &a1))
        {
             ::FbxShape*sipRes;

            sipRes =  ::FbxShape::Create(a0,a1);
            Py_DECREF(a1Keep);

            return sipConvertFromType(sipRes,sipType_FbxShape,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxShape, sipName_Create, doc_FbxShape_Create);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxShape_GetClassId, "GetClassId(self) -> FbxClassId");

extern "C" {static PyObject *meth_FbxShape_GetClassId(PyObject *, PyObject *);}
static PyObject *meth_FbxShape_GetClassId(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_FbxShape)) || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::FbxShape *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxShape, &sipCpp))
        {
             ::FbxClassId*sipRes;

            sipRes = new  ::FbxClassId((sipSelfWasArg ? sipCpp-> ::FbxShape::GetClassId() : sipCpp->GetClassId()));

            return sipConvertFromNewType(sipRes,sipType_FbxClassId,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxShape, sipName_GetClassId, doc_FbxShape_GetClassId);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxShape_SetLegacyStyle, "SetLegacyStyle(self, bool)");

extern "C" {static PyObject *meth_FbxShape_SetLegacyStyle(PyObject *, PyObject *);}
static PyObject *meth_FbxShape_SetLegacyStyle(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        bool a0;
         ::FbxShape *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_FbxShape, &sipCpp, &a0))
        {
            sipCpp->SetLegacyStyle(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxShape, sipName_SetLegacyStyle, doc_FbxShape_SetLegacyStyle);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxShape_IsLegacyStyle, "IsLegacyStyle(self) -> bool");

extern "C" {static PyObject *meth_FbxShape_IsLegacyStyle(PyObject *, PyObject *);}
static PyObject *meth_FbxShape_IsLegacyStyle(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxShape *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxShape, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->IsLegacyStyle();

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxShape, sipName_IsLegacyStyle, doc_FbxShape_IsLegacyStyle);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxShape_SetAbsoluteMode, "SetAbsoluteMode(self, bool)");

extern "C" {static PyObject *meth_FbxShape_SetAbsoluteMode(PyObject *, PyObject *);}
static PyObject *meth_FbxShape_SetAbsoluteMode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        bool a0;
         ::FbxShape *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_FbxShape, &sipCpp, &a0))
        {
            sipCpp->SetAbsoluteMode(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxShape, sipName_SetAbsoluteMode, doc_FbxShape_SetAbsoluteMode);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxShape_IsAbsoluteMode, "IsAbsoluteMode(self) -> bool");

extern "C" {static PyObject *meth_FbxShape_IsAbsoluteMode(PyObject *, PyObject *);}
static PyObject *meth_FbxShape_IsAbsoluteMode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxShape *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxShape, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->IsAbsoluteMode();

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxShape, sipName_IsAbsoluteMode, doc_FbxShape_IsAbsoluteMode);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxShape_SetBlendShapeChannel, "SetBlendShapeChannel(self, FbxBlendShapeChannel) -> bool");

extern "C" {static PyObject *meth_FbxShape_SetBlendShapeChannel(PyObject *, PyObject *);}
static PyObject *meth_FbxShape_SetBlendShapeChannel(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxBlendShapeChannel* a0;
         ::FbxShape *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_FbxShape, &sipCpp, sipType_FbxBlendShapeChannel, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->SetBlendShapeChannel(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxShape, sipName_SetBlendShapeChannel, doc_FbxShape_SetBlendShapeChannel);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxShape_GetBlendShapeChannel, "GetBlendShapeChannel(self) -> FbxBlendShapeChannel");

extern "C" {static PyObject *meth_FbxShape_GetBlendShapeChannel(PyObject *, PyObject *);}
static PyObject *meth_FbxShape_GetBlendShapeChannel(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxShape *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxShape, &sipCpp))
        {
             ::FbxBlendShapeChannel*sipRes;

            sipRes = sipCpp->GetBlendShapeChannel();

            return sipConvertFromType(sipRes,sipType_FbxBlendShapeChannel,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxShape, sipName_GetBlendShapeChannel, doc_FbxShape_GetBlendShapeChannel);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxShape_GetBaseGeometry, "GetBaseGeometry(self) -> FbxGeometry");

extern "C" {static PyObject *meth_FbxShape_GetBaseGeometry(PyObject *, PyObject *);}
static PyObject *meth_FbxShape_GetBaseGeometry(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxShape *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxShape, &sipCpp))
        {
             ::FbxGeometry*sipRes;

            sipRes = sipCpp->GetBaseGeometry();

            return sipConvertFromType(sipRes,sipType_FbxGeometry,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxShape, sipName_GetBaseGeometry, doc_FbxShape_GetBaseGeometry);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxShape_Reset, "Reset(self)");

extern "C" {static PyObject *meth_FbxShape_Reset(PyObject *, PyObject *);}
static PyObject *meth_FbxShape_Reset(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxShape *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxShape, &sipCpp))
        {
            sipCpp->Reset();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxShape, sipName_Reset, doc_FbxShape_Reset);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *slot_FbxShape___ne__(PyObject *,PyObject *);}
static PyObject *slot_FbxShape___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxShape *sipCpp = reinterpret_cast< ::FbxShape *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxShape));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxShape* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxShape, &a0))
        {
            bool sipRes;

            sipRes = !sipCpp-> ::FbxShape::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_fbx, ne_slot, sipType_FbxShape, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_FbxShape___eq__(PyObject *,PyObject *);}
static PyObject *slot_FbxShape___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxShape *sipCpp = reinterpret_cast< ::FbxShape *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxShape));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxShape* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxShape, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::FbxShape::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_fbx, eq_slot, sipType_FbxShape, sipSelf, sipArg);
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_FbxShape(void *, const sipTypeDef *);}
static void *cast_FbxShape(void *sipCppV, const sipTypeDef *targetType)
{
     ::FbxShape *sipCpp = reinterpret_cast< ::FbxShape *>(sipCppV);

    if (targetType == sipType_FbxShape)
        return sipCppV;

    sipCppV = ((const sipClassTypeDef *)sipType_FbxGeometryBase)->ctd_cast(static_cast< ::FbxGeometryBase *>(sipCpp), targetType);
    if (sipCppV)
        return sipCppV;

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_FbxShape(void *, int);}
static void release_FbxShape(void *, int)
{
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_FbxShape[] = {{149, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_FbxShape[] = {
    {(void *)slot_FbxShape___ne__, ne_slot},
    {(void *)slot_FbxShape___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_FbxShape[] = {
    {sipName_Create, meth_FbxShape_Create, METH_VARARGS, doc_FbxShape_Create},
    {sipName_GetBaseGeometry, meth_FbxShape_GetBaseGeometry, METH_VARARGS, doc_FbxShape_GetBaseGeometry},
    {sipName_GetBlendShapeChannel, meth_FbxShape_GetBlendShapeChannel, METH_VARARGS, doc_FbxShape_GetBlendShapeChannel},
    {sipName_GetClassId, meth_FbxShape_GetClassId, METH_VARARGS, doc_FbxShape_GetClassId},
    {sipName_IsAbsoluteMode, meth_FbxShape_IsAbsoluteMode, METH_VARARGS, doc_FbxShape_IsAbsoluteMode},
    {sipName_IsLegacyStyle, meth_FbxShape_IsLegacyStyle, METH_VARARGS, doc_FbxShape_IsLegacyStyle},
    {sipName_Reset, meth_FbxShape_Reset, METH_VARARGS, doc_FbxShape_Reset},
    {sipName_SetAbsoluteMode, meth_FbxShape_SetAbsoluteMode, METH_VARARGS, doc_FbxShape_SetAbsoluteMode},
    {sipName_SetBlendShapeChannel, meth_FbxShape_SetBlendShapeChannel, METH_VARARGS, doc_FbxShape_SetBlendShapeChannel},
    {sipName_SetLegacyStyle, meth_FbxShape_SetLegacyStyle, METH_VARARGS, doc_FbxShape_SetLegacyStyle}
};


extern "C" {static PyObject *varget_FbxShape_ClassId(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxShape_ClassId(void *, PyObject *sipPySelf, PyObject *)
{
    static PyObject *sipPy = SIP_NULLPTR;
     ::FbxClassId*sipVal;

    if (sipPy)
    {
        Py_INCREF(sipPy);
        return sipPy;
    }

    sipVal = & ::FbxShape::ClassId;

    sipPy = sipConvertFromType(sipVal, sipType_FbxClassId, SIP_NULLPTR);

    if (sipPy)
    {
        sipKeepReference(sipPy, -41, sipPySelf);
        Py_INCREF(sipPy);
    }

    return sipPy;
}


extern "C" {static int varset_FbxShape_ClassId(void *, PyObject *, PyObject *);}
static int varset_FbxShape_ClassId(void *, PyObject *sipPy, PyObject *)
{
     ::FbxClassId*sipVal;
    int sipIsErr = 0;
    sipVal = reinterpret_cast< ::FbxClassId *>(sipForceConvertToType(sipPy, sipType_FbxClassId, SIP_NULLPTR, SIP_NOT_NONE, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

     ::FbxShape::ClassId = *sipVal;

    return 0;
}

sipVariableDef variables_FbxShape[] = {
    {ClassVariable, sipName_ClassId, (PyMethodDef *)varget_FbxShape_ClassId, (PyMethodDef *)varset_FbxShape_ClassId, SIP_NULLPTR, SIP_NULLPTR},
};


sipClassTypeDef sipTypeDef_fbx_FbxShape = {
    {
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_FbxShape,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_FbxShape,
        {0, 0, 1},
        10, methods_FbxShape,
        1, variables_FbxShape,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    SIP_NULLPTR,
    -1,
    -1,
    supers_FbxShape,
    slots_FbxShape,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_FbxShape,
    cast_FbxShape,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};
