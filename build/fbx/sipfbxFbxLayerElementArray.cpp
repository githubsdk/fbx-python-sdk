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




class sipFbxLayerElementArray : public  ::FbxLayerElementArray
{
public:
    sipFbxLayerElementArray( ::EFbxType);
    sipFbxLayerElementArray(const  ::FbxLayerElementArray&);
    virtual ~sipFbxLayerElementArray();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    size_t GetStride() const SIP_OVERRIDE;
    void Release(void**, ::EFbxType) SIP_OVERRIDE;
    void* GetLocked( ::FbxLayerElementArray::ELockMode, ::EFbxType) SIP_OVERRIDE;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipFbxLayerElementArray(const sipFbxLayerElementArray &);
    sipFbxLayerElementArray &operator = (const sipFbxLayerElementArray &);

    char sipPyMethods[3];
};

sipFbxLayerElementArray::sipFbxLayerElementArray( ::EFbxType a0):  ::FbxLayerElementArray(a0), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipFbxLayerElementArray::sipFbxLayerElementArray(const  ::FbxLayerElementArray& a0):  ::FbxLayerElementArray(a0), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipFbxLayerElementArray::~sipFbxLayerElementArray()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

size_t sipFbxLayerElementArray::GetStride() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[0]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_GetStride);

    if (!sipMeth)
        return  ::FbxLayerElementArray::GetStride();

    extern size_t sipVH_fbx_9(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_fbx_9(sipGILState, 0, sipPySelf, sipMeth);
}

void sipFbxLayerElementArray::Release(void**a0, ::EFbxType a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[1], &sipPySelf, SIP_NULLPTR, sipName_Release);

    if (!sipMeth)
    {
         ::FbxLayerElementArray::Release(a0,a1);
        return;
    }

    extern void sipVH_fbx_8(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, void**, ::EFbxType);

    sipVH_fbx_8(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

void* sipFbxLayerElementArray::GetLocked( ::FbxLayerElementArray::ELockMode a0, ::EFbxType a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[2], &sipPySelf, SIP_NULLPTR, sipName_GetLocked);

    if (!sipMeth)
        return  ::FbxLayerElementArray::GetLocked(a0,a1);

    extern void* sipVH_fbx_7(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::FbxLayerElementArray::ELockMode, ::EFbxType);

    return sipVH_fbx_7(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}


PyDoc_STRVAR(doc_FbxLayerElementArray_ClearStatus, "ClearStatus(self)");

extern "C" {static PyObject *meth_FbxLayerElementArray_ClearStatus(PyObject *, PyObject *);}
static PyObject *meth_FbxLayerElementArray_ClearStatus(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxLayerElementArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxLayerElementArray, &sipCpp))
        {
            sipCpp->ClearStatus();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxLayerElementArray, sipName_ClearStatus, doc_FbxLayerElementArray_ClearStatus);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxLayerElementArray_GetStatus, "GetStatus(self) -> LockAccessStatus.ELockAccessStatus");

extern "C" {static PyObject *meth_FbxLayerElementArray_GetStatus(PyObject *, PyObject *);}
static PyObject *meth_FbxLayerElementArray_GetStatus(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxLayerElementArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxLayerElementArray, &sipCpp))
        {
             ::LockAccessStatus::ELockAccessStatus sipRes;

            sipRes = sipCpp->GetStatus();

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_LockAccessStatus_ELockAccessStatus);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxLayerElementArray, sipName_GetStatus, doc_FbxLayerElementArray_GetStatus);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxLayerElementArray_IsWriteLocked, "IsWriteLocked(self) -> bool");

extern "C" {static PyObject *meth_FbxLayerElementArray_IsWriteLocked(PyObject *, PyObject *);}
static PyObject *meth_FbxLayerElementArray_IsWriteLocked(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxLayerElementArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxLayerElementArray, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->IsWriteLocked();

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxLayerElementArray, sipName_IsWriteLocked, doc_FbxLayerElementArray_IsWriteLocked);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxLayerElementArray_GetReadLockCount, "GetReadLockCount(self) -> int");

extern "C" {static PyObject *meth_FbxLayerElementArray_GetReadLockCount(PyObject *, PyObject *);}
static PyObject *meth_FbxLayerElementArray_GetReadLockCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxLayerElementArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxLayerElementArray, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->GetReadLockCount();

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxLayerElementArray, sipName_GetReadLockCount, doc_FbxLayerElementArray_GetReadLockCount);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxLayerElementArray_IsInUse, "IsInUse(self) -> bool");

extern "C" {static PyObject *meth_FbxLayerElementArray_IsInUse(PyObject *, PyObject *);}
static PyObject *meth_FbxLayerElementArray_IsInUse(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxLayerElementArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxLayerElementArray, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->IsInUse();

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxLayerElementArray, sipName_IsInUse, doc_FbxLayerElementArray_IsInUse);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxLayerElementArray_ReadLock, "ReadLock(self) -> int");

extern "C" {static PyObject *meth_FbxLayerElementArray_ReadLock(PyObject *, PyObject *);}
static PyObject *meth_FbxLayerElementArray_ReadLock(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxLayerElementArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxLayerElementArray, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->ReadLock();

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxLayerElementArray, sipName_ReadLock, doc_FbxLayerElementArray_ReadLock);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxLayerElementArray_ReadUnlock, "ReadUnlock(self) -> int");

extern "C" {static PyObject *meth_FbxLayerElementArray_ReadUnlock(PyObject *, PyObject *);}
static PyObject *meth_FbxLayerElementArray_ReadUnlock(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxLayerElementArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxLayerElementArray, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->ReadUnlock();

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxLayerElementArray, sipName_ReadUnlock, doc_FbxLayerElementArray_ReadUnlock);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxLayerElementArray_WriteLock, "WriteLock(self) -> bool");

extern "C" {static PyObject *meth_FbxLayerElementArray_WriteLock(PyObject *, PyObject *);}
static PyObject *meth_FbxLayerElementArray_WriteLock(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxLayerElementArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxLayerElementArray, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->WriteLock();

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxLayerElementArray, sipName_WriteLock, doc_FbxLayerElementArray_WriteLock);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxLayerElementArray_WriteUnlock, "WriteUnlock(self)");

extern "C" {static PyObject *meth_FbxLayerElementArray_WriteUnlock(PyObject *, PyObject *);}
static PyObject *meth_FbxLayerElementArray_WriteUnlock(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxLayerElementArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxLayerElementArray, &sipCpp))
        {
            sipCpp->WriteUnlock();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxLayerElementArray, sipName_WriteUnlock, doc_FbxLayerElementArray_WriteUnlock);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxLayerElementArray_ReadWriteLock, "ReadWriteLock(self) -> bool");

extern "C" {static PyObject *meth_FbxLayerElementArray_ReadWriteLock(PyObject *, PyObject *);}
static PyObject *meth_FbxLayerElementArray_ReadWriteLock(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxLayerElementArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxLayerElementArray, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->ReadWriteLock();

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxLayerElementArray, sipName_ReadWriteLock, doc_FbxLayerElementArray_ReadWriteLock);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxLayerElementArray_ReadWriteUnlock, "ReadWriteUnlock(self)");

extern "C" {static PyObject *meth_FbxLayerElementArray_ReadWriteUnlock(PyObject *, PyObject *);}
static PyObject *meth_FbxLayerElementArray_ReadWriteUnlock(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxLayerElementArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxLayerElementArray, &sipCpp))
        {
            sipCpp->ReadWriteUnlock();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxLayerElementArray, sipName_ReadWriteUnlock, doc_FbxLayerElementArray_ReadWriteUnlock);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxLayerElementArray_GetLocked, "GetLocked(self, FbxLayerElementArray.ELockMode, EFbxType) -> sip.voidptr\n"
"GetLocked(self, FbxLayerElementArray.ELockMode = FbxLayerElementArray.eReadWriteLock) -> sip.voidptr");

extern "C" {static PyObject *meth_FbxLayerElementArray_GetLocked(PyObject *, PyObject *);}
static PyObject *meth_FbxLayerElementArray_GetLocked(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_FbxLayerElementArray)) || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::FbxLayerElementArray::ELockMode a0;
         ::EFbxType a1;
         ::FbxLayerElementArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BEE", &sipSelf, sipType_FbxLayerElementArray, &sipCpp, sipType_FbxLayerElementArray_ELockMode, &a0, sipType_EFbxType, &a1))
        {
            void*sipRes;

            sipRes = (sipSelfWasArg ? sipCpp-> ::FbxLayerElementArray::GetLocked(a0,a1) : sipCpp->GetLocked(a0,a1));

            return sipConvertFromVoidPtr(sipRes);
        }
    }

    {
         ::FbxLayerElementArray::ELockMode a0 =  ::FbxLayerElementArray::eReadWriteLock;
         ::FbxLayerElementArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B|E", &sipSelf, sipType_FbxLayerElementArray, &sipCpp, sipType_FbxLayerElementArray_ELockMode, &a0))
        {
            void*sipRes;

            sipRes = sipCpp->GetLocked(a0);

            return sipConvertFromVoidPtr(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxLayerElementArray, sipName_GetLocked, doc_FbxLayerElementArray_GetLocked);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxLayerElementArray_Release, "Release(self, EFbxType) -> sip.voidptr\n"
"Release(self) -> sip.voidptr");

extern "C" {static PyObject *meth_FbxLayerElementArray_Release(PyObject *, PyObject *);}
static PyObject *meth_FbxLayerElementArray_Release(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_FbxLayerElementArray)) || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        void* a0;
         ::EFbxType a1;
         ::FbxLayerElementArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_FbxLayerElementArray, &sipCpp, sipType_EFbxType, &a1))
        {
            (sipSelfWasArg ? sipCpp-> ::FbxLayerElementArray::Release(&a0,a1) : sipCpp->Release(&a0,a1));

            return sipConvertFromVoidPtr(a0);
        }
    }

    {
        void* a0;
         ::FbxLayerElementArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxLayerElementArray, &sipCpp))
        {
            sipCpp->Release(&a0);

            return sipConvertFromVoidPtr(a0);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxLayerElementArray, sipName_Release, doc_FbxLayerElementArray_Release);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxLayerElementArray_GetStride, "GetStride(self) -> int");

extern "C" {static PyObject *meth_FbxLayerElementArray_GetStride(PyObject *, PyObject *);}
static PyObject *meth_FbxLayerElementArray_GetStride(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_FbxLayerElementArray)) || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::FbxLayerElementArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxLayerElementArray, &sipCpp))
        {
            size_t sipRes;

            sipRes = (sipSelfWasArg ? sipCpp-> ::FbxLayerElementArray::GetStride() : sipCpp->GetStride());

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxLayerElementArray, sipName_GetStride, doc_FbxLayerElementArray_GetStride);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxLayerElementArray_GetCount, "GetCount(self) -> int");

extern "C" {static PyObject *meth_FbxLayerElementArray_GetCount(PyObject *, PyObject *);}
static PyObject *meth_FbxLayerElementArray_GetCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxLayerElementArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxLayerElementArray, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->GetCount();

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxLayerElementArray, sipName_GetCount, doc_FbxLayerElementArray_GetCount);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxLayerElementArray_SetCount, "SetCount(self, int)");

extern "C" {static PyObject *meth_FbxLayerElementArray_SetCount(PyObject *, PyObject *);}
static PyObject *meth_FbxLayerElementArray_SetCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
         ::FbxLayerElementArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_FbxLayerElementArray, &sipCpp, &a0))
        {
            sipCpp->SetCount(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxLayerElementArray, sipName_SetCount, doc_FbxLayerElementArray_SetCount);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxLayerElementArray_Clear, "Clear(self)");

extern "C" {static PyObject *meth_FbxLayerElementArray_Clear(PyObject *, PyObject *);}
static PyObject *meth_FbxLayerElementArray_Clear(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxLayerElementArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxLayerElementArray, &sipCpp))
        {
            sipCpp->Clear();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxLayerElementArray, sipName_Clear, doc_FbxLayerElementArray_Clear);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxLayerElementArray_Resize, "Resize(self, int)");

extern "C" {static PyObject *meth_FbxLayerElementArray_Resize(PyObject *, PyObject *);}
static PyObject *meth_FbxLayerElementArray_Resize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
         ::FbxLayerElementArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_FbxLayerElementArray, &sipCpp, &a0))
        {
            sipCpp->Resize(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxLayerElementArray, sipName_Resize, doc_FbxLayerElementArray_Resize);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxLayerElementArray_Add, "Add(self, sip.voidptr, EFbxType) -> int");

extern "C" {static PyObject *meth_FbxLayerElementArray_Add(PyObject *, PyObject *);}
static PyObject *meth_FbxLayerElementArray_Add(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const void* a0;
         ::EFbxType a1;
         ::FbxLayerElementArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BvE", &sipSelf, sipType_FbxLayerElementArray, &sipCpp, &a0, sipType_EFbxType, &a1))
        {
            int sipRes;

            sipRes = sipCpp->Add(a0,a1);

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxLayerElementArray, sipName_Add, doc_FbxLayerElementArray_Add);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxLayerElementArray_InsertAt, "InsertAt(self, int, sip.voidptr, EFbxType) -> int");

extern "C" {static PyObject *meth_FbxLayerElementArray_InsertAt(PyObject *, PyObject *);}
static PyObject *meth_FbxLayerElementArray_InsertAt(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
        const void* a1;
         ::EFbxType a2;
         ::FbxLayerElementArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BivE", &sipSelf, sipType_FbxLayerElementArray, &sipCpp, &a0, &a1, sipType_EFbxType, &a2))
        {
            int sipRes;

            sipRes = sipCpp->InsertAt(a0,a1,a2);

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxLayerElementArray, sipName_InsertAt, doc_FbxLayerElementArray_InsertAt);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxLayerElementArray_SetAt, "SetAt(self, int, sip.voidptr, EFbxType)");

extern "C" {static PyObject *meth_FbxLayerElementArray_SetAt(PyObject *, PyObject *);}
static PyObject *meth_FbxLayerElementArray_SetAt(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
        const void* a1;
         ::EFbxType a2;
         ::FbxLayerElementArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BivE", &sipSelf, sipType_FbxLayerElementArray, &sipCpp, &a0, &a1, sipType_EFbxType, &a2))
        {
            sipCpp->SetAt(a0,a1,a2);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxLayerElementArray, sipName_SetAt, doc_FbxLayerElementArray_SetAt);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxLayerElementArray_SetLast, "SetLast(self, sip.voidptr, EFbxType)");

extern "C" {static PyObject *meth_FbxLayerElementArray_SetLast(PyObject *, PyObject *);}
static PyObject *meth_FbxLayerElementArray_SetLast(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const void* a0;
         ::EFbxType a1;
         ::FbxLayerElementArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BvE", &sipSelf, sipType_FbxLayerElementArray, &sipCpp, &a0, sipType_EFbxType, &a1))
        {
            sipCpp->SetLast(a0,a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxLayerElementArray, sipName_SetLast, doc_FbxLayerElementArray_SetLast);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxLayerElementArray_RemoveAt, "RemoveAt(self, int, EFbxType) -> sip.voidptr");

extern "C" {static PyObject *meth_FbxLayerElementArray_RemoveAt(PyObject *, PyObject *);}
static PyObject *meth_FbxLayerElementArray_RemoveAt(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
        void* a1;
         ::EFbxType a2;
         ::FbxLayerElementArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BiE", &sipSelf, sipType_FbxLayerElementArray, &sipCpp, &a0, sipType_EFbxType, &a2))
        {
            sipCpp->RemoveAt(a0,&a1,a2);

            return sipConvertFromVoidPtr(a1);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxLayerElementArray, sipName_RemoveAt, doc_FbxLayerElementArray_RemoveAt);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxLayerElementArray_RemoveLast, "RemoveLast(self, EFbxType) -> sip.voidptr");

extern "C" {static PyObject *meth_FbxLayerElementArray_RemoveLast(PyObject *, PyObject *);}
static PyObject *meth_FbxLayerElementArray_RemoveLast(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        void* a0;
         ::EFbxType a1;
         ::FbxLayerElementArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_FbxLayerElementArray, &sipCpp, sipType_EFbxType, &a1))
        {
            sipCpp->RemoveLast(&a0,a1);

            return sipConvertFromVoidPtr(a0);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxLayerElementArray, sipName_RemoveLast, doc_FbxLayerElementArray_RemoveLast);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxLayerElementArray_RemoveIt, "RemoveIt(self, EFbxType) -> Tuple[bool, sip.voidptr]");

extern "C" {static PyObject *meth_FbxLayerElementArray_RemoveIt(PyObject *, PyObject *);}
static PyObject *meth_FbxLayerElementArray_RemoveIt(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        void* a0;
         ::EFbxType a1;
         ::FbxLayerElementArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_FbxLayerElementArray, &sipCpp, sipType_EFbxType, &a1))
        {
            bool sipRes;

            sipRes = sipCpp->RemoveIt(&a0,a1);

            return sipBuildResult(0,"(bV)",sipRes,a0);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxLayerElementArray, sipName_RemoveIt, doc_FbxLayerElementArray_RemoveIt);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxLayerElementArray_GetAt, "GetAt(self, int, EFbxType) -> Tuple[bool, sip.voidptr]");

extern "C" {static PyObject *meth_FbxLayerElementArray_GetAt(PyObject *, PyObject *);}
static PyObject *meth_FbxLayerElementArray_GetAt(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
        void* a1;
         ::EFbxType a2;
        const  ::FbxLayerElementArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BiE", &sipSelf, sipType_FbxLayerElementArray, &sipCpp, &a0, sipType_EFbxType, &a2))
        {
            bool sipRes;

            sipRes = sipCpp->GetAt(a0,&a1,a2);

            return sipBuildResult(0,"(bV)",sipRes,a1);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxLayerElementArray, sipName_GetAt, doc_FbxLayerElementArray_GetAt);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxLayerElementArray_GetFirst, "GetFirst(self, EFbxType) -> Tuple[bool, sip.voidptr]");

extern "C" {static PyObject *meth_FbxLayerElementArray_GetFirst(PyObject *, PyObject *);}
static PyObject *meth_FbxLayerElementArray_GetFirst(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        void* a0;
         ::EFbxType a1;
        const  ::FbxLayerElementArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_FbxLayerElementArray, &sipCpp, sipType_EFbxType, &a1))
        {
            bool sipRes;

            sipRes = sipCpp->GetFirst(&a0,a1);

            return sipBuildResult(0,"(bV)",sipRes,a0);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxLayerElementArray, sipName_GetFirst, doc_FbxLayerElementArray_GetFirst);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxLayerElementArray_GetLast, "GetLast(self, EFbxType) -> Tuple[bool, sip.voidptr]");

extern "C" {static PyObject *meth_FbxLayerElementArray_GetLast(PyObject *, PyObject *);}
static PyObject *meth_FbxLayerElementArray_GetLast(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        void* a0;
         ::EFbxType a1;
        const  ::FbxLayerElementArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_FbxLayerElementArray, &sipCpp, sipType_EFbxType, &a1))
        {
            bool sipRes;

            sipRes = sipCpp->GetLast(&a0,a1);

            return sipBuildResult(0,"(bV)",sipRes,a0);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxLayerElementArray, sipName_GetLast, doc_FbxLayerElementArray_GetLast);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxLayerElementArray_Find, "Find(self, sip.voidptr, EFbxType) -> int");

extern "C" {static PyObject *meth_FbxLayerElementArray_Find(PyObject *, PyObject *);}
static PyObject *meth_FbxLayerElementArray_Find(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const void* a0;
         ::EFbxType a1;
        const  ::FbxLayerElementArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BvE", &sipSelf, sipType_FbxLayerElementArray, &sipCpp, &a0, sipType_EFbxType, &a1))
        {
            int sipRes;

            sipRes = sipCpp->Find(a0,a1);

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxLayerElementArray, sipName_Find, doc_FbxLayerElementArray_Find);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxLayerElementArray_IsEqual, "IsEqual(self, FbxLayerElementArray) -> bool");

extern "C" {static PyObject *meth_FbxLayerElementArray_IsEqual(PyObject *, PyObject *);}
static PyObject *meth_FbxLayerElementArray_IsEqual(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxLayerElementArray* a0;
         ::FbxLayerElementArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_FbxLayerElementArray, &sipCpp, sipType_FbxLayerElementArray, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->IsEqual(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxLayerElementArray, sipName_IsEqual, doc_FbxLayerElementArray_IsEqual);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_FbxLayerElementArray(void *, int);}
static void release_FbxLayerElementArray(void *sipCppV, int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipFbxLayerElementArray *>(sipCppV);
    else
        delete reinterpret_cast< ::FbxLayerElementArray *>(sipCppV);
}


extern "C" {static void assign_FbxLayerElementArray(void *, Py_ssize_t, void *);}
static void assign_FbxLayerElementArray(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::FbxLayerElementArray *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::FbxLayerElementArray *>(sipSrc);
}


extern "C" {static void *copy_FbxLayerElementArray(const void *, Py_ssize_t);}
static void *copy_FbxLayerElementArray(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::FbxLayerElementArray(reinterpret_cast<const  ::FbxLayerElementArray *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_FbxLayerElementArray(sipSimpleWrapper *);}
static void dealloc_FbxLayerElementArray(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipFbxLayerElementArray *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_FbxLayerElementArray(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_FbxLayerElementArray(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_FbxLayerElementArray(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipFbxLayerElementArray *sipCpp = SIP_NULLPTR;

    {
         ::EFbxType a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "E", sipType_EFbxType, &a0))
        {
            sipCpp = new sipFbxLayerElementArray(a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const  ::FbxLayerElementArray* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_FbxLayerElementArray, &a0))
        {
            sipCpp = new sipFbxLayerElementArray(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


static PyMethodDef methods_FbxLayerElementArray[] = {
    {sipName_Add, meth_FbxLayerElementArray_Add, METH_VARARGS, doc_FbxLayerElementArray_Add},
    {sipName_Clear, meth_FbxLayerElementArray_Clear, METH_VARARGS, doc_FbxLayerElementArray_Clear},
    {sipName_ClearStatus, meth_FbxLayerElementArray_ClearStatus, METH_VARARGS, doc_FbxLayerElementArray_ClearStatus},
    {sipName_Find, meth_FbxLayerElementArray_Find, METH_VARARGS, doc_FbxLayerElementArray_Find},
    {sipName_GetAt, meth_FbxLayerElementArray_GetAt, METH_VARARGS, doc_FbxLayerElementArray_GetAt},
    {sipName_GetCount, meth_FbxLayerElementArray_GetCount, METH_VARARGS, doc_FbxLayerElementArray_GetCount},
    {sipName_GetFirst, meth_FbxLayerElementArray_GetFirst, METH_VARARGS, doc_FbxLayerElementArray_GetFirst},
    {sipName_GetLast, meth_FbxLayerElementArray_GetLast, METH_VARARGS, doc_FbxLayerElementArray_GetLast},
    {sipName_GetLocked, meth_FbxLayerElementArray_GetLocked, METH_VARARGS, doc_FbxLayerElementArray_GetLocked},
    {sipName_GetReadLockCount, meth_FbxLayerElementArray_GetReadLockCount, METH_VARARGS, doc_FbxLayerElementArray_GetReadLockCount},
    {sipName_GetStatus, meth_FbxLayerElementArray_GetStatus, METH_VARARGS, doc_FbxLayerElementArray_GetStatus},
    {sipName_GetStride, meth_FbxLayerElementArray_GetStride, METH_VARARGS, doc_FbxLayerElementArray_GetStride},
    {sipName_InsertAt, meth_FbxLayerElementArray_InsertAt, METH_VARARGS, doc_FbxLayerElementArray_InsertAt},
    {sipName_IsEqual, meth_FbxLayerElementArray_IsEqual, METH_VARARGS, doc_FbxLayerElementArray_IsEqual},
    {sipName_IsInUse, meth_FbxLayerElementArray_IsInUse, METH_VARARGS, doc_FbxLayerElementArray_IsInUse},
    {sipName_IsWriteLocked, meth_FbxLayerElementArray_IsWriteLocked, METH_VARARGS, doc_FbxLayerElementArray_IsWriteLocked},
    {sipName_ReadLock, meth_FbxLayerElementArray_ReadLock, METH_VARARGS, doc_FbxLayerElementArray_ReadLock},
    {sipName_ReadUnlock, meth_FbxLayerElementArray_ReadUnlock, METH_VARARGS, doc_FbxLayerElementArray_ReadUnlock},
    {sipName_ReadWriteLock, meth_FbxLayerElementArray_ReadWriteLock, METH_VARARGS, doc_FbxLayerElementArray_ReadWriteLock},
    {sipName_ReadWriteUnlock, meth_FbxLayerElementArray_ReadWriteUnlock, METH_VARARGS, doc_FbxLayerElementArray_ReadWriteUnlock},
    {sipName_Release, meth_FbxLayerElementArray_Release, METH_VARARGS, doc_FbxLayerElementArray_Release},
    {sipName_RemoveAt, meth_FbxLayerElementArray_RemoveAt, METH_VARARGS, doc_FbxLayerElementArray_RemoveAt},
    {sipName_RemoveIt, meth_FbxLayerElementArray_RemoveIt, METH_VARARGS, doc_FbxLayerElementArray_RemoveIt},
    {sipName_RemoveLast, meth_FbxLayerElementArray_RemoveLast, METH_VARARGS, doc_FbxLayerElementArray_RemoveLast},
    {sipName_Resize, meth_FbxLayerElementArray_Resize, METH_VARARGS, doc_FbxLayerElementArray_Resize},
    {sipName_SetAt, meth_FbxLayerElementArray_SetAt, METH_VARARGS, doc_FbxLayerElementArray_SetAt},
    {sipName_SetCount, meth_FbxLayerElementArray_SetCount, METH_VARARGS, doc_FbxLayerElementArray_SetCount},
    {sipName_SetLast, meth_FbxLayerElementArray_SetLast, METH_VARARGS, doc_FbxLayerElementArray_SetLast},
    {sipName_WriteLock, meth_FbxLayerElementArray_WriteLock, METH_VARARGS, doc_FbxLayerElementArray_WriteLock},
    {sipName_WriteUnlock, meth_FbxLayerElementArray_WriteUnlock, METH_VARARGS, doc_FbxLayerElementArray_WriteUnlock}
};


/* Define the enum members and ints to be added to this type. */
static sipIntInstanceDef intInstances_FbxLayerElementArray[] = {
    {sipName_eReadLock, static_cast<int>( ::FbxLayerElementArray::eReadLock)},
    {sipName_eWriteLock, static_cast<int>( ::FbxLayerElementArray::eWriteLock)},
    {sipName_eReadWriteLock, static_cast<int>( ::FbxLayerElementArray::eReadWriteLock)},
    {0, 0}
};

PyDoc_STRVAR(doc_FbxLayerElementArray, "\1FbxLayerElementArray(EFbxType)\n"
"FbxLayerElementArray(FbxLayerElementArray)");


sipClassTypeDef sipTypeDef_fbx_FbxLayerElementArray = {
    {
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_FbxLayerElementArray,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_FbxLayerElementArray,
        {0, 0, 1},
        30, methods_FbxLayerElementArray,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, intInstances_FbxLayerElementArray, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_FbxLayerElementArray,
    -1,
    -1,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_FbxLayerElementArray,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_FbxLayerElementArray,
    assign_FbxLayerElementArray,
    SIP_NULLPTR,
    copy_FbxLayerElementArray,
    release_FbxLayerElementArray,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};