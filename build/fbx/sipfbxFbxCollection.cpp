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




PyDoc_STRVAR(doc_FbxCollection_Create, "Create(FbxManager, str) -> FbxCollection\n"
"Create(FbxObject, str) -> FbxCollection");

extern "C" {static PyObject *meth_FbxCollection_Create(PyObject *, PyObject *);}
static PyObject *meth_FbxCollection_Create(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxManager* a0;
        const char* a1;
        PyObject *a1Keep;

        if (sipParseArgs(&sipParseErr, sipArgs, "CJ8A8", &sipSelf, sipType_FbxManager, &a0, &a1Keep, &a1))
        {
             ::FbxCollection*sipRes;

            sipRes =  ::FbxCollection::Create(a0,a1);
            Py_DECREF(a1Keep);

            return sipConvertFromType(sipRes,sipType_FbxCollection,SIP_NULLPTR);
        }
    }

    {
         ::FbxObject* a0;
        const char* a1;
        PyObject *a1Keep;

        if (sipParseArgs(&sipParseErr, sipArgs, "CJ8A8", &sipSelf, sipType_FbxObject, &a0, &a1Keep, &a1))
        {
             ::FbxCollection*sipRes;

            sipRes =  ::FbxCollection::Create(a0,a1);
            Py_DECREF(a1Keep);

            return sipConvertFromType(sipRes,sipType_FbxCollection,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxCollection, sipName_Create, doc_FbxCollection_Create);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxCollection_GetClassId, "GetClassId(self) -> FbxClassId");

extern "C" {static PyObject *meth_FbxCollection_GetClassId(PyObject *, PyObject *);}
static PyObject *meth_FbxCollection_GetClassId(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_FbxCollection)) || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::FbxCollection *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxCollection, &sipCpp))
        {
             ::FbxClassId*sipRes;

            sipRes = new  ::FbxClassId((sipSelfWasArg ? sipCpp-> ::FbxCollection::GetClassId() : sipCpp->GetClassId()));

            return sipConvertFromNewType(sipRes,sipType_FbxClassId,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxCollection, sipName_GetClassId, doc_FbxCollection_GetClassId);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxCollection_Clear, "Clear(self)");

extern "C" {static PyObject *meth_FbxCollection_Clear(PyObject *, PyObject *);}
static PyObject *meth_FbxCollection_Clear(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_FbxCollection)) || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::FbxCollection *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxCollection, &sipCpp))
        {
            (sipSelfWasArg ? sipCpp-> ::FbxCollection::Clear() : sipCpp->Clear());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxCollection, sipName_Clear, doc_FbxCollection_Clear);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxCollection_AddMember, "AddMember(self, FbxObject) -> bool");

extern "C" {static PyObject *meth_FbxCollection_AddMember(PyObject *, PyObject *);}
static PyObject *meth_FbxCollection_AddMember(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_FbxCollection)) || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::FbxObject* a0;
         ::FbxCollection *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_FbxCollection, &sipCpp, sipType_FbxObject, &a0))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp-> ::FbxCollection::AddMember(a0) : sipCpp->AddMember(a0));

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxCollection, sipName_AddMember, doc_FbxCollection_AddMember);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxCollection_RemoveMember, "RemoveMember(self, FbxObject) -> bool");

extern "C" {static PyObject *meth_FbxCollection_RemoveMember(PyObject *, PyObject *);}
static PyObject *meth_FbxCollection_RemoveMember(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_FbxCollection)) || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::FbxObject* a0;
         ::FbxCollection *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_FbxCollection, &sipCpp, sipType_FbxObject, &a0))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp-> ::FbxCollection::RemoveMember(a0) : sipCpp->RemoveMember(a0));

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxCollection, sipName_RemoveMember, doc_FbxCollection_RemoveMember);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxCollection_FindMember, "FindMember(self, FbxClassId, str) -> FbxObject");

extern "C" {static PyObject *meth_FbxCollection_FindMember(PyObject *, PyObject *);}
static PyObject *meth_FbxCollection_FindMember(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxClassId* a0;
        const char* a1;
        PyObject *a1Keep;
         ::FbxCollection *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9A8", &sipSelf, sipType_FbxCollection, &sipCpp, sipType_FbxClassId, &a0, &a1Keep, &a1))
        {
             ::FbxObject*sipRes = 0;

#line 30 "D:\\Program Files\\Autodesk\\FBX\\FBX Python Bindings\\2020.3.4\\sip\\fbxcollection.sip"
        sipRes = sipCpp->FindSrcObject(FbxCriteria::ObjectType(*a0), a1);
#line 225 "D:\\Program Files\\Autodesk\\FBX\\FBX Python Bindings\\2020.3.4\\build\\fbx/sipfbxFbxCollection.cpp"
            Py_DECREF(a1Keep);

            return sipConvertFromType(sipRes,sipType_FbxObject,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxCollection, sipName_FindMember, doc_FbxCollection_FindMember);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxCollection_GetMemberCount, "GetMemberCount(self) -> int\n"
"GetMemberCount(self, FbxClassId) -> int\n"
"GetMemberCount(self, FbxCriteria) -> int");

extern "C" {static PyObject *meth_FbxCollection_GetMemberCount(PyObject *, PyObject *);}
static PyObject *meth_FbxCollection_GetMemberCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxCollection *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxCollection, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->GetMemberCount();

            return PyLong_FromLong(sipRes);
        }
    }

    {
         ::FbxClassId* a0;
        const  ::FbxCollection *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_FbxCollection, &sipCpp, sipType_FbxClassId, &a0))
        {
            int sipRes = 0;

#line 40 "D:\\Program Files\\Autodesk\\FBX\\FBX Python Bindings\\2020.3.4\\sip\\fbxcollection.sip"
        sipRes = sipCpp->GetSrcObjectCount(FbxCriteria::ObjectType(*a0));
#line 273 "D:\\Program Files\\Autodesk\\FBX\\FBX Python Bindings\\2020.3.4\\build\\fbx/sipfbxFbxCollection.cpp"

            return PyLong_FromLong(sipRes);
        }
    }

    {
         ::FbxCriteria* a0;
        const  ::FbxCollection *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_FbxCollection, &sipCpp, sipType_FbxCriteria, &a0))
        {
            int sipRes;

            sipRes = sipCpp->GetMemberCount(*a0);

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxCollection, sipName_GetMemberCount, doc_FbxCollection_GetMemberCount);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxCollection_GetMember, "GetMember(self, int = 0) -> FbxObject\n"
"GetMember(self, FbxClassId, int = 0) -> FbxObject\n"
"GetMember(self, FbxCriteria, int = 0) -> FbxObject");

extern "C" {static PyObject *meth_FbxCollection_GetMember(PyObject *, PyObject *);}
static PyObject *meth_FbxCollection_GetMember(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0 = 0;
        const  ::FbxCollection *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B|i", &sipSelf, sipType_FbxCollection, &sipCpp, &a0))
        {
             ::FbxObject*sipRes;

            sipRes = sipCpp->GetMember(a0);

            return sipConvertFromType(sipRes,sipType_FbxObject,SIP_NULLPTR);
        }
    }

    {
         ::FbxClassId* a0;
        int a1 = 0;
        const  ::FbxCollection *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9|i", &sipSelf, sipType_FbxCollection, &sipCpp, sipType_FbxClassId, &a0, &a1))
        {
             ::FbxObject*sipRes = 0;

#line 57 "D:\\Program Files\\Autodesk\\FBX\\FBX Python Bindings\\2020.3.4\\sip\\fbxcollection.sip"
        sipRes = sipCpp->GetSrcObject(FbxCriteria::ObjectType(*a0), a1);
#line 336 "D:\\Program Files\\Autodesk\\FBX\\FBX Python Bindings\\2020.3.4\\build\\fbx/sipfbxFbxCollection.cpp"

            return sipConvertFromType(sipRes,sipType_FbxObject,SIP_NULLPTR);
        }
    }

    {
         ::FbxCriteria* a0;
        int a1 = 0;
        const  ::FbxCollection *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9|i", &sipSelf, sipType_FbxCollection, &sipCpp, sipType_FbxCriteria, &a0, &a1))
        {
             ::FbxObject*sipRes;

            sipRes = sipCpp->GetMember(*a0,a1);

            return sipConvertFromType(sipRes,sipType_FbxObject,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxCollection, sipName_GetMember, doc_FbxCollection_GetMember);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxCollection_IsMember, "IsMember(self, FbxObject) -> bool");

extern "C" {static PyObject *meth_FbxCollection_IsMember(PyObject *, PyObject *);}
static PyObject *meth_FbxCollection_IsMember(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_FbxCollection)) || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::FbxObject* a0;
        const  ::FbxCollection *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_FbxCollection, &sipCpp, sipType_FbxObject, &a0))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp-> ::FbxCollection::IsMember(a0) : sipCpp->IsMember(a0));

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxCollection, sipName_IsMember, doc_FbxCollection_IsMember);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxCollection_SetSelectedAll, "SetSelectedAll(self, bool)");

extern "C" {static PyObject *meth_FbxCollection_SetSelectedAll(PyObject *, PyObject *);}
static PyObject *meth_FbxCollection_SetSelectedAll(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_FbxCollection)) || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        bool a0;
         ::FbxCollection *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_FbxCollection, &sipCpp, &a0))
        {
            (sipSelfWasArg ? sipCpp-> ::FbxCollection::SetSelectedAll(a0) : sipCpp->SetSelectedAll(a0));

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxCollection, sipName_SetSelectedAll, doc_FbxCollection_SetSelectedAll);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *slot_FbxCollection___ne__(PyObject *,PyObject *);}
static PyObject *slot_FbxCollection___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxCollection *sipCpp = reinterpret_cast< ::FbxCollection *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxCollection));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxCollection* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxCollection, &a0))
        {
            bool sipRes;

            sipRes = !sipCpp-> ::FbxCollection::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_fbx, ne_slot, sipType_FbxCollection, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_FbxCollection___eq__(PyObject *,PyObject *);}
static PyObject *slot_FbxCollection___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxCollection *sipCpp = reinterpret_cast< ::FbxCollection *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxCollection));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxCollection* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxCollection, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::FbxCollection::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_fbx, eq_slot, sipType_FbxCollection, sipSelf, sipArg);
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_FbxCollection(void *, const sipTypeDef *);}
static void *cast_FbxCollection(void *sipCppV, const sipTypeDef *targetType)
{
     ::FbxCollection *sipCpp = reinterpret_cast< ::FbxCollection *>(sipCppV);

    if (targetType == sipType_FbxCollection)
        return sipCppV;

    if (targetType == sipType_FbxObject)
        return static_cast< ::FbxObject *>(sipCpp);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_FbxCollection(void *, int);}
static void release_FbxCollection(void *, int)
{
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_FbxCollection[] = {{244, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_FbxCollection[] = {
    {(void *)slot_FbxCollection___ne__, ne_slot},
    {(void *)slot_FbxCollection___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_FbxCollection[] = {
    {sipName_AddMember, meth_FbxCollection_AddMember, METH_VARARGS, doc_FbxCollection_AddMember},
    {sipName_Clear, meth_FbxCollection_Clear, METH_VARARGS, doc_FbxCollection_Clear},
    {sipName_Create, meth_FbxCollection_Create, METH_VARARGS, doc_FbxCollection_Create},
    {sipName_FindMember, meth_FbxCollection_FindMember, METH_VARARGS, doc_FbxCollection_FindMember},
    {sipName_GetClassId, meth_FbxCollection_GetClassId, METH_VARARGS, doc_FbxCollection_GetClassId},
    {sipName_GetMember, meth_FbxCollection_GetMember, METH_VARARGS, doc_FbxCollection_GetMember},
    {sipName_GetMemberCount, meth_FbxCollection_GetMemberCount, METH_VARARGS, doc_FbxCollection_GetMemberCount},
    {sipName_IsMember, meth_FbxCollection_IsMember, METH_VARARGS, doc_FbxCollection_IsMember},
    {sipName_RemoveMember, meth_FbxCollection_RemoveMember, METH_VARARGS, doc_FbxCollection_RemoveMember},
    {sipName_SetSelectedAll, meth_FbxCollection_SetSelectedAll, METH_VARARGS, doc_FbxCollection_SetSelectedAll}
};


extern "C" {static PyObject *varget_FbxCollection_ClassId(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxCollection_ClassId(void *, PyObject *sipPySelf, PyObject *)
{
    static PyObject *sipPy = SIP_NULLPTR;
     ::FbxClassId*sipVal;

    if (sipPy)
    {
        Py_INCREF(sipPy);
        return sipPy;
    }

    sipVal = & ::FbxCollection::ClassId;

    sipPy = sipConvertFromType(sipVal, sipType_FbxClassId, SIP_NULLPTR);

    if (sipPy)
    {
        sipKeepReference(sipPy, -1190, sipPySelf);
        Py_INCREF(sipPy);
    }

    return sipPy;
}


extern "C" {static int varset_FbxCollection_ClassId(void *, PyObject *, PyObject *);}
static int varset_FbxCollection_ClassId(void *, PyObject *sipPy, PyObject *)
{
     ::FbxClassId*sipVal;
    int sipIsErr = 0;
    sipVal = reinterpret_cast< ::FbxClassId *>(sipForceConvertToType(sipPy, sipType_FbxClassId, SIP_NULLPTR, SIP_NOT_NONE, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

     ::FbxCollection::ClassId = *sipVal;

    return 0;
}

sipVariableDef variables_FbxCollection[] = {
    {ClassVariable, sipName_ClassId, (PyMethodDef *)varget_FbxCollection_ClassId, (PyMethodDef *)varset_FbxCollection_ClassId, SIP_NULLPTR, SIP_NULLPTR},
};


sipClassTypeDef sipTypeDef_fbx_FbxCollection = {
    {
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_FbxCollection,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_FbxCollection,
        {0, 0, 1},
        10, methods_FbxCollection,
        1, variables_FbxCollection,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    SIP_NULLPTR,
    -1,
    -1,
    supers_FbxCollection,
    slots_FbxCollection,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_FbxCollection,
    cast_FbxCollection,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};
