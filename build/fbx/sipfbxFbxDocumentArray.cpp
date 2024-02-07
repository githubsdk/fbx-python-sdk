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




PyDoc_STRVAR(doc_FbxDocumentArray_GetCount, "GetCount(self) -> int");

extern "C" {static PyObject *meth_FbxDocumentArray_GetCount(PyObject *, PyObject *);}
static PyObject *meth_FbxDocumentArray_GetCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxDocumentArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxDocumentArray, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->GetCount();

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxDocumentArray, sipName_GetCount, doc_FbxDocumentArray_GetCount);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxDocumentArray_InsertAt, "InsertAt(self, int, FbxDocument) -> int");

extern "C" {static PyObject *meth_FbxDocumentArray_InsertAt(PyObject *, PyObject *);}
static PyObject *meth_FbxDocumentArray_InsertAt(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
         ::FbxDocumentPtr a1;
         ::FbxDocumentArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BiJ8", &sipSelf, sipType_FbxDocumentArray, &sipCpp, &a0, sipType_FbxDocument, &a1))
        {
            int sipRes;

            sipRes = sipCpp->InsertAt(a0,a1);

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxDocumentArray, sipName_InsertAt, doc_FbxDocumentArray_InsertAt);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxDocumentArray_Add, "Add(self, FbxDocument) -> int");

extern "C" {static PyObject *meth_FbxDocumentArray_Add(PyObject *, PyObject *);}
static PyObject *meth_FbxDocumentArray_Add(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxDocumentPtr a0;
         ::FbxDocumentArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_FbxDocumentArray, &sipCpp, sipType_FbxDocument, &a0))
        {
            int sipRes;

            sipRes = sipCpp->Add(a0);

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxDocumentArray, sipName_Add, doc_FbxDocumentArray_Add);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxDocumentArray_AddUnique, "AddUnique(self, FbxDocument) -> int");

extern "C" {static PyObject *meth_FbxDocumentArray_AddUnique(PyObject *, PyObject *);}
static PyObject *meth_FbxDocumentArray_AddUnique(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxDocumentPtr a0;
         ::FbxDocumentArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_FbxDocumentArray, &sipCpp, sipType_FbxDocument, &a0))
        {
            int sipRes;

            sipRes = sipCpp->AddUnique(a0);

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxDocumentArray, sipName_AddUnique, doc_FbxDocumentArray_AddUnique);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxDocumentArray_AddArray, "AddArray(self, FbxDocumentArray)");

extern "C" {static PyObject *meth_FbxDocumentArray_AddArray(PyObject *, PyObject *);}
static PyObject *meth_FbxDocumentArray_AddArray(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxDocumentArray* a0;
         ::FbxDocumentArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_FbxDocumentArray, &sipCpp, sipType_FbxDocumentArray, &a0))
        {
            sipCpp->AddArray(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxDocumentArray, sipName_AddArray, doc_FbxDocumentArray_AddArray);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxDocumentArray_AddArrayNoDuplicate, "AddArrayNoDuplicate(self, FbxDocumentArray)");

extern "C" {static PyObject *meth_FbxDocumentArray_AddArrayNoDuplicate(PyObject *, PyObject *);}
static PyObject *meth_FbxDocumentArray_AddArrayNoDuplicate(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxDocumentArray* a0;
         ::FbxDocumentArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_FbxDocumentArray, &sipCpp, sipType_FbxDocumentArray, &a0))
        {
            sipCpp->AddArrayNoDuplicate(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxDocumentArray, sipName_AddArrayNoDuplicate, doc_FbxDocumentArray_AddArrayNoDuplicate);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxDocumentArray_SetAt, "SetAt(self, int, FbxDocument)");

extern "C" {static PyObject *meth_FbxDocumentArray_SetAt(PyObject *, PyObject *);}
static PyObject *meth_FbxDocumentArray_SetAt(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
         ::FbxDocumentPtr a1;
         ::FbxDocumentArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BiJ8", &sipSelf, sipType_FbxDocumentArray, &sipCpp, &a0, sipType_FbxDocument, &a1))
        {
            sipCpp->SetAt(a0,a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxDocumentArray, sipName_SetAt, doc_FbxDocumentArray_SetAt);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxDocumentArray_SetLast, "SetLast(self, FbxDocument)");

extern "C" {static PyObject *meth_FbxDocumentArray_SetLast(PyObject *, PyObject *);}
static PyObject *meth_FbxDocumentArray_SetLast(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxDocumentPtr a0;
         ::FbxDocumentArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_FbxDocumentArray, &sipCpp, sipType_FbxDocument, &a0))
        {
            sipCpp->SetLast(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxDocumentArray, sipName_SetLast, doc_FbxDocumentArray_SetLast);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxDocumentArray_GetAt, "GetAt(self, int) -> FbxDocument");

extern "C" {static PyObject *meth_FbxDocumentArray_GetAt(PyObject *, PyObject *);}
static PyObject *meth_FbxDocumentArray_GetAt(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
        const  ::FbxDocumentArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_FbxDocumentArray, &sipCpp, &a0))
        {
             ::FbxDocumentPtr sipRes;

            sipRes = sipCpp->GetAt(a0);

            return sipConvertFromType(sipRes,sipType_FbxDocument,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxDocumentArray, sipName_GetAt, doc_FbxDocumentArray_GetAt);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxDocumentArray_GetFirst, "GetFirst(self) -> FbxDocument");

extern "C" {static PyObject *meth_FbxDocumentArray_GetFirst(PyObject *, PyObject *);}
static PyObject *meth_FbxDocumentArray_GetFirst(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxDocumentArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxDocumentArray, &sipCpp))
        {
             ::FbxDocumentPtr sipRes;

            sipRes = sipCpp->GetFirst();

            return sipConvertFromType(sipRes,sipType_FbxDocument,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxDocumentArray, sipName_GetFirst, doc_FbxDocumentArray_GetFirst);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxDocumentArray_GetLast, "GetLast(self) -> FbxDocument");

extern "C" {static PyObject *meth_FbxDocumentArray_GetLast(PyObject *, PyObject *);}
static PyObject *meth_FbxDocumentArray_GetLast(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxDocumentArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxDocumentArray, &sipCpp))
        {
             ::FbxDocumentPtr sipRes;

            sipRes = sipCpp->GetLast();

            return sipConvertFromType(sipRes,sipType_FbxDocument,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxDocumentArray, sipName_GetLast, doc_FbxDocumentArray_GetLast);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxDocumentArray_RemoveAt, "RemoveAt(self, int) -> FbxDocument");

extern "C" {static PyObject *meth_FbxDocumentArray_RemoveAt(PyObject *, PyObject *);}
static PyObject *meth_FbxDocumentArray_RemoveAt(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
         ::FbxDocumentArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_FbxDocumentArray, &sipCpp, &a0))
        {
             ::FbxDocumentPtr sipRes;

            sipRes = sipCpp->RemoveAt(a0);

            return sipConvertFromType(sipRes,sipType_FbxDocument,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxDocumentArray, sipName_RemoveAt, doc_FbxDocumentArray_RemoveAt);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxDocumentArray_RemoveLast, "RemoveLast(self) -> FbxDocument");

extern "C" {static PyObject *meth_FbxDocumentArray_RemoveLast(PyObject *, PyObject *);}
static PyObject *meth_FbxDocumentArray_RemoveLast(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxDocumentArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxDocumentArray, &sipCpp))
        {
             ::FbxDocumentPtr sipRes;

            sipRes = sipCpp->RemoveLast();

            return sipConvertFromType(sipRes,sipType_FbxDocument,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxDocumentArray, sipName_RemoveLast, doc_FbxDocumentArray_RemoveLast);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxDocumentArray_RemoveIt, "RemoveIt(self, FbxDocument) -> bool");

extern "C" {static PyObject *meth_FbxDocumentArray_RemoveIt(PyObject *, PyObject *);}
static PyObject *meth_FbxDocumentArray_RemoveIt(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxDocumentPtr a0;
         ::FbxDocumentArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_FbxDocumentArray, &sipCpp, sipType_FbxDocument, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->RemoveIt(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxDocumentArray, sipName_RemoveIt, doc_FbxDocumentArray_RemoveIt);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxDocumentArray_RemoveArray, "RemoveArray(self, FbxDocumentArray)");

extern "C" {static PyObject *meth_FbxDocumentArray_RemoveArray(PyObject *, PyObject *);}
static PyObject *meth_FbxDocumentArray_RemoveArray(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxDocumentArray* a0;
         ::FbxDocumentArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_FbxDocumentArray, &sipCpp, sipType_FbxDocumentArray, &a0))
        {
            sipCpp->RemoveArray(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxDocumentArray, sipName_RemoveArray, doc_FbxDocumentArray_RemoveArray);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxDocumentArray_Find, "Find(self, FbxDocument) -> int");

extern "C" {static PyObject *meth_FbxDocumentArray_Find(PyObject *, PyObject *);}
static PyObject *meth_FbxDocumentArray_Find(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxDocumentPtr a0;
        const  ::FbxDocumentArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_FbxDocumentArray, &sipCpp, sipType_FbxDocument, &a0))
        {
            int sipRes;

            sipRes = sipCpp->Find(a0);

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxDocumentArray, sipName_Find, doc_FbxDocumentArray_Find);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *slot_FbxDocumentArray___getitem__(PyObject *,PyObject *);}
static PyObject *slot_FbxDocumentArray___getitem__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxDocumentArray *sipCpp = reinterpret_cast< ::FbxDocumentArray *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxDocumentArray));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
             ::FbxDocumentPtr sipRes = 0;
            int sipIsErr = 0;

#line 33 "D:\\Program Files\\Autodesk\\FBX\\FBX Python Bindings\\2020.3.4\\sip\\fbxarray.sip"
        if (a0 < 0 || a0 >= sipCpp->GetCount())
        {
            PyErr_Format(PyExc_IndexError, "sequence index out of range");
            sipIsErr = 1;
        }
        else
        {
            fbxArrayElementCopy(&sipRes, (FbxDocumentPtr*)NULL, sipCpp, a0);
        }
#line 513 "D:\\Program Files\\Autodesk\\FBX\\FBX Python Bindings\\2020.3.4\\build\\fbx/sipfbxFbxDocumentArray.cpp"

            if (sipIsErr)
                return 0;

            return sipConvertFromType(sipRes,sipType_FbxDocument,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxDocumentArray, sipName___getitem__, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_FbxDocumentArray(void *, int);}
static void release_FbxDocumentArray(void *sipCppV, int)
{
    delete reinterpret_cast< ::FbxDocumentArray *>(sipCppV);
}


extern "C" {static void *array_FbxDocumentArray(Py_ssize_t);}
static void *array_FbxDocumentArray(Py_ssize_t sipNrElem)
{
    return new  ::FbxDocumentArray[sipNrElem];
}


extern "C" {static void assign_FbxDocumentArray(void *, Py_ssize_t, void *);}
static void assign_FbxDocumentArray(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::FbxDocumentArray *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::FbxDocumentArray *>(sipSrc);
}


extern "C" {static void *copy_FbxDocumentArray(const void *, Py_ssize_t);}
static void *copy_FbxDocumentArray(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::FbxDocumentArray(reinterpret_cast<const  ::FbxDocumentArray *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_FbxDocumentArray(sipSimpleWrapper *);}
static void dealloc_FbxDocumentArray(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_FbxDocumentArray(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_FbxDocumentArray(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_FbxDocumentArray(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::FbxDocumentArray *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new  ::FbxDocumentArray();

            return sipCpp;
        }
    }

    {
        const  ::FbxDocumentArray* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_FbxDocumentArray, &a0))
        {
            sipCpp = new  ::FbxDocumentArray(*a0);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_FbxDocumentArray[] = {
    {(void *)slot_FbxDocumentArray___getitem__, getitem_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_FbxDocumentArray[] = {
    {sipName_Add, meth_FbxDocumentArray_Add, METH_VARARGS, doc_FbxDocumentArray_Add},
    {sipName_AddArray, meth_FbxDocumentArray_AddArray, METH_VARARGS, doc_FbxDocumentArray_AddArray},
    {sipName_AddArrayNoDuplicate, meth_FbxDocumentArray_AddArrayNoDuplicate, METH_VARARGS, doc_FbxDocumentArray_AddArrayNoDuplicate},
    {sipName_AddUnique, meth_FbxDocumentArray_AddUnique, METH_VARARGS, doc_FbxDocumentArray_AddUnique},
    {sipName_Find, meth_FbxDocumentArray_Find, METH_VARARGS, doc_FbxDocumentArray_Find},
    {sipName_GetAt, meth_FbxDocumentArray_GetAt, METH_VARARGS, doc_FbxDocumentArray_GetAt},
    {sipName_GetCount, meth_FbxDocumentArray_GetCount, METH_VARARGS, doc_FbxDocumentArray_GetCount},
    {sipName_GetFirst, meth_FbxDocumentArray_GetFirst, METH_VARARGS, doc_FbxDocumentArray_GetFirst},
    {sipName_GetLast, meth_FbxDocumentArray_GetLast, METH_VARARGS, doc_FbxDocumentArray_GetLast},
    {sipName_InsertAt, meth_FbxDocumentArray_InsertAt, METH_VARARGS, doc_FbxDocumentArray_InsertAt},
    {sipName_RemoveArray, meth_FbxDocumentArray_RemoveArray, METH_VARARGS, doc_FbxDocumentArray_RemoveArray},
    {sipName_RemoveAt, meth_FbxDocumentArray_RemoveAt, METH_VARARGS, doc_FbxDocumentArray_RemoveAt},
    {sipName_RemoveIt, meth_FbxDocumentArray_RemoveIt, METH_VARARGS, doc_FbxDocumentArray_RemoveIt},
    {sipName_RemoveLast, meth_FbxDocumentArray_RemoveLast, METH_VARARGS, doc_FbxDocumentArray_RemoveLast},
    {sipName_SetAt, meth_FbxDocumentArray_SetAt, METH_VARARGS, doc_FbxDocumentArray_SetAt},
    {sipName_SetLast, meth_FbxDocumentArray_SetLast, METH_VARARGS, doc_FbxDocumentArray_SetLast}
};

PyDoc_STRVAR(doc_FbxDocumentArray, "\1FbxDocumentArray()\n"
"FbxDocumentArray(FbxDocumentArray)");


sipClassTypeDef sipTypeDef_fbx_FbxDocumentArray = {
    {
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_FbxDocumentArray,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_FbxDocumentArray,
        {0, 0, 1},
        16, methods_FbxDocumentArray,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_FbxDocumentArray,
    -1,
    -1,
    SIP_NULLPTR,
    slots_FbxDocumentArray,
    init_type_FbxDocumentArray,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_FbxDocumentArray,
    assign_FbxDocumentArray,
    array_FbxDocumentArray,
    copy_FbxDocumentArray,
    release_FbxDocumentArray,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};