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




PyDoc_STRVAR(doc_FbxMarker_Create, "Create(FbxManager, str) -> FbxMarker\n"
"Create(FbxObject, str) -> FbxMarker");

extern "C" {static PyObject *meth_FbxMarker_Create(PyObject *, PyObject *);}
static PyObject *meth_FbxMarker_Create(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxManager* a0;
        const char* a1;
        PyObject *a1Keep;

        if (sipParseArgs(&sipParseErr, sipArgs, "CJ8A8", &sipSelf, sipType_FbxManager, &a0, &a1Keep, &a1))
        {
             ::FbxMarker*sipRes;

            sipRes =  ::FbxMarker::Create(a0,a1);
            Py_DECREF(a1Keep);

            return sipConvertFromType(sipRes,sipType_FbxMarker,SIP_NULLPTR);
        }
    }

    {
         ::FbxObject* a0;
        const char* a1;
        PyObject *a1Keep;

        if (sipParseArgs(&sipParseErr, sipArgs, "CJ8A8", &sipSelf, sipType_FbxObject, &a0, &a1Keep, &a1))
        {
             ::FbxMarker*sipRes;

            sipRes =  ::FbxMarker::Create(a0,a1);
            Py_DECREF(a1Keep);

            return sipConvertFromType(sipRes,sipType_FbxMarker,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxMarker, sipName_Create, doc_FbxMarker_Create);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxMarker_GetClassId, "GetClassId(self) -> FbxClassId");

extern "C" {static PyObject *meth_FbxMarker_GetClassId(PyObject *, PyObject *);}
static PyObject *meth_FbxMarker_GetClassId(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_FbxMarker)) || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::FbxMarker *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxMarker, &sipCpp))
        {
             ::FbxClassId*sipRes;

            sipRes = new  ::FbxClassId((sipSelfWasArg ? sipCpp-> ::FbxMarker::GetClassId() : sipCpp->GetClassId()));

            return sipConvertFromNewType(sipRes,sipType_FbxClassId,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxMarker, sipName_GetClassId, doc_FbxMarker_GetClassId);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxMarker_GetAttributeType, "GetAttributeType(self) -> FbxNodeAttribute.EType");

extern "C" {static PyObject *meth_FbxMarker_GetAttributeType(PyObject *, PyObject *);}
static PyObject *meth_FbxMarker_GetAttributeType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_FbxMarker)) || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::FbxMarker *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxMarker, &sipCpp))
        {
             ::FbxNodeAttribute::EType sipRes;

            sipRes = (sipSelfWasArg ? sipCpp-> ::FbxMarker::GetAttributeType() : sipCpp->GetAttributeType());

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_FbxNodeAttribute_EType);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxMarker, sipName_GetAttributeType, doc_FbxMarker_GetAttributeType);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxMarker_Reset, "Reset(self)");

extern "C" {static PyObject *meth_FbxMarker_Reset(PyObject *, PyObject *);}
static PyObject *meth_FbxMarker_Reset(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxMarker *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxMarker, &sipCpp))
        {
            sipCpp->Reset();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxMarker, sipName_Reset, doc_FbxMarker_Reset);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxMarker_SetType, "SetType(self, FbxMarker.EType)");

extern "C" {static PyObject *meth_FbxMarker_SetType(PyObject *, PyObject *);}
static PyObject *meth_FbxMarker_SetType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxMarker::EType a0;
         ::FbxMarker *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_FbxMarker, &sipCpp, sipType_FbxMarker_EType, &a0))
        {
            sipCpp->SetType(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxMarker, sipName_SetType, doc_FbxMarker_SetType);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxMarker_GetType, "GetType(self) -> FbxMarker.EType");

extern "C" {static PyObject *meth_FbxMarker_GetType(PyObject *, PyObject *);}
static PyObject *meth_FbxMarker_GetType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxMarker *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxMarker, &sipCpp))
        {
             ::FbxMarker::EType sipRes;

            sipRes = sipCpp->GetType();

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_FbxMarker_EType);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxMarker, sipName_GetType, doc_FbxMarker_GetType);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxMarker_GetDefaultOcclusion, "GetDefaultOcclusion(self) -> float");

extern "C" {static PyObject *meth_FbxMarker_GetDefaultOcclusion(PyObject *, PyObject *);}
static PyObject *meth_FbxMarker_GetDefaultOcclusion(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxMarker *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxMarker, &sipCpp))
        {
            double sipRes;

            sipRes = sipCpp->GetDefaultOcclusion();

            return PyFloat_FromDouble(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxMarker, sipName_GetDefaultOcclusion, doc_FbxMarker_GetDefaultOcclusion);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxMarker_SetDefaultOcclusion, "SetDefaultOcclusion(self, float)");

extern "C" {static PyObject *meth_FbxMarker_SetDefaultOcclusion(PyObject *, PyObject *);}
static PyObject *meth_FbxMarker_SetDefaultOcclusion(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        double a0;
         ::FbxMarker *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_FbxMarker, &sipCpp, &a0))
        {
            sipCpp->SetDefaultOcclusion(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxMarker, sipName_SetDefaultOcclusion, doc_FbxMarker_SetDefaultOcclusion);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxMarker_GetDefaultIKReachTranslation, "GetDefaultIKReachTranslation(self) -> float");

extern "C" {static PyObject *meth_FbxMarker_GetDefaultIKReachTranslation(PyObject *, PyObject *);}
static PyObject *meth_FbxMarker_GetDefaultIKReachTranslation(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxMarker *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxMarker, &sipCpp))
        {
            double sipRes;

            sipRes = sipCpp->GetDefaultIKReachTranslation();

            return PyFloat_FromDouble(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxMarker, sipName_GetDefaultIKReachTranslation, doc_FbxMarker_GetDefaultIKReachTranslation);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxMarker_SetDefaultIKReachTranslation, "SetDefaultIKReachTranslation(self, float)");

extern "C" {static PyObject *meth_FbxMarker_SetDefaultIKReachTranslation(PyObject *, PyObject *);}
static PyObject *meth_FbxMarker_SetDefaultIKReachTranslation(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        double a0;
         ::FbxMarker *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_FbxMarker, &sipCpp, &a0))
        {
            sipCpp->SetDefaultIKReachTranslation(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxMarker, sipName_SetDefaultIKReachTranslation, doc_FbxMarker_SetDefaultIKReachTranslation);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxMarker_GetDefaultIKReachRotation, "GetDefaultIKReachRotation(self) -> float");

extern "C" {static PyObject *meth_FbxMarker_GetDefaultIKReachRotation(PyObject *, PyObject *);}
static PyObject *meth_FbxMarker_GetDefaultIKReachRotation(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxMarker *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxMarker, &sipCpp))
        {
            double sipRes;

            sipRes = sipCpp->GetDefaultIKReachRotation();

            return PyFloat_FromDouble(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxMarker, sipName_GetDefaultIKReachRotation, doc_FbxMarker_GetDefaultIKReachRotation);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxMarker_SetDefaultIKReachRotation, "SetDefaultIKReachRotation(self, float)");

extern "C" {static PyObject *meth_FbxMarker_SetDefaultIKReachRotation(PyObject *, PyObject *);}
static PyObject *meth_FbxMarker_SetDefaultIKReachRotation(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        double a0;
         ::FbxMarker *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_FbxMarker, &sipCpp, &a0))
        {
            sipCpp->SetDefaultIKReachRotation(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxMarker, sipName_SetDefaultIKReachRotation, doc_FbxMarker_SetDefaultIKReachRotation);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxMarker_GetDefaultColor, "GetDefaultColor(self, FbxColor) -> FbxColor");

extern "C" {static PyObject *meth_FbxMarker_GetDefaultColor(PyObject *, PyObject *);}
static PyObject *meth_FbxMarker_GetDefaultColor(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxColor* a0;
        const  ::FbxMarker *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_FbxMarker, &sipCpp, sipType_FbxColor, &a0))
        {
             ::FbxColor*sipRes;

            sipRes = &sipCpp->GetDefaultColor(*a0);

            return sipConvertFromType(sipRes,sipType_FbxColor,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxMarker, sipName_GetDefaultColor, doc_FbxMarker_GetDefaultColor);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxMarker_SetDefaultColor, "SetDefaultColor(self, FbxColor)");

extern "C" {static PyObject *meth_FbxMarker_SetDefaultColor(PyObject *, PyObject *);}
static PyObject *meth_FbxMarker_SetDefaultColor(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxColor* a0;
         ::FbxMarker *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_FbxMarker, &sipCpp, sipType_FbxColor, &a0))
        {
            sipCpp->SetDefaultColor(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxMarker, sipName_SetDefaultColor, doc_FbxMarker_SetDefaultColor);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxMarker_GetOcclusion, "GetOcclusion(self) -> FbxProperty");

extern "C" {static PyObject *meth_FbxMarker_GetOcclusion(PyObject *, PyObject *);}
static PyObject *meth_FbxMarker_GetOcclusion(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxMarker *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxMarker, &sipCpp))
        {
             ::FbxProperty*sipRes;

            sipRes = new  ::FbxProperty(sipCpp->GetOcclusion());

            return sipConvertFromNewType(sipRes,sipType_FbxProperty,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxMarker, sipName_GetOcclusion, doc_FbxMarker_GetOcclusion);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxMarker_GetIKReachTranslation, "GetIKReachTranslation(self) -> FbxProperty");

extern "C" {static PyObject *meth_FbxMarker_GetIKReachTranslation(PyObject *, PyObject *);}
static PyObject *meth_FbxMarker_GetIKReachTranslation(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxMarker *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxMarker, &sipCpp))
        {
             ::FbxProperty*sipRes;

            sipRes = new  ::FbxProperty(sipCpp->GetIKReachTranslation());

            return sipConvertFromNewType(sipRes,sipType_FbxProperty,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxMarker, sipName_GetIKReachTranslation, doc_FbxMarker_GetIKReachTranslation);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxMarker_GetIKReachRotation, "GetIKReachRotation(self) -> FbxProperty");

extern "C" {static PyObject *meth_FbxMarker_GetIKReachRotation(PyObject *, PyObject *);}
static PyObject *meth_FbxMarker_GetIKReachRotation(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxMarker *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxMarker, &sipCpp))
        {
             ::FbxProperty*sipRes;

            sipRes = new  ::FbxProperty(sipCpp->GetIKReachRotation());

            return sipConvertFromNewType(sipRes,sipType_FbxProperty,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxMarker, sipName_GetIKReachRotation, doc_FbxMarker_GetIKReachRotation);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *slot_FbxMarker___ne__(PyObject *,PyObject *);}
static PyObject *slot_FbxMarker___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxMarker *sipCpp = reinterpret_cast< ::FbxMarker *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxMarker));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxMarker* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxMarker, &a0))
        {
            bool sipRes;

            sipRes = !sipCpp-> ::FbxMarker::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_fbx, ne_slot, sipType_FbxMarker, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_FbxMarker___eq__(PyObject *,PyObject *);}
static PyObject *slot_FbxMarker___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxMarker *sipCpp = reinterpret_cast< ::FbxMarker *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxMarker));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxMarker* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxMarker, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::FbxMarker::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_fbx, eq_slot, sipType_FbxMarker, sipSelf, sipArg);
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_FbxMarker(void *, const sipTypeDef *);}
static void *cast_FbxMarker(void *sipCppV, const sipTypeDef *targetType)
{
     ::FbxMarker *sipCpp = reinterpret_cast< ::FbxMarker *>(sipCppV);

    if (targetType == sipType_FbxMarker)
        return sipCppV;

    sipCppV = ((const sipClassTypeDef *)sipType_FbxNodeAttribute)->ctd_cast(static_cast< ::FbxNodeAttribute *>(sipCpp), targetType);
    if (sipCppV)
        return sipCppV;

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_FbxMarker(void *, int);}
static void release_FbxMarker(void *, int)
{
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_FbxMarker[] = {{233, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_FbxMarker[] = {
    {(void *)slot_FbxMarker___ne__, ne_slot},
    {(void *)slot_FbxMarker___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_FbxMarker[] = {
    {sipName_Create, meth_FbxMarker_Create, METH_VARARGS, doc_FbxMarker_Create},
    {sipName_GetAttributeType, meth_FbxMarker_GetAttributeType, METH_VARARGS, doc_FbxMarker_GetAttributeType},
    {sipName_GetClassId, meth_FbxMarker_GetClassId, METH_VARARGS, doc_FbxMarker_GetClassId},
    {sipName_GetDefaultColor, meth_FbxMarker_GetDefaultColor, METH_VARARGS, doc_FbxMarker_GetDefaultColor},
    {sipName_GetDefaultIKReachRotation, meth_FbxMarker_GetDefaultIKReachRotation, METH_VARARGS, doc_FbxMarker_GetDefaultIKReachRotation},
    {sipName_GetDefaultIKReachTranslation, meth_FbxMarker_GetDefaultIKReachTranslation, METH_VARARGS, doc_FbxMarker_GetDefaultIKReachTranslation},
    {sipName_GetDefaultOcclusion, meth_FbxMarker_GetDefaultOcclusion, METH_VARARGS, doc_FbxMarker_GetDefaultOcclusion},
    {sipName_GetIKReachRotation, meth_FbxMarker_GetIKReachRotation, METH_VARARGS, doc_FbxMarker_GetIKReachRotation},
    {sipName_GetIKReachTranslation, meth_FbxMarker_GetIKReachTranslation, METH_VARARGS, doc_FbxMarker_GetIKReachTranslation},
    {sipName_GetOcclusion, meth_FbxMarker_GetOcclusion, METH_VARARGS, doc_FbxMarker_GetOcclusion},
    {sipName_GetType, meth_FbxMarker_GetType, METH_VARARGS, doc_FbxMarker_GetType},
    {sipName_Reset, meth_FbxMarker_Reset, METH_VARARGS, doc_FbxMarker_Reset},
    {sipName_SetDefaultColor, meth_FbxMarker_SetDefaultColor, METH_VARARGS, doc_FbxMarker_SetDefaultColor},
    {sipName_SetDefaultIKReachRotation, meth_FbxMarker_SetDefaultIKReachRotation, METH_VARARGS, doc_FbxMarker_SetDefaultIKReachRotation},
    {sipName_SetDefaultIKReachTranslation, meth_FbxMarker_SetDefaultIKReachTranslation, METH_VARARGS, doc_FbxMarker_SetDefaultIKReachTranslation},
    {sipName_SetDefaultOcclusion, meth_FbxMarker_SetDefaultOcclusion, METH_VARARGS, doc_FbxMarker_SetDefaultOcclusion},
    {sipName_SetType, meth_FbxMarker_SetType, METH_VARARGS, doc_FbxMarker_SetType}
};


extern "C" {static PyObject *varget_FbxMarker_ClassId(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxMarker_ClassId(void *, PyObject *sipPySelf, PyObject *)
{
    static PyObject *sipPy = SIP_NULLPTR;
     ::FbxClassId*sipVal;

    if (sipPy)
    {
        Py_INCREF(sipPy);
        return sipPy;
    }

    sipVal = & ::FbxMarker::ClassId;

    sipPy = sipConvertFromType(sipVal, sipType_FbxClassId, SIP_NULLPTR);

    if (sipPy)
    {
        sipKeepReference(sipPy, -289, sipPySelf);
        Py_INCREF(sipPy);
    }

    return sipPy;
}


extern "C" {static int varset_FbxMarker_ClassId(void *, PyObject *, PyObject *);}
static int varset_FbxMarker_ClassId(void *, PyObject *sipPy, PyObject *)
{
     ::FbxClassId*sipVal;
    int sipIsErr = 0;
    sipVal = reinterpret_cast< ::FbxClassId *>(sipForceConvertToType(sipPy, sipType_FbxClassId, SIP_NULLPTR, SIP_NOT_NONE, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

     ::FbxMarker::ClassId = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxMarker_DrawLink(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxMarker_DrawLink(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
     ::FbxPropertyBool1*sipVal;
     ::FbxMarker *sipCpp = reinterpret_cast< ::FbxMarker *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -291);

    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->DrawLink;

    sipPy = sipConvertFromType(sipVal, sipType_FbxPropertyBool1, SIP_NULLPTR);

    if (sipPy)
    {
        sipKeepReference(sipPy, -290, sipPySelf);
        sipKeepReference(sipPySelf, -291, sipPy);
    }

    return sipPy;
}


extern "C" {static int varset_FbxMarker_DrawLink(void *, PyObject *, PyObject *);}
static int varset_FbxMarker_DrawLink(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::FbxPropertyBool1*sipVal;
     ::FbxMarker *sipCpp = reinterpret_cast< ::FbxMarker *>(sipSelf);

    int sipIsErr = 0;
    sipVal = reinterpret_cast< ::FbxPropertyBool1 *>(sipForceConvertToType(sipPy, sipType_FbxPropertyBool1, SIP_NULLPTR, SIP_NOT_NONE, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->DrawLink = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxMarker_IKPivot(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxMarker_IKPivot(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
     ::FbxPropertyDouble3*sipVal;
     ::FbxMarker *sipCpp = reinterpret_cast< ::FbxMarker *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -293);

    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->IKPivot;

    sipPy = sipConvertFromType(sipVal, sipType_FbxPropertyDouble3, SIP_NULLPTR);

    if (sipPy)
    {
        sipKeepReference(sipPy, -292, sipPySelf);
        sipKeepReference(sipPySelf, -293, sipPy);
    }

    return sipPy;
}


extern "C" {static int varset_FbxMarker_IKPivot(void *, PyObject *, PyObject *);}
static int varset_FbxMarker_IKPivot(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::FbxPropertyDouble3*sipVal;
     ::FbxMarker *sipCpp = reinterpret_cast< ::FbxMarker *>(sipSelf);

    int sipIsErr = 0;
    sipVal = reinterpret_cast< ::FbxPropertyDouble3 *>(sipForceConvertToType(sipPy, sipType_FbxPropertyDouble3, SIP_NULLPTR, SIP_NOT_NONE, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->IKPivot = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxMarker_Look(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxMarker_Look(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
     ::FbxPropertyELook*sipVal;
     ::FbxMarker *sipCpp = reinterpret_cast< ::FbxMarker *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -295);

    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->Look;

    sipPy = sipConvertFromType(sipVal, sipType_FbxPropertyELook, SIP_NULLPTR);

    if (sipPy)
    {
        sipKeepReference(sipPy, -294, sipPySelf);
        sipKeepReference(sipPySelf, -295, sipPy);
    }

    return sipPy;
}


extern "C" {static int varset_FbxMarker_Look(void *, PyObject *, PyObject *);}
static int varset_FbxMarker_Look(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::FbxPropertyELook*sipVal;
     ::FbxMarker *sipCpp = reinterpret_cast< ::FbxMarker *>(sipSelf);

    int sipIsErr = 0;
    sipVal = reinterpret_cast< ::FbxPropertyELook *>(sipForceConvertToType(sipPy, sipType_FbxPropertyELook, SIP_NULLPTR, SIP_NOT_NONE, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->Look = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxMarker_ShowLabel(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxMarker_ShowLabel(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
     ::FbxPropertyBool1*sipVal;
     ::FbxMarker *sipCpp = reinterpret_cast< ::FbxMarker *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -297);

    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->ShowLabel;

    sipPy = sipConvertFromType(sipVal, sipType_FbxPropertyBool1, SIP_NULLPTR);

    if (sipPy)
    {
        sipKeepReference(sipPy, -296, sipPySelf);
        sipKeepReference(sipPySelf, -297, sipPy);
    }

    return sipPy;
}


extern "C" {static int varset_FbxMarker_ShowLabel(void *, PyObject *, PyObject *);}
static int varset_FbxMarker_ShowLabel(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::FbxPropertyBool1*sipVal;
     ::FbxMarker *sipCpp = reinterpret_cast< ::FbxMarker *>(sipSelf);

    int sipIsErr = 0;
    sipVal = reinterpret_cast< ::FbxPropertyBool1 *>(sipForceConvertToType(sipPy, sipType_FbxPropertyBool1, SIP_NULLPTR, SIP_NOT_NONE, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->ShowLabel = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxMarker_Size(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxMarker_Size(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
     ::FbxPropertyDouble1*sipVal;
     ::FbxMarker *sipCpp = reinterpret_cast< ::FbxMarker *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -299);

    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->Size;

    sipPy = sipConvertFromType(sipVal, sipType_FbxPropertyDouble1, SIP_NULLPTR);

    if (sipPy)
    {
        sipKeepReference(sipPy, -298, sipPySelf);
        sipKeepReference(sipPySelf, -299, sipPy);
    }

    return sipPy;
}


extern "C" {static int varset_FbxMarker_Size(void *, PyObject *, PyObject *);}
static int varset_FbxMarker_Size(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::FbxPropertyDouble1*sipVal;
     ::FbxMarker *sipCpp = reinterpret_cast< ::FbxMarker *>(sipSelf);

    int sipIsErr = 0;
    sipVal = reinterpret_cast< ::FbxPropertyDouble1 *>(sipForceConvertToType(sipPy, sipType_FbxPropertyDouble1, SIP_NULLPTR, SIP_NOT_NONE, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->Size = *sipVal;

    return 0;
}

sipVariableDef variables_FbxMarker[] = {
    {ClassVariable, sipName_ClassId, (PyMethodDef *)varget_FbxMarker_ClassId, (PyMethodDef *)varset_FbxMarker_ClassId, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_DrawLink, (PyMethodDef *)varget_FbxMarker_DrawLink, (PyMethodDef *)varset_FbxMarker_DrawLink, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_IKPivot, (PyMethodDef *)varget_FbxMarker_IKPivot, (PyMethodDef *)varset_FbxMarker_IKPivot, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_Look, (PyMethodDef *)varget_FbxMarker_Look, (PyMethodDef *)varset_FbxMarker_Look, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_ShowLabel, (PyMethodDef *)varget_FbxMarker_ShowLabel, (PyMethodDef *)varset_FbxMarker_ShowLabel, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_Size, (PyMethodDef *)varget_FbxMarker_Size, (PyMethodDef *)varset_FbxMarker_Size, SIP_NULLPTR, SIP_NULLPTR},
};


/* Define the enum members and ints to be added to this type. */
static sipIntInstanceDef intInstances_FbxMarker[] = {
    {sipName_eCube, static_cast<int>( ::FbxMarker::eCube)},
    {sipName_eHardCross, static_cast<int>( ::FbxMarker::eHardCross)},
    {sipName_eLightCross, static_cast<int>( ::FbxMarker::eLightCross)},
    {sipName_eSphere, static_cast<int>( ::FbxMarker::eSphere)},
    {sipName_eCapsule, static_cast<int>( ::FbxMarker::eCapsule)},
    {sipName_eBox, static_cast<int>( ::FbxMarker::eBox)},
    {sipName_eBone, static_cast<int>( ::FbxMarker::eBone)},
    {sipName_eCircle, static_cast<int>( ::FbxMarker::eCircle)},
    {sipName_eSquare, static_cast<int>( ::FbxMarker::eSquare)},
    {sipName_eStick, static_cast<int>( ::FbxMarker::eStick)},
    {sipName_eNone, static_cast<int>( ::FbxMarker::eNone)},
    {sipName_eStandard, static_cast<int>( ::FbxMarker::eStandard)},
    {sipName_eOptical, static_cast<int>( ::FbxMarker::eOptical)},
    {sipName_eEffectorFK, static_cast<int>( ::FbxMarker::eEffectorFK)},
    {sipName_eEffectorIK, static_cast<int>( ::FbxMarker::eEffectorIK)},
    {0, 0}
};


sipClassTypeDef sipTypeDef_fbx_FbxMarker = {
    {
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_FbxMarker,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_FbxMarker,
        {0, 0, 1},
        17, methods_FbxMarker,
        6, variables_FbxMarker,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, intInstances_FbxMarker, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    SIP_NULLPTR,
    -1,
    -1,
    supers_FbxMarker,
    slots_FbxMarker,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_FbxMarker,
    cast_FbxMarker,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};
