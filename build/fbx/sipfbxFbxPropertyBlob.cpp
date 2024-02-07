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




PyDoc_STRVAR(doc_FbxPropertyBlob_Get, "Get(self) -> FbxBlob");

extern "C" {static PyObject *meth_FbxPropertyBlob_Get(PyObject *, PyObject *);}
static PyObject *meth_FbxPropertyBlob_Get(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxPropertyBlob *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxPropertyBlob, &sipCpp))
        {
             ::FbxBlob*sipRes;

            sipRes = new  ::FbxBlob(sipCpp->Get());

            return sipConvertFromNewType(sipRes,sipType_FbxBlob,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxPropertyBlob, sipName_Get, doc_FbxPropertyBlob_Get);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_FbxPropertyBlob(void *, const sipTypeDef *);}
static void *cast_FbxPropertyBlob(void *sipCppV, const sipTypeDef *targetType)
{
     ::FbxPropertyBlob *sipCpp = reinterpret_cast< ::FbxPropertyBlob *>(sipCppV);

    if (targetType == sipType_FbxPropertyBlob)
        return sipCppV;

    if (targetType == sipType_FbxProperty)
        return static_cast< ::FbxProperty *>(sipCpp);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_FbxPropertyBlob(void *, int);}
static void release_FbxPropertyBlob(void *sipCppV, int)
{
    delete reinterpret_cast< ::FbxPropertyBlob *>(sipCppV);
}


extern "C" {static void *array_FbxPropertyBlob(Py_ssize_t);}
static void *array_FbxPropertyBlob(Py_ssize_t sipNrElem)
{
    return new  ::FbxPropertyBlob[sipNrElem];
}


extern "C" {static void assign_FbxPropertyBlob(void *, Py_ssize_t, void *);}
static void assign_FbxPropertyBlob(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::FbxPropertyBlob *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::FbxPropertyBlob *>(sipSrc);
}


extern "C" {static void *copy_FbxPropertyBlob(const void *, Py_ssize_t);}
static void *copy_FbxPropertyBlob(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::FbxPropertyBlob(reinterpret_cast<const  ::FbxPropertyBlob *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_FbxPropertyBlob(sipSimpleWrapper *);}
static void dealloc_FbxPropertyBlob(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_FbxPropertyBlob(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_FbxPropertyBlob(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_FbxPropertyBlob(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::FbxPropertyBlob *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new  ::FbxPropertyBlob();

            return sipCpp;
        }
    }

    {
        const  ::FbxProperty* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_FbxProperty, &a0))
        {
            sipCpp = new  ::FbxPropertyBlob(*a0);

            return sipCpp;
        }
    }

    {
        const  ::FbxPropertyBlob* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_FbxPropertyBlob, &a0))
        {
            sipCpp = new  ::FbxPropertyBlob(*a0);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_FbxPropertyBlob[] = {{258, 255, 1}};


static PyMethodDef methods_FbxPropertyBlob[] = {
    {sipName_Get, meth_FbxPropertyBlob_Get, METH_VARARGS, doc_FbxPropertyBlob_Get}
};

PyDoc_STRVAR(doc_FbxPropertyBlob, "\1FbxPropertyBlob()\n"
"FbxPropertyBlob(FbxProperty)\n"
"FbxPropertyBlob(FbxPropertyBlob)");


sipClassTypeDef sipTypeDef_fbx_FbxPropertyBlob = {
    {
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_FbxPropertyBlob,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_FbxPropertyBlob,
        {0, 0, 1},
        1, methods_FbxPropertyBlob,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_FbxPropertyBlob,
    -1,
    -1,
    supers_FbxPropertyBlob,
    SIP_NULLPTR,
    init_type_FbxPropertyBlob,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_FbxPropertyBlob,
    assign_FbxPropertyBlob,
    array_FbxPropertyBlob,
    copy_FbxPropertyBlob,
    release_FbxPropertyBlob,
    cast_FbxPropertyBlob,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};
