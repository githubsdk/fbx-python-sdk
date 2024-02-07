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




PyDoc_STRVAR(doc_FbxIODefaultRenderResolution_Reset, "Reset(self)");

extern "C" {static PyObject *meth_FbxIODefaultRenderResolution_Reset(PyObject *, PyObject *);}
static PyObject *meth_FbxIODefaultRenderResolution_Reset(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxIODefaultRenderResolution *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxIODefaultRenderResolution, &sipCpp))
        {
            sipCpp->Reset();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxIODefaultRenderResolution, sipName_Reset, doc_FbxIODefaultRenderResolution_Reset);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_FbxIODefaultRenderResolution(void *, int);}
static void release_FbxIODefaultRenderResolution(void *sipCppV, int)
{
    delete reinterpret_cast< ::FbxIODefaultRenderResolution *>(sipCppV);
}


extern "C" {static void *array_FbxIODefaultRenderResolution(Py_ssize_t);}
static void *array_FbxIODefaultRenderResolution(Py_ssize_t sipNrElem)
{
    return new  ::FbxIODefaultRenderResolution[sipNrElem];
}


extern "C" {static void assign_FbxIODefaultRenderResolution(void *, Py_ssize_t, void *);}
static void assign_FbxIODefaultRenderResolution(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::FbxIODefaultRenderResolution *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::FbxIODefaultRenderResolution *>(sipSrc);
}


extern "C" {static void *copy_FbxIODefaultRenderResolution(const void *, Py_ssize_t);}
static void *copy_FbxIODefaultRenderResolution(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::FbxIODefaultRenderResolution(reinterpret_cast<const  ::FbxIODefaultRenderResolution *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_FbxIODefaultRenderResolution(sipSimpleWrapper *);}
static void dealloc_FbxIODefaultRenderResolution(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_FbxIODefaultRenderResolution(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_FbxIODefaultRenderResolution(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_FbxIODefaultRenderResolution(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::FbxIODefaultRenderResolution *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new  ::FbxIODefaultRenderResolution();

            return sipCpp;
        }
    }

    {
        const  ::FbxIODefaultRenderResolution* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_FbxIODefaultRenderResolution, &a0))
        {
            sipCpp = new  ::FbxIODefaultRenderResolution(*a0);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


static PyMethodDef methods_FbxIODefaultRenderResolution[] = {
    {sipName_Reset, meth_FbxIODefaultRenderResolution_Reset, METH_VARARGS, doc_FbxIODefaultRenderResolution_Reset}
};


extern "C" {static PyObject *varget_FbxIODefaultRenderResolution_mCameraName(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxIODefaultRenderResolution_mCameraName(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
     ::FbxString*sipVal;
     ::FbxIODefaultRenderResolution *sipCpp = reinterpret_cast< ::FbxIODefaultRenderResolution *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -1523);

    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->mCameraName;

    sipPy = sipConvertFromType(sipVal, sipType_FbxString, SIP_NULLPTR);

    if (sipPy)
    {
        sipKeepReference(sipPy, -1522, sipPySelf);
        sipKeepReference(sipPySelf, -1523, sipPy);
    }

    return sipPy;
}


extern "C" {static int varset_FbxIODefaultRenderResolution_mCameraName(void *, PyObject *, PyObject *);}
static int varset_FbxIODefaultRenderResolution_mCameraName(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::FbxString*sipVal;
     ::FbxIODefaultRenderResolution *sipCpp = reinterpret_cast< ::FbxIODefaultRenderResolution *>(sipSelf);

    int sipIsErr = 0;
    int sipValState;
    sipVal = reinterpret_cast< ::FbxString *>(sipForceConvertToType(sipPy, sipType_FbxString, SIP_NULLPTR, SIP_NOT_NONE, &sipValState, &sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->mCameraName = *sipVal;

    sipReleaseType(sipVal, sipType_FbxString, sipValState);

    return 0;
}


extern "C" {static PyObject *varget_FbxIODefaultRenderResolution_mIsOK(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxIODefaultRenderResolution_mIsOK(void *sipSelf, PyObject *, PyObject *)
{
    bool sipVal;
     ::FbxIODefaultRenderResolution *sipCpp = reinterpret_cast< ::FbxIODefaultRenderResolution *>(sipSelf);

    sipVal = sipCpp->mIsOK;

    return PyBool_FromLong(sipVal);
}


extern "C" {static int varset_FbxIODefaultRenderResolution_mIsOK(void *, PyObject *, PyObject *);}
static int varset_FbxIODefaultRenderResolution_mIsOK(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
     ::FbxIODefaultRenderResolution *sipCpp = reinterpret_cast< ::FbxIODefaultRenderResolution *>(sipSelf);

    sipVal = sipConvertToBool(sipPy);

    if (sipVal < 0)
        return -1;

    sipCpp->mIsOK = static_cast<bool>(sipVal);

    return 0;
}


extern "C" {static PyObject *varget_FbxIODefaultRenderResolution_mResolutionH(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxIODefaultRenderResolution_mResolutionH(void *sipSelf, PyObject *, PyObject *)
{
    double sipVal;
     ::FbxIODefaultRenderResolution *sipCpp = reinterpret_cast< ::FbxIODefaultRenderResolution *>(sipSelf);

    sipVal = sipCpp->mResolutionH;

    return PyFloat_FromDouble(sipVal);
}


extern "C" {static int varset_FbxIODefaultRenderResolution_mResolutionH(void *, PyObject *, PyObject *);}
static int varset_FbxIODefaultRenderResolution_mResolutionH(void *sipSelf, PyObject *sipPy, PyObject *)
{
    double sipVal;
     ::FbxIODefaultRenderResolution *sipCpp = reinterpret_cast< ::FbxIODefaultRenderResolution *>(sipSelf);

    sipVal = PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != SIP_NULLPTR)
        return -1;

    sipCpp->mResolutionH = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxIODefaultRenderResolution_mResolutionMode(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxIODefaultRenderResolution_mResolutionMode(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
     ::FbxString*sipVal;
     ::FbxIODefaultRenderResolution *sipCpp = reinterpret_cast< ::FbxIODefaultRenderResolution *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -1525);

    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->mResolutionMode;

    sipPy = sipConvertFromType(sipVal, sipType_FbxString, SIP_NULLPTR);

    if (sipPy)
    {
        sipKeepReference(sipPy, -1524, sipPySelf);
        sipKeepReference(sipPySelf, -1525, sipPy);
    }

    return sipPy;
}


extern "C" {static int varset_FbxIODefaultRenderResolution_mResolutionMode(void *, PyObject *, PyObject *);}
static int varset_FbxIODefaultRenderResolution_mResolutionMode(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::FbxString*sipVal;
     ::FbxIODefaultRenderResolution *sipCpp = reinterpret_cast< ::FbxIODefaultRenderResolution *>(sipSelf);

    int sipIsErr = 0;
    int sipValState;
    sipVal = reinterpret_cast< ::FbxString *>(sipForceConvertToType(sipPy, sipType_FbxString, SIP_NULLPTR, SIP_NOT_NONE, &sipValState, &sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->mResolutionMode = *sipVal;

    sipReleaseType(sipVal, sipType_FbxString, sipValState);

    return 0;
}


extern "C" {static PyObject *varget_FbxIODefaultRenderResolution_mResolutionW(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxIODefaultRenderResolution_mResolutionW(void *sipSelf, PyObject *, PyObject *)
{
    double sipVal;
     ::FbxIODefaultRenderResolution *sipCpp = reinterpret_cast< ::FbxIODefaultRenderResolution *>(sipSelf);

    sipVal = sipCpp->mResolutionW;

    return PyFloat_FromDouble(sipVal);
}


extern "C" {static int varset_FbxIODefaultRenderResolution_mResolutionW(void *, PyObject *, PyObject *);}
static int varset_FbxIODefaultRenderResolution_mResolutionW(void *sipSelf, PyObject *sipPy, PyObject *)
{
    double sipVal;
     ::FbxIODefaultRenderResolution *sipCpp = reinterpret_cast< ::FbxIODefaultRenderResolution *>(sipSelf);

    sipVal = PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != SIP_NULLPTR)
        return -1;

    sipCpp->mResolutionW = sipVal;

    return 0;
}

sipVariableDef variables_FbxIODefaultRenderResolution[] = {
    {InstanceVariable, sipName_mCameraName, (PyMethodDef *)varget_FbxIODefaultRenderResolution_mCameraName, (PyMethodDef *)varset_FbxIODefaultRenderResolution_mCameraName, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_mIsOK, (PyMethodDef *)varget_FbxIODefaultRenderResolution_mIsOK, (PyMethodDef *)varset_FbxIODefaultRenderResolution_mIsOK, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_mResolutionH, (PyMethodDef *)varget_FbxIODefaultRenderResolution_mResolutionH, (PyMethodDef *)varset_FbxIODefaultRenderResolution_mResolutionH, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_mResolutionMode, (PyMethodDef *)varget_FbxIODefaultRenderResolution_mResolutionMode, (PyMethodDef *)varset_FbxIODefaultRenderResolution_mResolutionMode, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_mResolutionW, (PyMethodDef *)varget_FbxIODefaultRenderResolution_mResolutionW, (PyMethodDef *)varset_FbxIODefaultRenderResolution_mResolutionW, SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_FbxIODefaultRenderResolution, "\1FbxIODefaultRenderResolution()\n"
"FbxIODefaultRenderResolution(FbxIODefaultRenderResolution)");


sipClassTypeDef sipTypeDef_fbx_FbxIODefaultRenderResolution = {
    {
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_FbxIODefaultRenderResolution,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_FbxIODefaultRenderResolution,
        {0, 0, 1},
        1, methods_FbxIODefaultRenderResolution,
        5, variables_FbxIODefaultRenderResolution,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_FbxIODefaultRenderResolution,
    -1,
    -1,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_FbxIODefaultRenderResolution,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_FbxIODefaultRenderResolution,
    assign_FbxIODefaultRenderResolution,
    array_FbxIODefaultRenderResolution,
    copy_FbxIODefaultRenderResolution,
    release_FbxIODefaultRenderResolution,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};
