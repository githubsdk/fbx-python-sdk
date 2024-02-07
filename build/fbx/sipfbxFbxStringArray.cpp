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




PyDoc_STRVAR(doc_FbxStringArray_GetCount, "GetCount(self) -> int");

extern "C" {static PyObject *meth_FbxStringArray_GetCount(PyObject *, PyObject *);}
static PyObject *meth_FbxStringArray_GetCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxStringArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxStringArray, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->GetCount();

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxStringArray, sipName_GetCount, doc_FbxStringArray_GetCount);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxStringArray_InsertAt, "InsertAt(self, int, FbxString) -> int");

extern "C" {static PyObject *meth_FbxStringArray_InsertAt(PyObject *, PyObject *);}
static PyObject *meth_FbxStringArray_InsertAt(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
         ::FbxStringPtr a1;
        int a1State = 0;
         ::FbxStringArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BiJ0", &sipSelf, sipType_FbxStringArray, &sipCpp, &a0, sipType_FbxString, &a1, &a1State))
        {
            int sipRes;

            sipRes = sipCpp->InsertAt(a0,a1);
            sipReleaseType(a1, sipType_FbxString, a1State);

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxStringArray, sipName_InsertAt, doc_FbxStringArray_InsertAt);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxStringArray_Add, "Add(self, FbxString) -> int");

extern "C" {static PyObject *meth_FbxStringArray_Add(PyObject *, PyObject *);}
static PyObject *meth_FbxStringArray_Add(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxStringPtr a0;
        int a0State = 0;
         ::FbxStringArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ0", &sipSelf, sipType_FbxStringArray, &sipCpp, sipType_FbxString, &a0, &a0State))
        {
            int sipRes;

            sipRes = sipCpp->Add(a0);
            sipReleaseType(a0, sipType_FbxString, a0State);

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxStringArray, sipName_Add, doc_FbxStringArray_Add);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxStringArray_AddUnique, "AddUnique(self, FbxString) -> int");

extern "C" {static PyObject *meth_FbxStringArray_AddUnique(PyObject *, PyObject *);}
static PyObject *meth_FbxStringArray_AddUnique(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxStringPtr a0;
        int a0State = 0;
         ::FbxStringArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ0", &sipSelf, sipType_FbxStringArray, &sipCpp, sipType_FbxString, &a0, &a0State))
        {
            int sipRes;

            sipRes = sipCpp->AddUnique(a0);
            sipReleaseType(a0, sipType_FbxString, a0State);

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxStringArray, sipName_AddUnique, doc_FbxStringArray_AddUnique);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxStringArray_AddArray, "AddArray(self, FbxStringArray)");

extern "C" {static PyObject *meth_FbxStringArray_AddArray(PyObject *, PyObject *);}
static PyObject *meth_FbxStringArray_AddArray(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxStringArray* a0;
         ::FbxStringArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_FbxStringArray, &sipCpp, sipType_FbxStringArray, &a0))
        {
            sipCpp->AddArray(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxStringArray, sipName_AddArray, doc_FbxStringArray_AddArray);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxStringArray_AddArrayNoDuplicate, "AddArrayNoDuplicate(self, FbxStringArray)");

extern "C" {static PyObject *meth_FbxStringArray_AddArrayNoDuplicate(PyObject *, PyObject *);}
static PyObject *meth_FbxStringArray_AddArrayNoDuplicate(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxStringArray* a0;
         ::FbxStringArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_FbxStringArray, &sipCpp, sipType_FbxStringArray, &a0))
        {
            sipCpp->AddArrayNoDuplicate(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxStringArray, sipName_AddArrayNoDuplicate, doc_FbxStringArray_AddArrayNoDuplicate);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxStringArray_SetAt, "SetAt(self, int, FbxString)");

extern "C" {static PyObject *meth_FbxStringArray_SetAt(PyObject *, PyObject *);}
static PyObject *meth_FbxStringArray_SetAt(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
         ::FbxStringPtr a1;
        int a1State = 0;
         ::FbxStringArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BiJ0", &sipSelf, sipType_FbxStringArray, &sipCpp, &a0, sipType_FbxString, &a1, &a1State))
        {
            sipCpp->SetAt(a0,a1);
            sipReleaseType(a1, sipType_FbxString, a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxStringArray, sipName_SetAt, doc_FbxStringArray_SetAt);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxStringArray_SetLast, "SetLast(self, FbxString)");

extern "C" {static PyObject *meth_FbxStringArray_SetLast(PyObject *, PyObject *);}
static PyObject *meth_FbxStringArray_SetLast(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxStringPtr a0;
        int a0State = 0;
         ::FbxStringArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ0", &sipSelf, sipType_FbxStringArray, &sipCpp, sipType_FbxString, &a0, &a0State))
        {
            sipCpp->SetLast(a0);
            sipReleaseType(a0, sipType_FbxString, a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxStringArray, sipName_SetLast, doc_FbxStringArray_SetLast);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxStringArray_GetAt, "GetAt(self, int) -> FbxString");

extern "C" {static PyObject *meth_FbxStringArray_GetAt(PyObject *, PyObject *);}
static PyObject *meth_FbxStringArray_GetAt(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
        const  ::FbxStringArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_FbxStringArray, &sipCpp, &a0))
        {
             ::FbxStringPtr sipRes;

            sipRes = sipCpp->GetAt(a0);

            return sipConvertFromType(sipRes,sipType_FbxString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxStringArray, sipName_GetAt, doc_FbxStringArray_GetAt);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxStringArray_GetFirst, "GetFirst(self) -> FbxString");

extern "C" {static PyObject *meth_FbxStringArray_GetFirst(PyObject *, PyObject *);}
static PyObject *meth_FbxStringArray_GetFirst(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxStringArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxStringArray, &sipCpp))
        {
             ::FbxStringPtr sipRes;

            sipRes = sipCpp->GetFirst();

            return sipConvertFromType(sipRes,sipType_FbxString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxStringArray, sipName_GetFirst, doc_FbxStringArray_GetFirst);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxStringArray_GetLast, "GetLast(self) -> FbxString");

extern "C" {static PyObject *meth_FbxStringArray_GetLast(PyObject *, PyObject *);}
static PyObject *meth_FbxStringArray_GetLast(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxStringArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxStringArray, &sipCpp))
        {
             ::FbxStringPtr sipRes;

            sipRes = sipCpp->GetLast();

            return sipConvertFromType(sipRes,sipType_FbxString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxStringArray, sipName_GetLast, doc_FbxStringArray_GetLast);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxStringArray_RemoveAt, "RemoveAt(self, int) -> FbxString");

extern "C" {static PyObject *meth_FbxStringArray_RemoveAt(PyObject *, PyObject *);}
static PyObject *meth_FbxStringArray_RemoveAt(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
         ::FbxStringArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_FbxStringArray, &sipCpp, &a0))
        {
             ::FbxStringPtr sipRes;

            sipRes = sipCpp->RemoveAt(a0);

            return sipConvertFromType(sipRes,sipType_FbxString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxStringArray, sipName_RemoveAt, doc_FbxStringArray_RemoveAt);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxStringArray_RemoveLast, "RemoveLast(self) -> FbxString");

extern "C" {static PyObject *meth_FbxStringArray_RemoveLast(PyObject *, PyObject *);}
static PyObject *meth_FbxStringArray_RemoveLast(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxStringArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxStringArray, &sipCpp))
        {
             ::FbxStringPtr sipRes;

            sipRes = sipCpp->RemoveLast();

            return sipConvertFromType(sipRes,sipType_FbxString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxStringArray, sipName_RemoveLast, doc_FbxStringArray_RemoveLast);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxStringArray_RemoveIt, "RemoveIt(self, FbxString) -> bool");

extern "C" {static PyObject *meth_FbxStringArray_RemoveIt(PyObject *, PyObject *);}
static PyObject *meth_FbxStringArray_RemoveIt(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxStringPtr a0;
        int a0State = 0;
         ::FbxStringArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ0", &sipSelf, sipType_FbxStringArray, &sipCpp, sipType_FbxString, &a0, &a0State))
        {
            bool sipRes;

            sipRes = sipCpp->RemoveIt(a0);
            sipReleaseType(a0, sipType_FbxString, a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxStringArray, sipName_RemoveIt, doc_FbxStringArray_RemoveIt);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxStringArray_RemoveArray, "RemoveArray(self, FbxStringArray)");

extern "C" {static PyObject *meth_FbxStringArray_RemoveArray(PyObject *, PyObject *);}
static PyObject *meth_FbxStringArray_RemoveArray(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxStringArray* a0;
         ::FbxStringArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_FbxStringArray, &sipCpp, sipType_FbxStringArray, &a0))
        {
            sipCpp->RemoveArray(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxStringArray, sipName_RemoveArray, doc_FbxStringArray_RemoveArray);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxStringArray_Find, "Find(self, FbxString) -> int");

extern "C" {static PyObject *meth_FbxStringArray_Find(PyObject *, PyObject *);}
static PyObject *meth_FbxStringArray_Find(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxStringPtr a0;
        int a0State = 0;
        const  ::FbxStringArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ0", &sipSelf, sipType_FbxStringArray, &sipCpp, sipType_FbxString, &a0, &a0State))
        {
            int sipRes;

            sipRes = sipCpp->Find(a0);
            sipReleaseType(a0, sipType_FbxString, a0State);

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxStringArray, sipName_Find, doc_FbxStringArray_Find);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *slot_FbxStringArray___getitem__(PyObject *,PyObject *);}
static PyObject *slot_FbxStringArray___getitem__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxStringArray *sipCpp = reinterpret_cast< ::FbxStringArray *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxStringArray));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
             ::FbxStringPtr sipRes = 0;
            int sipIsErr = 0;

#line 33 "D:\\Program Files\\Autodesk\\FBX\\FBX Python Bindings\\2020.3.4\\sip\\fbxarray.sip"
        if (a0 < 0 || a0 >= sipCpp->GetCount())
        {
            PyErr_Format(PyExc_IndexError, "sequence index out of range");
            sipIsErr = 1;
        }
        else
        {
            fbxArrayElementCopy(&sipRes, (FbxStringPtr*)NULL, sipCpp, a0);
        }
#line 527 "D:\\Program Files\\Autodesk\\FBX\\FBX Python Bindings\\2020.3.4\\build\\fbx/sipfbxFbxStringArray.cpp"

            if (sipIsErr)
                return 0;

            return sipConvertFromType(sipRes,sipType_FbxString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxStringArray, sipName___getitem__, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_FbxStringArray(void *, int);}
static void release_FbxStringArray(void *sipCppV, int)
{
    delete reinterpret_cast< ::FbxStringArray *>(sipCppV);
}


extern "C" {static void *array_FbxStringArray(Py_ssize_t);}
static void *array_FbxStringArray(Py_ssize_t sipNrElem)
{
    return new  ::FbxStringArray[sipNrElem];
}


extern "C" {static void assign_FbxStringArray(void *, Py_ssize_t, void *);}
static void assign_FbxStringArray(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::FbxStringArray *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::FbxStringArray *>(sipSrc);
}


extern "C" {static void *copy_FbxStringArray(const void *, Py_ssize_t);}
static void *copy_FbxStringArray(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::FbxStringArray(reinterpret_cast<const  ::FbxStringArray *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_FbxStringArray(sipSimpleWrapper *);}
static void dealloc_FbxStringArray(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_FbxStringArray(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_FbxStringArray(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_FbxStringArray(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::FbxStringArray *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new  ::FbxStringArray();

            return sipCpp;
        }
    }

    {
        const  ::FbxStringArray* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_FbxStringArray, &a0))
        {
            sipCpp = new  ::FbxStringArray(*a0);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_FbxStringArray[] = {
    {(void *)slot_FbxStringArray___getitem__, getitem_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_FbxStringArray[] = {
    {sipName_Add, meth_FbxStringArray_Add, METH_VARARGS, doc_FbxStringArray_Add},
    {sipName_AddArray, meth_FbxStringArray_AddArray, METH_VARARGS, doc_FbxStringArray_AddArray},
    {sipName_AddArrayNoDuplicate, meth_FbxStringArray_AddArrayNoDuplicate, METH_VARARGS, doc_FbxStringArray_AddArrayNoDuplicate},
    {sipName_AddUnique, meth_FbxStringArray_AddUnique, METH_VARARGS, doc_FbxStringArray_AddUnique},
    {sipName_Find, meth_FbxStringArray_Find, METH_VARARGS, doc_FbxStringArray_Find},
    {sipName_GetAt, meth_FbxStringArray_GetAt, METH_VARARGS, doc_FbxStringArray_GetAt},
    {sipName_GetCount, meth_FbxStringArray_GetCount, METH_VARARGS, doc_FbxStringArray_GetCount},
    {sipName_GetFirst, meth_FbxStringArray_GetFirst, METH_VARARGS, doc_FbxStringArray_GetFirst},
    {sipName_GetLast, meth_FbxStringArray_GetLast, METH_VARARGS, doc_FbxStringArray_GetLast},
    {sipName_InsertAt, meth_FbxStringArray_InsertAt, METH_VARARGS, doc_FbxStringArray_InsertAt},
    {sipName_RemoveArray, meth_FbxStringArray_RemoveArray, METH_VARARGS, doc_FbxStringArray_RemoveArray},
    {sipName_RemoveAt, meth_FbxStringArray_RemoveAt, METH_VARARGS, doc_FbxStringArray_RemoveAt},
    {sipName_RemoveIt, meth_FbxStringArray_RemoveIt, METH_VARARGS, doc_FbxStringArray_RemoveIt},
    {sipName_RemoveLast, meth_FbxStringArray_RemoveLast, METH_VARARGS, doc_FbxStringArray_RemoveLast},
    {sipName_SetAt, meth_FbxStringArray_SetAt, METH_VARARGS, doc_FbxStringArray_SetAt},
    {sipName_SetLast, meth_FbxStringArray_SetLast, METH_VARARGS, doc_FbxStringArray_SetLast}
};

PyDoc_STRVAR(doc_FbxStringArray, "\1FbxStringArray()\n"
"FbxStringArray(FbxStringArray)");


sipClassTypeDef sipTypeDef_fbx_FbxStringArray = {
    {
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_FbxStringArray,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_FbxStringArray,
        {0, 0, 1},
        16, methods_FbxStringArray,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_FbxStringArray,
    -1,
    -1,
    SIP_NULLPTR,
    slots_FbxStringArray,
    init_type_FbxStringArray,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_FbxStringArray,
    assign_FbxStringArray,
    array_FbxStringArray,
    copy_FbxStringArray,
    release_FbxStringArray,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};