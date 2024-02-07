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




class sipFbxLayerElementArrayTemplate_HFbxTexture : public  ::FbxLayerElementArrayTemplate_HFbxTexture
{
public:
    sipFbxLayerElementArrayTemplate_HFbxTexture( ::EFbxType);
    sipFbxLayerElementArrayTemplate_HFbxTexture(const  ::FbxLayerElementArrayTemplate_HFbxTexture&);
    virtual ~sipFbxLayerElementArrayTemplate_HFbxTexture();

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
    sipFbxLayerElementArrayTemplate_HFbxTexture(const sipFbxLayerElementArrayTemplate_HFbxTexture &);
    sipFbxLayerElementArrayTemplate_HFbxTexture &operator = (const sipFbxLayerElementArrayTemplate_HFbxTexture &);

    char sipPyMethods[3];
};

sipFbxLayerElementArrayTemplate_HFbxTexture::sipFbxLayerElementArrayTemplate_HFbxTexture( ::EFbxType a0):  ::FbxLayerElementArrayTemplate_HFbxTexture(a0), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipFbxLayerElementArrayTemplate_HFbxTexture::sipFbxLayerElementArrayTemplate_HFbxTexture(const  ::FbxLayerElementArrayTemplate_HFbxTexture& a0):  ::FbxLayerElementArrayTemplate_HFbxTexture(a0), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipFbxLayerElementArrayTemplate_HFbxTexture::~sipFbxLayerElementArrayTemplate_HFbxTexture()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

void* sipFbxLayerElementArrayTemplate_HFbxTexture::GetLocked( ::FbxLayerElementArray::ELockMode a0, ::EFbxType a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[0], &sipPySelf, SIP_NULLPTR, sipName_GetLocked);

    if (!sipMeth)
        return  ::FbxLayerElementArrayTemplate_HFbxTexture::GetLocked(a0,a1);

    extern void* sipVH_fbx_7(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::FbxLayerElementArray::ELockMode, ::EFbxType);

    return sipVH_fbx_7(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

void sipFbxLayerElementArrayTemplate_HFbxTexture::Release(void**a0, ::EFbxType a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[1], &sipPySelf, SIP_NULLPTR, sipName_Release);

    if (!sipMeth)
    {
         ::FbxLayerElementArrayTemplate_HFbxTexture::Release(a0,a1);
        return;
    }

    extern void sipVH_fbx_8(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, void**, ::EFbxType);

    sipVH_fbx_8(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

size_t sipFbxLayerElementArrayTemplate_HFbxTexture::GetStride() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[2]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_GetStride);

    if (!sipMeth)
        return  ::FbxLayerElementArrayTemplate_HFbxTexture::GetStride();

    extern size_t sipVH_fbx_9(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_fbx_9(sipGILState, 0, sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_FbxLayerElementArrayTemplate_HFbxTexture_Add, "Add(self, FbxTexture) -> int");

extern "C" {static PyObject *meth_FbxLayerElementArrayTemplate_HFbxTexture_Add(PyObject *, PyObject *);}
static PyObject *meth_FbxLayerElementArrayTemplate_HFbxTexture_Add(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxTexturePtr a0;
         ::FbxLayerElementArrayTemplate_HFbxTexture *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_FbxLayerElementArrayTemplate_HFbxTexture, &sipCpp, sipType_FbxTexture, &a0))
        {
            int sipRes;

            sipRes = sipCpp->Add(a0);

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxLayerElementArrayTemplate_HFbxTexture, sipName_Add, doc_FbxLayerElementArrayTemplate_HFbxTexture_Add);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxLayerElementArrayTemplate_HFbxTexture_InsertAt, "InsertAt(self, int, FbxTexture) -> int");

extern "C" {static PyObject *meth_FbxLayerElementArrayTemplate_HFbxTexture_InsertAt(PyObject *, PyObject *);}
static PyObject *meth_FbxLayerElementArrayTemplate_HFbxTexture_InsertAt(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
         ::FbxTexturePtr a1;
         ::FbxLayerElementArrayTemplate_HFbxTexture *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BiJ8", &sipSelf, sipType_FbxLayerElementArrayTemplate_HFbxTexture, &sipCpp, &a0, sipType_FbxTexture, &a1))
        {
            int sipRes;

            sipRes = sipCpp->InsertAt(a0,a1);

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxLayerElementArrayTemplate_HFbxTexture, sipName_InsertAt, doc_FbxLayerElementArrayTemplate_HFbxTexture_InsertAt);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxLayerElementArrayTemplate_HFbxTexture_SetAt, "SetAt(self, int, FbxTexture)");

extern "C" {static PyObject *meth_FbxLayerElementArrayTemplate_HFbxTexture_SetAt(PyObject *, PyObject *);}
static PyObject *meth_FbxLayerElementArrayTemplate_HFbxTexture_SetAt(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
         ::FbxTexturePtr a1;
         ::FbxLayerElementArrayTemplate_HFbxTexture *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BiJ8", &sipSelf, sipType_FbxLayerElementArrayTemplate_HFbxTexture, &sipCpp, &a0, sipType_FbxTexture, &a1))
        {
            sipCpp->SetAt(a0,a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxLayerElementArrayTemplate_HFbxTexture, sipName_SetAt, doc_FbxLayerElementArrayTemplate_HFbxTexture_SetAt);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxLayerElementArrayTemplate_HFbxTexture_SetLast, "SetLast(self, FbxTexture)");

extern "C" {static PyObject *meth_FbxLayerElementArrayTemplate_HFbxTexture_SetLast(PyObject *, PyObject *);}
static PyObject *meth_FbxLayerElementArrayTemplate_HFbxTexture_SetLast(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxTexturePtr a0;
         ::FbxLayerElementArrayTemplate_HFbxTexture *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_FbxLayerElementArrayTemplate_HFbxTexture, &sipCpp, sipType_FbxTexture, &a0))
        {
            sipCpp->SetLast(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxLayerElementArrayTemplate_HFbxTexture, sipName_SetLast, doc_FbxLayerElementArrayTemplate_HFbxTexture_SetLast);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxLayerElementArrayTemplate_HFbxTexture_RemoveAt, "RemoveAt(self, int) -> FbxTexture");

extern "C" {static PyObject *meth_FbxLayerElementArrayTemplate_HFbxTexture_RemoveAt(PyObject *, PyObject *);}
static PyObject *meth_FbxLayerElementArrayTemplate_HFbxTexture_RemoveAt(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
         ::FbxLayerElementArrayTemplate_HFbxTexture *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_FbxLayerElementArrayTemplate_HFbxTexture, &sipCpp, &a0))
        {
             ::FbxTexturePtr sipRes;

            sipRes = sipCpp->RemoveAt(a0);

            return sipConvertFromType(sipRes,sipType_FbxTexture,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxLayerElementArrayTemplate_HFbxTexture, sipName_RemoveAt, doc_FbxLayerElementArrayTemplate_HFbxTexture_RemoveAt);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxLayerElementArrayTemplate_HFbxTexture_RemoveLast, "RemoveLast(self) -> FbxTexture");

extern "C" {static PyObject *meth_FbxLayerElementArrayTemplate_HFbxTexture_RemoveLast(PyObject *, PyObject *);}
static PyObject *meth_FbxLayerElementArrayTemplate_HFbxTexture_RemoveLast(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxLayerElementArrayTemplate_HFbxTexture *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxLayerElementArrayTemplate_HFbxTexture, &sipCpp))
        {
             ::FbxTexturePtr sipRes;

            sipRes = sipCpp->RemoveLast();

            return sipConvertFromType(sipRes,sipType_FbxTexture,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxLayerElementArrayTemplate_HFbxTexture, sipName_RemoveLast, doc_FbxLayerElementArrayTemplate_HFbxTexture_RemoveLast);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxLayerElementArrayTemplate_HFbxTexture_RemoveIt, "RemoveIt(self, FbxTexture) -> bool");

extern "C" {static PyObject *meth_FbxLayerElementArrayTemplate_HFbxTexture_RemoveIt(PyObject *, PyObject *);}
static PyObject *meth_FbxLayerElementArrayTemplate_HFbxTexture_RemoveIt(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxTexturePtr a0;
         ::FbxLayerElementArrayTemplate_HFbxTexture *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_FbxLayerElementArrayTemplate_HFbxTexture, &sipCpp, sipType_FbxTexture, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->RemoveIt(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxLayerElementArrayTemplate_HFbxTexture, sipName_RemoveIt, doc_FbxLayerElementArrayTemplate_HFbxTexture_RemoveIt);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxLayerElementArrayTemplate_HFbxTexture_GetAt, "GetAt(self, int) -> FbxTexture");

extern "C" {static PyObject *meth_FbxLayerElementArrayTemplate_HFbxTexture_GetAt(PyObject *, PyObject *);}
static PyObject *meth_FbxLayerElementArrayTemplate_HFbxTexture_GetAt(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
        const  ::FbxLayerElementArrayTemplate_HFbxTexture *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_FbxLayerElementArrayTemplate_HFbxTexture, &sipCpp, &a0))
        {
             ::FbxTexturePtr sipRes;

            sipRes = sipCpp->GetAt(a0);

            return sipConvertFromType(sipRes,sipType_FbxTexture,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxLayerElementArrayTemplate_HFbxTexture, sipName_GetAt, doc_FbxLayerElementArrayTemplate_HFbxTexture_GetAt);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxLayerElementArrayTemplate_HFbxTexture_GetFirst, "GetFirst(self) -> FbxTexture");

extern "C" {static PyObject *meth_FbxLayerElementArrayTemplate_HFbxTexture_GetFirst(PyObject *, PyObject *);}
static PyObject *meth_FbxLayerElementArrayTemplate_HFbxTexture_GetFirst(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxLayerElementArrayTemplate_HFbxTexture *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxLayerElementArrayTemplate_HFbxTexture, &sipCpp))
        {
             ::FbxTexturePtr sipRes;

            sipRes = sipCpp->GetFirst();

            return sipConvertFromType(sipRes,sipType_FbxTexture,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxLayerElementArrayTemplate_HFbxTexture, sipName_GetFirst, doc_FbxLayerElementArrayTemplate_HFbxTexture_GetFirst);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxLayerElementArrayTemplate_HFbxTexture_GetLast, "GetLast(self) -> FbxTexture");

extern "C" {static PyObject *meth_FbxLayerElementArrayTemplate_HFbxTexture_GetLast(PyObject *, PyObject *);}
static PyObject *meth_FbxLayerElementArrayTemplate_HFbxTexture_GetLast(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxLayerElementArrayTemplate_HFbxTexture *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxLayerElementArrayTemplate_HFbxTexture, &sipCpp))
        {
             ::FbxTexturePtr sipRes;

            sipRes = sipCpp->GetLast();

            return sipConvertFromType(sipRes,sipType_FbxTexture,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxLayerElementArrayTemplate_HFbxTexture, sipName_GetLast, doc_FbxLayerElementArrayTemplate_HFbxTexture_GetLast);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxLayerElementArrayTemplate_HFbxTexture_Find, "Find(self) -> Tuple[int, FbxTexture]");

extern "C" {static PyObject *meth_FbxLayerElementArrayTemplate_HFbxTexture_Find(PyObject *, PyObject *);}
static PyObject *meth_FbxLayerElementArrayTemplate_HFbxTexture_Find(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxTexturePtr a0;
         ::FbxLayerElementArrayTemplate_HFbxTexture *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxLayerElementArrayTemplate_HFbxTexture, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->Find(a0);

            return sipBuildResult(0,"(iD)",sipRes,a0,sipType_FbxTexture,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxLayerElementArrayTemplate_HFbxTexture, sipName_Find, doc_FbxLayerElementArrayTemplate_HFbxTexture_Find);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxLayerElementArrayTemplate_HFbxTexture_FindAfter, "FindAfter(self, int, FbxTexture) -> int");

extern "C" {static PyObject *meth_FbxLayerElementArrayTemplate_HFbxTexture_FindAfter(PyObject *, PyObject *);}
static PyObject *meth_FbxLayerElementArrayTemplate_HFbxTexture_FindAfter(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
         ::FbxTexturePtr a1;
         ::FbxLayerElementArrayTemplate_HFbxTexture *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BiJ8", &sipSelf, sipType_FbxLayerElementArrayTemplate_HFbxTexture, &sipCpp, &a0, sipType_FbxTexture, &a1))
        {
            int sipRes;

            sipRes = sipCpp->FindAfter(a0,a1);

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxLayerElementArrayTemplate_HFbxTexture, sipName_FindAfter, doc_FbxLayerElementArrayTemplate_HFbxTexture_FindAfter);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxLayerElementArrayTemplate_HFbxTexture_FindBefore, "FindBefore(self, int, FbxTexture) -> int");

extern "C" {static PyObject *meth_FbxLayerElementArrayTemplate_HFbxTexture_FindBefore(PyObject *, PyObject *);}
static PyObject *meth_FbxLayerElementArrayTemplate_HFbxTexture_FindBefore(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
         ::FbxTexturePtr a1;
         ::FbxLayerElementArrayTemplate_HFbxTexture *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BiJ8", &sipSelf, sipType_FbxLayerElementArrayTemplate_HFbxTexture, &sipCpp, &a0, sipType_FbxTexture, &a1))
        {
            int sipRes;

            sipRes = sipCpp->FindBefore(a0,a1);

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxLayerElementArrayTemplate_HFbxTexture, sipName_FindBefore, doc_FbxLayerElementArrayTemplate_HFbxTexture_FindBefore);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *slot_FbxLayerElementArrayTemplate_HFbxTexture___getitem__(PyObject *,PyObject *);}
static PyObject *slot_FbxLayerElementArrayTemplate_HFbxTexture___getitem__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxLayerElementArrayTemplate_HFbxTexture *sipCpp = reinterpret_cast< ::FbxLayerElementArrayTemplate_HFbxTexture *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxLayerElementArrayTemplate_HFbxTexture));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
             ::FbxTexturePtr sipRes = 0;
            int sipIsErr = 0;

#line 290 "D:\\Program Files\\Autodesk\\FBX\\FBX Python Bindings\\2020.3.4\\sip\\fbxlayerelementarray.sip"
        if (a0 < 0 || a0 >= sipCpp->GetCount())
        {
            PyErr_Format(PyExc_IndexError, "sequence index out of range");
            sipIsErr = 1;
        }
        else
        {
            fbxArrayElementCopy(&sipRes, (FbxTexturePtr*)NULL, sipCpp, a0);
        }
#line 525 "D:\\Program Files\\Autodesk\\FBX\\FBX Python Bindings\\2020.3.4\\build\\fbx/sipfbxFbxLayerElementArrayTemplate_HFbxTexture.cpp"

            if (sipIsErr)
                return 0;

            return sipConvertFromType(sipRes,sipType_FbxTexture,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxLayerElementArrayTemplate_HFbxTexture, sipName___getitem__, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_FbxLayerElementArrayTemplate_HFbxTexture(void *, const sipTypeDef *);}
static void *cast_FbxLayerElementArrayTemplate_HFbxTexture(void *sipCppV, const sipTypeDef *targetType)
{
     ::FbxLayerElementArrayTemplate_HFbxTexture *sipCpp = reinterpret_cast< ::FbxLayerElementArrayTemplate_HFbxTexture *>(sipCppV);

    if (targetType == sipType_FbxLayerElementArrayTemplate_HFbxTexture)
        return sipCppV;

    if (targetType == sipType_FbxLayerElementArray)
        return static_cast< ::FbxLayerElementArray *>(sipCpp);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_FbxLayerElementArrayTemplate_HFbxTexture(void *, int);}
static void release_FbxLayerElementArrayTemplate_HFbxTexture(void *sipCppV, int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipFbxLayerElementArrayTemplate_HFbxTexture *>(sipCppV);
    else
        delete reinterpret_cast< ::FbxLayerElementArrayTemplate_HFbxTexture *>(sipCppV);
}


extern "C" {static void assign_FbxLayerElementArrayTemplate_HFbxTexture(void *, Py_ssize_t, void *);}
static void assign_FbxLayerElementArrayTemplate_HFbxTexture(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::FbxLayerElementArrayTemplate_HFbxTexture *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::FbxLayerElementArrayTemplate_HFbxTexture *>(sipSrc);
}


extern "C" {static void *copy_FbxLayerElementArrayTemplate_HFbxTexture(const void *, Py_ssize_t);}
static void *copy_FbxLayerElementArrayTemplate_HFbxTexture(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::FbxLayerElementArrayTemplate_HFbxTexture(reinterpret_cast<const  ::FbxLayerElementArrayTemplate_HFbxTexture *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_FbxLayerElementArrayTemplate_HFbxTexture(sipSimpleWrapper *);}
static void dealloc_FbxLayerElementArrayTemplate_HFbxTexture(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipFbxLayerElementArrayTemplate_HFbxTexture *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_FbxLayerElementArrayTemplate_HFbxTexture(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_FbxLayerElementArrayTemplate_HFbxTexture(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_FbxLayerElementArrayTemplate_HFbxTexture(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipFbxLayerElementArrayTemplate_HFbxTexture *sipCpp = SIP_NULLPTR;

    {
         ::EFbxType a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "E", sipType_EFbxType, &a0))
        {
            sipCpp = new sipFbxLayerElementArrayTemplate_HFbxTexture(a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const  ::FbxLayerElementArrayTemplate_HFbxTexture* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_FbxLayerElementArrayTemplate_HFbxTexture, &a0))
        {
            sipCpp = new sipFbxLayerElementArrayTemplate_HFbxTexture(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_FbxLayerElementArrayTemplate_HFbxTexture[] = {{176, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_FbxLayerElementArrayTemplate_HFbxTexture[] = {
    {(void *)slot_FbxLayerElementArrayTemplate_HFbxTexture___getitem__, getitem_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_FbxLayerElementArrayTemplate_HFbxTexture[] = {
    {sipName_Add, meth_FbxLayerElementArrayTemplate_HFbxTexture_Add, METH_VARARGS, doc_FbxLayerElementArrayTemplate_HFbxTexture_Add},
    {sipName_Find, meth_FbxLayerElementArrayTemplate_HFbxTexture_Find, METH_VARARGS, doc_FbxLayerElementArrayTemplate_HFbxTexture_Find},
    {sipName_FindAfter, meth_FbxLayerElementArrayTemplate_HFbxTexture_FindAfter, METH_VARARGS, doc_FbxLayerElementArrayTemplate_HFbxTexture_FindAfter},
    {sipName_FindBefore, meth_FbxLayerElementArrayTemplate_HFbxTexture_FindBefore, METH_VARARGS, doc_FbxLayerElementArrayTemplate_HFbxTexture_FindBefore},
    {sipName_GetAt, meth_FbxLayerElementArrayTemplate_HFbxTexture_GetAt, METH_VARARGS, doc_FbxLayerElementArrayTemplate_HFbxTexture_GetAt},
    {sipName_GetFirst, meth_FbxLayerElementArrayTemplate_HFbxTexture_GetFirst, METH_VARARGS, doc_FbxLayerElementArrayTemplate_HFbxTexture_GetFirst},
    {sipName_GetLast, meth_FbxLayerElementArrayTemplate_HFbxTexture_GetLast, METH_VARARGS, doc_FbxLayerElementArrayTemplate_HFbxTexture_GetLast},
    {sipName_InsertAt, meth_FbxLayerElementArrayTemplate_HFbxTexture_InsertAt, METH_VARARGS, doc_FbxLayerElementArrayTemplate_HFbxTexture_InsertAt},
    {sipName_RemoveAt, meth_FbxLayerElementArrayTemplate_HFbxTexture_RemoveAt, METH_VARARGS, doc_FbxLayerElementArrayTemplate_HFbxTexture_RemoveAt},
    {sipName_RemoveIt, meth_FbxLayerElementArrayTemplate_HFbxTexture_RemoveIt, METH_VARARGS, doc_FbxLayerElementArrayTemplate_HFbxTexture_RemoveIt},
    {sipName_RemoveLast, meth_FbxLayerElementArrayTemplate_HFbxTexture_RemoveLast, METH_VARARGS, doc_FbxLayerElementArrayTemplate_HFbxTexture_RemoveLast},
    {sipName_SetAt, meth_FbxLayerElementArrayTemplate_HFbxTexture_SetAt, METH_VARARGS, doc_FbxLayerElementArrayTemplate_HFbxTexture_SetAt},
    {sipName_SetLast, meth_FbxLayerElementArrayTemplate_HFbxTexture_SetLast, METH_VARARGS, doc_FbxLayerElementArrayTemplate_HFbxTexture_SetLast}
};

PyDoc_STRVAR(doc_FbxLayerElementArrayTemplate_HFbxTexture, "\1FbxLayerElementArrayTemplate_HFbxTexture(EFbxType)\n"
"FbxLayerElementArrayTemplate_HFbxTexture(FbxLayerElementArrayTemplate_HFbxTexture)");


sipClassTypeDef sipTypeDef_fbx_FbxLayerElementArrayTemplate_HFbxTexture = {
    {
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_FbxLayerElementArrayTemplate_HFbxTexture,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_FbxLayerElementArrayTemplate_HFbxTexture,
        {0, 0, 1},
        13, methods_FbxLayerElementArrayTemplate_HFbxTexture,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_FbxLayerElementArrayTemplate_HFbxTexture,
    -1,
    -1,
    supers_FbxLayerElementArrayTemplate_HFbxTexture,
    slots_FbxLayerElementArrayTemplate_HFbxTexture,
    init_type_FbxLayerElementArrayTemplate_HFbxTexture,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_FbxLayerElementArrayTemplate_HFbxTexture,
    assign_FbxLayerElementArrayTemplate_HFbxTexture,
    SIP_NULLPTR,
    copy_FbxLayerElementArrayTemplate_HFbxTexture,
    release_FbxLayerElementArrayTemplate_HFbxTexture,
    cast_FbxLayerElementArrayTemplate_HFbxTexture,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};
