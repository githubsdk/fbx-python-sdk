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




PyDoc_STRVAR(doc_FbxNameHandler_SetInitialName, "SetInitialName(self, str)");

extern "C" {static PyObject *meth_FbxNameHandler_SetInitialName(PyObject *, PyObject *);}
static PyObject *meth_FbxNameHandler_SetInitialName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const char* a0;
        PyObject *a0Keep;
         ::FbxNameHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BA8", &sipSelf, sipType_FbxNameHandler, &sipCpp, &a0Keep, &a0))
        {
            sipCpp->SetInitialName(a0);
            Py_DECREF(a0Keep);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxNameHandler, sipName_SetInitialName, doc_FbxNameHandler_SetInitialName);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxNameHandler_GetInitialName, "GetInitialName(self) -> str");

extern "C" {static PyObject *meth_FbxNameHandler_GetInitialName(PyObject *, PyObject *);}
static PyObject *meth_FbxNameHandler_GetInitialName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxNameHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxNameHandler, &sipCpp))
        {
            const char*sipRes;

            sipRes = sipCpp->GetInitialName();

            if (sipRes == SIP_NULLPTR)
            {
                Py_INCREF(Py_None);
                return Py_None;
            }

            return PyUnicode_FromString(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxNameHandler, sipName_GetInitialName, doc_FbxNameHandler_GetInitialName);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxNameHandler_SetCurrentName, "SetCurrentName(self, str)");

extern "C" {static PyObject *meth_FbxNameHandler_SetCurrentName(PyObject *, PyObject *);}
static PyObject *meth_FbxNameHandler_SetCurrentName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const char* a0;
        PyObject *a0Keep;
         ::FbxNameHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BA8", &sipSelf, sipType_FbxNameHandler, &sipCpp, &a0Keep, &a0))
        {
            sipCpp->SetCurrentName(a0);
            Py_DECREF(a0Keep);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxNameHandler, sipName_SetCurrentName, doc_FbxNameHandler_SetCurrentName);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxNameHandler_GetCurrentName, "GetCurrentName(self) -> str");

extern "C" {static PyObject *meth_FbxNameHandler_GetCurrentName(PyObject *, PyObject *);}
static PyObject *meth_FbxNameHandler_GetCurrentName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxNameHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxNameHandler, &sipCpp))
        {
            const char*sipRes;

            sipRes = sipCpp->GetCurrentName();

            if (sipRes == SIP_NULLPTR)
            {
                Py_INCREF(Py_None);
                return Py_None;
            }

            return PyUnicode_FromString(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxNameHandler, sipName_GetCurrentName, doc_FbxNameHandler_GetCurrentName);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxNameHandler_SetNameSpace, "SetNameSpace(self, str)");

extern "C" {static PyObject *meth_FbxNameHandler_SetNameSpace(PyObject *, PyObject *);}
static PyObject *meth_FbxNameHandler_SetNameSpace(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const char* a0;
        PyObject *a0Keep;
         ::FbxNameHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BA8", &sipSelf, sipType_FbxNameHandler, &sipCpp, &a0Keep, &a0))
        {
            sipCpp->SetNameSpace(a0);
            Py_DECREF(a0Keep);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxNameHandler, sipName_SetNameSpace, doc_FbxNameHandler_SetNameSpace);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxNameHandler_GetNameSpace, "GetNameSpace(self) -> str");

extern "C" {static PyObject *meth_FbxNameHandler_GetNameSpace(PyObject *, PyObject *);}
static PyObject *meth_FbxNameHandler_GetNameSpace(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxNameHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxNameHandler, &sipCpp))
        {
            const char*sipRes;

            sipRes = sipCpp->GetNameSpace();

            if (sipRes == SIP_NULLPTR)
            {
                Py_INCREF(Py_None);
                return Py_None;
            }

            return PyUnicode_FromString(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxNameHandler, sipName_GetNameSpace, doc_FbxNameHandler_GetNameSpace);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxNameHandler_IsRenamed, "IsRenamed(self) -> bool");

extern "C" {static PyObject *meth_FbxNameHandler_IsRenamed(PyObject *, PyObject *);}
static PyObject *meth_FbxNameHandler_IsRenamed(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxNameHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxNameHandler, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->IsRenamed();

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxNameHandler, sipName_IsRenamed, doc_FbxNameHandler_IsRenamed);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_FbxNameHandler(void *, int);}
static void release_FbxNameHandler(void *sipCppV, int)
{
    delete reinterpret_cast< ::FbxNameHandler *>(sipCppV);
}


extern "C" {static void *array_FbxNameHandler(Py_ssize_t);}
static void *array_FbxNameHandler(Py_ssize_t sipNrElem)
{
    return new  ::FbxNameHandler[sipNrElem];
}


extern "C" {static void assign_FbxNameHandler(void *, Py_ssize_t, void *);}
static void assign_FbxNameHandler(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::FbxNameHandler *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::FbxNameHandler *>(sipSrc);
}


extern "C" {static void *copy_FbxNameHandler(const void *, Py_ssize_t);}
static void *copy_FbxNameHandler(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::FbxNameHandler(reinterpret_cast<const  ::FbxNameHandler *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_FbxNameHandler(sipSimpleWrapper *);}
static void dealloc_FbxNameHandler(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_FbxNameHandler(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_FbxNameHandler(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_FbxNameHandler(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::FbxNameHandler *sipCpp = SIP_NULLPTR;

    {
        const char* a0 = "";
        PyObject *a0Keep = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "|A8", &a0Keep, &a0))
        {
            sipCpp = new  ::FbxNameHandler(a0);
            Py_XDECREF(a0Keep);

            return sipCpp;
        }
    }

    {
        const  ::FbxNameHandler* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_FbxNameHandler, &a0))
        {
            sipCpp = new  ::FbxNameHandler(*a0);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


static PyMethodDef methods_FbxNameHandler[] = {
    {sipName_GetCurrentName, meth_FbxNameHandler_GetCurrentName, METH_VARARGS, doc_FbxNameHandler_GetCurrentName},
    {sipName_GetInitialName, meth_FbxNameHandler_GetInitialName, METH_VARARGS, doc_FbxNameHandler_GetInitialName},
    {sipName_GetNameSpace, meth_FbxNameHandler_GetNameSpace, METH_VARARGS, doc_FbxNameHandler_GetNameSpace},
    {sipName_IsRenamed, meth_FbxNameHandler_IsRenamed, METH_VARARGS, doc_FbxNameHandler_IsRenamed},
    {sipName_SetCurrentName, meth_FbxNameHandler_SetCurrentName, METH_VARARGS, doc_FbxNameHandler_SetCurrentName},
    {sipName_SetInitialName, meth_FbxNameHandler_SetInitialName, METH_VARARGS, doc_FbxNameHandler_SetInitialName},
    {sipName_SetNameSpace, meth_FbxNameHandler_SetNameSpace, METH_VARARGS, doc_FbxNameHandler_SetNameSpace}
};

PyDoc_STRVAR(doc_FbxNameHandler, "\1FbxNameHandler(str = \"\")\n"
"FbxNameHandler(FbxNameHandler)");


sipClassTypeDef sipTypeDef_fbx_FbxNameHandler = {
    {
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_FbxNameHandler,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_FbxNameHandler,
        {0, 0, 1},
        7, methods_FbxNameHandler,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_FbxNameHandler,
    -1,
    -1,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_FbxNameHandler,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_FbxNameHandler,
    assign_FbxNameHandler,
    array_FbxNameHandler,
    copy_FbxNameHandler,
    release_FbxNameHandler,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};
