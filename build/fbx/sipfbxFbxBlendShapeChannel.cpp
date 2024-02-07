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




PyDoc_STRVAR(doc_FbxBlendShapeChannel_Create, "Create(FbxManager, str) -> FbxBlendShapeChannel\n"
"Create(FbxObject, str) -> FbxBlendShapeChannel");

extern "C" {static PyObject *meth_FbxBlendShapeChannel_Create(PyObject *, PyObject *);}
static PyObject *meth_FbxBlendShapeChannel_Create(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxManager* a0;
        const char* a1;
        PyObject *a1Keep;

        if (sipParseArgs(&sipParseErr, sipArgs, "CJ8A8", &sipSelf, sipType_FbxManager, &a0, &a1Keep, &a1))
        {
             ::FbxBlendShapeChannel*sipRes;

            sipRes =  ::FbxBlendShapeChannel::Create(a0,a1);
            Py_DECREF(a1Keep);

            return sipConvertFromType(sipRes,sipType_FbxBlendShapeChannel,SIP_NULLPTR);
        }
    }

    {
         ::FbxObject* a0;
        const char* a1;
        PyObject *a1Keep;

        if (sipParseArgs(&sipParseErr, sipArgs, "CJ8A8", &sipSelf, sipType_FbxObject, &a0, &a1Keep, &a1))
        {
             ::FbxBlendShapeChannel*sipRes;

            sipRes =  ::FbxBlendShapeChannel::Create(a0,a1);
            Py_DECREF(a1Keep);

            return sipConvertFromType(sipRes,sipType_FbxBlendShapeChannel,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxBlendShapeChannel, sipName_Create, doc_FbxBlendShapeChannel_Create);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxBlendShapeChannel_GetClassId, "GetClassId(self) -> FbxClassId");

extern "C" {static PyObject *meth_FbxBlendShapeChannel_GetClassId(PyObject *, PyObject *);}
static PyObject *meth_FbxBlendShapeChannel_GetClassId(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_FbxBlendShapeChannel)) || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::FbxBlendShapeChannel *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxBlendShapeChannel, &sipCpp))
        {
             ::FbxClassId*sipRes;

            sipRes = new  ::FbxClassId((sipSelfWasArg ? sipCpp-> ::FbxBlendShapeChannel::GetClassId() : sipCpp->GetClassId()));

            return sipConvertFromNewType(sipRes,sipType_FbxClassId,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxBlendShapeChannel, sipName_GetClassId, doc_FbxBlendShapeChannel_GetClassId);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxBlendShapeChannel_SetBlendShapeDeformer, "SetBlendShapeDeformer(self, FbxBlendShape) -> bool");

extern "C" {static PyObject *meth_FbxBlendShapeChannel_SetBlendShapeDeformer(PyObject *, PyObject *);}
static PyObject *meth_FbxBlendShapeChannel_SetBlendShapeDeformer(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxBlendShape* a0;
         ::FbxBlendShapeChannel *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_FbxBlendShapeChannel, &sipCpp, sipType_FbxBlendShape, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->SetBlendShapeDeformer(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxBlendShapeChannel, sipName_SetBlendShapeDeformer, doc_FbxBlendShapeChannel_SetBlendShapeDeformer);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxBlendShapeChannel_GetBlendShapeDeformer, "GetBlendShapeDeformer(self) -> FbxBlendShape");

extern "C" {static PyObject *meth_FbxBlendShapeChannel_GetBlendShapeDeformer(PyObject *, PyObject *);}
static PyObject *meth_FbxBlendShapeChannel_GetBlendShapeDeformer(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxBlendShapeChannel *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxBlendShapeChannel, &sipCpp))
        {
             ::FbxBlendShape*sipRes;

            sipRes = sipCpp->GetBlendShapeDeformer();

            return sipConvertFromType(sipRes,sipType_FbxBlendShape,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxBlendShapeChannel, sipName_GetBlendShapeDeformer, doc_FbxBlendShapeChannel_GetBlendShapeDeformer);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxBlendShapeChannel_AddTargetShape, "AddTargetShape(self, FbxShape, float = 100) -> bool");

extern "C" {static PyObject *meth_FbxBlendShapeChannel_AddTargetShape(PyObject *, PyObject *);}
static PyObject *meth_FbxBlendShapeChannel_AddTargetShape(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxShape* a0;
        double a1 = 100;
         ::FbxBlendShapeChannel *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8|d", &sipSelf, sipType_FbxBlendShapeChannel, &sipCpp, sipType_FbxShape, &a0, &a1))
        {
            bool sipRes;

            sipRes = sipCpp->AddTargetShape(a0,a1);

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxBlendShapeChannel, sipName_AddTargetShape, doc_FbxBlendShapeChannel_AddTargetShape);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxBlendShapeChannel_RemoveTargetShape, "RemoveTargetShape(self, FbxShape) -> FbxShape");

extern "C" {static PyObject *meth_FbxBlendShapeChannel_RemoveTargetShape(PyObject *, PyObject *);}
static PyObject *meth_FbxBlendShapeChannel_RemoveTargetShape(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxShape* a0;
         ::FbxBlendShapeChannel *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_FbxBlendShapeChannel, &sipCpp, sipType_FbxShape, &a0))
        {
             ::FbxShape*sipRes;

            sipRes = sipCpp->RemoveTargetShape(a0);

            return sipConvertFromType(sipRes,sipType_FbxShape,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxBlendShapeChannel, sipName_RemoveTargetShape, doc_FbxBlendShapeChannel_RemoveTargetShape);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxBlendShapeChannel_GetTargetShapeCount, "GetTargetShapeCount(self) -> int");

extern "C" {static PyObject *meth_FbxBlendShapeChannel_GetTargetShapeCount(PyObject *, PyObject *);}
static PyObject *meth_FbxBlendShapeChannel_GetTargetShapeCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxBlendShapeChannel *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxBlendShapeChannel, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->GetTargetShapeCount();

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxBlendShapeChannel, sipName_GetTargetShapeCount, doc_FbxBlendShapeChannel_GetTargetShapeCount);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxBlendShapeChannel_GetTargetShape, "GetTargetShape(self, int) -> FbxShape");

extern "C" {static PyObject *meth_FbxBlendShapeChannel_GetTargetShape(PyObject *, PyObject *);}
static PyObject *meth_FbxBlendShapeChannel_GetTargetShape(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
         ::FbxBlendShapeChannel *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_FbxBlendShapeChannel, &sipCpp, &a0))
        {
             ::FbxShape*sipRes;

            sipRes = sipCpp->GetTargetShape(a0);

            return sipConvertFromType(sipRes,sipType_FbxShape,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxBlendShapeChannel, sipName_GetTargetShape, doc_FbxBlendShapeChannel_GetTargetShape);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxBlendShapeChannel_GetTargetShapeIndex, "GetTargetShapeIndex(self, FbxShape) -> int");

extern "C" {static PyObject *meth_FbxBlendShapeChannel_GetTargetShapeIndex(PyObject *, PyObject *);}
static PyObject *meth_FbxBlendShapeChannel_GetTargetShapeIndex(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxShape* a0;
         ::FbxBlendShapeChannel *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_FbxBlendShapeChannel, &sipCpp, sipType_FbxShape, &a0))
        {
            int sipRes;

            sipRes = sipCpp->GetTargetShapeIndex(a0);

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxBlendShapeChannel, sipName_GetTargetShapeIndex, doc_FbxBlendShapeChannel_GetTargetShapeIndex);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxBlendShapeChannel_GetTargetShapeFullWeights, "GetTargetShapeFullWeights(self) -> List");

extern "C" {static PyObject *meth_FbxBlendShapeChannel_GetTargetShapeFullWeights(PyObject *, PyObject *);}
static PyObject *meth_FbxBlendShapeChannel_GetTargetShapeFullWeights(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxBlendShapeChannel *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxBlendShapeChannel, &sipCpp))
        {
            PyObject * sipRes = SIP_NULLPTR;

#line 62 "D:\\Program Files\\Autodesk\\FBX\\FBX Python Bindings\\2020.3.4\\sip\\fbxblendshapechannel.sip"
    double * weights = sipCpp->GetTargetShapeFullWeights();
    int weightCount = sipCpp->GetTargetShapeCount();

    if ((sipRes = PyList_New(weightCount)) == NULL)
        return NULL;

    for (int i = 0; i < weightCount; ++i)
    {
        PyList_SET_ITEM(sipRes, i, PyFloat_FromDouble(*weights));
        weights++;
    }
#line 342 "D:\\Program Files\\Autodesk\\FBX\\FBX Python Bindings\\2020.3.4\\build\\fbx/sipfbxFbxBlendShapeChannel.cpp"

            return sipRes;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxBlendShapeChannel, sipName_GetTargetShapeFullWeights, doc_FbxBlendShapeChannel_GetTargetShapeFullWeights);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxBlendShapeChannel_SetFullWeightsCount, "SetFullWeightsCount(self, int)");

extern "C" {static PyObject *meth_FbxBlendShapeChannel_SetFullWeightsCount(PyObject *, PyObject *);}
static PyObject *meth_FbxBlendShapeChannel_SetFullWeightsCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
         ::FbxBlendShapeChannel *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_FbxBlendShapeChannel, &sipCpp, &a0))
        {
            sipCpp->SetFullWeightsCount(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxBlendShapeChannel, sipName_SetFullWeightsCount, doc_FbxBlendShapeChannel_SetFullWeightsCount);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxBlendShapeChannel_GetSubDeformerType, "GetSubDeformerType(self) -> FbxSubDeformer.EType");

extern "C" {static PyObject *meth_FbxBlendShapeChannel_GetSubDeformerType(PyObject *, PyObject *);}
static PyObject *meth_FbxBlendShapeChannel_GetSubDeformerType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxBlendShapeChannel *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxBlendShapeChannel, &sipCpp))
        {
             ::FbxSubDeformer::EType sipRes;

            sipRes = sipCpp->GetSubDeformerType();

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_FbxSubDeformer_EType);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxBlendShapeChannel, sipName_GetSubDeformerType, doc_FbxBlendShapeChannel_GetSubDeformerType);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxBlendShapeChannel_Reset, "Reset(self)");

extern "C" {static PyObject *meth_FbxBlendShapeChannel_Reset(PyObject *, PyObject *);}
static PyObject *meth_FbxBlendShapeChannel_Reset(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxBlendShapeChannel *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxBlendShapeChannel, &sipCpp))
        {
            sipCpp->Reset();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxBlendShapeChannel, sipName_Reset, doc_FbxBlendShapeChannel_Reset);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *slot_FbxBlendShapeChannel___ne__(PyObject *,PyObject *);}
static PyObject *slot_FbxBlendShapeChannel___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxBlendShapeChannel *sipCpp = reinterpret_cast< ::FbxBlendShapeChannel *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxBlendShapeChannel));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxShape* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxShape, &a0))
        {
            bool sipRes;

            sipRes = !sipCpp-> ::FbxBlendShapeChannel::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_fbx, ne_slot, sipType_FbxBlendShapeChannel, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_FbxBlendShapeChannel___eq__(PyObject *,PyObject *);}
static PyObject *slot_FbxBlendShapeChannel___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxBlendShapeChannel *sipCpp = reinterpret_cast< ::FbxBlendShapeChannel *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxBlendShapeChannel));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxShape* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxShape, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::FbxBlendShapeChannel::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_fbx, eq_slot, sipType_FbxBlendShapeChannel, sipSelf, sipArg);
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_FbxBlendShapeChannel(void *, const sipTypeDef *);}
static void *cast_FbxBlendShapeChannel(void *sipCppV, const sipTypeDef *targetType)
{
     ::FbxBlendShapeChannel *sipCpp = reinterpret_cast< ::FbxBlendShapeChannel *>(sipCppV);

    if (targetType == sipType_FbxBlendShapeChannel)
        return sipCppV;

    sipCppV = ((const sipClassTypeDef *)sipType_FbxSubDeformer)->ctd_cast(static_cast< ::FbxSubDeformer *>(sipCpp), targetType);
    if (sipCppV)
        return sipCppV;

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_FbxBlendShapeChannel(void *, int);}
static void release_FbxBlendShapeChannel(void *, int)
{
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_FbxBlendShapeChannel[] = {{348, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_FbxBlendShapeChannel[] = {
    {(void *)slot_FbxBlendShapeChannel___ne__, ne_slot},
    {(void *)slot_FbxBlendShapeChannel___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_FbxBlendShapeChannel[] = {
    {sipName_AddTargetShape, meth_FbxBlendShapeChannel_AddTargetShape, METH_VARARGS, doc_FbxBlendShapeChannel_AddTargetShape},
    {sipName_Create, meth_FbxBlendShapeChannel_Create, METH_VARARGS, doc_FbxBlendShapeChannel_Create},
    {sipName_GetBlendShapeDeformer, meth_FbxBlendShapeChannel_GetBlendShapeDeformer, METH_VARARGS, doc_FbxBlendShapeChannel_GetBlendShapeDeformer},
    {sipName_GetClassId, meth_FbxBlendShapeChannel_GetClassId, METH_VARARGS, doc_FbxBlendShapeChannel_GetClassId},
    {sipName_GetSubDeformerType, meth_FbxBlendShapeChannel_GetSubDeformerType, METH_VARARGS, doc_FbxBlendShapeChannel_GetSubDeformerType},
    {sipName_GetTargetShape, meth_FbxBlendShapeChannel_GetTargetShape, METH_VARARGS, doc_FbxBlendShapeChannel_GetTargetShape},
    {sipName_GetTargetShapeCount, meth_FbxBlendShapeChannel_GetTargetShapeCount, METH_VARARGS, doc_FbxBlendShapeChannel_GetTargetShapeCount},
    {sipName_GetTargetShapeFullWeights, meth_FbxBlendShapeChannel_GetTargetShapeFullWeights, METH_VARARGS, doc_FbxBlendShapeChannel_GetTargetShapeFullWeights},
    {sipName_GetTargetShapeIndex, meth_FbxBlendShapeChannel_GetTargetShapeIndex, METH_VARARGS, doc_FbxBlendShapeChannel_GetTargetShapeIndex},
    {sipName_RemoveTargetShape, meth_FbxBlendShapeChannel_RemoveTargetShape, METH_VARARGS, doc_FbxBlendShapeChannel_RemoveTargetShape},
    {sipName_Reset, meth_FbxBlendShapeChannel_Reset, METH_VARARGS, doc_FbxBlendShapeChannel_Reset},
    {sipName_SetBlendShapeDeformer, meth_FbxBlendShapeChannel_SetBlendShapeDeformer, METH_VARARGS, doc_FbxBlendShapeChannel_SetBlendShapeDeformer},
    {sipName_SetFullWeightsCount, meth_FbxBlendShapeChannel_SetFullWeightsCount, METH_VARARGS, doc_FbxBlendShapeChannel_SetFullWeightsCount}
};


extern "C" {static PyObject *varget_FbxBlendShapeChannel_ClassId(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxBlendShapeChannel_ClassId(void *, PyObject *sipPySelf, PyObject *)
{
    static PyObject *sipPy = SIP_NULLPTR;
     ::FbxClassId*sipVal;

    if (sipPy)
    {
        Py_INCREF(sipPy);
        return sipPy;
    }

    sipVal = & ::FbxBlendShapeChannel::ClassId;

    sipPy = sipConvertFromType(sipVal, sipType_FbxClassId, SIP_NULLPTR);

    if (sipPy)
    {
        sipKeepReference(sipPy, -464, sipPySelf);
        Py_INCREF(sipPy);
    }

    return sipPy;
}


extern "C" {static int varset_FbxBlendShapeChannel_ClassId(void *, PyObject *, PyObject *);}
static int varset_FbxBlendShapeChannel_ClassId(void *, PyObject *sipPy, PyObject *)
{
     ::FbxClassId*sipVal;
    int sipIsErr = 0;
    sipVal = reinterpret_cast< ::FbxClassId *>(sipForceConvertToType(sipPy, sipType_FbxClassId, SIP_NULLPTR, SIP_NOT_NONE, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

     ::FbxBlendShapeChannel::ClassId = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxBlendShapeChannel_DeformPercent(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxBlendShapeChannel_DeformPercent(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
     ::FbxPropertyDouble1*sipVal;
     ::FbxBlendShapeChannel *sipCpp = reinterpret_cast< ::FbxBlendShapeChannel *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -466);

    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->DeformPercent;

    sipPy = sipConvertFromType(sipVal, sipType_FbxPropertyDouble1, SIP_NULLPTR);

    if (sipPy)
    {
        sipKeepReference(sipPy, -465, sipPySelf);
        sipKeepReference(sipPySelf, -466, sipPy);
    }

    return sipPy;
}


extern "C" {static int varset_FbxBlendShapeChannel_DeformPercent(void *, PyObject *, PyObject *);}
static int varset_FbxBlendShapeChannel_DeformPercent(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::FbxPropertyDouble1*sipVal;
     ::FbxBlendShapeChannel *sipCpp = reinterpret_cast< ::FbxBlendShapeChannel *>(sipSelf);

    int sipIsErr = 0;
    sipVal = reinterpret_cast< ::FbxPropertyDouble1 *>(sipForceConvertToType(sipPy, sipType_FbxPropertyDouble1, SIP_NULLPTR, SIP_NOT_NONE, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->DeformPercent = *sipVal;

    return 0;
}

sipVariableDef variables_FbxBlendShapeChannel[] = {
    {ClassVariable, sipName_ClassId, (PyMethodDef *)varget_FbxBlendShapeChannel_ClassId, (PyMethodDef *)varset_FbxBlendShapeChannel_ClassId, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_DeformPercent, (PyMethodDef *)varget_FbxBlendShapeChannel_DeformPercent, (PyMethodDef *)varset_FbxBlendShapeChannel_DeformPercent, SIP_NULLPTR, SIP_NULLPTR},
};


sipClassTypeDef sipTypeDef_fbx_FbxBlendShapeChannel = {
    {
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_FbxBlendShapeChannel,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_FbxBlendShapeChannel,
        {0, 0, 1},
        13, methods_FbxBlendShapeChannel,
        2, variables_FbxBlendShapeChannel,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    SIP_NULLPTR,
    -1,
    -1,
    supers_FbxBlendShapeChannel,
    slots_FbxBlendShapeChannel,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_FbxBlendShapeChannel,
    cast_FbxBlendShapeChannel,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};