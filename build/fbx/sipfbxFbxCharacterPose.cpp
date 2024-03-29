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




PyDoc_STRVAR(doc_FbxCharacterPose_Create, "Create(FbxManager, str) -> FbxCharacterPose\n"
"Create(FbxObject, str) -> FbxCharacterPose");

extern "C" {static PyObject *meth_FbxCharacterPose_Create(PyObject *, PyObject *);}
static PyObject *meth_FbxCharacterPose_Create(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxManager* a0;
        const char* a1;
        PyObject *a1Keep;

        if (sipParseArgs(&sipParseErr, sipArgs, "CJ8A8", &sipSelf, sipType_FbxManager, &a0, &a1Keep, &a1))
        {
             ::FbxCharacterPose*sipRes;

            sipRes =  ::FbxCharacterPose::Create(a0,a1);
            Py_DECREF(a1Keep);

            return sipConvertFromType(sipRes,sipType_FbxCharacterPose,SIP_NULLPTR);
        }
    }

    {
         ::FbxObject* a0;
        const char* a1;
        PyObject *a1Keep;

        if (sipParseArgs(&sipParseErr, sipArgs, "CJ8A8", &sipSelf, sipType_FbxObject, &a0, &a1Keep, &a1))
        {
             ::FbxCharacterPose*sipRes;

            sipRes =  ::FbxCharacterPose::Create(a0,a1);
            Py_DECREF(a1Keep);

            return sipConvertFromType(sipRes,sipType_FbxCharacterPose,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxCharacterPose, sipName_Create, doc_FbxCharacterPose_Create);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxCharacterPose_GetClassId, "GetClassId(self) -> FbxClassId");

extern "C" {static PyObject *meth_FbxCharacterPose_GetClassId(PyObject *, PyObject *);}
static PyObject *meth_FbxCharacterPose_GetClassId(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_FbxCharacterPose)) || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::FbxCharacterPose *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxCharacterPose, &sipCpp))
        {
             ::FbxClassId*sipRes;

            sipRes = new  ::FbxClassId((sipSelfWasArg ? sipCpp-> ::FbxCharacterPose::GetClassId() : sipCpp->GetClassId()));

            return sipConvertFromNewType(sipRes,sipType_FbxClassId,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxCharacterPose, sipName_GetClassId, doc_FbxCharacterPose_GetClassId);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxCharacterPose_Reset, "Reset(self)");

extern "C" {static PyObject *meth_FbxCharacterPose_Reset(PyObject *, PyObject *);}
static PyObject *meth_FbxCharacterPose_Reset(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxCharacterPose *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxCharacterPose, &sipCpp))
        {
            sipCpp->Reset();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxCharacterPose, sipName_Reset, doc_FbxCharacterPose_Reset);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxCharacterPose_GetRootNode, "GetRootNode(self) -> FbxNode");

extern "C" {static PyObject *meth_FbxCharacterPose_GetRootNode(PyObject *, PyObject *);}
static PyObject *meth_FbxCharacterPose_GetRootNode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxCharacterPose *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxCharacterPose, &sipCpp))
        {
             ::FbxNode*sipRes;

            sipRes = sipCpp->GetRootNode();

            return sipConvertFromType(sipRes,sipType_FbxNode,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxCharacterPose, sipName_GetRootNode, doc_FbxCharacterPose_GetRootNode);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxCharacterPose_GetCharacter, "GetCharacter(self) -> FbxCharacter");

extern "C" {static PyObject *meth_FbxCharacterPose_GetCharacter(PyObject *, PyObject *);}
static PyObject *meth_FbxCharacterPose_GetCharacter(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxCharacterPose *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxCharacterPose, &sipCpp))
        {
             ::FbxCharacter*sipRes;

            sipRes = sipCpp->GetCharacter();

            return sipConvertFromType(sipRes,sipType_FbxCharacter,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxCharacterPose, sipName_GetCharacter, doc_FbxCharacterPose_GetCharacter);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxCharacterPose_GetOffset, "GetOffset(self, FbxCharacter.ENodeId, FbxAMatrix) -> bool");

extern "C" {static PyObject *meth_FbxCharacterPose_GetOffset(PyObject *, PyObject *);}
static PyObject *meth_FbxCharacterPose_GetOffset(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxCharacter::ENodeId a0;
         ::FbxAMatrix* a1;
         ::FbxCharacterPose *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BEJ9", &sipSelf, sipType_FbxCharacterPose, &sipCpp, sipType_FbxCharacter_ENodeId, &a0, sipType_FbxAMatrix, &a1))
        {
            bool sipRes;

            sipRes = sipCpp->GetOffset(a0,*a1);

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxCharacterPose, sipName_GetOffset, doc_FbxCharacterPose_GetOffset);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxCharacterPose_GetLocalPosition, "GetLocalPosition(self, FbxCharacter.ENodeId, FbxVector4, FbxVector4, FbxVector4) -> bool");

extern "C" {static PyObject *meth_FbxCharacterPose_GetLocalPosition(PyObject *, PyObject *);}
static PyObject *meth_FbxCharacterPose_GetLocalPosition(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxCharacter::ENodeId a0;
         ::FbxVector4* a1;
         ::FbxVector4* a2;
         ::FbxVector4* a3;
         ::FbxCharacterPose *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BEJ9J9J9", &sipSelf, sipType_FbxCharacterPose, &sipCpp, sipType_FbxCharacter_ENodeId, &a0, sipType_FbxVector4, &a1, sipType_FbxVector4, &a2, sipType_FbxVector4, &a3))
        {
            bool sipRes;

            sipRes = sipCpp->GetLocalPosition(a0,*a1,*a2,*a3);

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxCharacterPose, sipName_GetLocalPosition, doc_FbxCharacterPose_GetLocalPosition);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxCharacterPose_GetGlobalPosition, "GetGlobalPosition(self, FbxCharacter.ENodeId, FbxAMatrix) -> bool");

extern "C" {static PyObject *meth_FbxCharacterPose_GetGlobalPosition(PyObject *, PyObject *);}
static PyObject *meth_FbxCharacterPose_GetGlobalPosition(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxCharacter::ENodeId a0;
         ::FbxAMatrix* a1;
         ::FbxCharacterPose *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BEJ9", &sipSelf, sipType_FbxCharacterPose, &sipCpp, sipType_FbxCharacter_ENodeId, &a0, sipType_FbxAMatrix, &a1))
        {
            bool sipRes;

            sipRes = sipCpp->GetGlobalPosition(a0,*a1);

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxCharacterPose, sipName_GetGlobalPosition, doc_FbxCharacterPose_GetGlobalPosition);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *slot_FbxCharacterPose___ne__(PyObject *,PyObject *);}
static PyObject *slot_FbxCharacterPose___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxCharacterPose *sipCpp = reinterpret_cast< ::FbxCharacterPose *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxCharacterPose));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxCharacterPose* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxCharacterPose, &a0))
        {
            bool sipRes;

            sipRes = !sipCpp-> ::FbxCharacterPose::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_fbx, ne_slot, sipType_FbxCharacterPose, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_FbxCharacterPose___eq__(PyObject *,PyObject *);}
static PyObject *slot_FbxCharacterPose___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxCharacterPose *sipCpp = reinterpret_cast< ::FbxCharacterPose *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxCharacterPose));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxCharacterPose* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxCharacterPose, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::FbxCharacterPose::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_fbx, eq_slot, sipType_FbxCharacterPose, sipSelf, sipArg);
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_FbxCharacterPose(void *, const sipTypeDef *);}
static void *cast_FbxCharacterPose(void *sipCppV, const sipTypeDef *targetType)
{
     ::FbxCharacterPose *sipCpp = reinterpret_cast< ::FbxCharacterPose *>(sipCppV);

    if (targetType == sipType_FbxCharacterPose)
        return sipCppV;

    if (targetType == sipType_FbxObject)
        return static_cast< ::FbxObject *>(sipCpp);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_FbxCharacterPose(void *, int);}
static void release_FbxCharacterPose(void *, int)
{
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_FbxCharacterPose[] = {{244, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_FbxCharacterPose[] = {
    {(void *)slot_FbxCharacterPose___ne__, ne_slot},
    {(void *)slot_FbxCharacterPose___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_FbxCharacterPose[] = {
    {sipName_Create, meth_FbxCharacterPose_Create, METH_VARARGS, doc_FbxCharacterPose_Create},
    {sipName_GetCharacter, meth_FbxCharacterPose_GetCharacter, METH_VARARGS, doc_FbxCharacterPose_GetCharacter},
    {sipName_GetClassId, meth_FbxCharacterPose_GetClassId, METH_VARARGS, doc_FbxCharacterPose_GetClassId},
    {sipName_GetGlobalPosition, meth_FbxCharacterPose_GetGlobalPosition, METH_VARARGS, doc_FbxCharacterPose_GetGlobalPosition},
    {sipName_GetLocalPosition, meth_FbxCharacterPose_GetLocalPosition, METH_VARARGS, doc_FbxCharacterPose_GetLocalPosition},
    {sipName_GetOffset, meth_FbxCharacterPose_GetOffset, METH_VARARGS, doc_FbxCharacterPose_GetOffset},
    {sipName_GetRootNode, meth_FbxCharacterPose_GetRootNode, METH_VARARGS, doc_FbxCharacterPose_GetRootNode},
    {sipName_Reset, meth_FbxCharacterPose_Reset, METH_VARARGS, doc_FbxCharacterPose_Reset}
};


extern "C" {static PyObject *varget_FbxCharacterPose_ClassId(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxCharacterPose_ClassId(void *, PyObject *sipPySelf, PyObject *)
{
    static PyObject *sipPy = SIP_NULLPTR;
     ::FbxClassId*sipVal;

    if (sipPy)
    {
        Py_INCREF(sipPy);
        return sipPy;
    }

    sipVal = & ::FbxCharacterPose::ClassId;

    sipPy = sipConvertFromType(sipVal, sipType_FbxClassId, SIP_NULLPTR);

    if (sipPy)
    {
        sipKeepReference(sipPy, -1406, sipPySelf);
        Py_INCREF(sipPy);
    }

    return sipPy;
}


extern "C" {static int varset_FbxCharacterPose_ClassId(void *, PyObject *, PyObject *);}
static int varset_FbxCharacterPose_ClassId(void *, PyObject *sipPy, PyObject *)
{
     ::FbxClassId*sipVal;
    int sipIsErr = 0;
    sipVal = reinterpret_cast< ::FbxClassId *>(sipForceConvertToType(sipPy, sipType_FbxClassId, SIP_NULLPTR, SIP_NOT_NONE, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

     ::FbxCharacterPose::ClassId = *sipVal;

    return 0;
}

sipVariableDef variables_FbxCharacterPose[] = {
    {ClassVariable, sipName_ClassId, (PyMethodDef *)varget_FbxCharacterPose_ClassId, (PyMethodDef *)varset_FbxCharacterPose_ClassId, SIP_NULLPTR, SIP_NULLPTR},
};


sipClassTypeDef sipTypeDef_fbx_FbxCharacterPose = {
    {
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_FbxCharacterPose,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_FbxCharacterPose,
        {0, 0, 1},
        8, methods_FbxCharacterPose,
        1, variables_FbxCharacterPose,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    SIP_NULLPTR,
    -1,
    -1,
    supers_FbxCharacterPose,
    slots_FbxCharacterPose,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_FbxCharacterPose,
    cast_FbxCharacterPose,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};
