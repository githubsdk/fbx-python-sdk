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




PyDoc_STRVAR(doc_FbxAnimStack_Create, "Create(FbxManager, str) -> FbxAnimStack\n"
"Create(FbxObject, str) -> FbxAnimStack");

extern "C" {static PyObject *meth_FbxAnimStack_Create(PyObject *, PyObject *);}
static PyObject *meth_FbxAnimStack_Create(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxManager* a0;
        const char* a1;
        PyObject *a1Keep;

        if (sipParseArgs(&sipParseErr, sipArgs, "CJ8A8", &sipSelf, sipType_FbxManager, &a0, &a1Keep, &a1))
        {
             ::FbxAnimStack*sipRes;

            sipRes =  ::FbxAnimStack::Create(a0,a1);
            Py_DECREF(a1Keep);

            return sipConvertFromType(sipRes,sipType_FbxAnimStack,SIP_NULLPTR);
        }
    }

    {
         ::FbxObject* a0;
        const char* a1;
        PyObject *a1Keep;

        if (sipParseArgs(&sipParseErr, sipArgs, "CJ8A8", &sipSelf, sipType_FbxObject, &a0, &a1Keep, &a1))
        {
             ::FbxAnimStack*sipRes;

            sipRes =  ::FbxAnimStack::Create(a0,a1);
            Py_DECREF(a1Keep);

            return sipConvertFromType(sipRes,sipType_FbxAnimStack,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxAnimStack, sipName_Create, doc_FbxAnimStack_Create);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxAnimStack_GetClassId, "GetClassId(self) -> FbxClassId");

extern "C" {static PyObject *meth_FbxAnimStack_GetClassId(PyObject *, PyObject *);}
static PyObject *meth_FbxAnimStack_GetClassId(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_FbxAnimStack)) || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::FbxAnimStack *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxAnimStack, &sipCpp))
        {
             ::FbxClassId*sipRes;

            sipRes = new  ::FbxClassId((sipSelfWasArg ? sipCpp-> ::FbxAnimStack::GetClassId() : sipCpp->GetClassId()));

            return sipConvertFromNewType(sipRes,sipType_FbxClassId,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxAnimStack, sipName_GetClassId, doc_FbxAnimStack_GetClassId);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxAnimStack_Reset, "Reset(self, FbxTakeInfo = None)");

extern "C" {static PyObject *meth_FbxAnimStack_Reset(PyObject *, PyObject *);}
static PyObject *meth_FbxAnimStack_Reset(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxTakeInfo* a0 = 0;
         ::FbxAnimStack *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B|J8", &sipSelf, sipType_FbxAnimStack, &sipCpp, sipType_FbxTakeInfo, &a0))
        {
            sipCpp->Reset(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxAnimStack, sipName_Reset, doc_FbxAnimStack_Reset);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxAnimStack_GetLocalTimeSpan, "GetLocalTimeSpan(self) -> FbxTimeSpan");

extern "C" {static PyObject *meth_FbxAnimStack_GetLocalTimeSpan(PyObject *, PyObject *);}
static PyObject *meth_FbxAnimStack_GetLocalTimeSpan(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxAnimStack *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxAnimStack, &sipCpp))
        {
             ::FbxTimeSpan*sipRes;

            sipRes = new  ::FbxTimeSpan(sipCpp->GetLocalTimeSpan());

            return sipConvertFromNewType(sipRes,sipType_FbxTimeSpan,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxAnimStack, sipName_GetLocalTimeSpan, doc_FbxAnimStack_GetLocalTimeSpan);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxAnimStack_SetLocalTimeSpan, "SetLocalTimeSpan(self, FbxTimeSpan)");

extern "C" {static PyObject *meth_FbxAnimStack_SetLocalTimeSpan(PyObject *, PyObject *);}
static PyObject *meth_FbxAnimStack_SetLocalTimeSpan(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxTimeSpan* a0;
         ::FbxAnimStack *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_FbxAnimStack, &sipCpp, sipType_FbxTimeSpan, &a0))
        {
            sipCpp->SetLocalTimeSpan(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxAnimStack, sipName_SetLocalTimeSpan, doc_FbxAnimStack_SetLocalTimeSpan);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxAnimStack_GetReferenceTimeSpan, "GetReferenceTimeSpan(self) -> FbxTimeSpan");

extern "C" {static PyObject *meth_FbxAnimStack_GetReferenceTimeSpan(PyObject *, PyObject *);}
static PyObject *meth_FbxAnimStack_GetReferenceTimeSpan(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxAnimStack *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxAnimStack, &sipCpp))
        {
             ::FbxTimeSpan*sipRes;

            sipRes = new  ::FbxTimeSpan(sipCpp->GetReferenceTimeSpan());

            return sipConvertFromNewType(sipRes,sipType_FbxTimeSpan,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxAnimStack, sipName_GetReferenceTimeSpan, doc_FbxAnimStack_GetReferenceTimeSpan);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxAnimStack_SetReferenceTimeSpan, "SetReferenceTimeSpan(self, FbxTimeSpan)");

extern "C" {static PyObject *meth_FbxAnimStack_SetReferenceTimeSpan(PyObject *, PyObject *);}
static PyObject *meth_FbxAnimStack_SetReferenceTimeSpan(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxTimeSpan* a0;
         ::FbxAnimStack *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_FbxAnimStack, &sipCpp, sipType_FbxTimeSpan, &a0))
        {
            sipCpp->SetReferenceTimeSpan(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxAnimStack, sipName_SetReferenceTimeSpan, doc_FbxAnimStack_SetReferenceTimeSpan);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxAnimStack_BakeLayers, "BakeLayers(self, FbxAnimEvaluator, FbxTime, FbxTime, FbxTime) -> bool");

extern "C" {static PyObject *meth_FbxAnimStack_BakeLayers(PyObject *, PyObject *);}
static PyObject *meth_FbxAnimStack_BakeLayers(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxAnimEvaluator* a0;
         ::FbxTime* a1;
         ::FbxTime* a2;
         ::FbxTime* a3;
         ::FbxAnimStack *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8J9J9J9", &sipSelf, sipType_FbxAnimStack, &sipCpp, sipType_FbxAnimEvaluator, &a0, sipType_FbxTime, &a1, sipType_FbxTime, &a2, sipType_FbxTime, &a3))
        {
            bool sipRes;

            sipRes = sipCpp->BakeLayers(a0,*a1,*a2,*a3);

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxAnimStack, sipName_BakeLayers, doc_FbxAnimStack_BakeLayers);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *slot_FbxAnimStack___ne__(PyObject *,PyObject *);}
static PyObject *slot_FbxAnimStack___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxAnimStack *sipCpp = reinterpret_cast< ::FbxAnimStack *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxAnimStack));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxAnimStack* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxAnimStack, &a0))
        {
            bool sipRes;

            sipRes = !sipCpp-> ::FbxAnimStack::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_fbx, ne_slot, sipType_FbxAnimStack, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_FbxAnimStack___eq__(PyObject *,PyObject *);}
static PyObject *slot_FbxAnimStack___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxAnimStack *sipCpp = reinterpret_cast< ::FbxAnimStack *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxAnimStack));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxAnimStack* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxAnimStack, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::FbxAnimStack::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_fbx, eq_slot, sipType_FbxAnimStack, sipSelf, sipArg);
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_FbxAnimStack(void *, const sipTypeDef *);}
static void *cast_FbxAnimStack(void *sipCppV, const sipTypeDef *targetType)
{
     ::FbxAnimStack *sipCpp = reinterpret_cast< ::FbxAnimStack *>(sipCppV);

    if (targetType == sipType_FbxAnimStack)
        return sipCppV;

    sipCppV = ((const sipClassTypeDef *)sipType_FbxCollection)->ctd_cast(static_cast< ::FbxCollection *>(sipCpp), targetType);
    if (sipCppV)
        return sipCppV;

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_FbxAnimStack(void *, int);}
static void release_FbxAnimStack(void *, int)
{
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_FbxAnimStack[] = {{100, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_FbxAnimStack[] = {
    {(void *)slot_FbxAnimStack___ne__, ne_slot},
    {(void *)slot_FbxAnimStack___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_FbxAnimStack[] = {
    {sipName_BakeLayers, meth_FbxAnimStack_BakeLayers, METH_VARARGS, doc_FbxAnimStack_BakeLayers},
    {sipName_Create, meth_FbxAnimStack_Create, METH_VARARGS, doc_FbxAnimStack_Create},
    {sipName_GetClassId, meth_FbxAnimStack_GetClassId, METH_VARARGS, doc_FbxAnimStack_GetClassId},
    {sipName_GetLocalTimeSpan, meth_FbxAnimStack_GetLocalTimeSpan, METH_VARARGS, doc_FbxAnimStack_GetLocalTimeSpan},
    {sipName_GetReferenceTimeSpan, meth_FbxAnimStack_GetReferenceTimeSpan, METH_VARARGS, doc_FbxAnimStack_GetReferenceTimeSpan},
    {sipName_Reset, meth_FbxAnimStack_Reset, METH_VARARGS, doc_FbxAnimStack_Reset},
    {sipName_SetLocalTimeSpan, meth_FbxAnimStack_SetLocalTimeSpan, METH_VARARGS, doc_FbxAnimStack_SetLocalTimeSpan},
    {sipName_SetReferenceTimeSpan, meth_FbxAnimStack_SetReferenceTimeSpan, METH_VARARGS, doc_FbxAnimStack_SetReferenceTimeSpan}
};


extern "C" {static PyObject *varget_FbxAnimStack_ClassId(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxAnimStack_ClassId(void *, PyObject *sipPySelf, PyObject *)
{
    static PyObject *sipPy = SIP_NULLPTR;
     ::FbxClassId*sipVal;

    if (sipPy)
    {
        Py_INCREF(sipPy);
        return sipPy;
    }

    sipVal = & ::FbxAnimStack::ClassId;

    sipPy = sipConvertFromType(sipVal, sipType_FbxClassId, SIP_NULLPTR);

    if (sipPy)
    {
        sipKeepReference(sipPy, -1173, sipPySelf);
        Py_INCREF(sipPy);
    }

    return sipPy;
}


extern "C" {static int varset_FbxAnimStack_ClassId(void *, PyObject *, PyObject *);}
static int varset_FbxAnimStack_ClassId(void *, PyObject *sipPy, PyObject *)
{
     ::FbxClassId*sipVal;
    int sipIsErr = 0;
    sipVal = reinterpret_cast< ::FbxClassId *>(sipForceConvertToType(sipPy, sipType_FbxClassId, SIP_NULLPTR, SIP_NOT_NONE, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

     ::FbxAnimStack::ClassId = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxAnimStack_Description(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxAnimStack_Description(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
     ::FbxPropertyString*sipVal;
     ::FbxAnimStack *sipCpp = reinterpret_cast< ::FbxAnimStack *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -1175);

    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->Description;

    sipPy = sipConvertFromType(sipVal, sipType_FbxPropertyString, SIP_NULLPTR);

    if (sipPy)
    {
        sipKeepReference(sipPy, -1174, sipPySelf);
        sipKeepReference(sipPySelf, -1175, sipPy);
    }

    return sipPy;
}


extern "C" {static int varset_FbxAnimStack_Description(void *, PyObject *, PyObject *);}
static int varset_FbxAnimStack_Description(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::FbxPropertyString*sipVal;
     ::FbxAnimStack *sipCpp = reinterpret_cast< ::FbxAnimStack *>(sipSelf);

    int sipIsErr = 0;
    sipVal = reinterpret_cast< ::FbxPropertyString *>(sipForceConvertToType(sipPy, sipType_FbxPropertyString, SIP_NULLPTR, SIP_NOT_NONE, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->Description = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxAnimStack_LocalStart(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxAnimStack_LocalStart(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
     ::FbxPropertyFbxTime*sipVal;
     ::FbxAnimStack *sipCpp = reinterpret_cast< ::FbxAnimStack *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -1177);

    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->LocalStart;

    sipPy = sipConvertFromType(sipVal, sipType_FbxPropertyFbxTime, SIP_NULLPTR);

    if (sipPy)
    {
        sipKeepReference(sipPy, -1176, sipPySelf);
        sipKeepReference(sipPySelf, -1177, sipPy);
    }

    return sipPy;
}


extern "C" {static int varset_FbxAnimStack_LocalStart(void *, PyObject *, PyObject *);}
static int varset_FbxAnimStack_LocalStart(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::FbxPropertyFbxTime*sipVal;
     ::FbxAnimStack *sipCpp = reinterpret_cast< ::FbxAnimStack *>(sipSelf);

    int sipIsErr = 0;
    sipVal = reinterpret_cast< ::FbxPropertyFbxTime *>(sipForceConvertToType(sipPy, sipType_FbxPropertyFbxTime, SIP_NULLPTR, SIP_NOT_NONE, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->LocalStart = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxAnimStack_LocalStop(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxAnimStack_LocalStop(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
     ::FbxPropertyFbxTime*sipVal;
     ::FbxAnimStack *sipCpp = reinterpret_cast< ::FbxAnimStack *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -1179);

    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->LocalStop;

    sipPy = sipConvertFromType(sipVal, sipType_FbxPropertyFbxTime, SIP_NULLPTR);

    if (sipPy)
    {
        sipKeepReference(sipPy, -1178, sipPySelf);
        sipKeepReference(sipPySelf, -1179, sipPy);
    }

    return sipPy;
}


extern "C" {static int varset_FbxAnimStack_LocalStop(void *, PyObject *, PyObject *);}
static int varset_FbxAnimStack_LocalStop(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::FbxPropertyFbxTime*sipVal;
     ::FbxAnimStack *sipCpp = reinterpret_cast< ::FbxAnimStack *>(sipSelf);

    int sipIsErr = 0;
    sipVal = reinterpret_cast< ::FbxPropertyFbxTime *>(sipForceConvertToType(sipPy, sipType_FbxPropertyFbxTime, SIP_NULLPTR, SIP_NOT_NONE, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->LocalStop = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxAnimStack_ReferenceStart(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxAnimStack_ReferenceStart(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
     ::FbxPropertyFbxTime*sipVal;
     ::FbxAnimStack *sipCpp = reinterpret_cast< ::FbxAnimStack *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -1181);

    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->ReferenceStart;

    sipPy = sipConvertFromType(sipVal, sipType_FbxPropertyFbxTime, SIP_NULLPTR);

    if (sipPy)
    {
        sipKeepReference(sipPy, -1180, sipPySelf);
        sipKeepReference(sipPySelf, -1181, sipPy);
    }

    return sipPy;
}


extern "C" {static int varset_FbxAnimStack_ReferenceStart(void *, PyObject *, PyObject *);}
static int varset_FbxAnimStack_ReferenceStart(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::FbxPropertyFbxTime*sipVal;
     ::FbxAnimStack *sipCpp = reinterpret_cast< ::FbxAnimStack *>(sipSelf);

    int sipIsErr = 0;
    sipVal = reinterpret_cast< ::FbxPropertyFbxTime *>(sipForceConvertToType(sipPy, sipType_FbxPropertyFbxTime, SIP_NULLPTR, SIP_NOT_NONE, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->ReferenceStart = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxAnimStack_ReferenceStop(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxAnimStack_ReferenceStop(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
     ::FbxPropertyFbxTime*sipVal;
     ::FbxAnimStack *sipCpp = reinterpret_cast< ::FbxAnimStack *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -1183);

    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->ReferenceStop;

    sipPy = sipConvertFromType(sipVal, sipType_FbxPropertyFbxTime, SIP_NULLPTR);

    if (sipPy)
    {
        sipKeepReference(sipPy, -1182, sipPySelf);
        sipKeepReference(sipPySelf, -1183, sipPy);
    }

    return sipPy;
}


extern "C" {static int varset_FbxAnimStack_ReferenceStop(void *, PyObject *, PyObject *);}
static int varset_FbxAnimStack_ReferenceStop(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::FbxPropertyFbxTime*sipVal;
     ::FbxAnimStack *sipCpp = reinterpret_cast< ::FbxAnimStack *>(sipSelf);

    int sipIsErr = 0;
    sipVal = reinterpret_cast< ::FbxPropertyFbxTime *>(sipForceConvertToType(sipPy, sipType_FbxPropertyFbxTime, SIP_NULLPTR, SIP_NOT_NONE, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->ReferenceStop = *sipVal;

    return 0;
}

sipVariableDef variables_FbxAnimStack[] = {
    {ClassVariable, sipName_ClassId, (PyMethodDef *)varget_FbxAnimStack_ClassId, (PyMethodDef *)varset_FbxAnimStack_ClassId, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_Description, (PyMethodDef *)varget_FbxAnimStack_Description, (PyMethodDef *)varset_FbxAnimStack_Description, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_LocalStart, (PyMethodDef *)varget_FbxAnimStack_LocalStart, (PyMethodDef *)varset_FbxAnimStack_LocalStart, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_LocalStop, (PyMethodDef *)varget_FbxAnimStack_LocalStop, (PyMethodDef *)varset_FbxAnimStack_LocalStop, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_ReferenceStart, (PyMethodDef *)varget_FbxAnimStack_ReferenceStart, (PyMethodDef *)varset_FbxAnimStack_ReferenceStart, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_ReferenceStop, (PyMethodDef *)varget_FbxAnimStack_ReferenceStop, (PyMethodDef *)varset_FbxAnimStack_ReferenceStop, SIP_NULLPTR, SIP_NULLPTR},
};


sipClassTypeDef sipTypeDef_fbx_FbxAnimStack = {
    {
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_FbxAnimStack,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_FbxAnimStack,
        {0, 0, 1},
        8, methods_FbxAnimStack,
        6, variables_FbxAnimStack,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    SIP_NULLPTR,
    -1,
    -1,
    supers_FbxAnimStack,
    slots_FbxAnimStack,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_FbxAnimStack,
    cast_FbxAnimStack,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};
