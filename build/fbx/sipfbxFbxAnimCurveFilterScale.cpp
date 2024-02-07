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
#line 44 "D:\\Program Files\\Autodesk\\FBX\\FBX Python Bindings\\2020.3.4\\build\\fbx/sipfbxFbxAnimCurveFilterScale.cpp"


class sipFbxAnimCurveFilterScale : public  ::FbxAnimCurveFilterScale
{
public:
    sipFbxAnimCurveFilterScale();
    sipFbxAnimCurveFilterScale(const  ::FbxAnimCurveFilterScale&);
    virtual ~sipFbxAnimCurveFilterScale();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    const char* GetName() const SIP_OVERRIDE;
    bool NeedApply( ::FbxAnimStack*, ::FbxStatus*) SIP_OVERRIDE;
    bool NeedApply( ::FbxObject*, ::FbxAnimStack*, ::FbxStatus*) SIP_OVERRIDE;
    bool NeedApply( ::FbxAnimCurveNode&, ::FbxStatus*) SIP_OVERRIDE;
    bool NeedApply( ::FbxAnimCurve**,int, ::FbxStatus*) SIP_OVERRIDE;
    bool NeedApply( ::FbxAnimCurve&, ::FbxStatus*) SIP_OVERRIDE;
    bool Apply( ::FbxAnimStack*, ::FbxStatus*) SIP_OVERRIDE;
    bool Apply( ::FbxObject*, ::FbxAnimStack*, ::FbxStatus*) SIP_OVERRIDE;
    bool Apply( ::FbxAnimCurveNode&, ::FbxStatus*) SIP_OVERRIDE;
    bool Apply( ::FbxAnimCurve**,int, ::FbxStatus*) SIP_OVERRIDE;
    bool Apply( ::FbxAnimCurve&, ::FbxStatus*) SIP_OVERRIDE;
    void Reset() SIP_OVERRIDE;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipFbxAnimCurveFilterScale(const sipFbxAnimCurveFilterScale &);
    sipFbxAnimCurveFilterScale &operator = (const sipFbxAnimCurveFilterScale &);

    char sipPyMethods[12];
};

sipFbxAnimCurveFilterScale::sipFbxAnimCurveFilterScale():  ::FbxAnimCurveFilterScale(), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipFbxAnimCurveFilterScale::sipFbxAnimCurveFilterScale(const  ::FbxAnimCurveFilterScale& a0):  ::FbxAnimCurveFilterScale(a0), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipFbxAnimCurveFilterScale::~sipFbxAnimCurveFilterScale()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

const char* sipFbxAnimCurveFilterScale::GetName() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[0]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_GetName);

    if (!sipMeth)
        return  ::FbxAnimCurveFilterScale::GetName();

    extern const char* sipVH_fbx_27(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return sipVH_fbx_27(sipGILState, 0, sipPySelf, sipMeth, -1493);
}

bool sipFbxAnimCurveFilterScale::NeedApply( ::FbxAnimStack*a0, ::FbxStatus*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[1], &sipPySelf, SIP_NULLPTR, sipName_NeedApply);

    if (!sipMeth)
        return  ::FbxAnimCurveFilterScale::NeedApply(a0,a1);

    extern bool sipVH_fbx_28(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::FbxAnimStack*, ::FbxStatus*);

    return sipVH_fbx_28(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

bool sipFbxAnimCurveFilterScale::NeedApply( ::FbxObject*a0, ::FbxAnimStack*a1, ::FbxStatus*a2)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[2], &sipPySelf, SIP_NULLPTR, sipName_NeedApply);

    if (!sipMeth)
        return  ::FbxAnimCurveFilterScale::NeedApply(a0,a1,a2);

    extern bool sipVH_fbx_29(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::FbxObject*, ::FbxAnimStack*, ::FbxStatus*);

    return sipVH_fbx_29(sipGILState, 0, sipPySelf, sipMeth, a0, a1, a2);
}

bool sipFbxAnimCurveFilterScale::NeedApply( ::FbxAnimCurveNode& a0, ::FbxStatus*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[3], &sipPySelf, SIP_NULLPTR, sipName_NeedApply);

    if (!sipMeth)
        return  ::FbxAnimCurveFilterScale::NeedApply(a0,a1);

    extern bool sipVH_fbx_30(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::FbxAnimCurveNode&, ::FbxStatus*);

    return sipVH_fbx_30(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

bool sipFbxAnimCurveFilterScale::NeedApply( ::FbxAnimCurve**a0,int a1, ::FbxStatus*a2)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[4], &sipPySelf, SIP_NULLPTR, sipName_NeedApply);

    if (!sipMeth)
        return  ::FbxAnimCurveFilterScale::NeedApply(a0,a1,a2);

    extern bool sipVH_fbx_31(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::FbxAnimCurve**,int, ::FbxStatus*);

    return sipVH_fbx_31(sipGILState, 0, sipPySelf, sipMeth, a0, a1, a2);
}

bool sipFbxAnimCurveFilterScale::NeedApply( ::FbxAnimCurve& a0, ::FbxStatus*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[5], &sipPySelf, SIP_NULLPTR, sipName_NeedApply);

    if (!sipMeth)
        return  ::FbxAnimCurveFilterScale::NeedApply(a0,a1);

    extern bool sipVH_fbx_32(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::FbxAnimCurve&, ::FbxStatus*);

    return sipVH_fbx_32(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

bool sipFbxAnimCurveFilterScale::Apply( ::FbxAnimStack*a0, ::FbxStatus*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[6], &sipPySelf, SIP_NULLPTR, sipName_Apply);

    if (!sipMeth)
        return  ::FbxAnimCurveFilterScale::Apply(a0,a1);

    extern bool sipVH_fbx_28(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::FbxAnimStack*, ::FbxStatus*);

    return sipVH_fbx_28(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

bool sipFbxAnimCurveFilterScale::Apply( ::FbxObject*a0, ::FbxAnimStack*a1, ::FbxStatus*a2)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[7], &sipPySelf, SIP_NULLPTR, sipName_Apply);

    if (!sipMeth)
        return  ::FbxAnimCurveFilterScale::Apply(a0,a1,a2);

    extern bool sipVH_fbx_29(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::FbxObject*, ::FbxAnimStack*, ::FbxStatus*);

    return sipVH_fbx_29(sipGILState, 0, sipPySelf, sipMeth, a0, a1, a2);
}

bool sipFbxAnimCurveFilterScale::Apply( ::FbxAnimCurveNode& a0, ::FbxStatus*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[8], &sipPySelf, SIP_NULLPTR, sipName_Apply);

    if (!sipMeth)
        return  ::FbxAnimCurveFilterScale::Apply(a0,a1);

    extern bool sipVH_fbx_30(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::FbxAnimCurveNode&, ::FbxStatus*);

    return sipVH_fbx_30(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

bool sipFbxAnimCurveFilterScale::Apply( ::FbxAnimCurve**a0,int a1, ::FbxStatus*a2)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[9], &sipPySelf, SIP_NULLPTR, sipName_Apply);

    if (!sipMeth)
        return  ::FbxAnimCurveFilterScale::Apply(a0,a1,a2);

    extern bool sipVH_fbx_31(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::FbxAnimCurve**,int, ::FbxStatus*);

    return sipVH_fbx_31(sipGILState, 0, sipPySelf, sipMeth, a0, a1, a2);
}

bool sipFbxAnimCurveFilterScale::Apply( ::FbxAnimCurve& a0, ::FbxStatus*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[10], &sipPySelf, SIP_NULLPTR, sipName_Apply);

    if (!sipMeth)
        return  ::FbxAnimCurveFilterScale::Apply(a0,a1);

    extern bool sipVH_fbx_32(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::FbxAnimCurve&, ::FbxStatus*);

    return sipVH_fbx_32(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

void sipFbxAnimCurveFilterScale::Reset()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[11], &sipPySelf, SIP_NULLPTR, sipName_Reset);

    if (!sipMeth)
    {
         ::FbxAnimCurveFilterScale::Reset();
        return;
    }

    extern void sipVH_fbx_0(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    sipVH_fbx_0(sipGILState, 0, sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_FbxAnimCurveFilterScale_GetName, "GetName(self) -> str");

extern "C" {static PyObject *meth_FbxAnimCurveFilterScale_GetName(PyObject *, PyObject *);}
static PyObject *meth_FbxAnimCurveFilterScale_GetName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_FbxAnimCurveFilterScale)) || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::FbxAnimCurveFilterScale *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxAnimCurveFilterScale, &sipCpp))
        {
            const char*sipRes;

            sipRes = (sipSelfWasArg ? sipCpp-> ::FbxAnimCurveFilterScale::GetName() : sipCpp->GetName());

            if (sipRes == SIP_NULLPTR)
            {
                Py_INCREF(Py_None);
                return Py_None;
            }

            return PyUnicode_FromString(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxAnimCurveFilterScale, sipName_GetName, doc_FbxAnimCurveFilterScale_GetName);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxAnimCurveFilterScale_Apply, "Apply(self, FbxAnimStack, FbxStatus = None) -> bool\n"
"Apply(self, FbxObject, FbxAnimStack, FbxStatus = None) -> bool\n"
"Apply(self, int, FbxStatus = None) -> Tuple[bool, FbxAnimCurve]\n"
"Apply(self, FbxAnimCurveNode, FbxStatus = None) -> bool\n"
"Apply(self, FbxAnimCurve, FbxStatus = None) -> bool");

extern "C" {static PyObject *meth_FbxAnimCurveFilterScale_Apply(PyObject *, PyObject *);}
static PyObject *meth_FbxAnimCurveFilterScale_Apply(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_FbxAnimCurveFilterScale)) || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::FbxAnimStack* a0;
         ::FbxStatus* a1 = 0;
         ::FbxAnimCurveFilterScale *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8|J8", &sipSelf, sipType_FbxAnimCurveFilterScale, &sipCpp, sipType_FbxAnimStack, &a0, sipType_FbxStatus, &a1))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp-> ::FbxAnimCurveFilterScale::Apply(a0,a1) : sipCpp->Apply(a0,a1));

            return PyBool_FromLong(sipRes);
        }
    }

    {
         ::FbxObject* a0;
         ::FbxAnimStack* a1;
         ::FbxStatus* a2 = 0;
         ::FbxAnimCurveFilterScale *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8J8|J8", &sipSelf, sipType_FbxAnimCurveFilterScale, &sipCpp, sipType_FbxObject, &a0, sipType_FbxAnimStack, &a1, sipType_FbxStatus, &a2))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp-> ::FbxAnimCurveFilterScale::Apply(a0,a1,a2) : sipCpp->Apply(a0,a1,a2));

            return PyBool_FromLong(sipRes);
        }
    }

    {
         ::FbxAnimCurve* a0;
        int a1;
         ::FbxStatus* a2 = 0;
         ::FbxAnimCurveFilterScale *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi|J8", &sipSelf, sipType_FbxAnimCurveFilterScale, &sipCpp, &a1, sipType_FbxStatus, &a2))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp-> ::FbxAnimCurveFilterScale::Apply(&a0,a1,a2) : sipCpp->Apply(&a0,a1,a2));

            return sipBuildResult(0,"(bD)",sipRes,a0,sipType_FbxAnimCurve,SIP_NULLPTR);
        }
    }

    {
         ::FbxAnimCurveNode* a0;
         ::FbxStatus* a1 = 0;
         ::FbxAnimCurveFilterScale *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9|J8", &sipSelf, sipType_FbxAnimCurveFilterScale, &sipCpp, sipType_FbxAnimCurveNode, &a0, sipType_FbxStatus, &a1))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp-> ::FbxAnimCurveFilterScale::Apply(*a0,a1) : sipCpp->Apply(*a0,a1));

            return PyBool_FromLong(sipRes);
        }
    }

    {
         ::FbxAnimCurve* a0;
         ::FbxStatus* a1 = 0;
         ::FbxAnimCurveFilterScale *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9|J8", &sipSelf, sipType_FbxAnimCurveFilterScale, &sipCpp, sipType_FbxAnimCurve, &a0, sipType_FbxStatus, &a1))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp-> ::FbxAnimCurveFilterScale::Apply(*a0,a1) : sipCpp->Apply(*a0,a1));

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxAnimCurveFilterScale, sipName_Apply, doc_FbxAnimCurveFilterScale_Apply);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxAnimCurveFilterScale_Reset, "Reset(self)");

extern "C" {static PyObject *meth_FbxAnimCurveFilterScale_Reset(PyObject *, PyObject *);}
static PyObject *meth_FbxAnimCurveFilterScale_Reset(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_FbxAnimCurveFilterScale)) || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::FbxAnimCurveFilterScale *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxAnimCurveFilterScale, &sipCpp))
        {
            (sipSelfWasArg ? sipCpp-> ::FbxAnimCurveFilterScale::Reset() : sipCpp->Reset());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxAnimCurveFilterScale, sipName_Reset, doc_FbxAnimCurveFilterScale_Reset);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxAnimCurveFilterScale_GetScale, "GetScale(self) -> float");

extern "C" {static PyObject *meth_FbxAnimCurveFilterScale_GetScale(PyObject *, PyObject *);}
static PyObject *meth_FbxAnimCurveFilterScale_GetScale(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxAnimCurveFilterScale *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxAnimCurveFilterScale, &sipCpp))
        {
            double sipRes;

            sipRes = sipCpp->GetScale();

            return PyFloat_FromDouble(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxAnimCurveFilterScale, sipName_GetScale, doc_FbxAnimCurveFilterScale_GetScale);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxAnimCurveFilterScale_SetScale, "SetScale(self, float)");

extern "C" {static PyObject *meth_FbxAnimCurveFilterScale_SetScale(PyObject *, PyObject *);}
static PyObject *meth_FbxAnimCurveFilterScale_SetScale(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        double a0;
         ::FbxAnimCurveFilterScale *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_FbxAnimCurveFilterScale, &sipCpp, &a0))
        {
            sipCpp->SetScale(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxAnimCurveFilterScale, sipName_SetScale, doc_FbxAnimCurveFilterScale_SetScale);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_FbxAnimCurveFilterScale(void *, const sipTypeDef *);}
static void *cast_FbxAnimCurveFilterScale(void *sipCppV, const sipTypeDef *targetType)
{
     ::FbxAnimCurveFilterScale *sipCpp = reinterpret_cast< ::FbxAnimCurveFilterScale *>(sipCppV);

    if (targetType == sipType_FbxAnimCurveFilterScale)
        return sipCppV;

    if (targetType == sipType_FbxAnimCurveFilter)
        return static_cast< ::FbxAnimCurveFilter *>(sipCpp);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_FbxAnimCurveFilterScale(void *, int);}
static void release_FbxAnimCurveFilterScale(void *sipCppV, int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipFbxAnimCurveFilterScale *>(sipCppV);
    else
        delete reinterpret_cast< ::FbxAnimCurveFilterScale *>(sipCppV);
}


extern "C" {static void *array_FbxAnimCurveFilterScale(Py_ssize_t);}
static void *array_FbxAnimCurveFilterScale(Py_ssize_t sipNrElem)
{
    return new  ::FbxAnimCurveFilterScale[sipNrElem];
}


extern "C" {static void assign_FbxAnimCurveFilterScale(void *, Py_ssize_t, void *);}
static void assign_FbxAnimCurveFilterScale(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::FbxAnimCurveFilterScale *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::FbxAnimCurveFilterScale *>(sipSrc);
}


extern "C" {static void *copy_FbxAnimCurveFilterScale(const void *, Py_ssize_t);}
static void *copy_FbxAnimCurveFilterScale(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::FbxAnimCurveFilterScale(reinterpret_cast<const  ::FbxAnimCurveFilterScale *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_FbxAnimCurveFilterScale(sipSimpleWrapper *);}
static void dealloc_FbxAnimCurveFilterScale(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipFbxAnimCurveFilterScale *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_FbxAnimCurveFilterScale(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_FbxAnimCurveFilterScale(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_FbxAnimCurveFilterScale(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipFbxAnimCurveFilterScale *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new sipFbxAnimCurveFilterScale();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const  ::FbxAnimCurveFilterScale* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_FbxAnimCurveFilterScale, &a0))
        {
            sipCpp = new sipFbxAnimCurveFilterScale(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_FbxAnimCurveFilterScale[] = {{17, 255, 1}};


static PyMethodDef methods_FbxAnimCurveFilterScale[] = {
    {sipName_Apply, meth_FbxAnimCurveFilterScale_Apply, METH_VARARGS, doc_FbxAnimCurveFilterScale_Apply},
    {sipName_GetName, meth_FbxAnimCurveFilterScale_GetName, METH_VARARGS, doc_FbxAnimCurveFilterScale_GetName},
    {sipName_GetScale, meth_FbxAnimCurveFilterScale_GetScale, METH_VARARGS, doc_FbxAnimCurveFilterScale_GetScale},
    {sipName_Reset, meth_FbxAnimCurveFilterScale_Reset, METH_VARARGS, doc_FbxAnimCurveFilterScale_Reset},
    {sipName_SetScale, meth_FbxAnimCurveFilterScale_SetScale, METH_VARARGS, doc_FbxAnimCurveFilterScale_SetScale}
};

PyDoc_STRVAR(doc_FbxAnimCurveFilterScale, "\1FbxAnimCurveFilterScale()\n"
"FbxAnimCurveFilterScale(FbxAnimCurveFilterScale)");


sipClassTypeDef sipTypeDef_fbx_FbxAnimCurveFilterScale = {
    {
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_FbxAnimCurveFilterScale,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_FbxAnimCurveFilterScale,
        {0, 0, 1},
        5, methods_FbxAnimCurveFilterScale,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_FbxAnimCurveFilterScale,
    -1,
    -1,
    supers_FbxAnimCurveFilterScale,
    SIP_NULLPTR,
    init_type_FbxAnimCurveFilterScale,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_FbxAnimCurveFilterScale,
    assign_FbxAnimCurveFilterScale,
    array_FbxAnimCurveFilterScale,
    copy_FbxAnimCurveFilterScale,
    release_FbxAnimCurveFilterScale,
    cast_FbxAnimCurveFilterScale,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};
