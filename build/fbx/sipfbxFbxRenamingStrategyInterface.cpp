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




class sipFbxRenamingStrategyInterface : public  ::FbxRenamingStrategyInterface
{
public:
    sipFbxRenamingStrategyInterface();
    sipFbxRenamingStrategyInterface(const  ::FbxRenamingStrategyInterface&);
    virtual ~sipFbxRenamingStrategyInterface();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
     ::FbxRenamingStrategyInterface* Clone() SIP_OVERRIDE;
    bool Rename( ::FbxNameHandler&) SIP_OVERRIDE;
    void Clear() SIP_OVERRIDE;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipFbxRenamingStrategyInterface(const sipFbxRenamingStrategyInterface &);
    sipFbxRenamingStrategyInterface &operator = (const sipFbxRenamingStrategyInterface &);

    char sipPyMethods[3];
};

sipFbxRenamingStrategyInterface::sipFbxRenamingStrategyInterface():  ::FbxRenamingStrategyInterface(), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipFbxRenamingStrategyInterface::sipFbxRenamingStrategyInterface(const  ::FbxRenamingStrategyInterface& a0):  ::FbxRenamingStrategyInterface(a0), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipFbxRenamingStrategyInterface::~sipFbxRenamingStrategyInterface()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

 ::FbxRenamingStrategyInterface* sipFbxRenamingStrategyInterface::Clone()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[0], &sipPySelf, sipName_FbxRenamingStrategyInterface, sipName_Clone);

    if (!sipMeth)
        return 0;

    extern  ::FbxRenamingStrategyInterface* sipVH_fbx_13(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_fbx_13(sipGILState, 0, sipPySelf, sipMeth);
}

bool sipFbxRenamingStrategyInterface::Rename( ::FbxNameHandler& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[1], &sipPySelf, sipName_FbxRenamingStrategyInterface, sipName_Rename);

    if (!sipMeth)
        return 0;

    extern bool sipVH_fbx_12(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::FbxNameHandler&);

    return sipVH_fbx_12(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipFbxRenamingStrategyInterface::Clear()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[2], &sipPySelf, sipName_FbxRenamingStrategyInterface, sipName_Clear);

    if (!sipMeth)
        return;

    extern void sipVH_fbx_0(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    sipVH_fbx_0(sipGILState, 0, sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_FbxRenamingStrategyInterface_Clear, "Clear(self)");

extern "C" {static PyObject *meth_FbxRenamingStrategyInterface_Clear(PyObject *, PyObject *);}
static PyObject *meth_FbxRenamingStrategyInterface_Clear(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
         ::FbxRenamingStrategyInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxRenamingStrategyInterface, &sipCpp))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_FbxRenamingStrategyInterface, sipName_Clear);
                return SIP_NULLPTR;
            }

            sipCpp->Clear();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxRenamingStrategyInterface, sipName_Clear, doc_FbxRenamingStrategyInterface_Clear);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxRenamingStrategyInterface_Rename, "Rename(self, FbxNameHandler) -> bool");

extern "C" {static PyObject *meth_FbxRenamingStrategyInterface_Rename(PyObject *, PyObject *);}
static PyObject *meth_FbxRenamingStrategyInterface_Rename(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
         ::FbxNameHandler* a0;
         ::FbxRenamingStrategyInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_FbxRenamingStrategyInterface, &sipCpp, sipType_FbxNameHandler, &a0))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_FbxRenamingStrategyInterface, sipName_Rename);
                return SIP_NULLPTR;
            }

            sipRes = sipCpp->Rename(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxRenamingStrategyInterface, sipName_Rename, doc_FbxRenamingStrategyInterface_Rename);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxRenamingStrategyInterface_Clone, "Clone(self) -> FbxRenamingStrategyInterface");

extern "C" {static PyObject *meth_FbxRenamingStrategyInterface_Clone(PyObject *, PyObject *);}
static PyObject *meth_FbxRenamingStrategyInterface_Clone(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
         ::FbxRenamingStrategyInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxRenamingStrategyInterface, &sipCpp))
        {
             ::FbxRenamingStrategyInterface*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_FbxRenamingStrategyInterface, sipName_Clone);
                return SIP_NULLPTR;
            }

            sipRes = sipCpp->Clone();

            return sipConvertFromType(sipRes,sipType_FbxRenamingStrategyInterface,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxRenamingStrategyInterface, sipName_Clone, doc_FbxRenamingStrategyInterface_Clone);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_FbxRenamingStrategyInterface(void *, int);}
static void release_FbxRenamingStrategyInterface(void *sipCppV, int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipFbxRenamingStrategyInterface *>(sipCppV);
    else
        delete reinterpret_cast< ::FbxRenamingStrategyInterface *>(sipCppV);
}


extern "C" {static void dealloc_FbxRenamingStrategyInterface(sipSimpleWrapper *);}
static void dealloc_FbxRenamingStrategyInterface(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipFbxRenamingStrategyInterface *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_FbxRenamingStrategyInterface(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_FbxRenamingStrategyInterface(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_FbxRenamingStrategyInterface(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipFbxRenamingStrategyInterface *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new sipFbxRenamingStrategyInterface();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const  ::FbxRenamingStrategyInterface* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_FbxRenamingStrategyInterface, &a0))
        {
            sipCpp = new sipFbxRenamingStrategyInterface(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


static PyMethodDef methods_FbxRenamingStrategyInterface[] = {
    {sipName_Clear, meth_FbxRenamingStrategyInterface_Clear, METH_VARARGS, doc_FbxRenamingStrategyInterface_Clear},
    {sipName_Clone, meth_FbxRenamingStrategyInterface_Clone, METH_VARARGS, doc_FbxRenamingStrategyInterface_Clone},
    {sipName_Rename, meth_FbxRenamingStrategyInterface_Rename, METH_VARARGS, doc_FbxRenamingStrategyInterface_Rename}
};

PyDoc_STRVAR(doc_FbxRenamingStrategyInterface, "\1FbxRenamingStrategyInterface()\n"
"FbxRenamingStrategyInterface(FbxRenamingStrategyInterface)");


sipClassTypeDef sipTypeDef_fbx_FbxRenamingStrategyInterface = {
    {
        SIP_NULLPTR,
        SIP_TYPE_ABSTRACT|SIP_TYPE_CLASS,
        sipNameNr_FbxRenamingStrategyInterface,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_FbxRenamingStrategyInterface,
        {0, 0, 1},
        3, methods_FbxRenamingStrategyInterface,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_FbxRenamingStrategyInterface,
    -1,
    -1,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_FbxRenamingStrategyInterface,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_FbxRenamingStrategyInterface,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_FbxRenamingStrategyInterface,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};
