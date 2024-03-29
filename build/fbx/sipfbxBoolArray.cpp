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




PyDoc_STRVAR(doc_BoolArray_GetCount, "GetCount(self) -> int");

extern "C" {static PyObject *meth_BoolArray_GetCount(PyObject *, PyObject *);}
static PyObject *meth_BoolArray_GetCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::BoolArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_BoolArray, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->GetCount();

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_BoolArray, sipName_GetCount, doc_BoolArray_GetCount);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_BoolArray_InsertAt, "InsertAt(self, int, bool) -> int");

extern "C" {static PyObject *meth_BoolArray_InsertAt(PyObject *, PyObject *);}
static PyObject *meth_BoolArray_InsertAt(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
        bool a1;
         ::BoolArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bib", &sipSelf, sipType_BoolArray, &sipCpp, &a0, &a1))
        {
            int sipRes;

            sipRes = sipCpp->InsertAt(a0,a1);

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_BoolArray, sipName_InsertAt, doc_BoolArray_InsertAt);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_BoolArray_Add, "Add(self, bool) -> int");

extern "C" {static PyObject *meth_BoolArray_Add(PyObject *, PyObject *);}
static PyObject *meth_BoolArray_Add(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        bool a0;
         ::BoolArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_BoolArray, &sipCpp, &a0))
        {
            int sipRes;

            sipRes = sipCpp->Add(a0);

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_BoolArray, sipName_Add, doc_BoolArray_Add);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_BoolArray_AddUnique, "AddUnique(self, bool) -> int");

extern "C" {static PyObject *meth_BoolArray_AddUnique(PyObject *, PyObject *);}
static PyObject *meth_BoolArray_AddUnique(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        bool a0;
         ::BoolArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_BoolArray, &sipCpp, &a0))
        {
            int sipRes;

            sipRes = sipCpp->AddUnique(a0);

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_BoolArray, sipName_AddUnique, doc_BoolArray_AddUnique);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_BoolArray_AddArray, "AddArray(self, BoolArray)");

extern "C" {static PyObject *meth_BoolArray_AddArray(PyObject *, PyObject *);}
static PyObject *meth_BoolArray_AddArray(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::BoolArray* a0;
         ::BoolArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_BoolArray, &sipCpp, sipType_BoolArray, &a0))
        {
            sipCpp->AddArray(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_BoolArray, sipName_AddArray, doc_BoolArray_AddArray);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_BoolArray_AddArrayNoDuplicate, "AddArrayNoDuplicate(self, BoolArray)");

extern "C" {static PyObject *meth_BoolArray_AddArrayNoDuplicate(PyObject *, PyObject *);}
static PyObject *meth_BoolArray_AddArrayNoDuplicate(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::BoolArray* a0;
         ::BoolArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_BoolArray, &sipCpp, sipType_BoolArray, &a0))
        {
            sipCpp->AddArrayNoDuplicate(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_BoolArray, sipName_AddArrayNoDuplicate, doc_BoolArray_AddArrayNoDuplicate);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_BoolArray_SetAt, "SetAt(self, int, bool)");

extern "C" {static PyObject *meth_BoolArray_SetAt(PyObject *, PyObject *);}
static PyObject *meth_BoolArray_SetAt(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
        bool a1;
         ::BoolArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bib", &sipSelf, sipType_BoolArray, &sipCpp, &a0, &a1))
        {
            sipCpp->SetAt(a0,a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_BoolArray, sipName_SetAt, doc_BoolArray_SetAt);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_BoolArray_SetLast, "SetLast(self, bool)");

extern "C" {static PyObject *meth_BoolArray_SetLast(PyObject *, PyObject *);}
static PyObject *meth_BoolArray_SetLast(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        bool a0;
         ::BoolArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_BoolArray, &sipCpp, &a0))
        {
            sipCpp->SetLast(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_BoolArray, sipName_SetLast, doc_BoolArray_SetLast);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_BoolArray_GetAt, "GetAt(self, int) -> bool");

extern "C" {static PyObject *meth_BoolArray_GetAt(PyObject *, PyObject *);}
static PyObject *meth_BoolArray_GetAt(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
        const  ::BoolArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_BoolArray, &sipCpp, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->GetAt(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_BoolArray, sipName_GetAt, doc_BoolArray_GetAt);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_BoolArray_GetFirst, "GetFirst(self) -> bool");

extern "C" {static PyObject *meth_BoolArray_GetFirst(PyObject *, PyObject *);}
static PyObject *meth_BoolArray_GetFirst(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::BoolArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_BoolArray, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->GetFirst();

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_BoolArray, sipName_GetFirst, doc_BoolArray_GetFirst);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_BoolArray_GetLast, "GetLast(self) -> bool");

extern "C" {static PyObject *meth_BoolArray_GetLast(PyObject *, PyObject *);}
static PyObject *meth_BoolArray_GetLast(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::BoolArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_BoolArray, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->GetLast();

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_BoolArray, sipName_GetLast, doc_BoolArray_GetLast);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_BoolArray_RemoveAt, "RemoveAt(self, int) -> bool");

extern "C" {static PyObject *meth_BoolArray_RemoveAt(PyObject *, PyObject *);}
static PyObject *meth_BoolArray_RemoveAt(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
         ::BoolArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_BoolArray, &sipCpp, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->RemoveAt(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_BoolArray, sipName_RemoveAt, doc_BoolArray_RemoveAt);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_BoolArray_RemoveLast, "RemoveLast(self) -> bool");

extern "C" {static PyObject *meth_BoolArray_RemoveLast(PyObject *, PyObject *);}
static PyObject *meth_BoolArray_RemoveLast(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::BoolArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_BoolArray, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->RemoveLast();

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_BoolArray, sipName_RemoveLast, doc_BoolArray_RemoveLast);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_BoolArray_RemoveIt, "RemoveIt(self, bool) -> bool");

extern "C" {static PyObject *meth_BoolArray_RemoveIt(PyObject *, PyObject *);}
static PyObject *meth_BoolArray_RemoveIt(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        bool a0;
         ::BoolArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_BoolArray, &sipCpp, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->RemoveIt(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_BoolArray, sipName_RemoveIt, doc_BoolArray_RemoveIt);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_BoolArray_RemoveArray, "RemoveArray(self, BoolArray)");

extern "C" {static PyObject *meth_BoolArray_RemoveArray(PyObject *, PyObject *);}
static PyObject *meth_BoolArray_RemoveArray(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::BoolArray* a0;
         ::BoolArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_BoolArray, &sipCpp, sipType_BoolArray, &a0))
        {
            sipCpp->RemoveArray(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_BoolArray, sipName_RemoveArray, doc_BoolArray_RemoveArray);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_BoolArray_Find, "Find(self, bool) -> int");

extern "C" {static PyObject *meth_BoolArray_Find(PyObject *, PyObject *);}
static PyObject *meth_BoolArray_Find(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        bool a0;
        const  ::BoolArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_BoolArray, &sipCpp, &a0))
        {
            int sipRes;

            sipRes = sipCpp->Find(a0);

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_BoolArray, sipName_Find, doc_BoolArray_Find);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *slot_BoolArray___getitem__(PyObject *,PyObject *);}
static PyObject *slot_BoolArray___getitem__(PyObject *sipSelf,PyObject *sipArg)
{
     ::BoolArray *sipCpp = reinterpret_cast< ::BoolArray *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_BoolArray));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            bool sipRes = 0;
            int sipIsErr = 0;

#line 33 "D:\\Program Files\\Autodesk\\FBX\\FBX Python Bindings\\2020.3.4\\sip\\fbxarray.sip"
        if (a0 < 0 || a0 >= sipCpp->GetCount())
        {
            PyErr_Format(PyExc_IndexError, "sequence index out of range");
            sipIsErr = 1;
        }
        else
        {
            fbxArrayElementCopy(&sipRes, (bool*)NULL, sipCpp, a0);
        }
#line 513 "D:\\Program Files\\Autodesk\\FBX\\FBX Python Bindings\\2020.3.4\\build\\fbx/sipfbxBoolArray.cpp"

            if (sipIsErr)
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_BoolArray, sipName___getitem__, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_BoolArray(void *, int);}
static void release_BoolArray(void *sipCppV, int)
{
    delete reinterpret_cast< ::BoolArray *>(sipCppV);
}


extern "C" {static void *array_BoolArray(Py_ssize_t);}
static void *array_BoolArray(Py_ssize_t sipNrElem)
{
    return new  ::BoolArray[sipNrElem];
}


extern "C" {static void assign_BoolArray(void *, Py_ssize_t, void *);}
static void assign_BoolArray(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::BoolArray *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::BoolArray *>(sipSrc);
}


extern "C" {static void *copy_BoolArray(const void *, Py_ssize_t);}
static void *copy_BoolArray(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::BoolArray(reinterpret_cast<const  ::BoolArray *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_BoolArray(sipSimpleWrapper *);}
static void dealloc_BoolArray(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_BoolArray(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_BoolArray(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_BoolArray(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::BoolArray *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new  ::BoolArray();

            return sipCpp;
        }
    }

    {
        const  ::BoolArray* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_BoolArray, &a0))
        {
            sipCpp = new  ::BoolArray(*a0);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_BoolArray[] = {
    {(void *)slot_BoolArray___getitem__, getitem_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_BoolArray[] = {
    {sipName_Add, meth_BoolArray_Add, METH_VARARGS, doc_BoolArray_Add},
    {sipName_AddArray, meth_BoolArray_AddArray, METH_VARARGS, doc_BoolArray_AddArray},
    {sipName_AddArrayNoDuplicate, meth_BoolArray_AddArrayNoDuplicate, METH_VARARGS, doc_BoolArray_AddArrayNoDuplicate},
    {sipName_AddUnique, meth_BoolArray_AddUnique, METH_VARARGS, doc_BoolArray_AddUnique},
    {sipName_Find, meth_BoolArray_Find, METH_VARARGS, doc_BoolArray_Find},
    {sipName_GetAt, meth_BoolArray_GetAt, METH_VARARGS, doc_BoolArray_GetAt},
    {sipName_GetCount, meth_BoolArray_GetCount, METH_VARARGS, doc_BoolArray_GetCount},
    {sipName_GetFirst, meth_BoolArray_GetFirst, METH_VARARGS, doc_BoolArray_GetFirst},
    {sipName_GetLast, meth_BoolArray_GetLast, METH_VARARGS, doc_BoolArray_GetLast},
    {sipName_InsertAt, meth_BoolArray_InsertAt, METH_VARARGS, doc_BoolArray_InsertAt},
    {sipName_RemoveArray, meth_BoolArray_RemoveArray, METH_VARARGS, doc_BoolArray_RemoveArray},
    {sipName_RemoveAt, meth_BoolArray_RemoveAt, METH_VARARGS, doc_BoolArray_RemoveAt},
    {sipName_RemoveIt, meth_BoolArray_RemoveIt, METH_VARARGS, doc_BoolArray_RemoveIt},
    {sipName_RemoveLast, meth_BoolArray_RemoveLast, METH_VARARGS, doc_BoolArray_RemoveLast},
    {sipName_SetAt, meth_BoolArray_SetAt, METH_VARARGS, doc_BoolArray_SetAt},
    {sipName_SetLast, meth_BoolArray_SetLast, METH_VARARGS, doc_BoolArray_SetLast}
};

PyDoc_STRVAR(doc_BoolArray, "\1BoolArray()\n"
"BoolArray(BoolArray)");


sipClassTypeDef sipTypeDef_fbx_BoolArray = {
    {
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_BoolArray,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_BoolArray,
        {0, 0, 1},
        16, methods_BoolArray,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_BoolArray,
    -1,
    -1,
    SIP_NULLPTR,
    slots_BoolArray,
    init_type_BoolArray,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_BoolArray,
    assign_BoolArray,
    array_BoolArray,
    copy_BoolArray,
    release_BoolArray,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};
