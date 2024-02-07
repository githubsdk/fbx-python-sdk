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




PyDoc_STRVAR(doc_FbxCriteria_ObjectType, "ObjectType(FbxClassId) -> FbxCriteria");

extern "C" {static PyObject *meth_FbxCriteria_ObjectType(PyObject *, PyObject *);}
static PyObject *meth_FbxCriteria_ObjectType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxClassId* a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "CJ9", &sipSelf, sipType_FbxClassId, &a0))
        {
             ::FbxCriteria*sipRes;

            sipRes = new  ::FbxCriteria( ::FbxCriteria::ObjectType(*a0));

            return sipConvertFromNewType(sipRes,sipType_FbxCriteria,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxCriteria, sipName_ObjectType, doc_FbxCriteria_ObjectType);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxCriteria_ObjectTypeStrict, "ObjectTypeStrict(FbxClassId) -> FbxCriteria");

extern "C" {static PyObject *meth_FbxCriteria_ObjectTypeStrict(PyObject *, PyObject *);}
static PyObject *meth_FbxCriteria_ObjectTypeStrict(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxClassId* a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "CJ9", &sipSelf, sipType_FbxClassId, &a0))
        {
             ::FbxCriteria*sipRes;

            sipRes = new  ::FbxCriteria( ::FbxCriteria::ObjectTypeStrict(*a0));

            return sipConvertFromNewType(sipRes,sipType_FbxCriteria,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxCriteria, sipName_ObjectTypeStrict, doc_FbxCriteria_ObjectTypeStrict);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxCriteria_IsProperty, "IsProperty() -> FbxCriteria");

extern "C" {static PyObject *meth_FbxCriteria_IsProperty(PyObject *, PyObject *);}
static PyObject *meth_FbxCriteria_IsProperty(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, "C", &sipSelf))
        {
             ::FbxCriteria*sipRes;

            sipRes = new  ::FbxCriteria( ::FbxCriteria::IsProperty());

            return sipConvertFromNewType(sipRes,sipType_FbxCriteria,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxCriteria, sipName_IsProperty, doc_FbxCriteria_IsProperty);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_FbxCriteria(void *, int);}
static void release_FbxCriteria(void *sipCppV, int)
{
    delete reinterpret_cast< ::FbxCriteria *>(sipCppV);
}


extern "C" {static void *array_FbxCriteria(Py_ssize_t);}
static void *array_FbxCriteria(Py_ssize_t sipNrElem)
{
    return new  ::FbxCriteria[sipNrElem];
}


extern "C" {static void assign_FbxCriteria(void *, Py_ssize_t, void *);}
static void assign_FbxCriteria(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::FbxCriteria *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::FbxCriteria *>(sipSrc);
}


extern "C" {static void *copy_FbxCriteria(const void *, Py_ssize_t);}
static void *copy_FbxCriteria(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::FbxCriteria(reinterpret_cast<const  ::FbxCriteria *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_FbxCriteria(sipSimpleWrapper *);}
static void dealloc_FbxCriteria(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_FbxCriteria(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_FbxCriteria(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_FbxCriteria(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::FbxCriteria *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new  ::FbxCriteria();

            return sipCpp;
        }
    }

    {
        const  ::FbxCriteria* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_FbxCriteria, &a0))
        {
            sipCpp = new  ::FbxCriteria(*a0);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


static PyMethodDef methods_FbxCriteria[] = {
    {sipName_IsProperty, meth_FbxCriteria_IsProperty, METH_VARARGS, doc_FbxCriteria_IsProperty},
    {sipName_ObjectType, meth_FbxCriteria_ObjectType, METH_VARARGS, doc_FbxCriteria_ObjectType},
    {sipName_ObjectTypeStrict, meth_FbxCriteria_ObjectTypeStrict, METH_VARARGS, doc_FbxCriteria_ObjectTypeStrict}
};

PyDoc_STRVAR(doc_FbxCriteria, "\1FbxCriteria()\n"
"FbxCriteria(FbxCriteria)");


sipClassTypeDef sipTypeDef_fbx_FbxCriteria = {
    {
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_FbxCriteria,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_FbxCriteria,
        {0, 0, 1},
        3, methods_FbxCriteria,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_FbxCriteria,
    -1,
    -1,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_FbxCriteria,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_FbxCriteria,
    assign_FbxCriteria,
    array_FbxCriteria,
    copy_FbxCriteria,
    release_FbxCriteria,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};
