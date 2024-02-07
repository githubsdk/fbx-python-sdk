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




class sipFbxAnimCurveKeyBase : public  ::FbxAnimCurveKeyBase
{
public:
    sipFbxAnimCurveKeyBase();
    sipFbxAnimCurveKeyBase(const  ::FbxAnimCurveKeyBase&);
    virtual ~sipFbxAnimCurveKeyBase();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void SetTime(const  ::FbxTime&) SIP_OVERRIDE;
     ::FbxTime GetTime() const SIP_OVERRIDE;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipFbxAnimCurveKeyBase(const sipFbxAnimCurveKeyBase &);
    sipFbxAnimCurveKeyBase &operator = (const sipFbxAnimCurveKeyBase &);

    char sipPyMethods[2];
};

sipFbxAnimCurveKeyBase::sipFbxAnimCurveKeyBase():  ::FbxAnimCurveKeyBase(), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipFbxAnimCurveKeyBase::sipFbxAnimCurveKeyBase(const  ::FbxAnimCurveKeyBase& a0):  ::FbxAnimCurveKeyBase(a0), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipFbxAnimCurveKeyBase::~sipFbxAnimCurveKeyBase()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

void sipFbxAnimCurveKeyBase::SetTime(const  ::FbxTime& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[0], &sipPySelf, SIP_NULLPTR, sipName_SetTime);

    if (!sipMeth)
    {
         ::FbxAnimCurveKeyBase::SetTime(a0);
        return;
    }

    extern void sipVH_fbx_44(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::FbxTime&);

    sipVH_fbx_44(sipGILState, 0, sipPySelf, sipMeth, a0);
}

 ::FbxTime sipFbxAnimCurveKeyBase::GetTime() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[1]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_GetTime);

    if (!sipMeth)
        return  ::FbxAnimCurveKeyBase::GetTime();

    extern  ::FbxTime sipVH_fbx_43(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_fbx_43(sipGILState, 0, sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_FbxAnimCurveKeyBase_GetTime, "GetTime(self) -> FbxTime");

extern "C" {static PyObject *meth_FbxAnimCurveKeyBase_GetTime(PyObject *, PyObject *);}
static PyObject *meth_FbxAnimCurveKeyBase_GetTime(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_FbxAnimCurveKeyBase)) || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::FbxAnimCurveKeyBase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxAnimCurveKeyBase, &sipCpp))
        {
             ::FbxTime*sipRes;

            sipRes = new  ::FbxTime((sipSelfWasArg ? sipCpp-> ::FbxAnimCurveKeyBase::GetTime() : sipCpp->GetTime()));

            return sipConvertFromNewType(sipRes,sipType_FbxTime,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxAnimCurveKeyBase, sipName_GetTime, doc_FbxAnimCurveKeyBase_GetTime);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxAnimCurveKeyBase_SetTime, "SetTime(self, FbxTime)");

extern "C" {static PyObject *meth_FbxAnimCurveKeyBase_SetTime(PyObject *, PyObject *);}
static PyObject *meth_FbxAnimCurveKeyBase_SetTime(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_FbxAnimCurveKeyBase)) || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::FbxTime* a0;
         ::FbxAnimCurveKeyBase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_FbxAnimCurveKeyBase, &sipCpp, sipType_FbxTime, &a0))
        {
            (sipSelfWasArg ? sipCpp-> ::FbxAnimCurveKeyBase::SetTime(*a0) : sipCpp->SetTime(*a0));

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxAnimCurveKeyBase, sipName_SetTime, doc_FbxAnimCurveKeyBase_SetTime);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_FbxAnimCurveKeyBase(void *, int);}
static void release_FbxAnimCurveKeyBase(void *sipCppV, int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipFbxAnimCurveKeyBase *>(sipCppV);
    else
        delete reinterpret_cast< ::FbxAnimCurveKeyBase *>(sipCppV);
}


extern "C" {static void *array_FbxAnimCurveKeyBase(Py_ssize_t);}
static void *array_FbxAnimCurveKeyBase(Py_ssize_t sipNrElem)
{
    return new  ::FbxAnimCurveKeyBase[sipNrElem];
}


extern "C" {static void assign_FbxAnimCurveKeyBase(void *, Py_ssize_t, void *);}
static void assign_FbxAnimCurveKeyBase(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::FbxAnimCurveKeyBase *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::FbxAnimCurveKeyBase *>(sipSrc);
}


extern "C" {static void *copy_FbxAnimCurveKeyBase(const void *, Py_ssize_t);}
static void *copy_FbxAnimCurveKeyBase(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::FbxAnimCurveKeyBase(reinterpret_cast<const  ::FbxAnimCurveKeyBase *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_FbxAnimCurveKeyBase(sipSimpleWrapper *);}
static void dealloc_FbxAnimCurveKeyBase(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipFbxAnimCurveKeyBase *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_FbxAnimCurveKeyBase(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_FbxAnimCurveKeyBase(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_FbxAnimCurveKeyBase(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipFbxAnimCurveKeyBase *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new sipFbxAnimCurveKeyBase();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const  ::FbxAnimCurveKeyBase* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_FbxAnimCurveKeyBase, &a0))
        {
            sipCpp = new sipFbxAnimCurveKeyBase(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


static PyMethodDef methods_FbxAnimCurveKeyBase[] = {
    {sipName_GetTime, meth_FbxAnimCurveKeyBase_GetTime, METH_VARARGS, doc_FbxAnimCurveKeyBase_GetTime},
    {sipName_SetTime, meth_FbxAnimCurveKeyBase_SetTime, METH_VARARGS, doc_FbxAnimCurveKeyBase_SetTime}
};


extern "C" {static PyObject *varget_FbxAnimCurveKeyBase_mTime(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxAnimCurveKeyBase_mTime(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
     ::FbxTime*sipVal;
     ::FbxAnimCurveKeyBase *sipCpp = reinterpret_cast< ::FbxAnimCurveKeyBase *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -1131);

    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->mTime;

    sipPy = sipConvertFromType(sipVal, sipType_FbxTime, SIP_NULLPTR);

    if (sipPy)
    {
        sipKeepReference(sipPy, -1130, sipPySelf);
        sipKeepReference(sipPySelf, -1131, sipPy);
    }

    return sipPy;
}


extern "C" {static int varset_FbxAnimCurveKeyBase_mTime(void *, PyObject *, PyObject *);}
static int varset_FbxAnimCurveKeyBase_mTime(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::FbxTime*sipVal;
     ::FbxAnimCurveKeyBase *sipCpp = reinterpret_cast< ::FbxAnimCurveKeyBase *>(sipSelf);

    int sipIsErr = 0;
    sipVal = reinterpret_cast< ::FbxTime *>(sipForceConvertToType(sipPy, sipType_FbxTime, SIP_NULLPTR, SIP_NOT_NONE, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->mTime = *sipVal;

    return 0;
}

sipVariableDef variables_FbxAnimCurveKeyBase[] = {
    {InstanceVariable, sipName_mTime, (PyMethodDef *)varget_FbxAnimCurveKeyBase_mTime, (PyMethodDef *)varset_FbxAnimCurveKeyBase_mTime, SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_FbxAnimCurveKeyBase, "\1FbxAnimCurveKeyBase()\n"
"FbxAnimCurveKeyBase(FbxAnimCurveKeyBase)");


sipClassTypeDef sipTypeDef_fbx_FbxAnimCurveKeyBase = {
    {
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_FbxAnimCurveKeyBase,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_FbxAnimCurveKeyBase,
        {0, 0, 1},
        2, methods_FbxAnimCurveKeyBase,
        1, variables_FbxAnimCurveKeyBase,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_FbxAnimCurveKeyBase,
    -1,
    -1,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_FbxAnimCurveKeyBase,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_FbxAnimCurveKeyBase,
    assign_FbxAnimCurveKeyBase,
    array_FbxAnimCurveKeyBase,
    copy_FbxAnimCurveKeyBase,
    release_FbxAnimCurveKeyBase,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};