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




PyDoc_STRVAR(doc_FbxPropertyBool1_Get, "Get(self) -> bool");

extern "C" {static PyObject *meth_FbxPropertyBool1_Get(PyObject *, PyObject *);}
static PyObject *meth_FbxPropertyBool1_Get(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxPropertyBool1 *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxPropertyBool1, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->Get();

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxPropertyBool1, sipName_Get, doc_FbxPropertyBool1_Get);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_FbxPropertyBool1(void *, const sipTypeDef *);}
static void *cast_FbxPropertyBool1(void *sipCppV, const sipTypeDef *targetType)
{
     ::FbxPropertyBool1 *sipCpp = reinterpret_cast< ::FbxPropertyBool1 *>(sipCppV);

    if (targetType == sipType_FbxPropertyBool1)
        return sipCppV;

    if (targetType == sipType_FbxProperty)
        return static_cast< ::FbxProperty *>(sipCpp);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_FbxPropertyBool1(void *, int);}
static void release_FbxPropertyBool1(void *sipCppV, int)
{
    delete reinterpret_cast< ::FbxPropertyBool1 *>(sipCppV);
}


extern "C" {static void *array_FbxPropertyBool1(Py_ssize_t);}
static void *array_FbxPropertyBool1(Py_ssize_t sipNrElem)
{
    return new  ::FbxPropertyBool1[sipNrElem];
}


extern "C" {static void assign_FbxPropertyBool1(void *, Py_ssize_t, void *);}
static void assign_FbxPropertyBool1(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::FbxPropertyBool1 *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::FbxPropertyBool1 *>(sipSrc);
}


extern "C" {static void *copy_FbxPropertyBool1(const void *, Py_ssize_t);}
static void *copy_FbxPropertyBool1(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::FbxPropertyBool1(reinterpret_cast<const  ::FbxPropertyBool1 *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_FbxPropertyBool1(sipSimpleWrapper *);}
static void dealloc_FbxPropertyBool1(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_FbxPropertyBool1(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_FbxPropertyBool1(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_FbxPropertyBool1(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::FbxPropertyBool1 *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new  ::FbxPropertyBool1();

            return sipCpp;
        }
    }

    {
        const  ::FbxProperty* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_FbxProperty, &a0))
        {
            sipCpp = new  ::FbxPropertyBool1(*a0);

            return sipCpp;
        }
    }

    {
        const  ::FbxPropertyBool1* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_FbxPropertyBool1, &a0))
        {
            sipCpp = new  ::FbxPropertyBool1(*a0);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_FbxPropertyBool1[] = {{258, 255, 1}};


static PyMethodDef methods_FbxPropertyBool1[] = {
    {sipName_Get, meth_FbxPropertyBool1_Get, METH_VARARGS, doc_FbxPropertyBool1_Get}
};

PyDoc_STRVAR(doc_FbxPropertyBool1, "\1FbxPropertyBool1()\n"
"FbxPropertyBool1(FbxProperty)\n"
"FbxPropertyBool1(FbxPropertyBool1)");


sipClassTypeDef sipTypeDef_fbx_FbxPropertyBool1 = {
    {
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_FbxPropertyBool1,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_FbxPropertyBool1,
        {0, 0, 1},
        1, methods_FbxPropertyBool1,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_FbxPropertyBool1,
    -1,
    -1,
    supers_FbxPropertyBool1,
    SIP_NULLPTR,
    init_type_FbxPropertyBool1,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_FbxPropertyBool1,
    assign_FbxPropertyBool1,
    array_FbxPropertyBool1,
    copy_FbxPropertyBool1,
    release_FbxPropertyBool1,
    cast_FbxPropertyBool1,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};
