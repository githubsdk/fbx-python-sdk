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




PyDoc_STRVAR(doc_FbxLODGroup_Create, "Create(FbxManager, str) -> FbxLODGroup\n"
"Create(FbxObject, str) -> FbxLODGroup");

extern "C" {static PyObject *meth_FbxLODGroup_Create(PyObject *, PyObject *);}
static PyObject *meth_FbxLODGroup_Create(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxManager* a0;
        const char* a1;
        PyObject *a1Keep;

        if (sipParseArgs(&sipParseErr, sipArgs, "CJ8A8", &sipSelf, sipType_FbxManager, &a0, &a1Keep, &a1))
        {
             ::FbxLODGroup*sipRes;

            sipRes =  ::FbxLODGroup::Create(a0,a1);
            Py_DECREF(a1Keep);

            return sipConvertFromType(sipRes,sipType_FbxLODGroup,SIP_NULLPTR);
        }
    }

    {
         ::FbxObject* a0;
        const char* a1;
        PyObject *a1Keep;

        if (sipParseArgs(&sipParseErr, sipArgs, "CJ8A8", &sipSelf, sipType_FbxObject, &a0, &a1Keep, &a1))
        {
             ::FbxLODGroup*sipRes;

            sipRes =  ::FbxLODGroup::Create(a0,a1);
            Py_DECREF(a1Keep);

            return sipConvertFromType(sipRes,sipType_FbxLODGroup,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxLODGroup, sipName_Create, doc_FbxLODGroup_Create);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxLODGroup_GetClassId, "GetClassId(self) -> FbxClassId");

extern "C" {static PyObject *meth_FbxLODGroup_GetClassId(PyObject *, PyObject *);}
static PyObject *meth_FbxLODGroup_GetClassId(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_FbxLODGroup)) || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::FbxLODGroup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxLODGroup, &sipCpp))
        {
             ::FbxClassId*sipRes;

            sipRes = new  ::FbxClassId((sipSelfWasArg ? sipCpp-> ::FbxLODGroup::GetClassId() : sipCpp->GetClassId()));

            return sipConvertFromNewType(sipRes,sipType_FbxClassId,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxLODGroup, sipName_GetClassId, doc_FbxLODGroup_GetClassId);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxLODGroup_GetAttributeType, "GetAttributeType(self) -> FbxNodeAttribute.EType");

extern "C" {static PyObject *meth_FbxLODGroup_GetAttributeType(PyObject *, PyObject *);}
static PyObject *meth_FbxLODGroup_GetAttributeType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_FbxLODGroup)) || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::FbxLODGroup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxLODGroup, &sipCpp))
        {
             ::FbxNodeAttribute::EType sipRes;

            sipRes = (sipSelfWasArg ? sipCpp-> ::FbxLODGroup::GetAttributeType() : sipCpp->GetAttributeType());

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_FbxNodeAttribute_EType);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxLODGroup, sipName_GetAttributeType, doc_FbxLODGroup_GetAttributeType);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxLODGroup_GetNumThresholds, "GetNumThresholds(self) -> int");

extern "C" {static PyObject *meth_FbxLODGroup_GetNumThresholds(PyObject *, PyObject *);}
static PyObject *meth_FbxLODGroup_GetNumThresholds(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxLODGroup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxLODGroup, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->GetNumThresholds();

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxLODGroup, sipName_GetNumThresholds, doc_FbxLODGroup_GetNumThresholds);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxLODGroup_AddThreshold, "AddThreshold(self, FbxDistance) -> bool\n"
"AddThreshold(self, float) -> bool");

extern "C" {static PyObject *meth_FbxLODGroup_AddThreshold(PyObject *, PyObject *);}
static PyObject *meth_FbxLODGroup_AddThreshold(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxDistance* a0;
         ::FbxLODGroup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_FbxLODGroup, &sipCpp, sipType_FbxDistance, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->AddThreshold(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    {
        double a0;
         ::FbxLODGroup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_FbxLODGroup, &sipCpp, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->AddThreshold(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxLODGroup, sipName_AddThreshold, doc_FbxLODGroup_AddThreshold);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxLODGroup_SetThreshold, "SetThreshold(self, int, FbxDistance) -> bool\n"
"SetThreshold(self, int, float) -> bool");

extern "C" {static PyObject *meth_FbxLODGroup_SetThreshold(PyObject *, PyObject *);}
static PyObject *meth_FbxLODGroup_SetThreshold(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
         ::FbxDistance* a1;
         ::FbxLODGroup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BiJ9", &sipSelf, sipType_FbxLODGroup, &sipCpp, &a0, sipType_FbxDistance, &a1))
        {
            bool sipRes;

            sipRes = sipCpp->SetThreshold(a0,*a1);

            return PyBool_FromLong(sipRes);
        }
    }

    {
        int a0;
        double a1;
         ::FbxLODGroup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bid", &sipSelf, sipType_FbxLODGroup, &sipCpp, &a0, &a1))
        {
            bool sipRes;

            sipRes = sipCpp->SetThreshold(a0,a1);

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxLODGroup, sipName_SetThreshold, doc_FbxLODGroup_SetThreshold);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxLODGroup_GetThreshold, "GetThreshold(self, int, FbxDistance) -> bool\n"
"GetThreshold(self, int) -> Tuple[bool, float]");

extern "C" {static PyObject *meth_FbxLODGroup_GetThreshold(PyObject *, PyObject *);}
static PyObject *meth_FbxLODGroup_GetThreshold(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
         ::FbxDistance* a1;
         ::FbxLODGroup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BiJ9", &sipSelf, sipType_FbxLODGroup, &sipCpp, &a0, sipType_FbxDistance, &a1))
        {
            bool sipRes;

            sipRes = sipCpp->GetThreshold(a0,*a1);

            return PyBool_FromLong(sipRes);
        }
    }

    {
        int a0;
        double a1;
         ::FbxLODGroup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_FbxLODGroup, &sipCpp, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->GetThreshold(a0,a1);

            return sipBuildResult(0,"(bd)",sipRes,a1);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxLODGroup, sipName_GetThreshold, doc_FbxLODGroup_GetThreshold);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxLODGroup_GetNumDisplayLevels, "GetNumDisplayLevels(self) -> int");

extern "C" {static PyObject *meth_FbxLODGroup_GetNumDisplayLevels(PyObject *, PyObject *);}
static PyObject *meth_FbxLODGroup_GetNumDisplayLevels(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxLODGroup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxLODGroup, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->GetNumDisplayLevels();

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxLODGroup, sipName_GetNumDisplayLevels, doc_FbxLODGroup_GetNumDisplayLevels);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxLODGroup_AddDisplayLevel, "AddDisplayLevel(self, FbxLODGroup.EDisplayLevel) -> bool");

extern "C" {static PyObject *meth_FbxLODGroup_AddDisplayLevel(PyObject *, PyObject *);}
static PyObject *meth_FbxLODGroup_AddDisplayLevel(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxLODGroup::EDisplayLevel a0;
         ::FbxLODGroup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_FbxLODGroup, &sipCpp, sipType_FbxLODGroup_EDisplayLevel, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->AddDisplayLevel(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxLODGroup, sipName_AddDisplayLevel, doc_FbxLODGroup_AddDisplayLevel);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxLODGroup_SetDisplayLevel, "SetDisplayLevel(self, int, FbxLODGroup.EDisplayLevel) -> bool");

extern "C" {static PyObject *meth_FbxLODGroup_SetDisplayLevel(PyObject *, PyObject *);}
static PyObject *meth_FbxLODGroup_SetDisplayLevel(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
         ::FbxLODGroup::EDisplayLevel a1;
         ::FbxLODGroup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BiE", &sipSelf, sipType_FbxLODGroup, &sipCpp, &a0, sipType_FbxLODGroup_EDisplayLevel, &a1))
        {
            bool sipRes;

            sipRes = sipCpp->SetDisplayLevel(a0,a1);

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxLODGroup, sipName_SetDisplayLevel, doc_FbxLODGroup_SetDisplayLevel);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxLODGroup_GetDisplayLevel, "GetDisplayLevel(self, int) -> Tuple[bool, FbxLODGroup.EDisplayLevel]");

extern "C" {static PyObject *meth_FbxLODGroup_GetDisplayLevel(PyObject *, PyObject *);}
static PyObject *meth_FbxLODGroup_GetDisplayLevel(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
         ::FbxLODGroup::EDisplayLevel a1;
         ::FbxLODGroup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_FbxLODGroup, &sipCpp, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->GetDisplayLevel(a0,a1);

            return sipBuildResult(0,"(bF)",sipRes,a1,sipType_FbxLODGroup_EDisplayLevel);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxLODGroup, sipName_GetDisplayLevel, doc_FbxLODGroup_GetDisplayLevel);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *slot_FbxLODGroup___ne__(PyObject *,PyObject *);}
static PyObject *slot_FbxLODGroup___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxLODGroup *sipCpp = reinterpret_cast< ::FbxLODGroup *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxLODGroup));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxLODGroup* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxLODGroup, &a0))
        {
            bool sipRes;

            sipRes = !sipCpp-> ::FbxLODGroup::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_fbx, ne_slot, sipType_FbxLODGroup, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_FbxLODGroup___eq__(PyObject *,PyObject *);}
static PyObject *slot_FbxLODGroup___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxLODGroup *sipCpp = reinterpret_cast< ::FbxLODGroup *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxLODGroup));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxLODGroup* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxLODGroup, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::FbxLODGroup::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_fbx, eq_slot, sipType_FbxLODGroup, sipSelf, sipArg);
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_FbxLODGroup(void *, const sipTypeDef *);}
static void *cast_FbxLODGroup(void *sipCppV, const sipTypeDef *targetType)
{
     ::FbxLODGroup *sipCpp = reinterpret_cast< ::FbxLODGroup *>(sipCppV);

    if (targetType == sipType_FbxLODGroup)
        return sipCppV;

    sipCppV = ((const sipClassTypeDef *)sipType_FbxNodeAttribute)->ctd_cast(static_cast< ::FbxNodeAttribute *>(sipCpp), targetType);
    if (sipCppV)
        return sipCppV;

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_FbxLODGroup(void *, int);}
static void release_FbxLODGroup(void *, int)
{
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_FbxLODGroup[] = {{233, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_FbxLODGroup[] = {
    {(void *)slot_FbxLODGroup___ne__, ne_slot},
    {(void *)slot_FbxLODGroup___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_FbxLODGroup[] = {
    {sipName_AddDisplayLevel, meth_FbxLODGroup_AddDisplayLevel, METH_VARARGS, doc_FbxLODGroup_AddDisplayLevel},
    {sipName_AddThreshold, meth_FbxLODGroup_AddThreshold, METH_VARARGS, doc_FbxLODGroup_AddThreshold},
    {sipName_Create, meth_FbxLODGroup_Create, METH_VARARGS, doc_FbxLODGroup_Create},
    {sipName_GetAttributeType, meth_FbxLODGroup_GetAttributeType, METH_VARARGS, doc_FbxLODGroup_GetAttributeType},
    {sipName_GetClassId, meth_FbxLODGroup_GetClassId, METH_VARARGS, doc_FbxLODGroup_GetClassId},
    {sipName_GetDisplayLevel, meth_FbxLODGroup_GetDisplayLevel, METH_VARARGS, doc_FbxLODGroup_GetDisplayLevel},
    {sipName_GetNumDisplayLevels, meth_FbxLODGroup_GetNumDisplayLevels, METH_VARARGS, doc_FbxLODGroup_GetNumDisplayLevels},
    {sipName_GetNumThresholds, meth_FbxLODGroup_GetNumThresholds, METH_VARARGS, doc_FbxLODGroup_GetNumThresholds},
    {sipName_GetThreshold, meth_FbxLODGroup_GetThreshold, METH_VARARGS, doc_FbxLODGroup_GetThreshold},
    {sipName_SetDisplayLevel, meth_FbxLODGroup_SetDisplayLevel, METH_VARARGS, doc_FbxLODGroup_SetDisplayLevel},
    {sipName_SetThreshold, meth_FbxLODGroup_SetThreshold, METH_VARARGS, doc_FbxLODGroup_SetThreshold}
};


extern "C" {static PyObject *varget_FbxLODGroup_ClassId(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxLODGroup_ClassId(void *, PyObject *sipPySelf, PyObject *)
{
    static PyObject *sipPy = SIP_NULLPTR;
     ::FbxClassId*sipVal;

    if (sipPy)
    {
        Py_INCREF(sipPy);
        return sipPy;
    }

    sipVal = & ::FbxLODGroup::ClassId;

    sipPy = sipConvertFromType(sipVal, sipType_FbxClassId, SIP_NULLPTR);

    if (sipPy)
    {
        sipKeepReference(sipPy, -360, sipPySelf);
        Py_INCREF(sipPy);
    }

    return sipPy;
}


extern "C" {static int varset_FbxLODGroup_ClassId(void *, PyObject *, PyObject *);}
static int varset_FbxLODGroup_ClassId(void *, PyObject *sipPy, PyObject *)
{
     ::FbxClassId*sipVal;
    int sipIsErr = 0;
    sipVal = reinterpret_cast< ::FbxClassId *>(sipForceConvertToType(sipPy, sipType_FbxClassId, SIP_NULLPTR, SIP_NOT_NONE, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

     ::FbxLODGroup::ClassId = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxLODGroup_MaxDistance(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxLODGroup_MaxDistance(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
     ::FbxPropertyDouble1*sipVal;
     ::FbxLODGroup *sipCpp = reinterpret_cast< ::FbxLODGroup *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -362);

    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->MaxDistance;

    sipPy = sipConvertFromType(sipVal, sipType_FbxPropertyDouble1, SIP_NULLPTR);

    if (sipPy)
    {
        sipKeepReference(sipPy, -361, sipPySelf);
        sipKeepReference(sipPySelf, -362, sipPy);
    }

    return sipPy;
}


extern "C" {static int varset_FbxLODGroup_MaxDistance(void *, PyObject *, PyObject *);}
static int varset_FbxLODGroup_MaxDistance(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::FbxPropertyDouble1*sipVal;
     ::FbxLODGroup *sipCpp = reinterpret_cast< ::FbxLODGroup *>(sipSelf);

    int sipIsErr = 0;
    sipVal = reinterpret_cast< ::FbxPropertyDouble1 *>(sipForceConvertToType(sipPy, sipType_FbxPropertyDouble1, SIP_NULLPTR, SIP_NOT_NONE, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->MaxDistance = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxLODGroup_MinDistance(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxLODGroup_MinDistance(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
     ::FbxPropertyDouble1*sipVal;
     ::FbxLODGroup *sipCpp = reinterpret_cast< ::FbxLODGroup *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -364);

    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->MinDistance;

    sipPy = sipConvertFromType(sipVal, sipType_FbxPropertyDouble1, SIP_NULLPTR);

    if (sipPy)
    {
        sipKeepReference(sipPy, -363, sipPySelf);
        sipKeepReference(sipPySelf, -364, sipPy);
    }

    return sipPy;
}


extern "C" {static int varset_FbxLODGroup_MinDistance(void *, PyObject *, PyObject *);}
static int varset_FbxLODGroup_MinDistance(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::FbxPropertyDouble1*sipVal;
     ::FbxLODGroup *sipCpp = reinterpret_cast< ::FbxLODGroup *>(sipSelf);

    int sipIsErr = 0;
    sipVal = reinterpret_cast< ::FbxPropertyDouble1 *>(sipForceConvertToType(sipPy, sipType_FbxPropertyDouble1, SIP_NULLPTR, SIP_NOT_NONE, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->MinDistance = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxLODGroup_MinMaxDistance(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxLODGroup_MinMaxDistance(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
     ::FbxPropertyBool1*sipVal;
     ::FbxLODGroup *sipCpp = reinterpret_cast< ::FbxLODGroup *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -366);

    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->MinMaxDistance;

    sipPy = sipConvertFromType(sipVal, sipType_FbxPropertyBool1, SIP_NULLPTR);

    if (sipPy)
    {
        sipKeepReference(sipPy, -365, sipPySelf);
        sipKeepReference(sipPySelf, -366, sipPy);
    }

    return sipPy;
}


extern "C" {static int varset_FbxLODGroup_MinMaxDistance(void *, PyObject *, PyObject *);}
static int varset_FbxLODGroup_MinMaxDistance(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::FbxPropertyBool1*sipVal;
     ::FbxLODGroup *sipCpp = reinterpret_cast< ::FbxLODGroup *>(sipSelf);

    int sipIsErr = 0;
    sipVal = reinterpret_cast< ::FbxPropertyBool1 *>(sipForceConvertToType(sipPy, sipType_FbxPropertyBool1, SIP_NULLPTR, SIP_NOT_NONE, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->MinMaxDistance = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxLODGroup_ThresholdsUsedAsPercentage(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxLODGroup_ThresholdsUsedAsPercentage(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
     ::FbxPropertyBool1*sipVal;
     ::FbxLODGroup *sipCpp = reinterpret_cast< ::FbxLODGroup *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -368);

    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->ThresholdsUsedAsPercentage;

    sipPy = sipConvertFromType(sipVal, sipType_FbxPropertyBool1, SIP_NULLPTR);

    if (sipPy)
    {
        sipKeepReference(sipPy, -367, sipPySelf);
        sipKeepReference(sipPySelf, -368, sipPy);
    }

    return sipPy;
}


extern "C" {static int varset_FbxLODGroup_ThresholdsUsedAsPercentage(void *, PyObject *, PyObject *);}
static int varset_FbxLODGroup_ThresholdsUsedAsPercentage(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::FbxPropertyBool1*sipVal;
     ::FbxLODGroup *sipCpp = reinterpret_cast< ::FbxLODGroup *>(sipSelf);

    int sipIsErr = 0;
    sipVal = reinterpret_cast< ::FbxPropertyBool1 *>(sipForceConvertToType(sipPy, sipType_FbxPropertyBool1, SIP_NULLPTR, SIP_NOT_NONE, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->ThresholdsUsedAsPercentage = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxLODGroup_WorldSpace(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxLODGroup_WorldSpace(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
     ::FbxPropertyBool1*sipVal;
     ::FbxLODGroup *sipCpp = reinterpret_cast< ::FbxLODGroup *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -370);

    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->WorldSpace;

    sipPy = sipConvertFromType(sipVal, sipType_FbxPropertyBool1, SIP_NULLPTR);

    if (sipPy)
    {
        sipKeepReference(sipPy, -369, sipPySelf);
        sipKeepReference(sipPySelf, -370, sipPy);
    }

    return sipPy;
}


extern "C" {static int varset_FbxLODGroup_WorldSpace(void *, PyObject *, PyObject *);}
static int varset_FbxLODGroup_WorldSpace(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::FbxPropertyBool1*sipVal;
     ::FbxLODGroup *sipCpp = reinterpret_cast< ::FbxLODGroup *>(sipSelf);

    int sipIsErr = 0;
    sipVal = reinterpret_cast< ::FbxPropertyBool1 *>(sipForceConvertToType(sipPy, sipType_FbxPropertyBool1, SIP_NULLPTR, SIP_NOT_NONE, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->WorldSpace = *sipVal;

    return 0;
}

sipVariableDef variables_FbxLODGroup[] = {
    {ClassVariable, sipName_ClassId, (PyMethodDef *)varget_FbxLODGroup_ClassId, (PyMethodDef *)varset_FbxLODGroup_ClassId, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_MaxDistance, (PyMethodDef *)varget_FbxLODGroup_MaxDistance, (PyMethodDef *)varset_FbxLODGroup_MaxDistance, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_MinDistance, (PyMethodDef *)varget_FbxLODGroup_MinDistance, (PyMethodDef *)varset_FbxLODGroup_MinDistance, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_MinMaxDistance, (PyMethodDef *)varget_FbxLODGroup_MinMaxDistance, (PyMethodDef *)varset_FbxLODGroup_MinMaxDistance, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_ThresholdsUsedAsPercentage, (PyMethodDef *)varget_FbxLODGroup_ThresholdsUsedAsPercentage, (PyMethodDef *)varset_FbxLODGroup_ThresholdsUsedAsPercentage, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_WorldSpace, (PyMethodDef *)varget_FbxLODGroup_WorldSpace, (PyMethodDef *)varset_FbxLODGroup_WorldSpace, SIP_NULLPTR, SIP_NULLPTR},
};


/* Define the enum members and ints to be added to this type. */
static sipIntInstanceDef intInstances_FbxLODGroup[] = {
    {sipName_eUseLOD, static_cast<int>( ::FbxLODGroup::eUseLOD)},
    {sipName_eShow, static_cast<int>( ::FbxLODGroup::eShow)},
    {sipName_eHide, static_cast<int>( ::FbxLODGroup::eHide)},
    {0, 0}
};


sipClassTypeDef sipTypeDef_fbx_FbxLODGroup = {
    {
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_FbxLODGroup,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_FbxLODGroup,
        {0, 0, 1},
        11, methods_FbxLODGroup,
        6, variables_FbxLODGroup,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, intInstances_FbxLODGroup, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    SIP_NULLPTR,
    -1,
    -1,
    supers_FbxLODGroup,
    slots_FbxLODGroup,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_FbxLODGroup,
    cast_FbxLODGroup,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};
