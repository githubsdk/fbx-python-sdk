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




/* Call the instance's destructor. */
extern "C" {static void release_FbxAnimCurveDef(void *, int);}
static void release_FbxAnimCurveDef(void *sipCppV, int)
{
    delete reinterpret_cast< ::FbxAnimCurveDef *>(sipCppV);
}


extern "C" {static void *array_FbxAnimCurveDef(Py_ssize_t);}
static void *array_FbxAnimCurveDef(Py_ssize_t sipNrElem)
{
    return new  ::FbxAnimCurveDef[sipNrElem];
}


extern "C" {static void assign_FbxAnimCurveDef(void *, Py_ssize_t, void *);}
static void assign_FbxAnimCurveDef(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::FbxAnimCurveDef *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::FbxAnimCurveDef *>(sipSrc);
}


extern "C" {static void *copy_FbxAnimCurveDef(const void *, Py_ssize_t);}
static void *copy_FbxAnimCurveDef(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::FbxAnimCurveDef(reinterpret_cast<const  ::FbxAnimCurveDef *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_FbxAnimCurveDef(sipSimpleWrapper *);}
static void dealloc_FbxAnimCurveDef(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_FbxAnimCurveDef(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_FbxAnimCurveDef(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_FbxAnimCurveDef(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::FbxAnimCurveDef *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new  ::FbxAnimCurveDef();

            return sipCpp;
        }
    }

    {
        const  ::FbxAnimCurveDef* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_FbxAnimCurveDef, &a0))
        {
            sipCpp = new  ::FbxAnimCurveDef(*a0);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


extern "C" {static PyObject *varget_FbxAnimCurveDef_sDEFAULT_VELOCITY(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxAnimCurveDef_sDEFAULT_VELOCITY(void *, PyObject *, PyObject *)
{
    float sipVal;

    sipVal =  ::FbxAnimCurveDef::sDEFAULT_VELOCITY;

    return PyFloat_FromDouble((double)sipVal);
}


extern "C" {static PyObject *varget_FbxAnimCurveDef_sDEFAULT_WEIGHT(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxAnimCurveDef_sDEFAULT_WEIGHT(void *, PyObject *, PyObject *)
{
    float sipVal;

    sipVal =  ::FbxAnimCurveDef::sDEFAULT_WEIGHT;

    return PyFloat_FromDouble((double)sipVal);
}


extern "C" {static PyObject *varget_FbxAnimCurveDef_sMAX_WEIGHT(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxAnimCurveDef_sMAX_WEIGHT(void *, PyObject *, PyObject *)
{
    float sipVal;

    sipVal =  ::FbxAnimCurveDef::sMAX_WEIGHT;

    return PyFloat_FromDouble((double)sipVal);
}


extern "C" {static PyObject *varget_FbxAnimCurveDef_sMIN_WEIGHT(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxAnimCurveDef_sMIN_WEIGHT(void *, PyObject *, PyObject *)
{
    float sipVal;

    sipVal =  ::FbxAnimCurveDef::sMIN_WEIGHT;

    return PyFloat_FromDouble((double)sipVal);
}

sipVariableDef variables_FbxAnimCurveDef[] = {
    {ClassVariable, sipName_sDEFAULT_VELOCITY, (PyMethodDef *)varget_FbxAnimCurveDef_sDEFAULT_VELOCITY, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {ClassVariable, sipName_sDEFAULT_WEIGHT, (PyMethodDef *)varget_FbxAnimCurveDef_sDEFAULT_WEIGHT, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {ClassVariable, sipName_sMAX_WEIGHT, (PyMethodDef *)varget_FbxAnimCurveDef_sMAX_WEIGHT, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {ClassVariable, sipName_sMIN_WEIGHT, (PyMethodDef *)varget_FbxAnimCurveDef_sMIN_WEIGHT, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
};


/* Define the enum members and ints to be added to this type. */
static sipIntInstanceDef intInstances_FbxAnimCurveDef[] = {
    {sipName_eConstantStandard, static_cast<int>( ::FbxAnimCurveDef::eConstantStandard)},
    {sipName_eConstantNext, static_cast<int>( ::FbxAnimCurveDef::eConstantNext)},
    {sipName_eRightSlope, static_cast<int>( ::FbxAnimCurveDef::eRightSlope)},
    {sipName_eNextLeftSlope, static_cast<int>( ::FbxAnimCurveDef::eNextLeftSlope)},
    {sipName_eWeights, static_cast<int>( ::FbxAnimCurveDef::eWeights)},
    {sipName_eRightWeight, static_cast<int>( ::FbxAnimCurveDef::eRightWeight)},
    {sipName_eNextLeftWeight, static_cast<int>( ::FbxAnimCurveDef::eNextLeftWeight)},
    {sipName_eVelocity, static_cast<int>( ::FbxAnimCurveDef::eVelocity)},
    {sipName_eRightVelocity, static_cast<int>( ::FbxAnimCurveDef::eRightVelocity)},
    {sipName_eNextLeftVelocity, static_cast<int>( ::FbxAnimCurveDef::eNextLeftVelocity)},
    {sipName_eTCBTension, static_cast<int>( ::FbxAnimCurveDef::eTCBTension)},
    {sipName_eTCBContinuity, static_cast<int>( ::FbxAnimCurveDef::eTCBContinuity)},
    {sipName_eTCBBias, static_cast<int>( ::FbxAnimCurveDef::eTCBBias)},
    {sipName_eInterpolationConstant, static_cast<int>( ::FbxAnimCurveDef::eInterpolationConstant)},
    {sipName_eInterpolationLinear, static_cast<int>( ::FbxAnimCurveDef::eInterpolationLinear)},
    {sipName_eInterpolationCubic, static_cast<int>( ::FbxAnimCurveDef::eInterpolationCubic)},
    {sipName_eTangentAuto, static_cast<int>( ::FbxAnimCurveDef::eTangentAuto)},
    {sipName_eTangentTCB, static_cast<int>( ::FbxAnimCurveDef::eTangentTCB)},
    {sipName_eTangentUser, static_cast<int>( ::FbxAnimCurveDef::eTangentUser)},
    {sipName_eTangentGenericBreak, static_cast<int>( ::FbxAnimCurveDef::eTangentGenericBreak)},
    {sipName_eTangentBreak, static_cast<int>( ::FbxAnimCurveDef::eTangentBreak)},
    {sipName_eTangentAutoBreak, static_cast<int>( ::FbxAnimCurveDef::eTangentAutoBreak)},
    {sipName_eTangentGenericClamp, static_cast<int>( ::FbxAnimCurveDef::eTangentGenericClamp)},
    {sipName_eTangentGenericTimeIndependent, static_cast<int>( ::FbxAnimCurveDef::eTangentGenericTimeIndependent)},
    {sipName_eTangentGenericClampProgressive, static_cast<int>( ::FbxAnimCurveDef::eTangentGenericClampProgressive)},
    {sipName_eTangentShowNone, static_cast<int>( ::FbxAnimCurveDef::eTangentShowNone)},
    {sipName_eTangentShowLeft, static_cast<int>( ::FbxAnimCurveDef::eTangentShowLeft)},
    {sipName_eTangentShowRight, static_cast<int>( ::FbxAnimCurveDef::eTangentShowRight)},
    {sipName_eTangentShowBoth, static_cast<int>( ::FbxAnimCurveDef::eTangentShowBoth)},
    {sipName_eVelocityNone, static_cast<int>( ::FbxAnimCurveDef::eVelocityNone)},
    {sipName_eVelocityRight, static_cast<int>( ::FbxAnimCurveDef::eVelocityRight)},
    {sipName_eVelocityNextLeft, static_cast<int>( ::FbxAnimCurveDef::eVelocityNextLeft)},
    {sipName_eVelocityAll, static_cast<int>( ::FbxAnimCurveDef::eVelocityAll)},
    {sipName_eWeightedNone, static_cast<int>( ::FbxAnimCurveDef::eWeightedNone)},
    {sipName_eWeightedRight, static_cast<int>( ::FbxAnimCurveDef::eWeightedRight)},
    {sipName_eWeightedNextLeft, static_cast<int>( ::FbxAnimCurveDef::eWeightedNextLeft)},
    {sipName_eWeightedAll, static_cast<int>( ::FbxAnimCurveDef::eWeightedAll)},
    {0, 0}
};

PyDoc_STRVAR(doc_FbxAnimCurveDef, "\1FbxAnimCurveDef()\n"
"FbxAnimCurveDef(FbxAnimCurveDef)");


sipClassTypeDef sipTypeDef_fbx_FbxAnimCurveDef = {
    {
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_FbxAnimCurveDef,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_FbxAnimCurveDef,
        {0, 0, 1},
        0, SIP_NULLPTR,
        4, variables_FbxAnimCurveDef,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, intInstances_FbxAnimCurveDef, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_FbxAnimCurveDef,
    -1,
    -1,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_FbxAnimCurveDef,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_FbxAnimCurveDef,
    assign_FbxAnimCurveDef,
    array_FbxAnimCurveDef,
    copy_FbxAnimCurveDef,
    release_FbxAnimCurveDef,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};
