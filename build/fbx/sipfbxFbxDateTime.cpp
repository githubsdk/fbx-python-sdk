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




PyDoc_STRVAR(doc_FbxDateTime_Clear, "Clear(self)");

extern "C" {static PyObject *meth_FbxDateTime_Clear(PyObject *, PyObject *);}
static PyObject *meth_FbxDateTime_Clear(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxDateTime *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxDateTime, &sipCpp))
        {
            sipCpp->Clear();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxDateTime, sipName_Clear, doc_FbxDateTime_Clear);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxDateTime_isValid, "isValid(self) -> bool");

extern "C" {static PyObject *meth_FbxDateTime_isValid(PyObject *, PyObject *);}
static PyObject *meth_FbxDateTime_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxDateTime *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxDateTime, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isValid();

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxDateTime, sipName_isValid, doc_FbxDateTime_isValid);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxDateTime_setTime, "setTime(self, int, int, int, int = 0)");

extern "C" {static PyObject *meth_FbxDateTime_setTime(PyObject *, PyObject *);}
static PyObject *meth_FbxDateTime_setTime(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
        int a1;
        int a2;
        int a3 = 0;
         ::FbxDateTime *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Biii|i", &sipSelf, sipType_FbxDateTime, &sipCpp, &a0, &a1, &a2, &a3))
        {
            sipCpp->setTime(a0,a1,a2,a3);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxDateTime, sipName_setTime, doc_FbxDateTime_setTime);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxDateTime_toString, "toString(self) -> FbxString");

extern "C" {static PyObject *meth_FbxDateTime_toString(PyObject *, PyObject *);}
static PyObject *meth_FbxDateTime_toString(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxDateTime *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxDateTime, &sipCpp))
        {
             ::FbxString*sipRes;

            sipRes = new  ::FbxString(sipCpp->toString());

            return sipConvertFromNewType(sipRes,sipType_FbxString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxDateTime, sipName_toString, doc_FbxDateTime_toString);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxDateTime_fromString, "fromString(self, str) -> bool");

extern "C" {static PyObject *meth_FbxDateTime_fromString(PyObject *, PyObject *);}
static PyObject *meth_FbxDateTime_fromString(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const char* a0;
        PyObject *a0Keep;
         ::FbxDateTime *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BA8", &sipSelf, sipType_FbxDateTime, &sipCpp, &a0Keep, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->fromString(a0);
            Py_DECREF(a0Keep);

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxDateTime, sipName_fromString, doc_FbxDateTime_fromString);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxDateTime_currentDateTimeGMT, "currentDateTimeGMT() -> FbxDateTime");

extern "C" {static PyObject *meth_FbxDateTime_currentDateTimeGMT(PyObject *, PyObject *);}
static PyObject *meth_FbxDateTime_currentDateTimeGMT(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, "C", &sipSelf))
        {
             ::FbxDateTime*sipRes;

            sipRes = new  ::FbxDateTime( ::FbxDateTime::currentDateTimeGMT());

            return sipConvertFromNewType(sipRes,sipType_FbxDateTime,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxDateTime, sipName_currentDateTimeGMT, doc_FbxDateTime_currentDateTimeGMT);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *slot_FbxDateTime___ne__(PyObject *,PyObject *);}
static PyObject *slot_FbxDateTime___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxDateTime *sipCpp = reinterpret_cast< ::FbxDateTime *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxDateTime));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxDateTime* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxDateTime, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::FbxDateTime::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_fbx, ne_slot, sipType_FbxDateTime, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_FbxDateTime___eq__(PyObject *,PyObject *);}
static PyObject *slot_FbxDateTime___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxDateTime *sipCpp = reinterpret_cast< ::FbxDateTime *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxDateTime));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxDateTime* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxDateTime, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::FbxDateTime::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_fbx, eq_slot, sipType_FbxDateTime, sipSelf, sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_FbxDateTime(void *, int);}
static void release_FbxDateTime(void *sipCppV, int)
{
    delete reinterpret_cast< ::FbxDateTime *>(sipCppV);
}


extern "C" {static void *array_FbxDateTime(Py_ssize_t);}
static void *array_FbxDateTime(Py_ssize_t sipNrElem)
{
    return new  ::FbxDateTime[sipNrElem];
}


extern "C" {static void assign_FbxDateTime(void *, Py_ssize_t, void *);}
static void assign_FbxDateTime(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::FbxDateTime *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::FbxDateTime *>(sipSrc);
}


extern "C" {static void *copy_FbxDateTime(const void *, Py_ssize_t);}
static void *copy_FbxDateTime(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::FbxDateTime(reinterpret_cast<const  ::FbxDateTime *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_FbxDateTime(sipSimpleWrapper *);}
static void dealloc_FbxDateTime(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_FbxDateTime(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_FbxDateTime(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_FbxDateTime(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::FbxDateTime *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new  ::FbxDateTime();

            return sipCpp;
        }
    }

    {
        int a0;
        int a1;
        int a2;
        int a3;
        int a4;
        int a5;
        int a6 = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "iiiiii|i", &a0, &a1, &a2, &a3, &a4, &a5, &a6))
        {
            sipCpp = new  ::FbxDateTime(a0,a1,a2,a3,a4,a5,a6);

            return sipCpp;
        }
    }

    {
        const  ::FbxDateTime* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_FbxDateTime, &a0))
        {
            sipCpp = new  ::FbxDateTime(*a0);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_FbxDateTime[] = {
    {(void *)slot_FbxDateTime___ne__, ne_slot},
    {(void *)slot_FbxDateTime___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_FbxDateTime[] = {
    {sipName_Clear, meth_FbxDateTime_Clear, METH_VARARGS, doc_FbxDateTime_Clear},
    {sipName_currentDateTimeGMT, meth_FbxDateTime_currentDateTimeGMT, METH_VARARGS, doc_FbxDateTime_currentDateTimeGMT},
    {sipName_fromString, meth_FbxDateTime_fromString, METH_VARARGS, doc_FbxDateTime_fromString},
    {sipName_isValid, meth_FbxDateTime_isValid, METH_VARARGS, doc_FbxDateTime_isValid},
    {sipName_setTime, meth_FbxDateTime_setTime, METH_VARARGS, doc_FbxDateTime_setTime},
    {sipName_toString, meth_FbxDateTime_toString, METH_VARARGS, doc_FbxDateTime_toString}
};

PyDoc_STRVAR(doc_FbxDateTime, "\1FbxDateTime()\n"
"FbxDateTime(int, int, int, int, int, int, int = 0)\n"
"FbxDateTime(FbxDateTime)");


sipClassTypeDef sipTypeDef_fbx_FbxDateTime = {
    {
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_FbxDateTime,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_FbxDateTime,
        {0, 0, 1},
        6, methods_FbxDateTime,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_FbxDateTime,
    -1,
    -1,
    SIP_NULLPTR,
    slots_FbxDateTime,
    init_type_FbxDateTime,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_FbxDateTime,
    assign_FbxDateTime,
    array_FbxDateTime,
    copy_FbxDateTime,
    release_FbxDateTime,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};
