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




PyDoc_STRVAR(doc_FbxNodeArray_GetCount, "GetCount(self) -> int");

extern "C" {static PyObject *meth_FbxNodeArray_GetCount(PyObject *, PyObject *);}
static PyObject *meth_FbxNodeArray_GetCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxNodeArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxNodeArray, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->GetCount();

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxNodeArray, sipName_GetCount, doc_FbxNodeArray_GetCount);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxNodeArray_InsertAt, "InsertAt(self, int, FbxNode) -> int");

extern "C" {static PyObject *meth_FbxNodeArray_InsertAt(PyObject *, PyObject *);}
static PyObject *meth_FbxNodeArray_InsertAt(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
         ::FbxNodePtr a1;
         ::FbxNodeArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BiJ8", &sipSelf, sipType_FbxNodeArray, &sipCpp, &a0, sipType_FbxNode, &a1))
        {
            int sipRes;

            sipRes = sipCpp->InsertAt(a0,a1);

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxNodeArray, sipName_InsertAt, doc_FbxNodeArray_InsertAt);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxNodeArray_Add, "Add(self, FbxNode) -> int");

extern "C" {static PyObject *meth_FbxNodeArray_Add(PyObject *, PyObject *);}
static PyObject *meth_FbxNodeArray_Add(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxNodePtr a0;
         ::FbxNodeArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_FbxNodeArray, &sipCpp, sipType_FbxNode, &a0))
        {
            int sipRes;

            sipRes = sipCpp->Add(a0);

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxNodeArray, sipName_Add, doc_FbxNodeArray_Add);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxNodeArray_AddUnique, "AddUnique(self, FbxNode) -> int");

extern "C" {static PyObject *meth_FbxNodeArray_AddUnique(PyObject *, PyObject *);}
static PyObject *meth_FbxNodeArray_AddUnique(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxNodePtr a0;
         ::FbxNodeArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_FbxNodeArray, &sipCpp, sipType_FbxNode, &a0))
        {
            int sipRes;

            sipRes = sipCpp->AddUnique(a0);

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxNodeArray, sipName_AddUnique, doc_FbxNodeArray_AddUnique);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxNodeArray_AddArray, "AddArray(self, FbxNodeArray)");

extern "C" {static PyObject *meth_FbxNodeArray_AddArray(PyObject *, PyObject *);}
static PyObject *meth_FbxNodeArray_AddArray(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxNodeArray* a0;
         ::FbxNodeArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_FbxNodeArray, &sipCpp, sipType_FbxNodeArray, &a0))
        {
            sipCpp->AddArray(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxNodeArray, sipName_AddArray, doc_FbxNodeArray_AddArray);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxNodeArray_AddArrayNoDuplicate, "AddArrayNoDuplicate(self, FbxNodeArray)");

extern "C" {static PyObject *meth_FbxNodeArray_AddArrayNoDuplicate(PyObject *, PyObject *);}
static PyObject *meth_FbxNodeArray_AddArrayNoDuplicate(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxNodeArray* a0;
         ::FbxNodeArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_FbxNodeArray, &sipCpp, sipType_FbxNodeArray, &a0))
        {
            sipCpp->AddArrayNoDuplicate(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxNodeArray, sipName_AddArrayNoDuplicate, doc_FbxNodeArray_AddArrayNoDuplicate);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxNodeArray_SetAt, "SetAt(self, int, FbxNode)");

extern "C" {static PyObject *meth_FbxNodeArray_SetAt(PyObject *, PyObject *);}
static PyObject *meth_FbxNodeArray_SetAt(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
         ::FbxNodePtr a1;
         ::FbxNodeArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BiJ8", &sipSelf, sipType_FbxNodeArray, &sipCpp, &a0, sipType_FbxNode, &a1))
        {
            sipCpp->SetAt(a0,a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxNodeArray, sipName_SetAt, doc_FbxNodeArray_SetAt);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxNodeArray_SetLast, "SetLast(self, FbxNode)");

extern "C" {static PyObject *meth_FbxNodeArray_SetLast(PyObject *, PyObject *);}
static PyObject *meth_FbxNodeArray_SetLast(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxNodePtr a0;
         ::FbxNodeArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_FbxNodeArray, &sipCpp, sipType_FbxNode, &a0))
        {
            sipCpp->SetLast(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxNodeArray, sipName_SetLast, doc_FbxNodeArray_SetLast);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxNodeArray_GetAt, "GetAt(self, int) -> FbxNode");

extern "C" {static PyObject *meth_FbxNodeArray_GetAt(PyObject *, PyObject *);}
static PyObject *meth_FbxNodeArray_GetAt(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
        const  ::FbxNodeArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_FbxNodeArray, &sipCpp, &a0))
        {
             ::FbxNodePtr sipRes;

            sipRes = sipCpp->GetAt(a0);

            return sipConvertFromType(sipRes,sipType_FbxNode,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxNodeArray, sipName_GetAt, doc_FbxNodeArray_GetAt);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxNodeArray_GetFirst, "GetFirst(self) -> FbxNode");

extern "C" {static PyObject *meth_FbxNodeArray_GetFirst(PyObject *, PyObject *);}
static PyObject *meth_FbxNodeArray_GetFirst(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxNodeArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxNodeArray, &sipCpp))
        {
             ::FbxNodePtr sipRes;

            sipRes = sipCpp->GetFirst();

            return sipConvertFromType(sipRes,sipType_FbxNode,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxNodeArray, sipName_GetFirst, doc_FbxNodeArray_GetFirst);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxNodeArray_GetLast, "GetLast(self) -> FbxNode");

extern "C" {static PyObject *meth_FbxNodeArray_GetLast(PyObject *, PyObject *);}
static PyObject *meth_FbxNodeArray_GetLast(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxNodeArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxNodeArray, &sipCpp))
        {
             ::FbxNodePtr sipRes;

            sipRes = sipCpp->GetLast();

            return sipConvertFromType(sipRes,sipType_FbxNode,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxNodeArray, sipName_GetLast, doc_FbxNodeArray_GetLast);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxNodeArray_RemoveAt, "RemoveAt(self, int) -> FbxNode");

extern "C" {static PyObject *meth_FbxNodeArray_RemoveAt(PyObject *, PyObject *);}
static PyObject *meth_FbxNodeArray_RemoveAt(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
         ::FbxNodeArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_FbxNodeArray, &sipCpp, &a0))
        {
             ::FbxNodePtr sipRes;

            sipRes = sipCpp->RemoveAt(a0);

            return sipConvertFromType(sipRes,sipType_FbxNode,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxNodeArray, sipName_RemoveAt, doc_FbxNodeArray_RemoveAt);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxNodeArray_RemoveLast, "RemoveLast(self) -> FbxNode");

extern "C" {static PyObject *meth_FbxNodeArray_RemoveLast(PyObject *, PyObject *);}
static PyObject *meth_FbxNodeArray_RemoveLast(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxNodeArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxNodeArray, &sipCpp))
        {
             ::FbxNodePtr sipRes;

            sipRes = sipCpp->RemoveLast();

            return sipConvertFromType(sipRes,sipType_FbxNode,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxNodeArray, sipName_RemoveLast, doc_FbxNodeArray_RemoveLast);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxNodeArray_RemoveIt, "RemoveIt(self, FbxNode) -> bool");

extern "C" {static PyObject *meth_FbxNodeArray_RemoveIt(PyObject *, PyObject *);}
static PyObject *meth_FbxNodeArray_RemoveIt(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxNodePtr a0;
         ::FbxNodeArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_FbxNodeArray, &sipCpp, sipType_FbxNode, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->RemoveIt(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxNodeArray, sipName_RemoveIt, doc_FbxNodeArray_RemoveIt);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxNodeArray_RemoveArray, "RemoveArray(self, FbxNodeArray)");

extern "C" {static PyObject *meth_FbxNodeArray_RemoveArray(PyObject *, PyObject *);}
static PyObject *meth_FbxNodeArray_RemoveArray(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxNodeArray* a0;
         ::FbxNodeArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_FbxNodeArray, &sipCpp, sipType_FbxNodeArray, &a0))
        {
            sipCpp->RemoveArray(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxNodeArray, sipName_RemoveArray, doc_FbxNodeArray_RemoveArray);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxNodeArray_Find, "Find(self, FbxNode) -> int");

extern "C" {static PyObject *meth_FbxNodeArray_Find(PyObject *, PyObject *);}
static PyObject *meth_FbxNodeArray_Find(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxNodePtr a0;
        const  ::FbxNodeArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_FbxNodeArray, &sipCpp, sipType_FbxNode, &a0))
        {
            int sipRes;

            sipRes = sipCpp->Find(a0);

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxNodeArray, sipName_Find, doc_FbxNodeArray_Find);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *slot_FbxNodeArray___getitem__(PyObject *,PyObject *);}
static PyObject *slot_FbxNodeArray___getitem__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxNodeArray *sipCpp = reinterpret_cast< ::FbxNodeArray *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxNodeArray));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
             ::FbxNodePtr sipRes = 0;
            int sipIsErr = 0;

#line 33 "D:\\Program Files\\Autodesk\\FBX\\FBX Python Bindings\\2020.3.4\\sip\\fbxarray.sip"
        if (a0 < 0 || a0 >= sipCpp->GetCount())
        {
            PyErr_Format(PyExc_IndexError, "sequence index out of range");
            sipIsErr = 1;
        }
        else
        {
            fbxArrayElementCopy(&sipRes, (FbxNodePtr*)NULL, sipCpp, a0);
        }
#line 513 "D:\\Program Files\\Autodesk\\FBX\\FBX Python Bindings\\2020.3.4\\build\\fbx/sipfbxFbxNodeArray.cpp"

            if (sipIsErr)
                return 0;

            return sipConvertFromType(sipRes,sipType_FbxNode,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxNodeArray, sipName___getitem__, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_FbxNodeArray(void *, int);}
static void release_FbxNodeArray(void *sipCppV, int)
{
    delete reinterpret_cast< ::FbxNodeArray *>(sipCppV);
}


extern "C" {static void *array_FbxNodeArray(Py_ssize_t);}
static void *array_FbxNodeArray(Py_ssize_t sipNrElem)
{
    return new  ::FbxNodeArray[sipNrElem];
}


extern "C" {static void assign_FbxNodeArray(void *, Py_ssize_t, void *);}
static void assign_FbxNodeArray(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::FbxNodeArray *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::FbxNodeArray *>(sipSrc);
}


extern "C" {static void *copy_FbxNodeArray(const void *, Py_ssize_t);}
static void *copy_FbxNodeArray(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::FbxNodeArray(reinterpret_cast<const  ::FbxNodeArray *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_FbxNodeArray(sipSimpleWrapper *);}
static void dealloc_FbxNodeArray(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_FbxNodeArray(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_FbxNodeArray(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_FbxNodeArray(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::FbxNodeArray *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new  ::FbxNodeArray();

            return sipCpp;
        }
    }

    {
        const  ::FbxNodeArray* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_FbxNodeArray, &a0))
        {
            sipCpp = new  ::FbxNodeArray(*a0);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_FbxNodeArray[] = {
    {(void *)slot_FbxNodeArray___getitem__, getitem_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_FbxNodeArray[] = {
    {sipName_Add, meth_FbxNodeArray_Add, METH_VARARGS, doc_FbxNodeArray_Add},
    {sipName_AddArray, meth_FbxNodeArray_AddArray, METH_VARARGS, doc_FbxNodeArray_AddArray},
    {sipName_AddArrayNoDuplicate, meth_FbxNodeArray_AddArrayNoDuplicate, METH_VARARGS, doc_FbxNodeArray_AddArrayNoDuplicate},
    {sipName_AddUnique, meth_FbxNodeArray_AddUnique, METH_VARARGS, doc_FbxNodeArray_AddUnique},
    {sipName_Find, meth_FbxNodeArray_Find, METH_VARARGS, doc_FbxNodeArray_Find},
    {sipName_GetAt, meth_FbxNodeArray_GetAt, METH_VARARGS, doc_FbxNodeArray_GetAt},
    {sipName_GetCount, meth_FbxNodeArray_GetCount, METH_VARARGS, doc_FbxNodeArray_GetCount},
    {sipName_GetFirst, meth_FbxNodeArray_GetFirst, METH_VARARGS, doc_FbxNodeArray_GetFirst},
    {sipName_GetLast, meth_FbxNodeArray_GetLast, METH_VARARGS, doc_FbxNodeArray_GetLast},
    {sipName_InsertAt, meth_FbxNodeArray_InsertAt, METH_VARARGS, doc_FbxNodeArray_InsertAt},
    {sipName_RemoveArray, meth_FbxNodeArray_RemoveArray, METH_VARARGS, doc_FbxNodeArray_RemoveArray},
    {sipName_RemoveAt, meth_FbxNodeArray_RemoveAt, METH_VARARGS, doc_FbxNodeArray_RemoveAt},
    {sipName_RemoveIt, meth_FbxNodeArray_RemoveIt, METH_VARARGS, doc_FbxNodeArray_RemoveIt},
    {sipName_RemoveLast, meth_FbxNodeArray_RemoveLast, METH_VARARGS, doc_FbxNodeArray_RemoveLast},
    {sipName_SetAt, meth_FbxNodeArray_SetAt, METH_VARARGS, doc_FbxNodeArray_SetAt},
    {sipName_SetLast, meth_FbxNodeArray_SetLast, METH_VARARGS, doc_FbxNodeArray_SetLast}
};

PyDoc_STRVAR(doc_FbxNodeArray, "\1FbxNodeArray()\n"
"FbxNodeArray(FbxNodeArray)");


sipClassTypeDef sipTypeDef_fbx_FbxNodeArray = {
    {
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_FbxNodeArray,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_FbxNodeArray,
        {0, 0, 1},
        16, methods_FbxNodeArray,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_FbxNodeArray,
    -1,
    -1,
    SIP_NULLPTR,
    slots_FbxNodeArray,
    init_type_FbxNodeArray,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_FbxNodeArray,
    assign_FbxNodeArray,
    array_FbxNodeArray,
    copy_FbxNodeArray,
    release_FbxNodeArray,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};
