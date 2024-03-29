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

#line 5 "D:\\Program Files\\Autodesk\\FBX\\FBX Python Bindings\\2020.3.4\\sip\\fbxusernotification.sip"
#include <fbxsdk.h>
#line 43 "D:\\Program Files\\Autodesk\\FBX\\FBX Python Bindings\\2020.3.4\\build\\fbx/sipfbxFbxUserNotification.cpp"



class sipFbxUserNotification : public  ::FbxUserNotification
{
public:
    sipFbxUserNotification( ::FbxManager*,const  ::FbxString&,const  ::FbxString&);
    ~sipFbxUserNotification();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipFbxUserNotification(const sipFbxUserNotification &);
    sipFbxUserNotification &operator = (const sipFbxUserNotification &);
};

sipFbxUserNotification::sipFbxUserNotification( ::FbxManager*a0,const  ::FbxString& a1,const  ::FbxString& a2):  ::FbxUserNotification(a0,a1,a2), sipPySelf(SIP_NULLPTR)
{
}

sipFbxUserNotification::~sipFbxUserNotification()
{
    sipInstanceDestroyedEx(&sipPySelf);
}


PyDoc_STRVAR(doc_FbxUserNotification_Create, "Create(FbxManager, FbxString, FbxString) -> FbxUserNotification");

extern "C" {static PyObject *meth_FbxUserNotification_Create(PyObject *, PyObject *);}
static PyObject *meth_FbxUserNotification_Create(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxManager* a0;
        const  ::FbxString* a1;
        int a1State = 0;
        const  ::FbxString* a2;
        int a2State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "CJ8J1J1", &sipSelf, sipType_FbxManager, &a0, sipType_FbxString, &a1, &a1State, sipType_FbxString, &a2, &a2State))
        {
             ::FbxUserNotification*sipRes;

            sipRes =  ::FbxUserNotification::Create(a0,*a1,*a2);
            sipReleaseType(const_cast< ::FbxString *>(a1), sipType_FbxString, a1State);
            sipReleaseType(const_cast< ::FbxString *>(a2), sipType_FbxString, a2State);

            return sipConvertFromType(sipRes,sipType_FbxUserNotification,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxUserNotification, sipName_Create, doc_FbxUserNotification_Create);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxUserNotification_Destroy, "Destroy(FbxManager)");

extern "C" {static PyObject *meth_FbxUserNotification_Destroy(PyObject *, PyObject *);}
static PyObject *meth_FbxUserNotification_Destroy(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxManager* a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "CJ8", &sipSelf, sipType_FbxManager, &a0))
        {
             ::FbxUserNotification::Destroy(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxUserNotification, sipName_Destroy, doc_FbxUserNotification_Destroy);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxUserNotification_InitAccumulator, "InitAccumulator(self)");

extern "C" {static PyObject *meth_FbxUserNotification_InitAccumulator(PyObject *, PyObject *);}
static PyObject *meth_FbxUserNotification_InitAccumulator(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxUserNotification *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxUserNotification, &sipCpp))
        {
            sipCpp->InitAccumulator();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxUserNotification, sipName_InitAccumulator, doc_FbxUserNotification_InitAccumulator);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxUserNotification_ClearAccumulator, "ClearAccumulator(self)");

extern "C" {static PyObject *meth_FbxUserNotification_ClearAccumulator(PyObject *, PyObject *);}
static PyObject *meth_FbxUserNotification_ClearAccumulator(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxUserNotification *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxUserNotification, &sipCpp))
        {
            sipCpp->ClearAccumulator();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxUserNotification, sipName_ClearAccumulator, doc_FbxUserNotification_ClearAccumulator);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxUserNotification_AddDetail, "AddDetail(self, int) -> int\n"
"AddDetail(self, int, FbxString) -> int\n"
"AddDetail(self, int, FbxNode) -> int");

extern "C" {static PyObject *meth_FbxUserNotification_AddDetail(PyObject *, PyObject *);}
static PyObject *meth_FbxUserNotification_AddDetail(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
         ::FbxUserNotification *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_FbxUserNotification, &sipCpp, &a0))
        {
            int sipRes;

            sipRes = sipCpp->AddDetail(a0);

            return PyLong_FromLong(sipRes);
        }
    }

    {
        int a0;
         ::FbxString* a1;
        int a1State = 0;
         ::FbxUserNotification *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BiJ1", &sipSelf, sipType_FbxUserNotification, &sipCpp, &a0, sipType_FbxString, &a1, &a1State))
        {
            int sipRes;

            sipRes = sipCpp->AddDetail(a0,*a1);
            sipReleaseType(a1, sipType_FbxString, a1State);

            return PyLong_FromLong(sipRes);
        }
    }

    {
        int a0;
         ::FbxNode* a1;
         ::FbxUserNotification *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BiJ8", &sipSelf, sipType_FbxUserNotification, &sipCpp, &a0, sipType_FbxNode, &a1))
        {
            int sipRes;

            sipRes = sipCpp->AddDetail(a0,a1);

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxUserNotification, sipName_AddDetail, doc_FbxUserNotification_AddDetail);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxUserNotification_GetNbEntries, "GetNbEntries(self) -> int");

extern "C" {static PyObject *meth_FbxUserNotification_GetNbEntries(PyObject *, PyObject *);}
static PyObject *meth_FbxUserNotification_GetNbEntries(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxUserNotification *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxUserNotification, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->GetNbEntries();

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxUserNotification, sipName_GetNbEntries, doc_FbxUserNotification_GetNbEntries);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_FbxUserNotification(void *, int);}
static void release_FbxUserNotification(void *sipCppV, int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipFbxUserNotification *>(sipCppV);
    else
        delete reinterpret_cast< ::FbxUserNotification *>(sipCppV);
}


extern "C" {static void dealloc_FbxUserNotification(sipSimpleWrapper *);}
static void dealloc_FbxUserNotification(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipFbxUserNotification *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_FbxUserNotification(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_FbxUserNotification(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_FbxUserNotification(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipFbxUserNotification *sipCpp = SIP_NULLPTR;

    {
         ::FbxManager* a0;
        const  ::FbxString* a1;
        int a1State = 0;
        const  ::FbxString* a2;
        int a2State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J8J1J1", sipType_FbxManager, &a0, sipType_FbxString, &a1, &a1State, sipType_FbxString, &a2, &a2State))
        {
            sipCpp = new sipFbxUserNotification(a0,*a1,*a2);
            sipReleaseType(const_cast< ::FbxString *>(a1), sipType_FbxString, a1State);
            sipReleaseType(const_cast< ::FbxString *>(a2), sipType_FbxString, a2State);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


static PyMethodDef methods_FbxUserNotification[] = {
    {sipName_AddDetail, meth_FbxUserNotification_AddDetail, METH_VARARGS, doc_FbxUserNotification_AddDetail},
    {sipName_ClearAccumulator, meth_FbxUserNotification_ClearAccumulator, METH_VARARGS, doc_FbxUserNotification_ClearAccumulator},
    {sipName_Create, meth_FbxUserNotification_Create, METH_VARARGS, doc_FbxUserNotification_Create},
    {sipName_Destroy, meth_FbxUserNotification_Destroy, METH_VARARGS, doc_FbxUserNotification_Destroy},
    {sipName_GetNbEntries, meth_FbxUserNotification_GetNbEntries, METH_VARARGS, doc_FbxUserNotification_GetNbEntries},
    {sipName_InitAccumulator, meth_FbxUserNotification_InitAccumulator, METH_VARARGS, doc_FbxUserNotification_InitAccumulator}
};


/* Define the enum members and ints to be added to this type. */
static sipIntInstanceDef intInstances_FbxUserNotification[] = {
    {sipName_eBindPoseInvalidObject, static_cast<int>( ::FbxUserNotification::eBindPoseInvalidObject)},
    {sipName_eBindPoseInvalidRoot, static_cast<int>( ::FbxUserNotification::eBindPoseInvalidRoot)},
    {sipName_eBindPoseNotAllAncestorsNodes, static_cast<int>( ::FbxUserNotification::eBindPoseNotAllAncestorsNodes)},
    {sipName_eBindPoseNotAllDeformingNodes, static_cast<int>( ::FbxUserNotification::eBindPoseNotAllDeformingNodes)},
    {sipName_eBindPoseNotAllAncestorsDefinitionNodes, static_cast<int>( ::FbxUserNotification::eBindPoseNotAllAncestorsDefinitionNodes)},
    {sipName_eBindPoseRelativeMatrix, static_cast<int>( ::FbxUserNotification::eBindPoseRelativeMatrix)},
    {sipName_eEmbedMediaNotify, static_cast<int>( ::FbxUserNotification::eEmbedMediaNotify)},
    {sipName_eFileIONotify, static_cast<int>( ::FbxUserNotification::eFileIONotify)},
    {sipName_eFileIONotifyMaterial, static_cast<int>( ::FbxUserNotification::eFileIONotifyMaterial)},
    {sipName_eFileIONotifyDXFNotSupportNurbs, static_cast<int>( ::FbxUserNotification::eFileIONotifyDXFNotSupportNurbs)},
    {sipName_eEntryStartID, static_cast<int>( ::FbxUserNotification::eEntryStartID)},
    {0, 0}
};

PyDoc_STRVAR(doc_FbxUserNotification, "\1FbxUserNotification(FbxManager, FbxString, FbxString)");


sipClassTypeDef sipTypeDef_fbx_FbxUserNotification = {
    {
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_FbxUserNotification,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_FbxUserNotification,
        {0, 0, 1},
        6, methods_FbxUserNotification,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, intInstances_FbxUserNotification, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_FbxUserNotification,
    -1,
    -1,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_FbxUserNotification,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_FbxUserNotification,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_FbxUserNotification,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};
