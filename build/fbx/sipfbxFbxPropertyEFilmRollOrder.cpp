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




PyDoc_STRVAR(doc_FbxPropertyEFilmRollOrder_Get, "Get(self) -> FbxCamera.EFilmRollOrder");

extern "C" {static PyObject *meth_FbxPropertyEFilmRollOrder_Get(PyObject *, PyObject *);}
static PyObject *meth_FbxPropertyEFilmRollOrder_Get(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxPropertyEFilmRollOrder *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxPropertyEFilmRollOrder, &sipCpp))
        {
             ::FbxCamera::EFilmRollOrder sipRes;

            sipRes = sipCpp->Get();

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_FbxCamera_EFilmRollOrder);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxPropertyEFilmRollOrder, sipName_Get, doc_FbxPropertyEFilmRollOrder_Get);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_FbxPropertyEFilmRollOrder(void *, const sipTypeDef *);}
static void *cast_FbxPropertyEFilmRollOrder(void *sipCppV, const sipTypeDef *targetType)
{
     ::FbxPropertyEFilmRollOrder *sipCpp = reinterpret_cast< ::FbxPropertyEFilmRollOrder *>(sipCppV);

    if (targetType == sipType_FbxPropertyEFilmRollOrder)
        return sipCppV;

    if (targetType == sipType_FbxProperty)
        return static_cast< ::FbxProperty *>(sipCpp);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_FbxPropertyEFilmRollOrder(void *, int);}
static void release_FbxPropertyEFilmRollOrder(void *sipCppV, int)
{
    delete reinterpret_cast< ::FbxPropertyEFilmRollOrder *>(sipCppV);
}


extern "C" {static void *array_FbxPropertyEFilmRollOrder(Py_ssize_t);}
static void *array_FbxPropertyEFilmRollOrder(Py_ssize_t sipNrElem)
{
    return new  ::FbxPropertyEFilmRollOrder[sipNrElem];
}


extern "C" {static void assign_FbxPropertyEFilmRollOrder(void *, Py_ssize_t, void *);}
static void assign_FbxPropertyEFilmRollOrder(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::FbxPropertyEFilmRollOrder *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::FbxPropertyEFilmRollOrder *>(sipSrc);
}


extern "C" {static void *copy_FbxPropertyEFilmRollOrder(const void *, Py_ssize_t);}
static void *copy_FbxPropertyEFilmRollOrder(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::FbxPropertyEFilmRollOrder(reinterpret_cast<const  ::FbxPropertyEFilmRollOrder *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_FbxPropertyEFilmRollOrder(sipSimpleWrapper *);}
static void dealloc_FbxPropertyEFilmRollOrder(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_FbxPropertyEFilmRollOrder(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_FbxPropertyEFilmRollOrder(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_FbxPropertyEFilmRollOrder(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::FbxPropertyEFilmRollOrder *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new  ::FbxPropertyEFilmRollOrder();

            return sipCpp;
        }
    }

    {
        const  ::FbxProperty* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_FbxProperty, &a0))
        {
            sipCpp = new  ::FbxPropertyEFilmRollOrder(*a0);

            return sipCpp;
        }
    }

    {
        const  ::FbxPropertyEFilmRollOrder* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_FbxPropertyEFilmRollOrder, &a0))
        {
            sipCpp = new  ::FbxPropertyEFilmRollOrder(*a0);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_FbxPropertyEFilmRollOrder[] = {{258, 255, 1}};


static PyMethodDef methods_FbxPropertyEFilmRollOrder[] = {
    {sipName_Get, meth_FbxPropertyEFilmRollOrder_Get, METH_VARARGS, doc_FbxPropertyEFilmRollOrder_Get}
};

PyDoc_STRVAR(doc_FbxPropertyEFilmRollOrder, "\1FbxPropertyEFilmRollOrder()\n"
"FbxPropertyEFilmRollOrder(FbxProperty)\n"
"FbxPropertyEFilmRollOrder(FbxPropertyEFilmRollOrder)");


sipClassTypeDef sipTypeDef_fbx_FbxPropertyEFilmRollOrder = {
    {
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_FbxPropertyEFilmRollOrder,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_FbxPropertyEFilmRollOrder,
        {0, 0, 1},
        1, methods_FbxPropertyEFilmRollOrder,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_FbxPropertyEFilmRollOrder,
    -1,
    -1,
    supers_FbxPropertyEFilmRollOrder,
    SIP_NULLPTR,
    init_type_FbxPropertyEFilmRollOrder,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_FbxPropertyEFilmRollOrder,
    assign_FbxPropertyEFilmRollOrder,
    array_FbxPropertyEFilmRollOrder,
    copy_FbxPropertyEFilmRollOrder,
    release_FbxPropertyEFilmRollOrder,
    cast_FbxPropertyEFilmRollOrder,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};