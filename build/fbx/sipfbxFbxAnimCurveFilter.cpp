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


#line 4 "D:\\Program Files\\Autodesk\\FBX\\FBX Python Bindings\\2020.3.4\\sip\\fbxstatus.sip"
#include <fbxsdk.h>
#line 44 "D:\\Program Files\\Autodesk\\FBX\\FBX Python Bindings\\2020.3.4\\build\\fbx/sipfbxFbxAnimCurveFilter.cpp"


class sipFbxAnimCurveFilter : public  ::FbxAnimCurveFilter
{
public:
    sipFbxAnimCurveFilter();
    sipFbxAnimCurveFilter(const  ::FbxAnimCurveFilter&);
    virtual ~sipFbxAnimCurveFilter();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void Reset() SIP_OVERRIDE;
    bool Apply( ::FbxAnimCurve&, ::FbxStatus*) SIP_OVERRIDE;
    bool Apply( ::FbxAnimCurve**,int, ::FbxStatus*) SIP_OVERRIDE;
    bool Apply( ::FbxAnimCurveNode&, ::FbxStatus*) SIP_OVERRIDE;
    bool Apply( ::FbxObject*, ::FbxAnimStack*, ::FbxStatus*) SIP_OVERRIDE;
    bool Apply( ::FbxAnimStack*, ::FbxStatus*) SIP_OVERRIDE;
    bool NeedApply( ::FbxAnimCurve&, ::FbxStatus*) SIP_OVERRIDE;
    bool NeedApply( ::FbxAnimCurve**,int, ::FbxStatus*) SIP_OVERRIDE;
    bool NeedApply( ::FbxAnimCurveNode&, ::FbxStatus*) SIP_OVERRIDE;
    bool NeedApply( ::FbxObject*, ::FbxAnimStack*, ::FbxStatus*) SIP_OVERRIDE;
    bool NeedApply( ::FbxAnimStack*, ::FbxStatus*) SIP_OVERRIDE;
    const char* GetName() const SIP_OVERRIDE;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipFbxAnimCurveFilter(const sipFbxAnimCurveFilter &);
    sipFbxAnimCurveFilter &operator = (const sipFbxAnimCurveFilter &);

    char sipPyMethods[12];
};

sipFbxAnimCurveFilter::sipFbxAnimCurveFilter():  ::FbxAnimCurveFilter(), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipFbxAnimCurveFilter::sipFbxAnimCurveFilter(const  ::FbxAnimCurveFilter& a0):  ::FbxAnimCurveFilter(a0), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipFbxAnimCurveFilter::~sipFbxAnimCurveFilter()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

void sipFbxAnimCurveFilter::Reset()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[0], &sipPySelf, SIP_NULLPTR, sipName_Reset);

    if (!sipMeth)
    {
         ::FbxAnimCurveFilter::Reset();
        return;
    }

    extern void sipVH_fbx_0(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    sipVH_fbx_0(sipGILState, 0, sipPySelf, sipMeth);
}

bool sipFbxAnimCurveFilter::Apply( ::FbxAnimCurve& a0, ::FbxStatus*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[1], &sipPySelf, sipName_FbxAnimCurveFilter, sipName_Apply);

    if (!sipMeth)
        return 0;

    extern bool sipVH_fbx_32(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::FbxAnimCurve&, ::FbxStatus*);

    return sipVH_fbx_32(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

bool sipFbxAnimCurveFilter::Apply( ::FbxAnimCurve**a0,int a1, ::FbxStatus*a2)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[2], &sipPySelf, SIP_NULLPTR, sipName_Apply);

    if (!sipMeth)
        return  ::FbxAnimCurveFilter::Apply(a0,a1,a2);

    extern bool sipVH_fbx_31(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::FbxAnimCurve**,int, ::FbxStatus*);

    return sipVH_fbx_31(sipGILState, 0, sipPySelf, sipMeth, a0, a1, a2);
}

bool sipFbxAnimCurveFilter::Apply( ::FbxAnimCurveNode& a0, ::FbxStatus*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[3], &sipPySelf, SIP_NULLPTR, sipName_Apply);

    if (!sipMeth)
        return  ::FbxAnimCurveFilter::Apply(a0,a1);

    extern bool sipVH_fbx_30(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::FbxAnimCurveNode&, ::FbxStatus*);

    return sipVH_fbx_30(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

bool sipFbxAnimCurveFilter::Apply( ::FbxObject*a0, ::FbxAnimStack*a1, ::FbxStatus*a2)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[4], &sipPySelf, SIP_NULLPTR, sipName_Apply);

    if (!sipMeth)
        return  ::FbxAnimCurveFilter::Apply(a0,a1,a2);

    extern bool sipVH_fbx_29(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::FbxObject*, ::FbxAnimStack*, ::FbxStatus*);

    return sipVH_fbx_29(sipGILState, 0, sipPySelf, sipMeth, a0, a1, a2);
}

bool sipFbxAnimCurveFilter::Apply( ::FbxAnimStack*a0, ::FbxStatus*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[5], &sipPySelf, SIP_NULLPTR, sipName_Apply);

    if (!sipMeth)
        return  ::FbxAnimCurveFilter::Apply(a0,a1);

    extern bool sipVH_fbx_28(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::FbxAnimStack*, ::FbxStatus*);

    return sipVH_fbx_28(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

bool sipFbxAnimCurveFilter::NeedApply( ::FbxAnimCurve& a0, ::FbxStatus*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[6], &sipPySelf, SIP_NULLPTR, sipName_NeedApply);

    if (!sipMeth)
        return  ::FbxAnimCurveFilter::NeedApply(a0,a1);

    extern bool sipVH_fbx_32(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::FbxAnimCurve&, ::FbxStatus*);

    return sipVH_fbx_32(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

bool sipFbxAnimCurveFilter::NeedApply( ::FbxAnimCurve**a0,int a1, ::FbxStatus*a2)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[7], &sipPySelf, SIP_NULLPTR, sipName_NeedApply);

    if (!sipMeth)
        return  ::FbxAnimCurveFilter::NeedApply(a0,a1,a2);

    extern bool sipVH_fbx_31(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::FbxAnimCurve**,int, ::FbxStatus*);

    return sipVH_fbx_31(sipGILState, 0, sipPySelf, sipMeth, a0, a1, a2);
}

bool sipFbxAnimCurveFilter::NeedApply( ::FbxAnimCurveNode& a0, ::FbxStatus*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[8], &sipPySelf, SIP_NULLPTR, sipName_NeedApply);

    if (!sipMeth)
        return  ::FbxAnimCurveFilter::NeedApply(a0,a1);

    extern bool sipVH_fbx_30(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::FbxAnimCurveNode&, ::FbxStatus*);

    return sipVH_fbx_30(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

bool sipFbxAnimCurveFilter::NeedApply( ::FbxObject*a0, ::FbxAnimStack*a1, ::FbxStatus*a2)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[9], &sipPySelf, SIP_NULLPTR, sipName_NeedApply);

    if (!sipMeth)
        return  ::FbxAnimCurveFilter::NeedApply(a0,a1,a2);

    extern bool sipVH_fbx_29(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::FbxObject*, ::FbxAnimStack*, ::FbxStatus*);

    return sipVH_fbx_29(sipGILState, 0, sipPySelf, sipMeth, a0, a1, a2);
}

bool sipFbxAnimCurveFilter::NeedApply( ::FbxAnimStack*a0, ::FbxStatus*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[10], &sipPySelf, SIP_NULLPTR, sipName_NeedApply);

    if (!sipMeth)
        return  ::FbxAnimCurveFilter::NeedApply(a0,a1);

    extern bool sipVH_fbx_28(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::FbxAnimStack*, ::FbxStatus*);

    return sipVH_fbx_28(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

const char* sipFbxAnimCurveFilter::GetName() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[11]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_GetName);

    if (!sipMeth)
        return  ::FbxAnimCurveFilter::GetName();

    extern const char* sipVH_fbx_27(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return sipVH_fbx_27(sipGILState, 0, sipPySelf, sipMeth, -1499);
}


PyDoc_STRVAR(doc_FbxAnimCurveFilter_GetName, "GetName(self) -> str");

extern "C" {static PyObject *meth_FbxAnimCurveFilter_GetName(PyObject *, PyObject *);}
static PyObject *meth_FbxAnimCurveFilter_GetName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_FbxAnimCurveFilter)) || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::FbxAnimCurveFilter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxAnimCurveFilter, &sipCpp))
        {
            const char*sipRes;

            sipRes = (sipSelfWasArg ? sipCpp-> ::FbxAnimCurveFilter::GetName() : sipCpp->GetName());

            if (sipRes == SIP_NULLPTR)
            {
                Py_INCREF(Py_None);
                return Py_None;
            }

            return PyUnicode_FromString(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxAnimCurveFilter, sipName_GetName, doc_FbxAnimCurveFilter_GetName);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxAnimCurveFilter_GetStartTime, "GetStartTime(self) -> FbxTime");

extern "C" {static PyObject *meth_FbxAnimCurveFilter_GetStartTime(PyObject *, PyObject *);}
static PyObject *meth_FbxAnimCurveFilter_GetStartTime(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxAnimCurveFilter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxAnimCurveFilter, &sipCpp))
        {
             ::FbxTime*sipRes;

            sipRes = &sipCpp->GetStartTime();

            return sipConvertFromType(sipRes,sipType_FbxTime,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxAnimCurveFilter, sipName_GetStartTime, doc_FbxAnimCurveFilter_GetStartTime);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxAnimCurveFilter_SetStartTime, "SetStartTime(self, FbxTime)");

extern "C" {static PyObject *meth_FbxAnimCurveFilter_SetStartTime(PyObject *, PyObject *);}
static PyObject *meth_FbxAnimCurveFilter_SetStartTime(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxTime* a0;
         ::FbxAnimCurveFilter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_FbxAnimCurveFilter, &sipCpp, sipType_FbxTime, &a0))
        {
            sipCpp->SetStartTime(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxAnimCurveFilter, sipName_SetStartTime, doc_FbxAnimCurveFilter_SetStartTime);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxAnimCurveFilter_GetStopTime, "GetStopTime(self) -> FbxTime");

extern "C" {static PyObject *meth_FbxAnimCurveFilter_GetStopTime(PyObject *, PyObject *);}
static PyObject *meth_FbxAnimCurveFilter_GetStopTime(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxAnimCurveFilter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxAnimCurveFilter, &sipCpp))
        {
             ::FbxTime*sipRes;

            sipRes = &sipCpp->GetStopTime();

            return sipConvertFromType(sipRes,sipType_FbxTime,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxAnimCurveFilter, sipName_GetStopTime, doc_FbxAnimCurveFilter_GetStopTime);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxAnimCurveFilter_SetStopTime, "SetStopTime(self, FbxTime)");

extern "C" {static PyObject *meth_FbxAnimCurveFilter_SetStopTime(PyObject *, PyObject *);}
static PyObject *meth_FbxAnimCurveFilter_SetStopTime(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxTime* a0;
         ::FbxAnimCurveFilter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_FbxAnimCurveFilter, &sipCpp, sipType_FbxTime, &a0))
        {
            sipCpp->SetStopTime(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxAnimCurveFilter, sipName_SetStopTime, doc_FbxAnimCurveFilter_SetStopTime);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxAnimCurveFilter_GetStartKey, "GetStartKey(self, FbxAnimCurve) -> int");

extern "C" {static PyObject *meth_FbxAnimCurveFilter_GetStartKey(PyObject *, PyObject *);}
static PyObject *meth_FbxAnimCurveFilter_GetStartKey(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxAnimCurve* a0;
        const  ::FbxAnimCurveFilter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_FbxAnimCurveFilter, &sipCpp, sipType_FbxAnimCurve, &a0))
        {
            int sipRes;

            sipRes = sipCpp->GetStartKey(*a0);

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxAnimCurveFilter, sipName_GetStartKey, doc_FbxAnimCurveFilter_GetStartKey);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxAnimCurveFilter_GetStopKey, "GetStopKey(self, FbxAnimCurve) -> int");

extern "C" {static PyObject *meth_FbxAnimCurveFilter_GetStopKey(PyObject *, PyObject *);}
static PyObject *meth_FbxAnimCurveFilter_GetStopKey(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxAnimCurve* a0;
        const  ::FbxAnimCurveFilter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_FbxAnimCurveFilter, &sipCpp, sipType_FbxAnimCurve, &a0))
        {
            int sipRes;

            sipRes = sipCpp->GetStopKey(*a0);

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxAnimCurveFilter, sipName_GetStopKey, doc_FbxAnimCurveFilter_GetStopKey);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxAnimCurveFilter_NeedApply, "NeedApply(self, FbxAnimStack, FbxStatus = None) -> bool\n"
"NeedApply(self, FbxObject, FbxAnimStack, FbxStatus = None) -> bool\n"
"NeedApply(self, FbxAnimCurveNode, FbxStatus = None) -> bool\n"
"NeedApply(self, int, FbxStatus = None) -> Tuple[bool, FbxAnimCurve]\n"
"NeedApply(self, FbxAnimCurve, FbxStatus = None) -> bool");

extern "C" {static PyObject *meth_FbxAnimCurveFilter_NeedApply(PyObject *, PyObject *);}
static PyObject *meth_FbxAnimCurveFilter_NeedApply(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_FbxAnimCurveFilter)) || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::FbxAnimStack* a0;
         ::FbxStatus* a1 = 0;
         ::FbxAnimCurveFilter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8|J8", &sipSelf, sipType_FbxAnimCurveFilter, &sipCpp, sipType_FbxAnimStack, &a0, sipType_FbxStatus, &a1))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp-> ::FbxAnimCurveFilter::NeedApply(a0,a1) : sipCpp->NeedApply(a0,a1));

            return PyBool_FromLong(sipRes);
        }
    }

    {
         ::FbxObject* a0;
         ::FbxAnimStack* a1;
         ::FbxStatus* a2 = 0;
         ::FbxAnimCurveFilter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8J8|J8", &sipSelf, sipType_FbxAnimCurveFilter, &sipCpp, sipType_FbxObject, &a0, sipType_FbxAnimStack, &a1, sipType_FbxStatus, &a2))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp-> ::FbxAnimCurveFilter::NeedApply(a0,a1,a2) : sipCpp->NeedApply(a0,a1,a2));

            return PyBool_FromLong(sipRes);
        }
    }

    {
         ::FbxAnimCurveNode* a0;
         ::FbxStatus* a1 = 0;
         ::FbxAnimCurveFilter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9|J8", &sipSelf, sipType_FbxAnimCurveFilter, &sipCpp, sipType_FbxAnimCurveNode, &a0, sipType_FbxStatus, &a1))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp-> ::FbxAnimCurveFilter::NeedApply(*a0,a1) : sipCpp->NeedApply(*a0,a1));

            return PyBool_FromLong(sipRes);
        }
    }

    {
         ::FbxAnimCurve* a0;
        int a1;
         ::FbxStatus* a2 = 0;
         ::FbxAnimCurveFilter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi|J8", &sipSelf, sipType_FbxAnimCurveFilter, &sipCpp, &a1, sipType_FbxStatus, &a2))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp-> ::FbxAnimCurveFilter::NeedApply(&a0,a1,a2) : sipCpp->NeedApply(&a0,a1,a2));

            return sipBuildResult(0,"(bD)",sipRes,a0,sipType_FbxAnimCurve,SIP_NULLPTR);
        }
    }

    {
         ::FbxAnimCurve* a0;
         ::FbxStatus* a1 = 0;
         ::FbxAnimCurveFilter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9|J8", &sipSelf, sipType_FbxAnimCurveFilter, &sipCpp, sipType_FbxAnimCurve, &a0, sipType_FbxStatus, &a1))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp-> ::FbxAnimCurveFilter::NeedApply(*a0,a1) : sipCpp->NeedApply(*a0,a1));

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxAnimCurveFilter, sipName_NeedApply, doc_FbxAnimCurveFilter_NeedApply);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxAnimCurveFilter_Apply, "Apply(self, FbxAnimStack, FbxStatus = None) -> bool\n"
"Apply(self, FbxObject, FbxAnimStack, FbxStatus = None) -> bool\n"
"Apply(self, FbxAnimCurveNode, FbxStatus = None) -> bool\n"
"Apply(self, int, FbxStatus = None) -> Tuple[bool, FbxAnimCurve]\n"
"Apply(self, FbxAnimCurve, FbxStatus = None) -> bool");

extern "C" {static PyObject *meth_FbxAnimCurveFilter_Apply(PyObject *, PyObject *);}
static PyObject *meth_FbxAnimCurveFilter_Apply(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_FbxAnimCurveFilter)) || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));
    PyObject *sipOrigSelf = sipSelf;

    {
         ::FbxAnimStack* a0;
         ::FbxStatus* a1 = 0;
         ::FbxAnimCurveFilter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8|J8", &sipSelf, sipType_FbxAnimCurveFilter, &sipCpp, sipType_FbxAnimStack, &a0, sipType_FbxStatus, &a1))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp-> ::FbxAnimCurveFilter::Apply(a0,a1) : sipCpp->Apply(a0,a1));

            return PyBool_FromLong(sipRes);
        }
    }

    {
         ::FbxObject* a0;
         ::FbxAnimStack* a1;
         ::FbxStatus* a2 = 0;
         ::FbxAnimCurveFilter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8J8|J8", &sipSelf, sipType_FbxAnimCurveFilter, &sipCpp, sipType_FbxObject, &a0, sipType_FbxAnimStack, &a1, sipType_FbxStatus, &a2))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp-> ::FbxAnimCurveFilter::Apply(a0,a1,a2) : sipCpp->Apply(a0,a1,a2));

            return PyBool_FromLong(sipRes);
        }
    }

    {
         ::FbxAnimCurveNode* a0;
         ::FbxStatus* a1 = 0;
         ::FbxAnimCurveFilter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9|J8", &sipSelf, sipType_FbxAnimCurveFilter, &sipCpp, sipType_FbxAnimCurveNode, &a0, sipType_FbxStatus, &a1))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp-> ::FbxAnimCurveFilter::Apply(*a0,a1) : sipCpp->Apply(*a0,a1));

            return PyBool_FromLong(sipRes);
        }
    }

    {
         ::FbxAnimCurve* a0;
        int a1;
         ::FbxStatus* a2 = 0;
         ::FbxAnimCurveFilter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi|J8", &sipSelf, sipType_FbxAnimCurveFilter, &sipCpp, &a1, sipType_FbxStatus, &a2))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp-> ::FbxAnimCurveFilter::Apply(&a0,a1,a2) : sipCpp->Apply(&a0,a1,a2));

            return sipBuildResult(0,"(bD)",sipRes,a0,sipType_FbxAnimCurve,SIP_NULLPTR);
        }
    }

    {
         ::FbxAnimCurve* a0;
         ::FbxStatus* a1 = 0;
         ::FbxAnimCurveFilter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9|J8", &sipSelf, sipType_FbxAnimCurveFilter, &sipCpp, sipType_FbxAnimCurve, &a0, sipType_FbxStatus, &a1))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_FbxAnimCurveFilter, sipName_Apply);
                return SIP_NULLPTR;
            }

            sipRes = sipCpp->Apply(*a0,a1);

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxAnimCurveFilter, sipName_Apply, doc_FbxAnimCurveFilter_Apply);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxAnimCurveFilter_Reset, "Reset(self)");

extern "C" {static PyObject *meth_FbxAnimCurveFilter_Reset(PyObject *, PyObject *);}
static PyObject *meth_FbxAnimCurveFilter_Reset(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_FbxAnimCurveFilter)) || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::FbxAnimCurveFilter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxAnimCurveFilter, &sipCpp))
        {
            (sipSelfWasArg ? sipCpp-> ::FbxAnimCurveFilter::Reset() : sipCpp->Reset());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxAnimCurveFilter, sipName_Reset, doc_FbxAnimCurveFilter_Reset);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_FbxAnimCurveFilter(void *, int);}
static void release_FbxAnimCurveFilter(void *sipCppV, int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipFbxAnimCurveFilter *>(sipCppV);
    else
        delete reinterpret_cast< ::FbxAnimCurveFilter *>(sipCppV);
}


extern "C" {static void dealloc_FbxAnimCurveFilter(sipSimpleWrapper *);}
static void dealloc_FbxAnimCurveFilter(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipFbxAnimCurveFilter *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_FbxAnimCurveFilter(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_FbxAnimCurveFilter(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_FbxAnimCurveFilter(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipFbxAnimCurveFilter *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new sipFbxAnimCurveFilter();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const  ::FbxAnimCurveFilter* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_FbxAnimCurveFilter, &a0))
        {
            sipCpp = new sipFbxAnimCurveFilter(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


static PyMethodDef methods_FbxAnimCurveFilter[] = {
    {sipName_Apply, meth_FbxAnimCurveFilter_Apply, METH_VARARGS, doc_FbxAnimCurveFilter_Apply},
    {sipName_GetName, meth_FbxAnimCurveFilter_GetName, METH_VARARGS, doc_FbxAnimCurveFilter_GetName},
    {sipName_GetStartKey, meth_FbxAnimCurveFilter_GetStartKey, METH_VARARGS, doc_FbxAnimCurveFilter_GetStartKey},
    {sipName_GetStartTime, meth_FbxAnimCurveFilter_GetStartTime, METH_VARARGS, doc_FbxAnimCurveFilter_GetStartTime},
    {sipName_GetStopKey, meth_FbxAnimCurveFilter_GetStopKey, METH_VARARGS, doc_FbxAnimCurveFilter_GetStopKey},
    {sipName_GetStopTime, meth_FbxAnimCurveFilter_GetStopTime, METH_VARARGS, doc_FbxAnimCurveFilter_GetStopTime},
    {sipName_NeedApply, meth_FbxAnimCurveFilter_NeedApply, METH_VARARGS, doc_FbxAnimCurveFilter_NeedApply},
    {sipName_Reset, meth_FbxAnimCurveFilter_Reset, METH_VARARGS, doc_FbxAnimCurveFilter_Reset},
    {sipName_SetStartTime, meth_FbxAnimCurveFilter_SetStartTime, METH_VARARGS, doc_FbxAnimCurveFilter_SetStartTime},
    {sipName_SetStopTime, meth_FbxAnimCurveFilter_SetStopTime, METH_VARARGS, doc_FbxAnimCurveFilter_SetStopTime}
};

PyDoc_STRVAR(doc_FbxAnimCurveFilter, "\1FbxAnimCurveFilter()\n"
"FbxAnimCurveFilter(FbxAnimCurveFilter)");


sipClassTypeDef sipTypeDef_fbx_FbxAnimCurveFilter = {
    {
        SIP_NULLPTR,
        SIP_TYPE_ABSTRACT|SIP_TYPE_CLASS,
        sipNameNr_FbxAnimCurveFilter,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_FbxAnimCurveFilter,
        {0, 0, 1},
        10, methods_FbxAnimCurveFilter,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_FbxAnimCurveFilter,
    -1,
    -1,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_FbxAnimCurveFilter,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_FbxAnimCurveFilter,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_FbxAnimCurveFilter,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};