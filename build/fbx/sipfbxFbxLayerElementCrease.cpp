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




class sipFbxLayerElementCrease : public  ::FbxLayerElementCrease
{
public:
    sipFbxLayerElementCrease();
    sipFbxLayerElementCrease(const  ::FbxLayerElementCrease&);
    ~sipFbxLayerElementCrease();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipFbxLayerElementCrease(const sipFbxLayerElementCrease &);
    sipFbxLayerElementCrease &operator = (const sipFbxLayerElementCrease &);
};

sipFbxLayerElementCrease::sipFbxLayerElementCrease():  ::FbxLayerElementCrease(), sipPySelf(SIP_NULLPTR)
{
}

sipFbxLayerElementCrease::sipFbxLayerElementCrease(const  ::FbxLayerElementCrease& a0):  ::FbxLayerElementCrease(a0), sipPySelf(SIP_NULLPTR)
{
}

sipFbxLayerElementCrease::~sipFbxLayerElementCrease()
{
    sipInstanceDestroyedEx(&sipPySelf);
}


PyDoc_STRVAR(doc_FbxLayerElementCrease_Create, "Create(FbxLayerContainer, str) -> FbxLayerElementCrease");

extern "C" {static PyObject *meth_FbxLayerElementCrease_Create(PyObject *, PyObject *);}
static PyObject *meth_FbxLayerElementCrease_Create(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxLayerContainer* a0;
        const char* a1;
        PyObject *a1Keep;

        if (sipParseArgs(&sipParseErr, sipArgs, "CJ8A8", &sipSelf, sipType_FbxLayerContainer, &a0, &a1Keep, &a1))
        {
             ::FbxLayerElementCrease*sipRes;

            sipRes =  ::FbxLayerElementCrease::Create(a0,a1);
            Py_DECREF(a1Keep);

            return sipConvertFromType(sipRes,sipType_FbxLayerElementCrease,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxLayerElementCrease, sipName_Create, doc_FbxLayerElementCrease_Create);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxLayerElementCrease_SetReferenceMode, "SetReferenceMode(self, FbxLayerElement.EReferenceMode)");

extern "C" {static PyObject *meth_FbxLayerElementCrease_SetReferenceMode(PyObject *, PyObject *);}
static PyObject *meth_FbxLayerElementCrease_SetReferenceMode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxLayerElement::EReferenceMode a0;
         ::FbxLayerElementCrease *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_FbxLayerElementCrease, &sipCpp, sipType_FbxLayerElement_EReferenceMode, &a0))
        {
            sipCpp->SetReferenceMode(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxLayerElementCrease, sipName_SetReferenceMode, doc_FbxLayerElementCrease_SetReferenceMode);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_FbxLayerElementCrease(void *, const sipTypeDef *);}
static void *cast_FbxLayerElementCrease(void *sipCppV, const sipTypeDef *targetType)
{
     ::FbxLayerElementCrease *sipCpp = reinterpret_cast< ::FbxLayerElementCrease *>(sipCppV);

    if (targetType == sipType_FbxLayerElementCrease)
        return sipCppV;

    sipCppV = ((const sipClassTypeDef *)sipType_FbxLayerElementTemplate_double)->ctd_cast(static_cast< ::FbxLayerElementTemplate_double *>(sipCpp), targetType);
    if (sipCppV)
        return sipCppV;

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_FbxLayerElementCrease(void *, int);}
static void release_FbxLayerElementCrease(void *sipCppV, int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipFbxLayerElementCrease *>(sipCppV);
    else
        delete reinterpret_cast< ::FbxLayerElementCrease *>(sipCppV);
}


extern "C" {static void assign_FbxLayerElementCrease(void *, Py_ssize_t, void *);}
static void assign_FbxLayerElementCrease(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::FbxLayerElementCrease *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::FbxLayerElementCrease *>(sipSrc);
}


extern "C" {static void *copy_FbxLayerElementCrease(const void *, Py_ssize_t);}
static void *copy_FbxLayerElementCrease(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::FbxLayerElementCrease(reinterpret_cast<const  ::FbxLayerElementCrease *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_FbxLayerElementCrease(sipSimpleWrapper *);}
static void dealloc_FbxLayerElementCrease(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipFbxLayerElementCrease *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_FbxLayerElementCrease(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_FbxLayerElementCrease(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_FbxLayerElementCrease(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipFbxLayerElementCrease *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new sipFbxLayerElementCrease();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const  ::FbxLayerElementCrease* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_FbxLayerElementCrease, &a0))
        {
            sipCpp = new sipFbxLayerElementCrease(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_FbxLayerElementCrease[] = {{199, 255, 1}};


static PyMethodDef methods_FbxLayerElementCrease[] = {
    {sipName_Create, meth_FbxLayerElementCrease_Create, METH_VARARGS, doc_FbxLayerElementCrease_Create},
    {sipName_SetReferenceMode, meth_FbxLayerElementCrease_SetReferenceMode, METH_VARARGS, doc_FbxLayerElementCrease_SetReferenceMode}
};

PyDoc_STRVAR(doc_FbxLayerElementCrease, "\1FbxLayerElementCrease()\n"
"FbxLayerElementCrease(FbxLayerElementCrease)");


sipClassTypeDef sipTypeDef_fbx_FbxLayerElementCrease = {
    {
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_FbxLayerElementCrease,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_FbxLayerElementCrease,
        {0, 0, 1},
        2, methods_FbxLayerElementCrease,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_FbxLayerElementCrease,
    -1,
    -1,
    supers_FbxLayerElementCrease,
    SIP_NULLPTR,
    init_type_FbxLayerElementCrease,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_FbxLayerElementCrease,
    assign_FbxLayerElementCrease,
    SIP_NULLPTR,
    copy_FbxLayerElementCrease,
    release_FbxLayerElementCrease,
    cast_FbxLayerElementCrease,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};
