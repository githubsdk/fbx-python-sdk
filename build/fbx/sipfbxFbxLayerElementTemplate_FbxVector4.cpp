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




class sipFbxLayerElementTemplate_FbxVector4 : public  ::FbxLayerElementTemplate_FbxVector4
{
public:
    sipFbxLayerElementTemplate_FbxVector4();
    sipFbxLayerElementTemplate_FbxVector4(const  ::FbxLayerElementTemplate_FbxVector4&);
    ~sipFbxLayerElementTemplate_FbxVector4();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipFbxLayerElementTemplate_FbxVector4(const sipFbxLayerElementTemplate_FbxVector4 &);
    sipFbxLayerElementTemplate_FbxVector4 &operator = (const sipFbxLayerElementTemplate_FbxVector4 &);
};

sipFbxLayerElementTemplate_FbxVector4::sipFbxLayerElementTemplate_FbxVector4():  ::FbxLayerElementTemplate_FbxVector4(), sipPySelf(SIP_NULLPTR)
{
}

sipFbxLayerElementTemplate_FbxVector4::sipFbxLayerElementTemplate_FbxVector4(const  ::FbxLayerElementTemplate_FbxVector4& a0):  ::FbxLayerElementTemplate_FbxVector4(a0), sipPySelf(SIP_NULLPTR)
{
}

sipFbxLayerElementTemplate_FbxVector4::~sipFbxLayerElementTemplate_FbxVector4()
{
    sipInstanceDestroyedEx(&sipPySelf);
}


PyDoc_STRVAR(doc_FbxLayerElementTemplate_FbxVector4_GetDirectArray, "GetDirectArray(self) -> FbxLayerElementArrayTemplate_FbxVector4");

extern "C" {static PyObject *meth_FbxLayerElementTemplate_FbxVector4_GetDirectArray(PyObject *, PyObject *);}
static PyObject *meth_FbxLayerElementTemplate_FbxVector4_GetDirectArray(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxLayerElementTemplate_FbxVector4 *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxLayerElementTemplate_FbxVector4, &sipCpp))
        {
             ::FbxLayerElementArrayTemplate_FbxVector4*sipRes;

            sipRes = &sipCpp->GetDirectArray();

            return sipConvertFromType(sipRes,sipType_FbxLayerElementArrayTemplate_FbxVector4,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxLayerElementTemplate_FbxVector4, sipName_GetDirectArray, doc_FbxLayerElementTemplate_FbxVector4_GetDirectArray);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxLayerElementTemplate_FbxVector4_GetIndexArray, "GetIndexArray(self) -> FbxLayerElementArrayTemplate_int");

extern "C" {static PyObject *meth_FbxLayerElementTemplate_FbxVector4_GetIndexArray(PyObject *, PyObject *);}
static PyObject *meth_FbxLayerElementTemplate_FbxVector4_GetIndexArray(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxLayerElementTemplate_FbxVector4 *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxLayerElementTemplate_FbxVector4, &sipCpp))
        {
             ::FbxLayerElementArrayTemplate_int*sipRes;

            sipRes = &sipCpp->GetIndexArray();

            return sipConvertFromType(sipRes,sipType_FbxLayerElementArrayTemplate_int,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxLayerElementTemplate_FbxVector4, sipName_GetIndexArray, doc_FbxLayerElementTemplate_FbxVector4_GetIndexArray);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxLayerElementTemplate_FbxVector4_Clear, "Clear(self) -> bool");

extern "C" {static PyObject *meth_FbxLayerElementTemplate_FbxVector4_Clear(PyObject *, PyObject *);}
static PyObject *meth_FbxLayerElementTemplate_FbxVector4_Clear(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxLayerElementTemplate_FbxVector4 *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxLayerElementTemplate_FbxVector4, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->Clear();

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxLayerElementTemplate_FbxVector4, sipName_Clear, doc_FbxLayerElementTemplate_FbxVector4_Clear);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxLayerElementTemplate_FbxVector4_RemapIndexTo, "RemapIndexTo(self, FbxLayerElement.EMappingMode) -> int");

extern "C" {static PyObject *meth_FbxLayerElementTemplate_FbxVector4_RemapIndexTo(PyObject *, PyObject *);}
static PyObject *meth_FbxLayerElementTemplate_FbxVector4_RemapIndexTo(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxLayerElement::EMappingMode a0;
         ::FbxLayerElementTemplate_FbxVector4 *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_FbxLayerElementTemplate_FbxVector4, &sipCpp, sipType_FbxLayerElement_EMappingMode, &a0))
        {
            int sipRes;

            sipRes = sipCpp->RemapIndexTo(a0);

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxLayerElementTemplate_FbxVector4, sipName_RemapIndexTo, doc_FbxLayerElementTemplate_FbxVector4_RemapIndexTo);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *slot_FbxLayerElementTemplate_FbxVector4___ne__(PyObject *,PyObject *);}
static PyObject *slot_FbxLayerElementTemplate_FbxVector4___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxLayerElementTemplate_FbxVector4 *sipCpp = reinterpret_cast< ::FbxLayerElementTemplate_FbxVector4 *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxLayerElementTemplate_FbxVector4));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxLayerElementTemplate_FbxVector4* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxLayerElementTemplate_FbxVector4, &a0))
        {
            bool sipRes;

            sipRes = !sipCpp-> ::FbxLayerElementTemplate_FbxVector4::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_fbx, ne_slot, sipType_FbxLayerElementTemplate_FbxVector4, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_FbxLayerElementTemplate_FbxVector4___eq__(PyObject *,PyObject *);}
static PyObject *slot_FbxLayerElementTemplate_FbxVector4___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxLayerElementTemplate_FbxVector4 *sipCpp = reinterpret_cast< ::FbxLayerElementTemplate_FbxVector4 *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxLayerElementTemplate_FbxVector4));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxLayerElementTemplate_FbxVector4* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxLayerElementTemplate_FbxVector4, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::FbxLayerElementTemplate_FbxVector4::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_fbx, eq_slot, sipType_FbxLayerElementTemplate_FbxVector4, sipSelf, sipArg);
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_FbxLayerElementTemplate_FbxVector4(void *, const sipTypeDef *);}
static void *cast_FbxLayerElementTemplate_FbxVector4(void *sipCppV, const sipTypeDef *targetType)
{
     ::FbxLayerElementTemplate_FbxVector4 *sipCpp = reinterpret_cast< ::FbxLayerElementTemplate_FbxVector4 *>(sipCppV);

    if (targetType == sipType_FbxLayerElementTemplate_FbxVector4)
        return sipCppV;

    if (targetType == sipType_FbxLayerElement)
        return static_cast< ::FbxLayerElement *>(sipCpp);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_FbxLayerElementTemplate_FbxVector4(void *, int);}
static void release_FbxLayerElementTemplate_FbxVector4(void *sipCppV, int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipFbxLayerElementTemplate_FbxVector4 *>(sipCppV);
}


extern "C" {static void dealloc_FbxLayerElementTemplate_FbxVector4(sipSimpleWrapper *);}
static void dealloc_FbxLayerElementTemplate_FbxVector4(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipFbxLayerElementTemplate_FbxVector4 *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_FbxLayerElementTemplate_FbxVector4(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_FbxLayerElementTemplate_FbxVector4(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_FbxLayerElementTemplate_FbxVector4(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipFbxLayerElementTemplate_FbxVector4 *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new sipFbxLayerElementTemplate_FbxVector4();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const  ::FbxLayerElementTemplate_FbxVector4* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_FbxLayerElementTemplate_FbxVector4, &a0))
        {
            sipCpp = new sipFbxLayerElementTemplate_FbxVector4(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_FbxLayerElementTemplate_FbxVector4[] = {{172, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_FbxLayerElementTemplate_FbxVector4[] = {
    {(void *)slot_FbxLayerElementTemplate_FbxVector4___ne__, ne_slot},
    {(void *)slot_FbxLayerElementTemplate_FbxVector4___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_FbxLayerElementTemplate_FbxVector4[] = {
    {sipName_Clear, meth_FbxLayerElementTemplate_FbxVector4_Clear, METH_VARARGS, doc_FbxLayerElementTemplate_FbxVector4_Clear},
    {sipName_GetDirectArray, meth_FbxLayerElementTemplate_FbxVector4_GetDirectArray, METH_VARARGS, doc_FbxLayerElementTemplate_FbxVector4_GetDirectArray},
    {sipName_GetIndexArray, meth_FbxLayerElementTemplate_FbxVector4_GetIndexArray, METH_VARARGS, doc_FbxLayerElementTemplate_FbxVector4_GetIndexArray},
    {sipName_RemapIndexTo, meth_FbxLayerElementTemplate_FbxVector4_RemapIndexTo, METH_VARARGS, doc_FbxLayerElementTemplate_FbxVector4_RemapIndexTo}
};

PyDoc_STRVAR(doc_FbxLayerElementTemplate_FbxVector4, "\1FbxLayerElementTemplate_FbxVector4()\n"
"FbxLayerElementTemplate_FbxVector4(FbxLayerElementTemplate_FbxVector4)");


sipClassTypeDef sipTypeDef_fbx_FbxLayerElementTemplate_FbxVector4 = {
    {
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_FbxLayerElementTemplate_FbxVector4,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_FbxLayerElementTemplate_FbxVector4,
        {0, 0, 1},
        4, methods_FbxLayerElementTemplate_FbxVector4,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_FbxLayerElementTemplate_FbxVector4,
    -1,
    -1,
    supers_FbxLayerElementTemplate_FbxVector4,
    slots_FbxLayerElementTemplate_FbxVector4,
    init_type_FbxLayerElementTemplate_FbxVector4,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_FbxLayerElementTemplate_FbxVector4,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_FbxLayerElementTemplate_FbxVector4,
    cast_FbxLayerElementTemplate_FbxVector4,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};
