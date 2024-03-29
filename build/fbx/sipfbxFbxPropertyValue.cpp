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




PyDoc_STRVAR(doc_FbxPropertyValue_Create, "Create(sip.voidptr, EFbxType) -> FbxPropertyValue");

extern "C" {static PyObject *meth_FbxPropertyValue_Create(PyObject *, PyObject *);}
static PyObject *meth_FbxPropertyValue_Create(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        void* a0;
         ::EFbxType a1;

        if (sipParseArgs(&sipParseErr, sipArgs, "CvE", &sipSelf, &a0, sipType_EFbxType, &a1))
        {
             ::FbxPropertyValue*sipRes;

            sipRes =  ::FbxPropertyValue::Create(a0,a1);

            return sipConvertFromType(sipRes,sipType_FbxPropertyValue,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxPropertyValue, sipName_Create, doc_FbxPropertyValue_Create);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxPropertyValue_Destroy, "Destroy(self)");

extern "C" {static PyObject *meth_FbxPropertyValue_Destroy(PyObject *, PyObject *);}
static PyObject *meth_FbxPropertyValue_Destroy(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxPropertyValue *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxPropertyValue, &sipCpp))
        {
            sipCpp->Destroy();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxPropertyValue, sipName_Destroy, doc_FbxPropertyValue_Destroy);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxPropertyValue_Get, "Get(self, sip.voidptr, EFbxType) -> bool");

extern "C" {static PyObject *meth_FbxPropertyValue_Get(PyObject *, PyObject *);}
static PyObject *meth_FbxPropertyValue_Get(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        void* a0;
         ::EFbxType a1;
         ::FbxPropertyValue *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BvE", &sipSelf, sipType_FbxPropertyValue, &sipCpp, &a0, sipType_EFbxType, &a1))
        {
            bool sipRes;

            sipRes = sipCpp->Get(a0,a1);

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxPropertyValue, sipName_Get, doc_FbxPropertyValue_Get);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxPropertyValue_Set, "Set(self, sip.voidptr, EFbxType) -> bool");

extern "C" {static PyObject *meth_FbxPropertyValue_Set(PyObject *, PyObject *);}
static PyObject *meth_FbxPropertyValue_Set(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const void* a0;
         ::EFbxType a1;
         ::FbxPropertyValue *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BvE", &sipSelf, sipType_FbxPropertyValue, &sipCpp, &a0, sipType_EFbxType, &a1))
        {
            bool sipRes;

            sipRes = sipCpp->Set(a0,a1);

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxPropertyValue, sipName_Set, doc_FbxPropertyValue_Set);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxPropertyValue_GetSizeOf, "GetSizeOf(self) -> int");

extern "C" {static PyObject *meth_FbxPropertyValue_GetSizeOf(PyObject *, PyObject *);}
static PyObject *meth_FbxPropertyValue_GetSizeOf(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxPropertyValue *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxPropertyValue, &sipCpp))
        {
            size_t sipRes;

            sipRes = sipCpp->GetSizeOf();

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxPropertyValue, sipName_GetSizeOf, doc_FbxPropertyValue_GetSizeOf);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxPropertyValue_GetComponentCount, "GetComponentCount(self) -> int");

extern "C" {static PyObject *meth_FbxPropertyValue_GetComponentCount(PyObject *, PyObject *);}
static PyObject *meth_FbxPropertyValue_GetComponentCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxPropertyValue *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxPropertyValue, &sipCpp))
        {
            size_t sipRes;

            sipRes = sipCpp->GetComponentCount();

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxPropertyValue, sipName_GetComponentCount, doc_FbxPropertyValue_GetComponentCount);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxPropertyValue_IncRef, "IncRef(self)");

extern "C" {static PyObject *meth_FbxPropertyValue_IncRef(PyObject *, PyObject *);}
static PyObject *meth_FbxPropertyValue_IncRef(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxPropertyValue *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxPropertyValue, &sipCpp))
        {
            sipCpp->IncRef();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxPropertyValue, sipName_IncRef, doc_FbxPropertyValue_IncRef);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxPropertyValue_DecRef, "DecRef(self)");

extern "C" {static PyObject *meth_FbxPropertyValue_DecRef(PyObject *, PyObject *);}
static PyObject *meth_FbxPropertyValue_DecRef(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxPropertyValue *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxPropertyValue, &sipCpp))
        {
            sipCpp->DecRef();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxPropertyValue, sipName_DecRef, doc_FbxPropertyValue_DecRef);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxPropertyValue_GetRef, "GetRef(self) -> int");

extern "C" {static PyObject *meth_FbxPropertyValue_GetRef(PyObject *, PyObject *);}
static PyObject *meth_FbxPropertyValue_GetRef(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxPropertyValue *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxPropertyValue, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->GetRef();

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxPropertyValue, sipName_GetRef, doc_FbxPropertyValue_GetRef);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_FbxPropertyValue(void *, int);}
static void release_FbxPropertyValue(void *, int)
{
}


extern "C" {static void *init_type_FbxPropertyValue(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_FbxPropertyValue(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::FbxPropertyValue *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new  ::FbxPropertyValue();

            return sipCpp;
        }
    }

    {
        const  ::FbxPropertyValue* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_FbxPropertyValue, &a0))
        {
            sipCpp = new  ::FbxPropertyValue(*a0);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


static PyMethodDef methods_FbxPropertyValue[] = {
    {sipName_Create, meth_FbxPropertyValue_Create, METH_VARARGS, doc_FbxPropertyValue_Create},
    {sipName_DecRef, meth_FbxPropertyValue_DecRef, METH_VARARGS, doc_FbxPropertyValue_DecRef},
    {sipName_Destroy, meth_FbxPropertyValue_Destroy, METH_VARARGS, doc_FbxPropertyValue_Destroy},
    {sipName_Get, meth_FbxPropertyValue_Get, METH_VARARGS, doc_FbxPropertyValue_Get},
    {sipName_GetComponentCount, meth_FbxPropertyValue_GetComponentCount, METH_VARARGS, doc_FbxPropertyValue_GetComponentCount},
    {sipName_GetRef, meth_FbxPropertyValue_GetRef, METH_VARARGS, doc_FbxPropertyValue_GetRef},
    {sipName_GetSizeOf, meth_FbxPropertyValue_GetSizeOf, METH_VARARGS, doc_FbxPropertyValue_GetSizeOf},
    {sipName_IncRef, meth_FbxPropertyValue_IncRef, METH_VARARGS, doc_FbxPropertyValue_IncRef},
    {sipName_Set, meth_FbxPropertyValue_Set, METH_VARARGS, doc_FbxPropertyValue_Set}
};

PyDoc_STRVAR(doc_FbxPropertyValue, "\1FbxPropertyValue()\n"
"FbxPropertyValue(FbxPropertyValue)");


sipClassTypeDef sipTypeDef_fbx_FbxPropertyValue = {
    {
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_FbxPropertyValue,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_FbxPropertyValue,
        {0, 0, 1},
        9, methods_FbxPropertyValue,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_FbxPropertyValue,
    -1,
    -1,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_FbxPropertyValue,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_FbxPropertyValue,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};
