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




PyDoc_STRVAR(doc_FbxSelectionNode_Create, "Create(FbxManager, str) -> FbxSelectionNode\n"
"Create(FbxObject, str) -> FbxSelectionNode");

extern "C" {static PyObject *meth_FbxSelectionNode_Create(PyObject *, PyObject *);}
static PyObject *meth_FbxSelectionNode_Create(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxManager* a0;
        const char* a1;
        PyObject *a1Keep;

        if (sipParseArgs(&sipParseErr, sipArgs, "CJ8A8", &sipSelf, sipType_FbxManager, &a0, &a1Keep, &a1))
        {
             ::FbxSelectionNode*sipRes;

            sipRes =  ::FbxSelectionNode::Create(a0,a1);
            Py_DECREF(a1Keep);

            return sipConvertFromType(sipRes,sipType_FbxSelectionNode,SIP_NULLPTR);
        }
    }

    {
         ::FbxObject* a0;
        const char* a1;
        PyObject *a1Keep;

        if (sipParseArgs(&sipParseErr, sipArgs, "CJ8A8", &sipSelf, sipType_FbxObject, &a0, &a1Keep, &a1))
        {
             ::FbxSelectionNode*sipRes;

            sipRes =  ::FbxSelectionNode::Create(a0,a1);
            Py_DECREF(a1Keep);

            return sipConvertFromType(sipRes,sipType_FbxSelectionNode,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxSelectionNode, sipName_Create, doc_FbxSelectionNode_Create);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxSelectionNode_GetClassId, "GetClassId(self) -> FbxClassId");

extern "C" {static PyObject *meth_FbxSelectionNode_GetClassId(PyObject *, PyObject *);}
static PyObject *meth_FbxSelectionNode_GetClassId(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_FbxSelectionNode)) || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::FbxSelectionNode *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxSelectionNode, &sipCpp))
        {
             ::FbxClassId*sipRes;

            sipRes = new  ::FbxClassId((sipSelfWasArg ? sipCpp-> ::FbxSelectionNode::GetClassId() : sipCpp->GetClassId()));

            return sipConvertFromNewType(sipRes,sipType_FbxClassId,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxSelectionNode, sipName_GetClassId, doc_FbxSelectionNode_GetClassId);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxSelectionNode_SetSelectionObject, "SetSelectionObject(self, FbxObject) -> bool");

extern "C" {static PyObject *meth_FbxSelectionNode_SetSelectionObject(PyObject *, PyObject *);}
static PyObject *meth_FbxSelectionNode_SetSelectionObject(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxObject* a0;
         ::FbxSelectionNode *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_FbxSelectionNode, &sipCpp, sipType_FbxObject, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->SetSelectionObject(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxSelectionNode, sipName_SetSelectionObject, doc_FbxSelectionNode_SetSelectionObject);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxSelectionNode_GetSelectionObject, "GetSelectionObject(self) -> FbxObject");

extern "C" {static PyObject *meth_FbxSelectionNode_GetSelectionObject(PyObject *, PyObject *);}
static PyObject *meth_FbxSelectionNode_GetSelectionObject(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxSelectionNode *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxSelectionNode, &sipCpp))
        {
             ::FbxObject*sipRes;

            sipRes = sipCpp->GetSelectionObject();

            return sipConvertFromType(sipRes,sipType_FbxObject,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxSelectionNode, sipName_GetSelectionObject, doc_FbxSelectionNode_GetSelectionObject);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxSelectionNode_IsValid, "IsValid(self) -> bool");

extern "C" {static PyObject *meth_FbxSelectionNode_IsValid(PyObject *, PyObject *);}
static PyObject *meth_FbxSelectionNode_IsValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxSelectionNode *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxSelectionNode, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->IsValid();

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxSelectionNode, sipName_IsValid, doc_FbxSelectionNode_IsValid);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *slot_FbxSelectionNode___ne__(PyObject *,PyObject *);}
static PyObject *slot_FbxSelectionNode___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxSelectionNode *sipCpp = reinterpret_cast< ::FbxSelectionNode *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxSelectionNode));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxSelectionNode* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxSelectionNode, &a0))
        {
            bool sipRes;

            sipRes = !sipCpp-> ::FbxSelectionNode::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_fbx, ne_slot, sipType_FbxSelectionNode, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_FbxSelectionNode___eq__(PyObject *,PyObject *);}
static PyObject *slot_FbxSelectionNode___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxSelectionNode *sipCpp = reinterpret_cast< ::FbxSelectionNode *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxSelectionNode));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxSelectionNode* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxSelectionNode, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::FbxSelectionNode::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_fbx, eq_slot, sipType_FbxSelectionNode, sipSelf, sipArg);
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_FbxSelectionNode(void *, const sipTypeDef *);}
static void *cast_FbxSelectionNode(void *sipCppV, const sipTypeDef *targetType)
{
     ::FbxSelectionNode *sipCpp = reinterpret_cast< ::FbxSelectionNode *>(sipCppV);

    if (targetType == sipType_FbxSelectionNode)
        return sipCppV;

    if (targetType == sipType_FbxObject)
        return static_cast< ::FbxObject *>(sipCpp);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_FbxSelectionNode(void *, int);}
static void release_FbxSelectionNode(void *, int)
{
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_FbxSelectionNode[] = {{244, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_FbxSelectionNode[] = {
    {(void *)slot_FbxSelectionNode___ne__, ne_slot},
    {(void *)slot_FbxSelectionNode___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_FbxSelectionNode[] = {
    {sipName_Create, meth_FbxSelectionNode_Create, METH_VARARGS, doc_FbxSelectionNode_Create},
    {sipName_GetClassId, meth_FbxSelectionNode_GetClassId, METH_VARARGS, doc_FbxSelectionNode_GetClassId},
    {sipName_GetSelectionObject, meth_FbxSelectionNode_GetSelectionObject, METH_VARARGS, doc_FbxSelectionNode_GetSelectionObject},
    {sipName_IsValid, meth_FbxSelectionNode_IsValid, METH_VARARGS, doc_FbxSelectionNode_IsValid},
    {sipName_SetSelectionObject, meth_FbxSelectionNode_SetSelectionObject, METH_VARARGS, doc_FbxSelectionNode_SetSelectionObject}
};


extern "C" {static PyObject *varget_FbxSelectionNode_ClassId(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxSelectionNode_ClassId(void *, PyObject *sipPySelf, PyObject *)
{
    static PyObject *sipPy = SIP_NULLPTR;
     ::FbxClassId*sipVal;

    if (sipPy)
    {
        Py_INCREF(sipPy);
        return sipPy;
    }

    sipVal = & ::FbxSelectionNode::ClassId;

    sipPy = sipConvertFromType(sipVal, sipType_FbxClassId, SIP_NULLPTR);

    if (sipPy)
    {
        sipKeepReference(sipPy, -1409, sipPySelf);
        Py_INCREF(sipPy);
    }

    return sipPy;
}


extern "C" {static int varset_FbxSelectionNode_ClassId(void *, PyObject *, PyObject *);}
static int varset_FbxSelectionNode_ClassId(void *, PyObject *sipPy, PyObject *)
{
     ::FbxClassId*sipVal;
    int sipIsErr = 0;
    sipVal = reinterpret_cast< ::FbxClassId *>(sipForceConvertToType(sipPy, sipType_FbxClassId, SIP_NULLPTR, SIP_NOT_NONE, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

     ::FbxSelectionNode::ClassId = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxSelectionNode_mEdgeIndexArray(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxSelectionNode_mEdgeIndexArray(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
     ::IntArray*sipVal;
     ::FbxSelectionNode *sipCpp = reinterpret_cast< ::FbxSelectionNode *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -1411);

    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->mEdgeIndexArray;

    sipPy = sipConvertFromType(sipVal, sipType_IntArray, SIP_NULLPTR);

    if (sipPy)
    {
        sipKeepReference(sipPy, -1410, sipPySelf);
        sipKeepReference(sipPySelf, -1411, sipPy);
    }

    return sipPy;
}


extern "C" {static int varset_FbxSelectionNode_mEdgeIndexArray(void *, PyObject *, PyObject *);}
static int varset_FbxSelectionNode_mEdgeIndexArray(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::IntArray*sipVal;
     ::FbxSelectionNode *sipCpp = reinterpret_cast< ::FbxSelectionNode *>(sipSelf);

    int sipIsErr = 0;
    sipVal = reinterpret_cast< ::IntArray *>(sipForceConvertToType(sipPy, sipType_IntArray, SIP_NULLPTR, SIP_NOT_NONE, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->mEdgeIndexArray = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxSelectionNode_mIsTheNodeInSet(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxSelectionNode_mIsTheNodeInSet(void *sipSelf, PyObject *, PyObject *)
{
    bool sipVal;
     ::FbxSelectionNode *sipCpp = reinterpret_cast< ::FbxSelectionNode *>(sipSelf);

    sipVal = sipCpp->mIsTheNodeInSet;

    return PyBool_FromLong(sipVal);
}


extern "C" {static int varset_FbxSelectionNode_mIsTheNodeInSet(void *, PyObject *, PyObject *);}
static int varset_FbxSelectionNode_mIsTheNodeInSet(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
     ::FbxSelectionNode *sipCpp = reinterpret_cast< ::FbxSelectionNode *>(sipSelf);

    sipVal = sipConvertToBool(sipPy);

    if (sipVal < 0)
        return -1;

    sipCpp->mIsTheNodeInSet = static_cast<bool>(sipVal);

    return 0;
}


extern "C" {static PyObject *varget_FbxSelectionNode_mPolygonIndexArray(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxSelectionNode_mPolygonIndexArray(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
     ::IntArray*sipVal;
     ::FbxSelectionNode *sipCpp = reinterpret_cast< ::FbxSelectionNode *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -1413);

    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->mPolygonIndexArray;

    sipPy = sipConvertFromType(sipVal, sipType_IntArray, SIP_NULLPTR);

    if (sipPy)
    {
        sipKeepReference(sipPy, -1412, sipPySelf);
        sipKeepReference(sipPySelf, -1413, sipPy);
    }

    return sipPy;
}


extern "C" {static int varset_FbxSelectionNode_mPolygonIndexArray(void *, PyObject *, PyObject *);}
static int varset_FbxSelectionNode_mPolygonIndexArray(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::IntArray*sipVal;
     ::FbxSelectionNode *sipCpp = reinterpret_cast< ::FbxSelectionNode *>(sipSelf);

    int sipIsErr = 0;
    sipVal = reinterpret_cast< ::IntArray *>(sipForceConvertToType(sipPy, sipType_IntArray, SIP_NULLPTR, SIP_NOT_NONE, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->mPolygonIndexArray = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxSelectionNode_mVertexIndexArray(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxSelectionNode_mVertexIndexArray(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
     ::IntArray*sipVal;
     ::FbxSelectionNode *sipCpp = reinterpret_cast< ::FbxSelectionNode *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -1415);

    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->mVertexIndexArray;

    sipPy = sipConvertFromType(sipVal, sipType_IntArray, SIP_NULLPTR);

    if (sipPy)
    {
        sipKeepReference(sipPy, -1414, sipPySelf);
        sipKeepReference(sipPySelf, -1415, sipPy);
    }

    return sipPy;
}


extern "C" {static int varset_FbxSelectionNode_mVertexIndexArray(void *, PyObject *, PyObject *);}
static int varset_FbxSelectionNode_mVertexIndexArray(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::IntArray*sipVal;
     ::FbxSelectionNode *sipCpp = reinterpret_cast< ::FbxSelectionNode *>(sipSelf);

    int sipIsErr = 0;
    sipVal = reinterpret_cast< ::IntArray *>(sipForceConvertToType(sipPy, sipType_IntArray, SIP_NULLPTR, SIP_NOT_NONE, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->mVertexIndexArray = *sipVal;

    return 0;
}

sipVariableDef variables_FbxSelectionNode[] = {
    {ClassVariable, sipName_ClassId, (PyMethodDef *)varget_FbxSelectionNode_ClassId, (PyMethodDef *)varset_FbxSelectionNode_ClassId, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_mEdgeIndexArray, (PyMethodDef *)varget_FbxSelectionNode_mEdgeIndexArray, (PyMethodDef *)varset_FbxSelectionNode_mEdgeIndexArray, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_mIsTheNodeInSet, (PyMethodDef *)varget_FbxSelectionNode_mIsTheNodeInSet, (PyMethodDef *)varset_FbxSelectionNode_mIsTheNodeInSet, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_mPolygonIndexArray, (PyMethodDef *)varget_FbxSelectionNode_mPolygonIndexArray, (PyMethodDef *)varset_FbxSelectionNode_mPolygonIndexArray, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_mVertexIndexArray, (PyMethodDef *)varget_FbxSelectionNode_mVertexIndexArray, (PyMethodDef *)varset_FbxSelectionNode_mVertexIndexArray, SIP_NULLPTR, SIP_NULLPTR},
};


/* Define the enum members and ints to be added to this type. */
static sipIntInstanceDef intInstances_FbxSelectionNode[] = {
    {sipName_eVertexLevel, static_cast<int>( ::FbxSelectionNode::eVertexLevel)},
    {sipName_eEdgeLevel, static_cast<int>( ::FbxSelectionNode::eEdgeLevel)},
    {sipName_eFaceLevel, static_cast<int>( ::FbxSelectionNode::eFaceLevel)},
    {sipName_eObjectLevel, static_cast<int>( ::FbxSelectionNode::eObjectLevel)},
    {sipName_eSelectTypeCount, static_cast<int>( ::FbxSelectionNode::eSelectTypeCount)},
    {0, 0}
};


sipClassTypeDef sipTypeDef_fbx_FbxSelectionNode = {
    {
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_FbxSelectionNode,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_FbxSelectionNode,
        {0, 0, 1},
        5, methods_FbxSelectionNode,
        5, variables_FbxSelectionNode,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, intInstances_FbxSelectionNode, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    SIP_NULLPTR,
    -1,
    -1,
    supers_FbxSelectionNode,
    slots_FbxSelectionNode,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_FbxSelectionNode,
    cast_FbxSelectionNode,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};