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




PyDoc_STRVAR(doc_FbxSelectionNodeArray_GetCount, "GetCount(self) -> int");

extern "C" {static PyObject *meth_FbxSelectionNodeArray_GetCount(PyObject *, PyObject *);}
static PyObject *meth_FbxSelectionNodeArray_GetCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxSelectionNodeArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxSelectionNodeArray, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->GetCount();

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxSelectionNodeArray, sipName_GetCount, doc_FbxSelectionNodeArray_GetCount);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxSelectionNodeArray_InsertAt, "InsertAt(self, int, FbxSelectionNode) -> int");

extern "C" {static PyObject *meth_FbxSelectionNodeArray_InsertAt(PyObject *, PyObject *);}
static PyObject *meth_FbxSelectionNodeArray_InsertAt(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
         ::FbxSelectionNodePtr a1;
         ::FbxSelectionNodeArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BiJ8", &sipSelf, sipType_FbxSelectionNodeArray, &sipCpp, &a0, sipType_FbxSelectionNode, &a1))
        {
            int sipRes;

            sipRes = sipCpp->InsertAt(a0,a1);

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxSelectionNodeArray, sipName_InsertAt, doc_FbxSelectionNodeArray_InsertAt);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxSelectionNodeArray_Add, "Add(self, FbxSelectionNode) -> int");

extern "C" {static PyObject *meth_FbxSelectionNodeArray_Add(PyObject *, PyObject *);}
static PyObject *meth_FbxSelectionNodeArray_Add(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxSelectionNodePtr a0;
         ::FbxSelectionNodeArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_FbxSelectionNodeArray, &sipCpp, sipType_FbxSelectionNode, &a0))
        {
            int sipRes;

            sipRes = sipCpp->Add(a0);

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxSelectionNodeArray, sipName_Add, doc_FbxSelectionNodeArray_Add);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxSelectionNodeArray_AddUnique, "AddUnique(self, FbxSelectionNode) -> int");

extern "C" {static PyObject *meth_FbxSelectionNodeArray_AddUnique(PyObject *, PyObject *);}
static PyObject *meth_FbxSelectionNodeArray_AddUnique(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxSelectionNodePtr a0;
         ::FbxSelectionNodeArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_FbxSelectionNodeArray, &sipCpp, sipType_FbxSelectionNode, &a0))
        {
            int sipRes;

            sipRes = sipCpp->AddUnique(a0);

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxSelectionNodeArray, sipName_AddUnique, doc_FbxSelectionNodeArray_AddUnique);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxSelectionNodeArray_AddArray, "AddArray(self, FbxSelectionNodeArray)");

extern "C" {static PyObject *meth_FbxSelectionNodeArray_AddArray(PyObject *, PyObject *);}
static PyObject *meth_FbxSelectionNodeArray_AddArray(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxSelectionNodeArray* a0;
         ::FbxSelectionNodeArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_FbxSelectionNodeArray, &sipCpp, sipType_FbxSelectionNodeArray, &a0))
        {
            sipCpp->AddArray(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxSelectionNodeArray, sipName_AddArray, doc_FbxSelectionNodeArray_AddArray);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxSelectionNodeArray_AddArrayNoDuplicate, "AddArrayNoDuplicate(self, FbxSelectionNodeArray)");

extern "C" {static PyObject *meth_FbxSelectionNodeArray_AddArrayNoDuplicate(PyObject *, PyObject *);}
static PyObject *meth_FbxSelectionNodeArray_AddArrayNoDuplicate(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxSelectionNodeArray* a0;
         ::FbxSelectionNodeArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_FbxSelectionNodeArray, &sipCpp, sipType_FbxSelectionNodeArray, &a0))
        {
            sipCpp->AddArrayNoDuplicate(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxSelectionNodeArray, sipName_AddArrayNoDuplicate, doc_FbxSelectionNodeArray_AddArrayNoDuplicate);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxSelectionNodeArray_SetAt, "SetAt(self, int, FbxSelectionNode)");

extern "C" {static PyObject *meth_FbxSelectionNodeArray_SetAt(PyObject *, PyObject *);}
static PyObject *meth_FbxSelectionNodeArray_SetAt(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
         ::FbxSelectionNodePtr a1;
         ::FbxSelectionNodeArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BiJ8", &sipSelf, sipType_FbxSelectionNodeArray, &sipCpp, &a0, sipType_FbxSelectionNode, &a1))
        {
            sipCpp->SetAt(a0,a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxSelectionNodeArray, sipName_SetAt, doc_FbxSelectionNodeArray_SetAt);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxSelectionNodeArray_SetLast, "SetLast(self, FbxSelectionNode)");

extern "C" {static PyObject *meth_FbxSelectionNodeArray_SetLast(PyObject *, PyObject *);}
static PyObject *meth_FbxSelectionNodeArray_SetLast(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxSelectionNodePtr a0;
         ::FbxSelectionNodeArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_FbxSelectionNodeArray, &sipCpp, sipType_FbxSelectionNode, &a0))
        {
            sipCpp->SetLast(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxSelectionNodeArray, sipName_SetLast, doc_FbxSelectionNodeArray_SetLast);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxSelectionNodeArray_GetAt, "GetAt(self, int) -> FbxSelectionNode");

extern "C" {static PyObject *meth_FbxSelectionNodeArray_GetAt(PyObject *, PyObject *);}
static PyObject *meth_FbxSelectionNodeArray_GetAt(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
        const  ::FbxSelectionNodeArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_FbxSelectionNodeArray, &sipCpp, &a0))
        {
             ::FbxSelectionNodePtr sipRes;

            sipRes = sipCpp->GetAt(a0);

            return sipConvertFromType(sipRes,sipType_FbxSelectionNode,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxSelectionNodeArray, sipName_GetAt, doc_FbxSelectionNodeArray_GetAt);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxSelectionNodeArray_GetFirst, "GetFirst(self) -> FbxSelectionNode");

extern "C" {static PyObject *meth_FbxSelectionNodeArray_GetFirst(PyObject *, PyObject *);}
static PyObject *meth_FbxSelectionNodeArray_GetFirst(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxSelectionNodeArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxSelectionNodeArray, &sipCpp))
        {
             ::FbxSelectionNodePtr sipRes;

            sipRes = sipCpp->GetFirst();

            return sipConvertFromType(sipRes,sipType_FbxSelectionNode,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxSelectionNodeArray, sipName_GetFirst, doc_FbxSelectionNodeArray_GetFirst);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxSelectionNodeArray_GetLast, "GetLast(self) -> FbxSelectionNode");

extern "C" {static PyObject *meth_FbxSelectionNodeArray_GetLast(PyObject *, PyObject *);}
static PyObject *meth_FbxSelectionNodeArray_GetLast(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxSelectionNodeArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxSelectionNodeArray, &sipCpp))
        {
             ::FbxSelectionNodePtr sipRes;

            sipRes = sipCpp->GetLast();

            return sipConvertFromType(sipRes,sipType_FbxSelectionNode,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxSelectionNodeArray, sipName_GetLast, doc_FbxSelectionNodeArray_GetLast);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxSelectionNodeArray_RemoveAt, "RemoveAt(self, int) -> FbxSelectionNode");

extern "C" {static PyObject *meth_FbxSelectionNodeArray_RemoveAt(PyObject *, PyObject *);}
static PyObject *meth_FbxSelectionNodeArray_RemoveAt(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
         ::FbxSelectionNodeArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_FbxSelectionNodeArray, &sipCpp, &a0))
        {
             ::FbxSelectionNodePtr sipRes;

            sipRes = sipCpp->RemoveAt(a0);

            return sipConvertFromType(sipRes,sipType_FbxSelectionNode,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxSelectionNodeArray, sipName_RemoveAt, doc_FbxSelectionNodeArray_RemoveAt);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxSelectionNodeArray_RemoveLast, "RemoveLast(self) -> FbxSelectionNode");

extern "C" {static PyObject *meth_FbxSelectionNodeArray_RemoveLast(PyObject *, PyObject *);}
static PyObject *meth_FbxSelectionNodeArray_RemoveLast(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxSelectionNodeArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxSelectionNodeArray, &sipCpp))
        {
             ::FbxSelectionNodePtr sipRes;

            sipRes = sipCpp->RemoveLast();

            return sipConvertFromType(sipRes,sipType_FbxSelectionNode,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxSelectionNodeArray, sipName_RemoveLast, doc_FbxSelectionNodeArray_RemoveLast);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxSelectionNodeArray_RemoveIt, "RemoveIt(self, FbxSelectionNode) -> bool");

extern "C" {static PyObject *meth_FbxSelectionNodeArray_RemoveIt(PyObject *, PyObject *);}
static PyObject *meth_FbxSelectionNodeArray_RemoveIt(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxSelectionNodePtr a0;
         ::FbxSelectionNodeArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_FbxSelectionNodeArray, &sipCpp, sipType_FbxSelectionNode, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->RemoveIt(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxSelectionNodeArray, sipName_RemoveIt, doc_FbxSelectionNodeArray_RemoveIt);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxSelectionNodeArray_RemoveArray, "RemoveArray(self, FbxSelectionNodeArray)");

extern "C" {static PyObject *meth_FbxSelectionNodeArray_RemoveArray(PyObject *, PyObject *);}
static PyObject *meth_FbxSelectionNodeArray_RemoveArray(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxSelectionNodeArray* a0;
         ::FbxSelectionNodeArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_FbxSelectionNodeArray, &sipCpp, sipType_FbxSelectionNodeArray, &a0))
        {
            sipCpp->RemoveArray(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxSelectionNodeArray, sipName_RemoveArray, doc_FbxSelectionNodeArray_RemoveArray);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxSelectionNodeArray_Find, "Find(self, FbxSelectionNode) -> int");

extern "C" {static PyObject *meth_FbxSelectionNodeArray_Find(PyObject *, PyObject *);}
static PyObject *meth_FbxSelectionNodeArray_Find(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxSelectionNodePtr a0;
        const  ::FbxSelectionNodeArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_FbxSelectionNodeArray, &sipCpp, sipType_FbxSelectionNode, &a0))
        {
            int sipRes;

            sipRes = sipCpp->Find(a0);

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxSelectionNodeArray, sipName_Find, doc_FbxSelectionNodeArray_Find);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *slot_FbxSelectionNodeArray___getitem__(PyObject *,PyObject *);}
static PyObject *slot_FbxSelectionNodeArray___getitem__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxSelectionNodeArray *sipCpp = reinterpret_cast< ::FbxSelectionNodeArray *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxSelectionNodeArray));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
             ::FbxSelectionNodePtr sipRes = 0;
            int sipIsErr = 0;

#line 33 "D:\\Program Files\\Autodesk\\FBX\\FBX Python Bindings\\2020.3.4\\sip\\fbxarray.sip"
        if (a0 < 0 || a0 >= sipCpp->GetCount())
        {
            PyErr_Format(PyExc_IndexError, "sequence index out of range");
            sipIsErr = 1;
        }
        else
        {
            fbxArrayElementCopy(&sipRes, (FbxSelectionNodePtr*)NULL, sipCpp, a0);
        }
#line 513 "D:\\Program Files\\Autodesk\\FBX\\FBX Python Bindings\\2020.3.4\\build\\fbx/sipfbxFbxSelectionNodeArray.cpp"

            if (sipIsErr)
                return 0;

            return sipConvertFromType(sipRes,sipType_FbxSelectionNode,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxSelectionNodeArray, sipName___getitem__, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_FbxSelectionNodeArray(void *, int);}
static void release_FbxSelectionNodeArray(void *sipCppV, int)
{
    delete reinterpret_cast< ::FbxSelectionNodeArray *>(sipCppV);
}


extern "C" {static void *array_FbxSelectionNodeArray(Py_ssize_t);}
static void *array_FbxSelectionNodeArray(Py_ssize_t sipNrElem)
{
    return new  ::FbxSelectionNodeArray[sipNrElem];
}


extern "C" {static void assign_FbxSelectionNodeArray(void *, Py_ssize_t, void *);}
static void assign_FbxSelectionNodeArray(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::FbxSelectionNodeArray *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::FbxSelectionNodeArray *>(sipSrc);
}


extern "C" {static void *copy_FbxSelectionNodeArray(const void *, Py_ssize_t);}
static void *copy_FbxSelectionNodeArray(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::FbxSelectionNodeArray(reinterpret_cast<const  ::FbxSelectionNodeArray *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_FbxSelectionNodeArray(sipSimpleWrapper *);}
static void dealloc_FbxSelectionNodeArray(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_FbxSelectionNodeArray(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_FbxSelectionNodeArray(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_FbxSelectionNodeArray(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::FbxSelectionNodeArray *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new  ::FbxSelectionNodeArray();

            return sipCpp;
        }
    }

    {
        const  ::FbxSelectionNodeArray* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_FbxSelectionNodeArray, &a0))
        {
            sipCpp = new  ::FbxSelectionNodeArray(*a0);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_FbxSelectionNodeArray[] = {
    {(void *)slot_FbxSelectionNodeArray___getitem__, getitem_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_FbxSelectionNodeArray[] = {
    {sipName_Add, meth_FbxSelectionNodeArray_Add, METH_VARARGS, doc_FbxSelectionNodeArray_Add},
    {sipName_AddArray, meth_FbxSelectionNodeArray_AddArray, METH_VARARGS, doc_FbxSelectionNodeArray_AddArray},
    {sipName_AddArrayNoDuplicate, meth_FbxSelectionNodeArray_AddArrayNoDuplicate, METH_VARARGS, doc_FbxSelectionNodeArray_AddArrayNoDuplicate},
    {sipName_AddUnique, meth_FbxSelectionNodeArray_AddUnique, METH_VARARGS, doc_FbxSelectionNodeArray_AddUnique},
    {sipName_Find, meth_FbxSelectionNodeArray_Find, METH_VARARGS, doc_FbxSelectionNodeArray_Find},
    {sipName_GetAt, meth_FbxSelectionNodeArray_GetAt, METH_VARARGS, doc_FbxSelectionNodeArray_GetAt},
    {sipName_GetCount, meth_FbxSelectionNodeArray_GetCount, METH_VARARGS, doc_FbxSelectionNodeArray_GetCount},
    {sipName_GetFirst, meth_FbxSelectionNodeArray_GetFirst, METH_VARARGS, doc_FbxSelectionNodeArray_GetFirst},
    {sipName_GetLast, meth_FbxSelectionNodeArray_GetLast, METH_VARARGS, doc_FbxSelectionNodeArray_GetLast},
    {sipName_InsertAt, meth_FbxSelectionNodeArray_InsertAt, METH_VARARGS, doc_FbxSelectionNodeArray_InsertAt},
    {sipName_RemoveArray, meth_FbxSelectionNodeArray_RemoveArray, METH_VARARGS, doc_FbxSelectionNodeArray_RemoveArray},
    {sipName_RemoveAt, meth_FbxSelectionNodeArray_RemoveAt, METH_VARARGS, doc_FbxSelectionNodeArray_RemoveAt},
    {sipName_RemoveIt, meth_FbxSelectionNodeArray_RemoveIt, METH_VARARGS, doc_FbxSelectionNodeArray_RemoveIt},
    {sipName_RemoveLast, meth_FbxSelectionNodeArray_RemoveLast, METH_VARARGS, doc_FbxSelectionNodeArray_RemoveLast},
    {sipName_SetAt, meth_FbxSelectionNodeArray_SetAt, METH_VARARGS, doc_FbxSelectionNodeArray_SetAt},
    {sipName_SetLast, meth_FbxSelectionNodeArray_SetLast, METH_VARARGS, doc_FbxSelectionNodeArray_SetLast}
};

PyDoc_STRVAR(doc_FbxSelectionNodeArray, "\1FbxSelectionNodeArray()\n"
"FbxSelectionNodeArray(FbxSelectionNodeArray)");


sipClassTypeDef sipTypeDef_fbx_FbxSelectionNodeArray = {
    {
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_FbxSelectionNodeArray,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_FbxSelectionNodeArray,
        {0, 0, 1},
        16, methods_FbxSelectionNodeArray,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_FbxSelectionNodeArray,
    -1,
    -1,
    SIP_NULLPTR,
    slots_FbxSelectionNodeArray,
    init_type_FbxSelectionNodeArray,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_FbxSelectionNodeArray,
    assign_FbxSelectionNodeArray,
    array_FbxSelectionNodeArray,
    copy_FbxSelectionNodeArray,
    release_FbxSelectionNodeArray,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};