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




PyDoc_STRVAR(doc_FbxEffector_Reset, "Reset(self)");

extern "C" {static PyObject *meth_FbxEffector_Reset(PyObject *, PyObject *);}
static PyObject *meth_FbxEffector_Reset(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxEffector *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxEffector, &sipCpp))
        {
            sipCpp->Reset();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxEffector, sipName_Reset, doc_FbxEffector_Reset);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_FbxEffector(void *, int);}
static void release_FbxEffector(void *sipCppV, int)
{
    delete reinterpret_cast< ::FbxEffector *>(sipCppV);
}


extern "C" {static void *array_FbxEffector(Py_ssize_t);}
static void *array_FbxEffector(Py_ssize_t sipNrElem)
{
    return new  ::FbxEffector[sipNrElem];
}


extern "C" {static void assign_FbxEffector(void *, Py_ssize_t, void *);}
static void assign_FbxEffector(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::FbxEffector *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::FbxEffector *>(sipSrc);
}


extern "C" {static void *copy_FbxEffector(const void *, Py_ssize_t);}
static void *copy_FbxEffector(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::FbxEffector(reinterpret_cast<const  ::FbxEffector *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_FbxEffector(sipSimpleWrapper *);}
static void dealloc_FbxEffector(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_FbxEffector(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_FbxEffector(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_FbxEffector(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::FbxEffector *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new  ::FbxEffector();

            return sipCpp;
        }
    }

    {
        const  ::FbxEffector* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_FbxEffector, &a0))
        {
            sipCpp = new  ::FbxEffector(*a0);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


static PyMethodDef methods_FbxEffector[] = {
    {sipName_Reset, meth_FbxEffector_Reset, METH_VARARGS, doc_FbxEffector_Reset}
};


extern "C" {static PyObject *varget_FbxEffector_mNode(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxEffector_mNode(void *sipSelf, PyObject *, PyObject *)
{
     ::FbxNode*sipVal;
     ::FbxEffector *sipCpp = reinterpret_cast< ::FbxEffector *>(sipSelf);

    sipVal = sipCpp->mNode;

    return sipConvertFromType(sipVal, sipType_FbxNode, SIP_NULLPTR);
}


extern "C" {static int varset_FbxEffector_mNode(void *, PyObject *, PyObject *);}
static int varset_FbxEffector_mNode(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::FbxNode*sipVal;
     ::FbxEffector *sipCpp = reinterpret_cast< ::FbxEffector *>(sipSelf);

    int sipIsErr = 0;
    sipVal = reinterpret_cast< ::FbxNode *>(sipForceConvertToType(sipPy, sipType_FbxNode, SIP_NULLPTR, 0, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->mNode = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxEffector_mShow(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxEffector_mShow(void *sipSelf, PyObject *, PyObject *)
{
    bool sipVal;
     ::FbxEffector *sipCpp = reinterpret_cast< ::FbxEffector *>(sipSelf);

    sipVal = sipCpp->mShow;

    return PyBool_FromLong(sipVal);
}


extern "C" {static int varset_FbxEffector_mShow(void *, PyObject *, PyObject *);}
static int varset_FbxEffector_mShow(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
     ::FbxEffector *sipCpp = reinterpret_cast< ::FbxEffector *>(sipSelf);

    sipVal = sipConvertToBool(sipPy);

    if (sipVal < 0)
        return -1;

    sipCpp->mShow = static_cast<bool>(sipVal);

    return 0;
}

sipVariableDef variables_FbxEffector[] = {
    {InstanceVariable, sipName_mNode, (PyMethodDef *)varget_FbxEffector_mNode, (PyMethodDef *)varset_FbxEffector_mNode, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_mShow, (PyMethodDef *)varget_FbxEffector_mShow, (PyMethodDef *)varset_FbxEffector_mShow, SIP_NULLPTR, SIP_NULLPTR},
};


/* Define the enum members and ints to be added to this type. */
static sipIntInstanceDef intInstances_FbxEffector[] = {
    {sipName_eHips, static_cast<int>( ::FbxEffector::eHips)},
    {sipName_eLeftAnkle, static_cast<int>( ::FbxEffector::eLeftAnkle)},
    {sipName_eRightAnkle, static_cast<int>( ::FbxEffector::eRightAnkle)},
    {sipName_eLeftWrist, static_cast<int>( ::FbxEffector::eLeftWrist)},
    {sipName_eRightWrist, static_cast<int>( ::FbxEffector::eRightWrist)},
    {sipName_eLeftKnee, static_cast<int>( ::FbxEffector::eLeftKnee)},
    {sipName_eRightKnee, static_cast<int>( ::FbxEffector::eRightKnee)},
    {sipName_eLeftElbow, static_cast<int>( ::FbxEffector::eLeftElbow)},
    {sipName_eRightElbow, static_cast<int>( ::FbxEffector::eRightElbow)},
    {sipName_eChestOrigin, static_cast<int>( ::FbxEffector::eChestOrigin)},
    {sipName_eChestEnd, static_cast<int>( ::FbxEffector::eChestEnd)},
    {sipName_eLeftFoot, static_cast<int>( ::FbxEffector::eLeftFoot)},
    {sipName_eRightFoot, static_cast<int>( ::FbxEffector::eRightFoot)},
    {sipName_eLeftShoulder, static_cast<int>( ::FbxEffector::eLeftShoulder)},
    {sipName_eRightShoulder, static_cast<int>( ::FbxEffector::eRightShoulder)},
    {sipName_eHead, static_cast<int>( ::FbxEffector::eHead)},
    {sipName_eLeftHip, static_cast<int>( ::FbxEffector::eLeftHip)},
    {sipName_eRightHip, static_cast<int>( ::FbxEffector::eRightHip)},
    {sipName_eLeftHand, static_cast<int>( ::FbxEffector::eLeftHand)},
    {sipName_eRightHand, static_cast<int>( ::FbxEffector::eRightHand)},
    {sipName_eLeftHandThumb, static_cast<int>( ::FbxEffector::eLeftHandThumb)},
    {sipName_eLeftHandIndex, static_cast<int>( ::FbxEffector::eLeftHandIndex)},
    {sipName_eLeftHandMiddle, static_cast<int>( ::FbxEffector::eLeftHandMiddle)},
    {sipName_eLeftHandRing, static_cast<int>( ::FbxEffector::eLeftHandRing)},
    {sipName_eLeftHandPinky, static_cast<int>( ::FbxEffector::eLeftHandPinky)},
    {sipName_eLeftHandExtraFinger, static_cast<int>( ::FbxEffector::eLeftHandExtraFinger)},
    {sipName_eRightHandThumb, static_cast<int>( ::FbxEffector::eRightHandThumb)},
    {sipName_eRightHandIndex, static_cast<int>( ::FbxEffector::eRightHandIndex)},
    {sipName_eRightHandMiddle, static_cast<int>( ::FbxEffector::eRightHandMiddle)},
    {sipName_eRightHandRing, static_cast<int>( ::FbxEffector::eRightHandRing)},
    {sipName_eRightHandPinky, static_cast<int>( ::FbxEffector::eRightHandPinky)},
    {sipName_eRightHandExtraFinger, static_cast<int>( ::FbxEffector::eRightHandExtraFinger)},
    {sipName_eLeftFootThumb, static_cast<int>( ::FbxEffector::eLeftFootThumb)},
    {sipName_eLeftFootIndex, static_cast<int>( ::FbxEffector::eLeftFootIndex)},
    {sipName_eLeftFootMiddle, static_cast<int>( ::FbxEffector::eLeftFootMiddle)},
    {sipName_eLeftFootRing, static_cast<int>( ::FbxEffector::eLeftFootRing)},
    {sipName_eLeftFootPinky, static_cast<int>( ::FbxEffector::eLeftFootPinky)},
    {sipName_eLeftFootExtraFinger, static_cast<int>( ::FbxEffector::eLeftFootExtraFinger)},
    {sipName_eRightFootThumb, static_cast<int>( ::FbxEffector::eRightFootThumb)},
    {sipName_eRightFootIndex, static_cast<int>( ::FbxEffector::eRightFootIndex)},
    {sipName_eRightFootMiddle, static_cast<int>( ::FbxEffector::eRightFootMiddle)},
    {sipName_eRightFootRing, static_cast<int>( ::FbxEffector::eRightFootRing)},
    {sipName_eRightFootPinky, static_cast<int>( ::FbxEffector::eRightFootPinky)},
    {sipName_eRightFootExtraFinger, static_cast<int>( ::FbxEffector::eRightFootExtraFinger)},
    {sipName_eNodeIdCount, static_cast<int>( ::FbxEffector::eNodeIdCount)},
    {sipName_eDefaultSet, static_cast<int>( ::FbxEffector::eDefaultSet)},
    {sipName_eAux1Set, static_cast<int>( ::FbxEffector::eAux1Set)},
    {sipName_eAux2Set, static_cast<int>( ::FbxEffector::eAux2Set)},
    {sipName_eAux3Set, static_cast<int>( ::FbxEffector::eAux3Set)},
    {sipName_eAux4Set, static_cast<int>( ::FbxEffector::eAux4Set)},
    {sipName_eAux5Set, static_cast<int>( ::FbxEffector::eAux5Set)},
    {sipName_eAux6Set, static_cast<int>( ::FbxEffector::eAux6Set)},
    {sipName_eAux7Set, static_cast<int>( ::FbxEffector::eAux7Set)},
    {sipName_eAux8Set, static_cast<int>( ::FbxEffector::eAux8Set)},
    {sipName_eAux9Set, static_cast<int>( ::FbxEffector::eAux9Set)},
    {sipName_eAux10Set, static_cast<int>( ::FbxEffector::eAux10Set)},
    {sipName_eAux11Set, static_cast<int>( ::FbxEffector::eAux11Set)},
    {sipName_eAux12Set, static_cast<int>( ::FbxEffector::eAux12Set)},
    {sipName_eAux13Set, static_cast<int>( ::FbxEffector::eAux13Set)},
    {sipName_eAux14Set, static_cast<int>( ::FbxEffector::eAux14Set)},
    {sipName_eSetIdCount, static_cast<int>( ::FbxEffector::eSetIdCount)},
    {0, 0}
};

PyDoc_STRVAR(doc_FbxEffector, "\1FbxEffector()\n"
"FbxEffector(FbxEffector)");


sipClassTypeDef sipTypeDef_fbx_FbxEffector = {
    {
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_FbxEffector,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_FbxEffector,
        {0, 0, 1},
        1, methods_FbxEffector,
        2, variables_FbxEffector,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, intInstances_FbxEffector, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_FbxEffector,
    -1,
    -1,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_FbxEffector,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_FbxEffector,
    assign_FbxEffector,
    array_FbxEffector,
    copy_FbxEffector,
    release_FbxEffector,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};
