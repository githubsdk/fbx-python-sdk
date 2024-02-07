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




PyDoc_STRVAR(doc_FbxControlSet_Reset, "Reset(self)");

extern "C" {static PyObject *meth_FbxControlSet_Reset(PyObject *, PyObject *);}
static PyObject *meth_FbxControlSet_Reset(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxControlSet *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxControlSet, &sipCpp))
        {
            sipCpp->Reset();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxControlSet, sipName_Reset, doc_FbxControlSet_Reset);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxControlSet_SetType, "SetType(self, FbxControlSet.EType)");

extern "C" {static PyObject *meth_FbxControlSet_SetType(PyObject *, PyObject *);}
static PyObject *meth_FbxControlSet_SetType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxControlSet::EType a0;
         ::FbxControlSet *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_FbxControlSet, &sipCpp, sipType_FbxControlSet_EType, &a0))
        {
            sipCpp->SetType(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxControlSet, sipName_SetType, doc_FbxControlSet_SetType);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxControlSet_GetType, "GetType(self) -> FbxControlSet.EType");

extern "C" {static PyObject *meth_FbxControlSet_GetType(PyObject *, PyObject *);}
static PyObject *meth_FbxControlSet_GetType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxControlSet *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxControlSet, &sipCpp))
        {
             ::FbxControlSet::EType sipRes;

            sipRes = sipCpp->GetType();

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_FbxControlSet_EType);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxControlSet, sipName_GetType, doc_FbxControlSet_GetType);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxControlSet_SetUseAxis, "SetUseAxis(self, bool)");

extern "C" {static PyObject *meth_FbxControlSet_SetUseAxis(PyObject *, PyObject *);}
static PyObject *meth_FbxControlSet_SetUseAxis(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        bool a0;
         ::FbxControlSet *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_FbxControlSet, &sipCpp, &a0))
        {
            sipCpp->SetUseAxis(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxControlSet, sipName_SetUseAxis, doc_FbxControlSet_SetUseAxis);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxControlSet_GetUseAxis, "GetUseAxis(self) -> bool");

extern "C" {static PyObject *meth_FbxControlSet_GetUseAxis(PyObject *, PyObject *);}
static PyObject *meth_FbxControlSet_GetUseAxis(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxControlSet *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxControlSet, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->GetUseAxis();

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxControlSet, sipName_GetUseAxis, doc_FbxControlSet_GetUseAxis);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxControlSet_SetLockTransform, "SetLockTransform(self, bool)");

extern "C" {static PyObject *meth_FbxControlSet_SetLockTransform(PyObject *, PyObject *);}
static PyObject *meth_FbxControlSet_SetLockTransform(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        bool a0;
         ::FbxControlSet *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_FbxControlSet, &sipCpp, &a0))
        {
            sipCpp->SetLockTransform(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxControlSet, sipName_SetLockTransform, doc_FbxControlSet_SetLockTransform);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxControlSet_GetLockTransform, "GetLockTransform(self) -> bool");

extern "C" {static PyObject *meth_FbxControlSet_GetLockTransform(PyObject *, PyObject *);}
static PyObject *meth_FbxControlSet_GetLockTransform(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxControlSet *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxControlSet, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->GetLockTransform();

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxControlSet, sipName_GetLockTransform, doc_FbxControlSet_GetLockTransform);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxControlSet_SetLock3DPick, "SetLock3DPick(self, bool)");

extern "C" {static PyObject *meth_FbxControlSet_SetLock3DPick(PyObject *, PyObject *);}
static PyObject *meth_FbxControlSet_SetLock3DPick(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        bool a0;
         ::FbxControlSet *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_FbxControlSet, &sipCpp, &a0))
        {
            sipCpp->SetLock3DPick(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxControlSet, sipName_SetLock3DPick, doc_FbxControlSet_SetLock3DPick);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxControlSet_GetLock3DPick, "GetLock3DPick(self) -> bool");

extern "C" {static PyObject *meth_FbxControlSet_GetLock3DPick(PyObject *, PyObject *);}
static PyObject *meth_FbxControlSet_GetLock3DPick(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxControlSet *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxControlSet, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->GetLock3DPick();

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxControlSet, sipName_GetLock3DPick, doc_FbxControlSet_GetLock3DPick);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxControlSet_SetControlSetLink, "SetControlSetLink(self, FbxCharacter.ENodeId, FbxControlSetLink) -> bool");

extern "C" {static PyObject *meth_FbxControlSet_SetControlSetLink(PyObject *, PyObject *);}
static PyObject *meth_FbxControlSet_SetControlSetLink(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxCharacter::ENodeId a0;
        const  ::FbxControlSetLink* a1;
         ::FbxControlSet *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BEJ9", &sipSelf, sipType_FbxControlSet, &sipCpp, sipType_FbxCharacter_ENodeId, &a0, sipType_FbxControlSetLink, &a1))
        {
            bool sipRes;

            sipRes = sipCpp->SetControlSetLink(a0,*a1);

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxControlSet, sipName_SetControlSetLink, doc_FbxControlSet_SetControlSetLink);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxControlSet_GetControlSetLink, "GetControlSetLink(self, FbxCharacter.ENodeId, FbxControlSetLink = None) -> bool");

extern "C" {static PyObject *meth_FbxControlSet_GetControlSetLink(PyObject *, PyObject *);}
static PyObject *meth_FbxControlSet_GetControlSetLink(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxCharacter::ENodeId a0;
         ::FbxControlSetLink* a1 = 0;
        const  ::FbxControlSet *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE|J8", &sipSelf, sipType_FbxControlSet, &sipCpp, sipType_FbxCharacter_ENodeId, &a0, sipType_FbxControlSetLink, &a1))
        {
            bool sipRes;

            sipRes = sipCpp->GetControlSetLink(a0,a1);

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxControlSet, sipName_GetControlSetLink, doc_FbxControlSet_GetControlSetLink);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxControlSet_SetEffector, "SetEffector(self, FbxEffector.ENodeId, FbxEffector) -> bool");

extern "C" {static PyObject *meth_FbxControlSet_SetEffector(PyObject *, PyObject *);}
static PyObject *meth_FbxControlSet_SetEffector(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxEffector::ENodeId a0;
         ::FbxEffector* a1;
         ::FbxControlSet *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BEJ9", &sipSelf, sipType_FbxControlSet, &sipCpp, sipType_FbxEffector_ENodeId, &a0, sipType_FbxEffector, &a1))
        {
            bool sipRes;

            sipRes = sipCpp->SetEffector(a0,*a1);

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxControlSet, sipName_SetEffector, doc_FbxControlSet_SetEffector);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxControlSet_GetEffector, "GetEffector(self, FbxEffector.ENodeId, FbxEffector = None) -> bool");

extern "C" {static PyObject *meth_FbxControlSet_GetEffector(PyObject *, PyObject *);}
static PyObject *meth_FbxControlSet_GetEffector(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxEffector::ENodeId a0;
         ::FbxEffector* a1 = 0;
         ::FbxControlSet *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE|J8", &sipSelf, sipType_FbxControlSet, &sipCpp, sipType_FbxEffector_ENodeId, &a0, sipType_FbxEffector, &a1))
        {
            bool sipRes;

            sipRes = sipCpp->GetEffector(a0,a1);

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxControlSet, sipName_GetEffector, doc_FbxControlSet_GetEffector);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxControlSet_SetEffectorAux, "SetEffectorAux(self, FbxEffector.ENodeId, FbxNode, FbxEffector.ESetId = FbxEffector.eAux1Set) -> bool");

extern "C" {static PyObject *meth_FbxControlSet_SetEffectorAux(PyObject *, PyObject *);}
static PyObject *meth_FbxControlSet_SetEffectorAux(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxEffector::ENodeId a0;
         ::FbxNode* a1;
         ::FbxEffector::ESetId a2 = FbxEffector::eAux1Set;
         ::FbxControlSet *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BEJ8|E", &sipSelf, sipType_FbxControlSet, &sipCpp, sipType_FbxEffector_ENodeId, &a0, sipType_FbxNode, &a1, sipType_FbxEffector_ESetId, &a2))
        {
            bool sipRes;

            sipRes = sipCpp->SetEffectorAux(a0,a1,a2);

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxControlSet, sipName_SetEffectorAux, doc_FbxControlSet_SetEffectorAux);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxControlSet_GetEffectorAux, "GetEffectorAux(self, FbxEffector.ENodeId, FbxEffector.ESetId = FbxEffector.eAux1Set) -> Tuple[bool, FbxNode]");

extern "C" {static PyObject *meth_FbxControlSet_GetEffectorAux(PyObject *, PyObject *);}
static PyObject *meth_FbxControlSet_GetEffectorAux(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxEffector::ENodeId a0;
         ::FbxNode* a1;
         ::FbxEffector::ESetId a2 = FbxEffector::eAux1Set;
        const  ::FbxControlSet *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE|E", &sipSelf, sipType_FbxControlSet, &sipCpp, sipType_FbxEffector_ENodeId, &a0, sipType_FbxEffector_ESetId, &a2))
        {
            bool sipRes;

            sipRes = sipCpp->GetEffectorAux(a0,&a1,a2);

            return sipBuildResult(0,"(bD)",sipRes,a1,sipType_FbxNode,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxControlSet, sipName_GetEffectorAux, doc_FbxControlSet_GetEffectorAux);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxControlSet_GetEffectorNodeName, "GetEffectorNodeName(FbxEffector.ENodeId) -> str");

extern "C" {static PyObject *meth_FbxControlSet_GetEffectorNodeName(PyObject *, PyObject *);}
static PyObject *meth_FbxControlSet_GetEffectorNodeName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxEffector::ENodeId a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "CE", &sipSelf, sipType_FbxEffector_ENodeId, &a0))
        {
            char*sipRes;

            sipRes =  ::FbxControlSet::GetEffectorNodeName(a0);

            if (sipRes == SIP_NULLPTR)
            {
                Py_INCREF(Py_None);
                return Py_None;
            }

            return PyUnicode_FromString(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxControlSet, sipName_GetEffectorNodeName, doc_FbxControlSet_GetEffectorNodeName);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxControlSet_GetEffectorNodeId, "GetEffectorNodeId(str) -> FbxEffector.ENodeId");

extern "C" {static PyObject *meth_FbxControlSet_GetEffectorNodeId(PyObject *, PyObject *);}
static PyObject *meth_FbxControlSet_GetEffectorNodeId(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        char* a0;
        PyObject *a0Keep;

        if (sipParseArgs(&sipParseErr, sipArgs, "CA8", &sipSelf, &a0Keep, &a0))
        {
             ::FbxEffector::ENodeId sipRes;

            sipRes =  ::FbxControlSet::GetEffectorNodeId(a0);
            Py_DECREF(a0Keep);

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_FbxEffector_ENodeId);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxControlSet, sipName_GetEffectorNodeId, doc_FbxControlSet_GetEffectorNodeId);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_FbxControlSet(void *, int);}
static void release_FbxControlSet(void *, int)
{
}


static PyMethodDef methods_FbxControlSet[] = {
    {sipName_GetControlSetLink, meth_FbxControlSet_GetControlSetLink, METH_VARARGS, doc_FbxControlSet_GetControlSetLink},
    {sipName_GetEffector, meth_FbxControlSet_GetEffector, METH_VARARGS, doc_FbxControlSet_GetEffector},
    {sipName_GetEffectorAux, meth_FbxControlSet_GetEffectorAux, METH_VARARGS, doc_FbxControlSet_GetEffectorAux},
    {sipName_GetEffectorNodeId, meth_FbxControlSet_GetEffectorNodeId, METH_VARARGS, doc_FbxControlSet_GetEffectorNodeId},
    {sipName_GetEffectorNodeName, meth_FbxControlSet_GetEffectorNodeName, METH_VARARGS, doc_FbxControlSet_GetEffectorNodeName},
    {sipName_GetLock3DPick, meth_FbxControlSet_GetLock3DPick, METH_VARARGS, doc_FbxControlSet_GetLock3DPick},
    {sipName_GetLockTransform, meth_FbxControlSet_GetLockTransform, METH_VARARGS, doc_FbxControlSet_GetLockTransform},
    {sipName_GetType, meth_FbxControlSet_GetType, METH_VARARGS, doc_FbxControlSet_GetType},
    {sipName_GetUseAxis, meth_FbxControlSet_GetUseAxis, METH_VARARGS, doc_FbxControlSet_GetUseAxis},
    {sipName_Reset, meth_FbxControlSet_Reset, METH_VARARGS, doc_FbxControlSet_Reset},
    {sipName_SetControlSetLink, meth_FbxControlSet_SetControlSetLink, METH_VARARGS, doc_FbxControlSet_SetControlSetLink},
    {sipName_SetEffector, meth_FbxControlSet_SetEffector, METH_VARARGS, doc_FbxControlSet_SetEffector},
    {sipName_SetEffectorAux, meth_FbxControlSet_SetEffectorAux, METH_VARARGS, doc_FbxControlSet_SetEffectorAux},
    {sipName_SetLock3DPick, meth_FbxControlSet_SetLock3DPick, METH_VARARGS, doc_FbxControlSet_SetLock3DPick},
    {sipName_SetLockTransform, meth_FbxControlSet_SetLockTransform, METH_VARARGS, doc_FbxControlSet_SetLockTransform},
    {sipName_SetType, meth_FbxControlSet_SetType, METH_VARARGS, doc_FbxControlSet_SetType},
    {sipName_SetUseAxis, meth_FbxControlSet_SetUseAxis, METH_VARARGS, doc_FbxControlSet_SetUseAxis}
};


/* Define the enum members and ints to be added to this type. */
static sipIntInstanceDef intInstances_FbxControlSet[] = {
    {sipName_eNone, static_cast<int>( ::FbxControlSet::eNone)},
    {sipName_eFkIk, static_cast<int>( ::FbxControlSet::eFkIk)},
    {sipName_eIkOnly, static_cast<int>( ::FbxControlSet::eIkOnly)},
    {0, 0}
};


sipClassTypeDef sipTypeDef_fbx_FbxControlSet = {
    {
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_FbxControlSet,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_FbxControlSet,
        {0, 0, 1},
        17, methods_FbxControlSet,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, intInstances_FbxControlSet, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    SIP_NULLPTR,
    -1,
    -1,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_FbxControlSet,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};