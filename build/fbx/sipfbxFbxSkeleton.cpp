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




PyDoc_STRVAR(doc_FbxSkeleton_Create, "Create(FbxManager, str) -> FbxSkeleton\n"
"Create(FbxObject, str) -> FbxSkeleton");

extern "C" {static PyObject *meth_FbxSkeleton_Create(PyObject *, PyObject *);}
static PyObject *meth_FbxSkeleton_Create(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxManager* a0;
        const char* a1;
        PyObject *a1Keep;

        if (sipParseArgs(&sipParseErr, sipArgs, "CJ8A8", &sipSelf, sipType_FbxManager, &a0, &a1Keep, &a1))
        {
             ::FbxSkeleton*sipRes;

            sipRes =  ::FbxSkeleton::Create(a0,a1);
            Py_DECREF(a1Keep);

            return sipConvertFromType(sipRes,sipType_FbxSkeleton,SIP_NULLPTR);
        }
    }

    {
         ::FbxObject* a0;
        const char* a1;
        PyObject *a1Keep;

        if (sipParseArgs(&sipParseErr, sipArgs, "CJ8A8", &sipSelf, sipType_FbxObject, &a0, &a1Keep, &a1))
        {
             ::FbxSkeleton*sipRes;

            sipRes =  ::FbxSkeleton::Create(a0,a1);
            Py_DECREF(a1Keep);

            return sipConvertFromType(sipRes,sipType_FbxSkeleton,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxSkeleton, sipName_Create, doc_FbxSkeleton_Create);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxSkeleton_GetClassId, "GetClassId(self) -> FbxClassId");

extern "C" {static PyObject *meth_FbxSkeleton_GetClassId(PyObject *, PyObject *);}
static PyObject *meth_FbxSkeleton_GetClassId(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_FbxSkeleton)) || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::FbxSkeleton *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxSkeleton, &sipCpp))
        {
             ::FbxClassId*sipRes;

            sipRes = new  ::FbxClassId((sipSelfWasArg ? sipCpp-> ::FbxSkeleton::GetClassId() : sipCpp->GetClassId()));

            return sipConvertFromNewType(sipRes,sipType_FbxClassId,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxSkeleton, sipName_GetClassId, doc_FbxSkeleton_GetClassId);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxSkeleton_GetAttributeType, "GetAttributeType(self) -> FbxNodeAttribute.EType");

extern "C" {static PyObject *meth_FbxSkeleton_GetAttributeType(PyObject *, PyObject *);}
static PyObject *meth_FbxSkeleton_GetAttributeType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_FbxSkeleton)) || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::FbxSkeleton *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxSkeleton, &sipCpp))
        {
             ::FbxNodeAttribute::EType sipRes;

            sipRes = (sipSelfWasArg ? sipCpp-> ::FbxSkeleton::GetAttributeType() : sipCpp->GetAttributeType());

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_FbxNodeAttribute_EType);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxSkeleton, sipName_GetAttributeType, doc_FbxSkeleton_GetAttributeType);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxSkeleton_Reset, "Reset(self)");

extern "C" {static PyObject *meth_FbxSkeleton_Reset(PyObject *, PyObject *);}
static PyObject *meth_FbxSkeleton_Reset(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxSkeleton *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxSkeleton, &sipCpp))
        {
            sipCpp->Reset();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxSkeleton, sipName_Reset, doc_FbxSkeleton_Reset);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxSkeleton_SetSkeletonType, "SetSkeletonType(self, FbxSkeleton.EType)");

extern "C" {static PyObject *meth_FbxSkeleton_SetSkeletonType(PyObject *, PyObject *);}
static PyObject *meth_FbxSkeleton_SetSkeletonType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxSkeleton::EType a0;
         ::FbxSkeleton *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_FbxSkeleton, &sipCpp, sipType_FbxSkeleton_EType, &a0))
        {
            sipCpp->SetSkeletonType(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxSkeleton, sipName_SetSkeletonType, doc_FbxSkeleton_SetSkeletonType);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxSkeleton_GetSkeletonType, "GetSkeletonType(self) -> FbxSkeleton.EType");

extern "C" {static PyObject *meth_FbxSkeleton_GetSkeletonType(PyObject *, PyObject *);}
static PyObject *meth_FbxSkeleton_GetSkeletonType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxSkeleton *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxSkeleton, &sipCpp))
        {
             ::FbxSkeleton::EType sipRes;

            sipRes = sipCpp->GetSkeletonType();

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_FbxSkeleton_EType);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxSkeleton, sipName_GetSkeletonType, doc_FbxSkeleton_GetSkeletonType);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxSkeleton_GetSkeletonTypeIsSet, "GetSkeletonTypeIsSet(self) -> bool");

extern "C" {static PyObject *meth_FbxSkeleton_GetSkeletonTypeIsSet(PyObject *, PyObject *);}
static PyObject *meth_FbxSkeleton_GetSkeletonTypeIsSet(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxSkeleton *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxSkeleton, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->GetSkeletonTypeIsSet();

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxSkeleton, sipName_GetSkeletonTypeIsSet, doc_FbxSkeleton_GetSkeletonTypeIsSet);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxSkeleton_GetSkeletonTypeDefaultValue, "GetSkeletonTypeDefaultValue(self) -> FbxSkeleton.EType");

extern "C" {static PyObject *meth_FbxSkeleton_GetSkeletonTypeDefaultValue(PyObject *, PyObject *);}
static PyObject *meth_FbxSkeleton_GetSkeletonTypeDefaultValue(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxSkeleton *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxSkeleton, &sipCpp))
        {
             ::FbxSkeleton::EType sipRes;

            sipRes = sipCpp->GetSkeletonTypeDefaultValue();

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_FbxSkeleton_EType);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxSkeleton, sipName_GetSkeletonTypeDefaultValue, doc_FbxSkeleton_GetSkeletonTypeDefaultValue);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxSkeleton_GetLimbLengthDefaultValue, "GetLimbLengthDefaultValue(self) -> float");

extern "C" {static PyObject *meth_FbxSkeleton_GetLimbLengthDefaultValue(PyObject *, PyObject *);}
static PyObject *meth_FbxSkeleton_GetLimbLengthDefaultValue(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxSkeleton *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxSkeleton, &sipCpp))
        {
            double sipRes;

            sipRes = sipCpp->GetLimbLengthDefaultValue();

            return PyFloat_FromDouble(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxSkeleton, sipName_GetLimbLengthDefaultValue, doc_FbxSkeleton_GetLimbLengthDefaultValue);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxSkeleton_GetLimbNodeSizeDefaultValue, "GetLimbNodeSizeDefaultValue(self) -> float");

extern "C" {static PyObject *meth_FbxSkeleton_GetLimbNodeSizeDefaultValue(PyObject *, PyObject *);}
static PyObject *meth_FbxSkeleton_GetLimbNodeSizeDefaultValue(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxSkeleton *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxSkeleton, &sipCpp))
        {
            double sipRes;

            sipRes = sipCpp->GetLimbNodeSizeDefaultValue();

            return PyFloat_FromDouble(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxSkeleton, sipName_GetLimbNodeSizeDefaultValue, doc_FbxSkeleton_GetLimbNodeSizeDefaultValue);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxSkeleton_SetLimbNodeColor, "SetLimbNodeColor(self, FbxColor) -> bool");

extern "C" {static PyObject *meth_FbxSkeleton_SetLimbNodeColor(PyObject *, PyObject *);}
static PyObject *meth_FbxSkeleton_SetLimbNodeColor(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxColor* a0;
         ::FbxSkeleton *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_FbxSkeleton, &sipCpp, sipType_FbxColor, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->SetLimbNodeColor(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxSkeleton, sipName_SetLimbNodeColor, doc_FbxSkeleton_SetLimbNodeColor);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxSkeleton_GetLimbNodeColor, "GetLimbNodeColor(self) -> FbxColor");

extern "C" {static PyObject *meth_FbxSkeleton_GetLimbNodeColor(PyObject *, PyObject *);}
static PyObject *meth_FbxSkeleton_GetLimbNodeColor(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxSkeleton *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxSkeleton, &sipCpp))
        {
             ::FbxColor*sipRes;

            sipRes = new  ::FbxColor(sipCpp->GetLimbNodeColor());

            return sipConvertFromNewType(sipRes,sipType_FbxColor,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxSkeleton, sipName_GetLimbNodeColor, doc_FbxSkeleton_GetLimbNodeColor);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxSkeleton_GetLimbNodeColorIsSet, "GetLimbNodeColorIsSet(self) -> bool");

extern "C" {static PyObject *meth_FbxSkeleton_GetLimbNodeColorIsSet(PyObject *, PyObject *);}
static PyObject *meth_FbxSkeleton_GetLimbNodeColorIsSet(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxSkeleton *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxSkeleton, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->GetLimbNodeColorIsSet();

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxSkeleton, sipName_GetLimbNodeColorIsSet, doc_FbxSkeleton_GetLimbNodeColorIsSet);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxSkeleton_GetLimbNodeColorDefaultValue, "GetLimbNodeColorDefaultValue(self) -> FbxColor");

extern "C" {static PyObject *meth_FbxSkeleton_GetLimbNodeColorDefaultValue(PyObject *, PyObject *);}
static PyObject *meth_FbxSkeleton_GetLimbNodeColorDefaultValue(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxSkeleton *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxSkeleton, &sipCpp))
        {
             ::FbxColor*sipRes;

            sipRes = new  ::FbxColor(sipCpp->GetLimbNodeColorDefaultValue());

            return sipConvertFromNewType(sipRes,sipType_FbxColor,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxSkeleton, sipName_GetLimbNodeColorDefaultValue, doc_FbxSkeleton_GetLimbNodeColorDefaultValue);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxSkeleton_IsSkeletonRoot, "IsSkeletonRoot(self) -> bool");

extern "C" {static PyObject *meth_FbxSkeleton_IsSkeletonRoot(PyObject *, PyObject *);}
static PyObject *meth_FbxSkeleton_IsSkeletonRoot(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxSkeleton *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxSkeleton, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->IsSkeletonRoot();

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxSkeleton, sipName_IsSkeletonRoot, doc_FbxSkeleton_IsSkeletonRoot);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *slot_FbxSkeleton___ne__(PyObject *,PyObject *);}
static PyObject *slot_FbxSkeleton___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxSkeleton *sipCpp = reinterpret_cast< ::FbxSkeleton *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxSkeleton));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxSkeleton* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxSkeleton, &a0))
        {
            bool sipRes;

            sipRes = !sipCpp-> ::FbxSkeleton::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_fbx, ne_slot, sipType_FbxSkeleton, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_FbxSkeleton___eq__(PyObject *,PyObject *);}
static PyObject *slot_FbxSkeleton___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxSkeleton *sipCpp = reinterpret_cast< ::FbxSkeleton *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxSkeleton));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxSkeleton* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxSkeleton, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::FbxSkeleton::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_fbx, eq_slot, sipType_FbxSkeleton, sipSelf, sipArg);
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_FbxSkeleton(void *, const sipTypeDef *);}
static void *cast_FbxSkeleton(void *sipCppV, const sipTypeDef *targetType)
{
     ::FbxSkeleton *sipCpp = reinterpret_cast< ::FbxSkeleton *>(sipCppV);

    if (targetType == sipType_FbxSkeleton)
        return sipCppV;

    sipCppV = ((const sipClassTypeDef *)sipType_FbxNodeAttribute)->ctd_cast(static_cast< ::FbxNodeAttribute *>(sipCpp), targetType);
    if (sipCppV)
        return sipCppV;

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_FbxSkeleton(void *, int);}
static void release_FbxSkeleton(void *, int)
{
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_FbxSkeleton[] = {{233, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_FbxSkeleton[] = {
    {(void *)slot_FbxSkeleton___ne__, ne_slot},
    {(void *)slot_FbxSkeleton___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_FbxSkeleton[] = {
    {sipName_Create, meth_FbxSkeleton_Create, METH_VARARGS, doc_FbxSkeleton_Create},
    {sipName_GetAttributeType, meth_FbxSkeleton_GetAttributeType, METH_VARARGS, doc_FbxSkeleton_GetAttributeType},
    {sipName_GetClassId, meth_FbxSkeleton_GetClassId, METH_VARARGS, doc_FbxSkeleton_GetClassId},
    {sipName_GetLimbLengthDefaultValue, meth_FbxSkeleton_GetLimbLengthDefaultValue, METH_VARARGS, doc_FbxSkeleton_GetLimbLengthDefaultValue},
    {sipName_GetLimbNodeColor, meth_FbxSkeleton_GetLimbNodeColor, METH_VARARGS, doc_FbxSkeleton_GetLimbNodeColor},
    {sipName_GetLimbNodeColorDefaultValue, meth_FbxSkeleton_GetLimbNodeColorDefaultValue, METH_VARARGS, doc_FbxSkeleton_GetLimbNodeColorDefaultValue},
    {sipName_GetLimbNodeColorIsSet, meth_FbxSkeleton_GetLimbNodeColorIsSet, METH_VARARGS, doc_FbxSkeleton_GetLimbNodeColorIsSet},
    {sipName_GetLimbNodeSizeDefaultValue, meth_FbxSkeleton_GetLimbNodeSizeDefaultValue, METH_VARARGS, doc_FbxSkeleton_GetLimbNodeSizeDefaultValue},
    {sipName_GetSkeletonType, meth_FbxSkeleton_GetSkeletonType, METH_VARARGS, doc_FbxSkeleton_GetSkeletonType},
    {sipName_GetSkeletonTypeDefaultValue, meth_FbxSkeleton_GetSkeletonTypeDefaultValue, METH_VARARGS, doc_FbxSkeleton_GetSkeletonTypeDefaultValue},
    {sipName_GetSkeletonTypeIsSet, meth_FbxSkeleton_GetSkeletonTypeIsSet, METH_VARARGS, doc_FbxSkeleton_GetSkeletonTypeIsSet},
    {sipName_IsSkeletonRoot, meth_FbxSkeleton_IsSkeletonRoot, METH_VARARGS, doc_FbxSkeleton_IsSkeletonRoot},
    {sipName_Reset, meth_FbxSkeleton_Reset, METH_VARARGS, doc_FbxSkeleton_Reset},
    {sipName_SetLimbNodeColor, meth_FbxSkeleton_SetLimbNodeColor, METH_VARARGS, doc_FbxSkeleton_SetLimbNodeColor},
    {sipName_SetSkeletonType, meth_FbxSkeleton_SetSkeletonType, METH_VARARGS, doc_FbxSkeleton_SetSkeletonType}
};


extern "C" {static PyObject *varget_FbxSkeleton_ClassId(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxSkeleton_ClassId(void *, PyObject *sipPySelf, PyObject *)
{
    static PyObject *sipPy = SIP_NULLPTR;
     ::FbxClassId*sipVal;

    if (sipPy)
    {
        Py_INCREF(sipPy);
        return sipPy;
    }

    sipVal = & ::FbxSkeleton::ClassId;

    sipPy = sipConvertFromType(sipVal, sipType_FbxClassId, SIP_NULLPTR);

    if (sipPy)
    {
        sipKeepReference(sipPy, -371, sipPySelf);
        Py_INCREF(sipPy);
    }

    return sipPy;
}


extern "C" {static int varset_FbxSkeleton_ClassId(void *, PyObject *, PyObject *);}
static int varset_FbxSkeleton_ClassId(void *, PyObject *sipPy, PyObject *)
{
     ::FbxClassId*sipVal;
    int sipIsErr = 0;
    sipVal = reinterpret_cast< ::FbxClassId *>(sipForceConvertToType(sipPy, sipType_FbxClassId, SIP_NULLPTR, SIP_NOT_NONE, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

     ::FbxSkeleton::ClassId = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxSkeleton_LimbLength(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxSkeleton_LimbLength(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
     ::FbxPropertyDouble1*sipVal;
     ::FbxSkeleton *sipCpp = reinterpret_cast< ::FbxSkeleton *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -373);

    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->LimbLength;

    sipPy = sipConvertFromType(sipVal, sipType_FbxPropertyDouble1, SIP_NULLPTR);

    if (sipPy)
    {
        sipKeepReference(sipPy, -372, sipPySelf);
        sipKeepReference(sipPySelf, -373, sipPy);
    }

    return sipPy;
}


extern "C" {static int varset_FbxSkeleton_LimbLength(void *, PyObject *, PyObject *);}
static int varset_FbxSkeleton_LimbLength(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::FbxPropertyDouble1*sipVal;
     ::FbxSkeleton *sipCpp = reinterpret_cast< ::FbxSkeleton *>(sipSelf);

    int sipIsErr = 0;
    sipVal = reinterpret_cast< ::FbxPropertyDouble1 *>(sipForceConvertToType(sipPy, sipType_FbxPropertyDouble1, SIP_NULLPTR, SIP_NOT_NONE, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->LimbLength = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxSkeleton_Size(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxSkeleton_Size(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
     ::FbxPropertyDouble1*sipVal;
     ::FbxSkeleton *sipCpp = reinterpret_cast< ::FbxSkeleton *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -375);

    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->Size;

    sipPy = sipConvertFromType(sipVal, sipType_FbxPropertyDouble1, SIP_NULLPTR);

    if (sipPy)
    {
        sipKeepReference(sipPy, -374, sipPySelf);
        sipKeepReference(sipPySelf, -375, sipPy);
    }

    return sipPy;
}


extern "C" {static int varset_FbxSkeleton_Size(void *, PyObject *, PyObject *);}
static int varset_FbxSkeleton_Size(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::FbxPropertyDouble1*sipVal;
     ::FbxSkeleton *sipCpp = reinterpret_cast< ::FbxSkeleton *>(sipSelf);

    int sipIsErr = 0;
    sipVal = reinterpret_cast< ::FbxPropertyDouble1 *>(sipForceConvertToType(sipPy, sipType_FbxPropertyDouble1, SIP_NULLPTR, SIP_NOT_NONE, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->Size = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxSkeleton_sDefaultLimbLength(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxSkeleton_sDefaultLimbLength(void *, PyObject *, PyObject *)
{
     ::FbxDouble sipVal;

    sipVal =  ::FbxSkeleton::sDefaultLimbLength;

    return PyFloat_FromDouble(sipVal);
}


extern "C" {static PyObject *varget_FbxSkeleton_sDefaultSize(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxSkeleton_sDefaultSize(void *, PyObject *, PyObject *)
{
     ::FbxDouble sipVal;

    sipVal =  ::FbxSkeleton::sDefaultSize;

    return PyFloat_FromDouble(sipVal);
}


extern "C" {static PyObject *varget_FbxSkeleton_sLimbLength(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxSkeleton_sLimbLength(void *, PyObject *, PyObject *)
{
    const char*sipVal;

    sipVal =  ::FbxSkeleton::sLimbLength;

    if (sipVal == SIP_NULLPTR)
    {
        Py_INCREF(Py_None);
        return Py_None;
    }

    return PyUnicode_FromString(sipVal);
}


extern "C" {static int varset_FbxSkeleton_sLimbLength(void *, PyObject *, PyObject *);}
static int varset_FbxSkeleton_sLimbLength(void *, PyObject *sipPy, PyObject *)
{
    const char*sipVal;
    sipVal = sipString_AsUTF8String(&sipPy);

    if (PyErr_Occurred() != SIP_NULLPTR)
        return -1;

     ::FbxSkeleton::sLimbLength = sipVal;

    static PyObject *sipKeep = SIP_NULLPTR;

    Py_XDECREF(sipKeep);
    sipKeep = sipPy;
    Py_INCREF(sipKeep);

    return 0;
}


extern "C" {static PyObject *varget_FbxSkeleton_sSize(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxSkeleton_sSize(void *, PyObject *, PyObject *)
{
    const char*sipVal;

    sipVal =  ::FbxSkeleton::sSize;

    if (sipVal == SIP_NULLPTR)
    {
        Py_INCREF(Py_None);
        return Py_None;
    }

    return PyUnicode_FromString(sipVal);
}


extern "C" {static int varset_FbxSkeleton_sSize(void *, PyObject *, PyObject *);}
static int varset_FbxSkeleton_sSize(void *, PyObject *sipPy, PyObject *)
{
    const char*sipVal;
    sipVal = sipString_AsUTF8String(&sipPy);

    if (PyErr_Occurred() != SIP_NULLPTR)
        return -1;

     ::FbxSkeleton::sSize = sipVal;

    static PyObject *sipKeep = SIP_NULLPTR;

    Py_XDECREF(sipKeep);
    sipKeep = sipPy;
    Py_INCREF(sipKeep);

    return 0;
}

sipVariableDef variables_FbxSkeleton[] = {
    {ClassVariable, sipName_ClassId, (PyMethodDef *)varget_FbxSkeleton_ClassId, (PyMethodDef *)varset_FbxSkeleton_ClassId, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_LimbLength, (PyMethodDef *)varget_FbxSkeleton_LimbLength, (PyMethodDef *)varset_FbxSkeleton_LimbLength, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_Size, (PyMethodDef *)varget_FbxSkeleton_Size, (PyMethodDef *)varset_FbxSkeleton_Size, SIP_NULLPTR, SIP_NULLPTR},
    {ClassVariable, sipName_sDefaultLimbLength, (PyMethodDef *)varget_FbxSkeleton_sDefaultLimbLength, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {ClassVariable, sipName_sDefaultSize, (PyMethodDef *)varget_FbxSkeleton_sDefaultSize, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {ClassVariable, sipName_sLimbLength, (PyMethodDef *)varget_FbxSkeleton_sLimbLength, (PyMethodDef *)varset_FbxSkeleton_sLimbLength, SIP_NULLPTR, SIP_NULLPTR},
    {ClassVariable, sipName_sSize, (PyMethodDef *)varget_FbxSkeleton_sSize, (PyMethodDef *)varset_FbxSkeleton_sSize, SIP_NULLPTR, SIP_NULLPTR},
};


/* Define the enum members and ints to be added to this type. */
static sipIntInstanceDef intInstances_FbxSkeleton[] = {
    {sipName_eRoot, static_cast<int>( ::FbxSkeleton::eRoot)},
    {sipName_eLimb, static_cast<int>( ::FbxSkeleton::eLimb)},
    {sipName_eLimbNode, static_cast<int>( ::FbxSkeleton::eLimbNode)},
    {sipName_eEffector, static_cast<int>( ::FbxSkeleton::eEffector)},
    {0, 0}
};


sipClassTypeDef sipTypeDef_fbx_FbxSkeleton = {
    {
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_FbxSkeleton,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_FbxSkeleton,
        {0, 0, 1},
        15, methods_FbxSkeleton,
        7, variables_FbxSkeleton,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, intInstances_FbxSkeleton, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    SIP_NULLPTR,
    -1,
    -1,
    supers_FbxSkeleton,
    slots_FbxSkeleton,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_FbxSkeleton,
    cast_FbxSkeleton,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};
