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




class sipFbxLayerElementArrayTemplate_int : public  ::FbxLayerElementArrayTemplate_int
{
public:
    sipFbxLayerElementArrayTemplate_int( ::EFbxType);
    sipFbxLayerElementArrayTemplate_int(const  ::FbxLayerElementArrayTemplate_int&);
    virtual ~sipFbxLayerElementArrayTemplate_int();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void* GetLocked( ::FbxLayerElementArray::ELockMode, ::EFbxType) SIP_OVERRIDE;
    void Release(void**, ::EFbxType) SIP_OVERRIDE;
    size_t GetStride() const SIP_OVERRIDE;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipFbxLayerElementArrayTemplate_int(const sipFbxLayerElementArrayTemplate_int &);
    sipFbxLayerElementArrayTemplate_int &operator = (const sipFbxLayerElementArrayTemplate_int &);

    char sipPyMethods[3];
};

sipFbxLayerElementArrayTemplate_int::sipFbxLayerElementArrayTemplate_int( ::EFbxType a0):  ::FbxLayerElementArrayTemplate_int(a0), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipFbxLayerElementArrayTemplate_int::sipFbxLayerElementArrayTemplate_int(const  ::FbxLayerElementArrayTemplate_int& a0):  ::FbxLayerElementArrayTemplate_int(a0), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipFbxLayerElementArrayTemplate_int::~sipFbxLayerElementArrayTemplate_int()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

void* sipFbxLayerElementArrayTemplate_int::GetLocked( ::FbxLayerElementArray::ELockMode a0, ::EFbxType a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[0], &sipPySelf, SIP_NULLPTR, sipName_GetLocked);

    if (!sipMeth)
        return  ::FbxLayerElementArrayTemplate_int::GetLocked(a0,a1);

    extern void* sipVH_fbx_7(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::FbxLayerElementArray::ELockMode, ::EFbxType);

    return sipVH_fbx_7(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

void sipFbxLayerElementArrayTemplate_int::Release(void**a0, ::EFbxType a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[1], &sipPySelf, SIP_NULLPTR, sipName_Release);

    if (!sipMeth)
    {
         ::FbxLayerElementArrayTemplate_int::Release(a0,a1);
        return;
    }

    extern void sipVH_fbx_8(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, void**, ::EFbxType);

    sipVH_fbx_8(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

size_t sipFbxLayerElementArrayTemplate_int::GetStride() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[2]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_GetStride);

    if (!sipMeth)
        return  ::FbxLayerElementArrayTemplate_int::GetStride();

    extern size_t sipVH_fbx_9(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_fbx_9(sipGILState, 0, sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_FbxLayerElementArrayTemplate_int_Add, "Add(self, int) -> int");

extern "C" {static PyObject *meth_FbxLayerElementArrayTemplate_int_Add(PyObject *, PyObject *);}
static PyObject *meth_FbxLayerElementArrayTemplate_int_Add(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
         ::FbxLayerElementArrayTemplate_int *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_FbxLayerElementArrayTemplate_int, &sipCpp, &a0))
        {
            int sipRes;

            sipRes = sipCpp->Add(a0);

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxLayerElementArrayTemplate_int, sipName_Add, doc_FbxLayerElementArrayTemplate_int_Add);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxLayerElementArrayTemplate_int_InsertAt, "InsertAt(self, int, int) -> int");

extern "C" {static PyObject *meth_FbxLayerElementArrayTemplate_int_InsertAt(PyObject *, PyObject *);}
static PyObject *meth_FbxLayerElementArrayTemplate_int_InsertAt(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
        int a1;
         ::FbxLayerElementArrayTemplate_int *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bii", &sipSelf, sipType_FbxLayerElementArrayTemplate_int, &sipCpp, &a0, &a1))
        {
            int sipRes;

            sipRes = sipCpp->InsertAt(a0,a1);

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxLayerElementArrayTemplate_int, sipName_InsertAt, doc_FbxLayerElementArrayTemplate_int_InsertAt);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxLayerElementArrayTemplate_int_SetAt, "SetAt(self, int, int)");

extern "C" {static PyObject *meth_FbxLayerElementArrayTemplate_int_SetAt(PyObject *, PyObject *);}
static PyObject *meth_FbxLayerElementArrayTemplate_int_SetAt(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
        int a1;
         ::FbxLayerElementArrayTemplate_int *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bii", &sipSelf, sipType_FbxLayerElementArrayTemplate_int, &sipCpp, &a0, &a1))
        {
            sipCpp->SetAt(a0,a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxLayerElementArrayTemplate_int, sipName_SetAt, doc_FbxLayerElementArrayTemplate_int_SetAt);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxLayerElementArrayTemplate_int_SetLast, "SetLast(self, int)");

extern "C" {static PyObject *meth_FbxLayerElementArrayTemplate_int_SetLast(PyObject *, PyObject *);}
static PyObject *meth_FbxLayerElementArrayTemplate_int_SetLast(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
         ::FbxLayerElementArrayTemplate_int *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_FbxLayerElementArrayTemplate_int, &sipCpp, &a0))
        {
            sipCpp->SetLast(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxLayerElementArrayTemplate_int, sipName_SetLast, doc_FbxLayerElementArrayTemplate_int_SetLast);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxLayerElementArrayTemplate_int_RemoveAt, "RemoveAt(self, int) -> int");

extern "C" {static PyObject *meth_FbxLayerElementArrayTemplate_int_RemoveAt(PyObject *, PyObject *);}
static PyObject *meth_FbxLayerElementArrayTemplate_int_RemoveAt(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
         ::FbxLayerElementArrayTemplate_int *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_FbxLayerElementArrayTemplate_int, &sipCpp, &a0))
        {
            int sipRes;

            sipRes = sipCpp->RemoveAt(a0);

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxLayerElementArrayTemplate_int, sipName_RemoveAt, doc_FbxLayerElementArrayTemplate_int_RemoveAt);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxLayerElementArrayTemplate_int_RemoveLast, "RemoveLast(self) -> int");

extern "C" {static PyObject *meth_FbxLayerElementArrayTemplate_int_RemoveLast(PyObject *, PyObject *);}
static PyObject *meth_FbxLayerElementArrayTemplate_int_RemoveLast(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxLayerElementArrayTemplate_int *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxLayerElementArrayTemplate_int, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->RemoveLast();

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxLayerElementArrayTemplate_int, sipName_RemoveLast, doc_FbxLayerElementArrayTemplate_int_RemoveLast);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxLayerElementArrayTemplate_int_RemoveIt, "RemoveIt(self, int) -> bool");

extern "C" {static PyObject *meth_FbxLayerElementArrayTemplate_int_RemoveIt(PyObject *, PyObject *);}
static PyObject *meth_FbxLayerElementArrayTemplate_int_RemoveIt(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
         ::FbxLayerElementArrayTemplate_int *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_FbxLayerElementArrayTemplate_int, &sipCpp, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->RemoveIt(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxLayerElementArrayTemplate_int, sipName_RemoveIt, doc_FbxLayerElementArrayTemplate_int_RemoveIt);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxLayerElementArrayTemplate_int_GetAt, "GetAt(self, int) -> int");

extern "C" {static PyObject *meth_FbxLayerElementArrayTemplate_int_GetAt(PyObject *, PyObject *);}
static PyObject *meth_FbxLayerElementArrayTemplate_int_GetAt(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
        const  ::FbxLayerElementArrayTemplate_int *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_FbxLayerElementArrayTemplate_int, &sipCpp, &a0))
        {
            int sipRes;

            sipRes = sipCpp->GetAt(a0);

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxLayerElementArrayTemplate_int, sipName_GetAt, doc_FbxLayerElementArrayTemplate_int_GetAt);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxLayerElementArrayTemplate_int_GetFirst, "GetFirst(self) -> int");

extern "C" {static PyObject *meth_FbxLayerElementArrayTemplate_int_GetFirst(PyObject *, PyObject *);}
static PyObject *meth_FbxLayerElementArrayTemplate_int_GetFirst(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxLayerElementArrayTemplate_int *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxLayerElementArrayTemplate_int, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->GetFirst();

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxLayerElementArrayTemplate_int, sipName_GetFirst, doc_FbxLayerElementArrayTemplate_int_GetFirst);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxLayerElementArrayTemplate_int_GetLast, "GetLast(self) -> int");

extern "C" {static PyObject *meth_FbxLayerElementArrayTemplate_int_GetLast(PyObject *, PyObject *);}
static PyObject *meth_FbxLayerElementArrayTemplate_int_GetLast(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxLayerElementArrayTemplate_int *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxLayerElementArrayTemplate_int, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->GetLast();

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxLayerElementArrayTemplate_int, sipName_GetLast, doc_FbxLayerElementArrayTemplate_int_GetLast);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxLayerElementArrayTemplate_int_Find, "Find(self) -> Tuple[int, int]");

extern "C" {static PyObject *meth_FbxLayerElementArrayTemplate_int_Find(PyObject *, PyObject *);}
static PyObject *meth_FbxLayerElementArrayTemplate_int_Find(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
         ::FbxLayerElementArrayTemplate_int *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxLayerElementArrayTemplate_int, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->Find(a0);

            return sipBuildResult(0,"(ii)",sipRes,a0);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxLayerElementArrayTemplate_int, sipName_Find, doc_FbxLayerElementArrayTemplate_int_Find);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxLayerElementArrayTemplate_int_FindAfter, "FindAfter(self, int, int) -> int");

extern "C" {static PyObject *meth_FbxLayerElementArrayTemplate_int_FindAfter(PyObject *, PyObject *);}
static PyObject *meth_FbxLayerElementArrayTemplate_int_FindAfter(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
        int a1;
         ::FbxLayerElementArrayTemplate_int *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bii", &sipSelf, sipType_FbxLayerElementArrayTemplate_int, &sipCpp, &a0, &a1))
        {
            int sipRes;

            sipRes = sipCpp->FindAfter(a0,a1);

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxLayerElementArrayTemplate_int, sipName_FindAfter, doc_FbxLayerElementArrayTemplate_int_FindAfter);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxLayerElementArrayTemplate_int_FindBefore, "FindBefore(self, int, int) -> int");

extern "C" {static PyObject *meth_FbxLayerElementArrayTemplate_int_FindBefore(PyObject *, PyObject *);}
static PyObject *meth_FbxLayerElementArrayTemplate_int_FindBefore(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
        int a1;
         ::FbxLayerElementArrayTemplate_int *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bii", &sipSelf, sipType_FbxLayerElementArrayTemplate_int, &sipCpp, &a0, &a1))
        {
            int sipRes;

            sipRes = sipCpp->FindBefore(a0,a1);

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxLayerElementArrayTemplate_int, sipName_FindBefore, doc_FbxLayerElementArrayTemplate_int_FindBefore);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *slot_FbxLayerElementArrayTemplate_int___getitem__(PyObject *,PyObject *);}
static PyObject *slot_FbxLayerElementArrayTemplate_int___getitem__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxLayerElementArrayTemplate_int *sipCpp = reinterpret_cast< ::FbxLayerElementArrayTemplate_int *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxLayerElementArrayTemplate_int));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            int sipRes = 0;
            int sipIsErr = 0;

#line 290 "D:\\Program Files\\Autodesk\\FBX\\FBX Python Bindings\\2020.3.4\\sip\\fbxlayerelementarray.sip"
        if (a0 < 0 || a0 >= sipCpp->GetCount())
        {
            PyErr_Format(PyExc_IndexError, "sequence index out of range");
            sipIsErr = 1;
        }
        else
        {
            fbxArrayElementCopy(&sipRes, (int*)NULL, sipCpp, a0);
        }
#line 525 "D:\\Program Files\\Autodesk\\FBX\\FBX Python Bindings\\2020.3.4\\build\\fbx/sipfbxFbxLayerElementArrayTemplate_int.cpp"

            if (sipIsErr)
                return 0;

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxLayerElementArrayTemplate_int, sipName___getitem__, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_FbxLayerElementArrayTemplate_int(void *, const sipTypeDef *);}
static void *cast_FbxLayerElementArrayTemplate_int(void *sipCppV, const sipTypeDef *targetType)
{
     ::FbxLayerElementArrayTemplate_int *sipCpp = reinterpret_cast< ::FbxLayerElementArrayTemplate_int *>(sipCppV);

    if (targetType == sipType_FbxLayerElementArrayTemplate_int)
        return sipCppV;

    if (targetType == sipType_FbxLayerElementArray)
        return static_cast< ::FbxLayerElementArray *>(sipCpp);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_FbxLayerElementArrayTemplate_int(void *, int);}
static void release_FbxLayerElementArrayTemplate_int(void *sipCppV, int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipFbxLayerElementArrayTemplate_int *>(sipCppV);
    else
        delete reinterpret_cast< ::FbxLayerElementArrayTemplate_int *>(sipCppV);
}


extern "C" {static void assign_FbxLayerElementArrayTemplate_int(void *, Py_ssize_t, void *);}
static void assign_FbxLayerElementArrayTemplate_int(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::FbxLayerElementArrayTemplate_int *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::FbxLayerElementArrayTemplate_int *>(sipSrc);
}


extern "C" {static void *copy_FbxLayerElementArrayTemplate_int(const void *, Py_ssize_t);}
static void *copy_FbxLayerElementArrayTemplate_int(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::FbxLayerElementArrayTemplate_int(reinterpret_cast<const  ::FbxLayerElementArrayTemplate_int *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_FbxLayerElementArrayTemplate_int(sipSimpleWrapper *);}
static void dealloc_FbxLayerElementArrayTemplate_int(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipFbxLayerElementArrayTemplate_int *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_FbxLayerElementArrayTemplate_int(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_FbxLayerElementArrayTemplate_int(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_FbxLayerElementArrayTemplate_int(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipFbxLayerElementArrayTemplate_int *sipCpp = SIP_NULLPTR;

    {
         ::EFbxType a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "E", sipType_EFbxType, &a0))
        {
            sipCpp = new sipFbxLayerElementArrayTemplate_int(a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const  ::FbxLayerElementArrayTemplate_int* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_FbxLayerElementArrayTemplate_int, &a0))
        {
            sipCpp = new sipFbxLayerElementArrayTemplate_int(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_FbxLayerElementArrayTemplate_int[] = {{176, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_FbxLayerElementArrayTemplate_int[] = {
    {(void *)slot_FbxLayerElementArrayTemplate_int___getitem__, getitem_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_FbxLayerElementArrayTemplate_int[] = {
    {sipName_Add, meth_FbxLayerElementArrayTemplate_int_Add, METH_VARARGS, doc_FbxLayerElementArrayTemplate_int_Add},
    {sipName_Find, meth_FbxLayerElementArrayTemplate_int_Find, METH_VARARGS, doc_FbxLayerElementArrayTemplate_int_Find},
    {sipName_FindAfter, meth_FbxLayerElementArrayTemplate_int_FindAfter, METH_VARARGS, doc_FbxLayerElementArrayTemplate_int_FindAfter},
    {sipName_FindBefore, meth_FbxLayerElementArrayTemplate_int_FindBefore, METH_VARARGS, doc_FbxLayerElementArrayTemplate_int_FindBefore},
    {sipName_GetAt, meth_FbxLayerElementArrayTemplate_int_GetAt, METH_VARARGS, doc_FbxLayerElementArrayTemplate_int_GetAt},
    {sipName_GetFirst, meth_FbxLayerElementArrayTemplate_int_GetFirst, METH_VARARGS, doc_FbxLayerElementArrayTemplate_int_GetFirst},
    {sipName_GetLast, meth_FbxLayerElementArrayTemplate_int_GetLast, METH_VARARGS, doc_FbxLayerElementArrayTemplate_int_GetLast},
    {sipName_InsertAt, meth_FbxLayerElementArrayTemplate_int_InsertAt, METH_VARARGS, doc_FbxLayerElementArrayTemplate_int_InsertAt},
    {sipName_RemoveAt, meth_FbxLayerElementArrayTemplate_int_RemoveAt, METH_VARARGS, doc_FbxLayerElementArrayTemplate_int_RemoveAt},
    {sipName_RemoveIt, meth_FbxLayerElementArrayTemplate_int_RemoveIt, METH_VARARGS, doc_FbxLayerElementArrayTemplate_int_RemoveIt},
    {sipName_RemoveLast, meth_FbxLayerElementArrayTemplate_int_RemoveLast, METH_VARARGS, doc_FbxLayerElementArrayTemplate_int_RemoveLast},
    {sipName_SetAt, meth_FbxLayerElementArrayTemplate_int_SetAt, METH_VARARGS, doc_FbxLayerElementArrayTemplate_int_SetAt},
    {sipName_SetLast, meth_FbxLayerElementArrayTemplate_int_SetLast, METH_VARARGS, doc_FbxLayerElementArrayTemplate_int_SetLast}
};

PyDoc_STRVAR(doc_FbxLayerElementArrayTemplate_int, "\1FbxLayerElementArrayTemplate_int(EFbxType)\n"
"FbxLayerElementArrayTemplate_int(FbxLayerElementArrayTemplate_int)");


sipClassTypeDef sipTypeDef_fbx_FbxLayerElementArrayTemplate_int = {
    {
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_FbxLayerElementArrayTemplate_int,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_FbxLayerElementArrayTemplate_int,
        {0, 0, 1},
        13, methods_FbxLayerElementArrayTemplate_int,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_FbxLayerElementArrayTemplate_int,
    -1,
    -1,
    supers_FbxLayerElementArrayTemplate_int,
    slots_FbxLayerElementArrayTemplate_int,
    init_type_FbxLayerElementArrayTemplate_int,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_FbxLayerElementArrayTemplate_int,
    assign_FbxLayerElementArrayTemplate_int,
    SIP_NULLPTR,
    copy_FbxLayerElementArrayTemplate_int,
    release_FbxLayerElementArrayTemplate_int,
    cast_FbxLayerElementArrayTemplate_int,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};
