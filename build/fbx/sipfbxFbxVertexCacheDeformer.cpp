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




PyDoc_STRVAR(doc_FbxVertexCacheDeformer_Create, "Create(FbxManager, str) -> FbxVertexCacheDeformer\n"
"Create(FbxObject, str) -> FbxVertexCacheDeformer");

extern "C" {static PyObject *meth_FbxVertexCacheDeformer_Create(PyObject *, PyObject *);}
static PyObject *meth_FbxVertexCacheDeformer_Create(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxManager* a0;
        const char* a1;
        PyObject *a1Keep;

        if (sipParseArgs(&sipParseErr, sipArgs, "CJ8A8", &sipSelf, sipType_FbxManager, &a0, &a1Keep, &a1))
        {
             ::FbxVertexCacheDeformer*sipRes;

            sipRes =  ::FbxVertexCacheDeformer::Create(a0,a1);
            Py_DECREF(a1Keep);

            return sipConvertFromType(sipRes,sipType_FbxVertexCacheDeformer,SIP_NULLPTR);
        }
    }

    {
         ::FbxObject* a0;
        const char* a1;
        PyObject *a1Keep;

        if (sipParseArgs(&sipParseErr, sipArgs, "CJ8A8", &sipSelf, sipType_FbxObject, &a0, &a1Keep, &a1))
        {
             ::FbxVertexCacheDeformer*sipRes;

            sipRes =  ::FbxVertexCacheDeformer::Create(a0,a1);
            Py_DECREF(a1Keep);

            return sipConvertFromType(sipRes,sipType_FbxVertexCacheDeformer,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxVertexCacheDeformer, sipName_Create, doc_FbxVertexCacheDeformer_Create);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxVertexCacheDeformer_GetClassId, "GetClassId(self) -> FbxClassId");

extern "C" {static PyObject *meth_FbxVertexCacheDeformer_GetClassId(PyObject *, PyObject *);}
static PyObject *meth_FbxVertexCacheDeformer_GetClassId(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_FbxVertexCacheDeformer)) || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::FbxVertexCacheDeformer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxVertexCacheDeformer, &sipCpp))
        {
             ::FbxClassId*sipRes;

            sipRes = new  ::FbxClassId((sipSelfWasArg ? sipCpp-> ::FbxVertexCacheDeformer::GetClassId() : sipCpp->GetClassId()));

            return sipConvertFromNewType(sipRes,sipType_FbxClassId,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxVertexCacheDeformer, sipName_GetClassId, doc_FbxVertexCacheDeformer_GetClassId);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxVertexCacheDeformer_SetCache, "SetCache(self, FbxCache)");

extern "C" {static PyObject *meth_FbxVertexCacheDeformer_SetCache(PyObject *, PyObject *);}
static PyObject *meth_FbxVertexCacheDeformer_SetCache(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxCache* a0;
         ::FbxVertexCacheDeformer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_FbxVertexCacheDeformer, &sipCpp, sipType_FbxCache, &a0))
        {
            sipCpp->SetCache(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxVertexCacheDeformer, sipName_SetCache, doc_FbxVertexCacheDeformer_SetCache);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxVertexCacheDeformer_GetCache, "GetCache(self) -> FbxCache");

extern "C" {static PyObject *meth_FbxVertexCacheDeformer_GetCache(PyObject *, PyObject *);}
static PyObject *meth_FbxVertexCacheDeformer_GetCache(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxVertexCacheDeformer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxVertexCacheDeformer, &sipCpp))
        {
             ::FbxCache*sipRes;

            sipRes = sipCpp->GetCache();

            return sipConvertFromType(sipRes,sipType_FbxCache,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxVertexCacheDeformer, sipName_GetCache, doc_FbxVertexCacheDeformer_GetCache);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxVertexCacheDeformer_GetDeformerType, "GetDeformerType(self) -> FbxDeformer.EDeformerType");

extern "C" {static PyObject *meth_FbxVertexCacheDeformer_GetDeformerType(PyObject *, PyObject *);}
static PyObject *meth_FbxVertexCacheDeformer_GetDeformerType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_FbxVertexCacheDeformer)) || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::FbxVertexCacheDeformer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxVertexCacheDeformer, &sipCpp))
        {
             ::FbxDeformer::EDeformerType sipRes;

            sipRes = (sipSelfWasArg ? sipCpp-> ::FbxVertexCacheDeformer::GetDeformerType() : sipCpp->GetDeformerType());

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_FbxDeformer_EDeformerType);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxVertexCacheDeformer, sipName_GetDeformerType, doc_FbxVertexCacheDeformer_GetDeformerType);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *slot_FbxVertexCacheDeformer___ne__(PyObject *,PyObject *);}
static PyObject *slot_FbxVertexCacheDeformer___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxVertexCacheDeformer *sipCpp = reinterpret_cast< ::FbxVertexCacheDeformer *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxVertexCacheDeformer));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxVertexCacheDeformer* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxVertexCacheDeformer, &a0))
        {
            bool sipRes;

            sipRes = !sipCpp-> ::FbxVertexCacheDeformer::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_fbx, ne_slot, sipType_FbxVertexCacheDeformer, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_FbxVertexCacheDeformer___eq__(PyObject *,PyObject *);}
static PyObject *slot_FbxVertexCacheDeformer___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxVertexCacheDeformer *sipCpp = reinterpret_cast< ::FbxVertexCacheDeformer *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxVertexCacheDeformer));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxVertexCacheDeformer* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxVertexCacheDeformer, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::FbxVertexCacheDeformer::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_fbx, eq_slot, sipType_FbxVertexCacheDeformer, sipSelf, sipArg);
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_FbxVertexCacheDeformer(void *, const sipTypeDef *);}
static void *cast_FbxVertexCacheDeformer(void *sipCppV, const sipTypeDef *targetType)
{
     ::FbxVertexCacheDeformer *sipCpp = reinterpret_cast< ::FbxVertexCacheDeformer *>(sipCppV);

    if (targetType == sipType_FbxVertexCacheDeformer)
        return sipCppV;

    sipCppV = ((const sipClassTypeDef *)sipType_FbxDeformer)->ctd_cast(static_cast< ::FbxDeformer *>(sipCpp), targetType);
    if (sipCppV)
        return sipCppV;

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_FbxVertexCacheDeformer(void *, int);}
static void release_FbxVertexCacheDeformer(void *, int)
{
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_FbxVertexCacheDeformer[] = {{125, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_FbxVertexCacheDeformer[] = {
    {(void *)slot_FbxVertexCacheDeformer___ne__, ne_slot},
    {(void *)slot_FbxVertexCacheDeformer___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_FbxVertexCacheDeformer[] = {
    {sipName_Create, meth_FbxVertexCacheDeformer_Create, METH_VARARGS, doc_FbxVertexCacheDeformer_Create},
    {sipName_GetCache, meth_FbxVertexCacheDeformer_GetCache, METH_VARARGS, doc_FbxVertexCacheDeformer_GetCache},
    {sipName_GetClassId, meth_FbxVertexCacheDeformer_GetClassId, METH_VARARGS, doc_FbxVertexCacheDeformer_GetClassId},
    {sipName_GetDeformerType, meth_FbxVertexCacheDeformer_GetDeformerType, METH_VARARGS, doc_FbxVertexCacheDeformer_GetDeformerType},
    {sipName_SetCache, meth_FbxVertexCacheDeformer_SetCache, METH_VARARGS, doc_FbxVertexCacheDeformer_SetCache}
};


extern "C" {static PyObject *varget_FbxVertexCacheDeformer_Active(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxVertexCacheDeformer_Active(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
     ::FbxPropertyBool1*sipVal;
     ::FbxVertexCacheDeformer *sipCpp = reinterpret_cast< ::FbxVertexCacheDeformer *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -472);

    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->Active;

    sipPy = sipConvertFromType(sipVal, sipType_FbxPropertyBool1, SIP_NULLPTR);

    if (sipPy)
    {
        sipKeepReference(sipPy, -471, sipPySelf);
        sipKeepReference(sipPySelf, -472, sipPy);
    }

    return sipPy;
}


extern "C" {static int varset_FbxVertexCacheDeformer_Active(void *, PyObject *, PyObject *);}
static int varset_FbxVertexCacheDeformer_Active(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::FbxPropertyBool1*sipVal;
     ::FbxVertexCacheDeformer *sipCpp = reinterpret_cast< ::FbxVertexCacheDeformer *>(sipSelf);

    int sipIsErr = 0;
    sipVal = reinterpret_cast< ::FbxPropertyBool1 *>(sipForceConvertToType(sipPy, sipType_FbxPropertyBool1, SIP_NULLPTR, SIP_NOT_NONE, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->Active = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxVertexCacheDeformer_CacheSet(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxVertexCacheDeformer_CacheSet(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
     ::FbxPropertyString*sipVal;
     ::FbxVertexCacheDeformer *sipCpp = reinterpret_cast< ::FbxVertexCacheDeformer *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -474);

    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->CacheSet;

    sipPy = sipConvertFromType(sipVal, sipType_FbxPropertyString, SIP_NULLPTR);

    if (sipPy)
    {
        sipKeepReference(sipPy, -473, sipPySelf);
        sipKeepReference(sipPySelf, -474, sipPy);
    }

    return sipPy;
}


extern "C" {static int varset_FbxVertexCacheDeformer_CacheSet(void *, PyObject *, PyObject *);}
static int varset_FbxVertexCacheDeformer_CacheSet(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::FbxPropertyString*sipVal;
     ::FbxVertexCacheDeformer *sipCpp = reinterpret_cast< ::FbxVertexCacheDeformer *>(sipSelf);

    int sipIsErr = 0;
    sipVal = reinterpret_cast< ::FbxPropertyString *>(sipForceConvertToType(sipPy, sipType_FbxPropertyString, SIP_NULLPTR, SIP_NOT_NONE, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->CacheSet = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxVertexCacheDeformer_Channel(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxVertexCacheDeformer_Channel(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
     ::FbxPropertyString*sipVal;
     ::FbxVertexCacheDeformer *sipCpp = reinterpret_cast< ::FbxVertexCacheDeformer *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -476);

    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->Channel;

    sipPy = sipConvertFromType(sipVal, sipType_FbxPropertyString, SIP_NULLPTR);

    if (sipPy)
    {
        sipKeepReference(sipPy, -475, sipPySelf);
        sipKeepReference(sipPySelf, -476, sipPy);
    }

    return sipPy;
}


extern "C" {static int varset_FbxVertexCacheDeformer_Channel(void *, PyObject *, PyObject *);}
static int varset_FbxVertexCacheDeformer_Channel(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::FbxPropertyString*sipVal;
     ::FbxVertexCacheDeformer *sipCpp = reinterpret_cast< ::FbxVertexCacheDeformer *>(sipSelf);

    int sipIsErr = 0;
    sipVal = reinterpret_cast< ::FbxPropertyString *>(sipForceConvertToType(sipPy, sipType_FbxPropertyString, SIP_NULLPTR, SIP_NOT_NONE, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->Channel = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxVertexCacheDeformer_ClassId(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxVertexCacheDeformer_ClassId(void *, PyObject *sipPySelf, PyObject *)
{
    static PyObject *sipPy = SIP_NULLPTR;
     ::FbxClassId*sipVal;

    if (sipPy)
    {
        Py_INCREF(sipPy);
        return sipPy;
    }

    sipVal = & ::FbxVertexCacheDeformer::ClassId;

    sipPy = sipConvertFromType(sipVal, sipType_FbxClassId, SIP_NULLPTR);

    if (sipPy)
    {
        sipKeepReference(sipPy, -477, sipPySelf);
        Py_INCREF(sipPy);
    }

    return sipPy;
}


extern "C" {static int varset_FbxVertexCacheDeformer_ClassId(void *, PyObject *, PyObject *);}
static int varset_FbxVertexCacheDeformer_ClassId(void *, PyObject *sipPy, PyObject *)
{
     ::FbxClassId*sipVal;
    int sipIsErr = 0;
    sipVal = reinterpret_cast< ::FbxClassId *>(sipForceConvertToType(sipPy, sipType_FbxClassId, SIP_NULLPTR, SIP_NOT_NONE, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

     ::FbxVertexCacheDeformer::ClassId = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxVertexCacheDeformer_Type(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxVertexCacheDeformer_Type(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
     ::FbxPropertyFbxVertexCacheDeformerType*sipVal;
     ::FbxVertexCacheDeformer *sipCpp = reinterpret_cast< ::FbxVertexCacheDeformer *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -479);

    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->Type;

    sipPy = sipConvertFromType(sipVal, sipType_FbxPropertyFbxVertexCacheDeformerType, SIP_NULLPTR);

    if (sipPy)
    {
        sipKeepReference(sipPy, -478, sipPySelf);
        sipKeepReference(sipPySelf, -479, sipPy);
    }

    return sipPy;
}


extern "C" {static int varset_FbxVertexCacheDeformer_Type(void *, PyObject *, PyObject *);}
static int varset_FbxVertexCacheDeformer_Type(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::FbxPropertyFbxVertexCacheDeformerType*sipVal;
     ::FbxVertexCacheDeformer *sipCpp = reinterpret_cast< ::FbxVertexCacheDeformer *>(sipSelf);

    int sipIsErr = 0;
    sipVal = reinterpret_cast< ::FbxPropertyFbxVertexCacheDeformerType *>(sipForceConvertToType(sipPy, sipType_FbxPropertyFbxVertexCacheDeformerType, SIP_NULLPTR, SIP_NOT_NONE, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->Type = *sipVal;

    return 0;
}

sipVariableDef variables_FbxVertexCacheDeformer[] = {
    {InstanceVariable, sipName_Active, (PyMethodDef *)varget_FbxVertexCacheDeformer_Active, (PyMethodDef *)varset_FbxVertexCacheDeformer_Active, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_CacheSet, (PyMethodDef *)varget_FbxVertexCacheDeformer_CacheSet, (PyMethodDef *)varset_FbxVertexCacheDeformer_CacheSet, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_Channel, (PyMethodDef *)varget_FbxVertexCacheDeformer_Channel, (PyMethodDef *)varset_FbxVertexCacheDeformer_Channel, SIP_NULLPTR, SIP_NULLPTR},
    {ClassVariable, sipName_ClassId, (PyMethodDef *)varget_FbxVertexCacheDeformer_ClassId, (PyMethodDef *)varset_FbxVertexCacheDeformer_ClassId, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_Type, (PyMethodDef *)varget_FbxVertexCacheDeformer_Type, (PyMethodDef *)varset_FbxVertexCacheDeformer_Type, SIP_NULLPTR, SIP_NULLPTR},
};


/* Define the enum members and ints to be added to this type. */
static sipIntInstanceDef intInstances_FbxVertexCacheDeformer[] = {
    {sipName_ePositions, static_cast<int>( ::FbxVertexCacheDeformer::ePositions)},
    {sipName_eNormals, static_cast<int>( ::FbxVertexCacheDeformer::eNormals)},
    {sipName_eUVs, static_cast<int>( ::FbxVertexCacheDeformer::eUVs)},
    {sipName_eTangents, static_cast<int>( ::FbxVertexCacheDeformer::eTangents)},
    {sipName_eBinormals, static_cast<int>( ::FbxVertexCacheDeformer::eBinormals)},
    {sipName_eUserDefined, static_cast<int>( ::FbxVertexCacheDeformer::eUserDefined)},
    {0, 0}
};


sipClassTypeDef sipTypeDef_fbx_FbxVertexCacheDeformer = {
    {
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_FbxVertexCacheDeformer,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_FbxVertexCacheDeformer,
        {0, 0, 1},
        5, methods_FbxVertexCacheDeformer,
        5, variables_FbxVertexCacheDeformer,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, intInstances_FbxVertexCacheDeformer, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    SIP_NULLPTR,
    -1,
    -1,
    supers_FbxVertexCacheDeformer,
    slots_FbxVertexCacheDeformer,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_FbxVertexCacheDeformer,
    cast_FbxVertexCacheDeformer,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};