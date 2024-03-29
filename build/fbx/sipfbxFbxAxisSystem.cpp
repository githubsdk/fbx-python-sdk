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




class sipFbxAxisSystem : public  ::FbxAxisSystem
{
public:
    sipFbxAxisSystem( ::FbxAxisSystem::EUpVector, ::FbxAxisSystem::EFrontVector, ::FbxAxisSystem::ECoordSystem);
    sipFbxAxisSystem(const  ::FbxAxisSystem&);
    sipFbxAxisSystem(const  ::FbxAxisSystem::EPreDefinedAxisSystem);
    ~sipFbxAxisSystem();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipFbxAxisSystem(const sipFbxAxisSystem &);
    sipFbxAxisSystem &operator = (const sipFbxAxisSystem &);
};

sipFbxAxisSystem::sipFbxAxisSystem( ::FbxAxisSystem::EUpVector a0, ::FbxAxisSystem::EFrontVector a1, ::FbxAxisSystem::ECoordSystem a2):  ::FbxAxisSystem(a0,a1,a2), sipPySelf(SIP_NULLPTR)
{
}

sipFbxAxisSystem::sipFbxAxisSystem(const  ::FbxAxisSystem& a0):  ::FbxAxisSystem(a0), sipPySelf(SIP_NULLPTR)
{
}

sipFbxAxisSystem::sipFbxAxisSystem(const  ::FbxAxisSystem::EPreDefinedAxisSystem a0):  ::FbxAxisSystem(a0), sipPySelf(SIP_NULLPTR)
{
}

sipFbxAxisSystem::~sipFbxAxisSystem()
{
    sipInstanceDestroyedEx(&sipPySelf);
}


PyDoc_STRVAR(doc_FbxAxisSystem_ConvertScene, "ConvertScene(self, FbxScene)\n"
"ConvertScene(self, FbxScene, FbxNode)");

extern "C" {static PyObject *meth_FbxAxisSystem_ConvertScene(PyObject *, PyObject *);}
static PyObject *meth_FbxAxisSystem_ConvertScene(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxScene* a0;
        const  ::FbxAxisSystem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_FbxAxisSystem, &sipCpp, sipType_FbxScene, &a0))
        {
            sipCpp->ConvertScene(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
         ::FbxScene* a0;
         ::FbxNode* a1;
        const  ::FbxAxisSystem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8J8", &sipSelf, sipType_FbxAxisSystem, &sipCpp, sipType_FbxScene, &a0, sipType_FbxNode, &a1))
        {
            sipCpp->ConvertScene(a0,a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxAxisSystem, sipName_ConvertScene, doc_FbxAxisSystem_ConvertScene);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxAxisSystem_GetUpVector, "GetUpVector(self) -> Tuple[FbxAxisSystem.EUpVector, int]");

extern "C" {static PyObject *meth_FbxAxisSystem_GetUpVector(PyObject *, PyObject *);}
static PyObject *meth_FbxAxisSystem_GetUpVector(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
        const  ::FbxAxisSystem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxAxisSystem, &sipCpp))
        {
             ::FbxAxisSystem::EUpVector sipRes;

            sipRes = sipCpp->GetUpVector(a0);

            return sipBuildResult(0,"(Fi)",sipRes,sipType_FbxAxisSystem_EUpVector,a0);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxAxisSystem, sipName_GetUpVector, doc_FbxAxisSystem_GetUpVector);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxAxisSystem_GetFrontVector, "GetFrontVector(self) -> Tuple[FbxAxisSystem.EFrontVector, int]");

extern "C" {static PyObject *meth_FbxAxisSystem_GetFrontVector(PyObject *, PyObject *);}
static PyObject *meth_FbxAxisSystem_GetFrontVector(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
        const  ::FbxAxisSystem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxAxisSystem, &sipCpp))
        {
             ::FbxAxisSystem::EFrontVector sipRes;

            sipRes = sipCpp->GetFrontVector(a0);

            return sipBuildResult(0,"(Fi)",sipRes,sipType_FbxAxisSystem_EFrontVector,a0);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxAxisSystem, sipName_GetFrontVector, doc_FbxAxisSystem_GetFrontVector);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxAxisSystem_GetCoorSystem, "GetCoorSystem(self) -> FbxAxisSystem.ECoordSystem");

extern "C" {static PyObject *meth_FbxAxisSystem_GetCoorSystem(PyObject *, PyObject *);}
static PyObject *meth_FbxAxisSystem_GetCoorSystem(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxAxisSystem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxAxisSystem, &sipCpp))
        {
             ::FbxAxisSystem::ECoordSystem sipRes;

            sipRes = sipCpp->GetCoorSystem();

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_FbxAxisSystem_ECoordSystem);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxAxisSystem, sipName_GetCoorSystem, doc_FbxAxisSystem_GetCoorSystem);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxAxisSystem_ConvertChildren, "ConvertChildren(self, FbxNode, FbxAxisSystem)");

extern "C" {static PyObject *meth_FbxAxisSystem_ConvertChildren(PyObject *, PyObject *);}
static PyObject *meth_FbxAxisSystem_ConvertChildren(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxNode* a0;
        const  ::FbxAxisSystem* a1;
        const  ::FbxAxisSystem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8J9", &sipSelf, sipType_FbxAxisSystem, &sipCpp, sipType_FbxNode, &a0, sipType_FbxAxisSystem, &a1))
        {
            sipCpp->ConvertChildren(a0,*a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxAxisSystem, sipName_ConvertChildren, doc_FbxAxisSystem_ConvertChildren);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *slot_FbxAxisSystem___ne__(PyObject *,PyObject *);}
static PyObject *slot_FbxAxisSystem___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxAxisSystem *sipCpp = reinterpret_cast< ::FbxAxisSystem *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxAxisSystem));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxAxisSystem* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxAxisSystem, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::FbxAxisSystem::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_fbx, ne_slot, sipType_FbxAxisSystem, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_FbxAxisSystem___eq__(PyObject *,PyObject *);}
static PyObject *slot_FbxAxisSystem___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxAxisSystem *sipCpp = reinterpret_cast< ::FbxAxisSystem *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxAxisSystem));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxAxisSystem* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxAxisSystem, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::FbxAxisSystem::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_fbx, eq_slot, sipType_FbxAxisSystem, sipSelf, sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_FbxAxisSystem(void *, int);}
static void release_FbxAxisSystem(void *sipCppV, int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipFbxAxisSystem *>(sipCppV);
    else
        delete reinterpret_cast< ::FbxAxisSystem *>(sipCppV);
}


extern "C" {static void assign_FbxAxisSystem(void *, Py_ssize_t, void *);}
static void assign_FbxAxisSystem(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::FbxAxisSystem *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::FbxAxisSystem *>(sipSrc);
}


extern "C" {static void *copy_FbxAxisSystem(const void *, Py_ssize_t);}
static void *copy_FbxAxisSystem(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::FbxAxisSystem(reinterpret_cast<const  ::FbxAxisSystem *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_FbxAxisSystem(sipSimpleWrapper *);}
static void dealloc_FbxAxisSystem(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipFbxAxisSystem *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_FbxAxisSystem(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_FbxAxisSystem(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_FbxAxisSystem(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipFbxAxisSystem *sipCpp = SIP_NULLPTR;

    {
         ::FbxAxisSystem::EUpVector a0;
         ::FbxAxisSystem::EFrontVector a1;
         ::FbxAxisSystem::ECoordSystem a2;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "EEE", sipType_FbxAxisSystem_EUpVector, &a0, sipType_FbxAxisSystem_EFrontVector, &a1, sipType_FbxAxisSystem_ECoordSystem, &a2))
        {
            sipCpp = new sipFbxAxisSystem(a0,a1,a2);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const  ::FbxAxisSystem* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_FbxAxisSystem, &a0))
        {
            sipCpp = new sipFbxAxisSystem(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
         ::FbxAxisSystem::EPreDefinedAxisSystem a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "E", sipType_FbxAxisSystem_EPreDefinedAxisSystem, &a0))
        {
            sipCpp = new sipFbxAxisSystem(a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_FbxAxisSystem[] = {
    {(void *)slot_FbxAxisSystem___ne__, ne_slot},
    {(void *)slot_FbxAxisSystem___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_FbxAxisSystem[] = {
    {sipName_ConvertChildren, meth_FbxAxisSystem_ConvertChildren, METH_VARARGS, doc_FbxAxisSystem_ConvertChildren},
    {sipName_ConvertScene, meth_FbxAxisSystem_ConvertScene, METH_VARARGS, doc_FbxAxisSystem_ConvertScene},
    {sipName_GetCoorSystem, meth_FbxAxisSystem_GetCoorSystem, METH_VARARGS, doc_FbxAxisSystem_GetCoorSystem},
    {sipName_GetFrontVector, meth_FbxAxisSystem_GetFrontVector, METH_VARARGS, doc_FbxAxisSystem_GetFrontVector},
    {sipName_GetUpVector, meth_FbxAxisSystem_GetUpVector, METH_VARARGS, doc_FbxAxisSystem_GetUpVector}
};


extern "C" {static PyObject *varget_FbxAxisSystem_DirectX(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxAxisSystem_DirectX(void *, PyObject *, PyObject *)
{
    const  ::FbxAxisSystem*sipVal;

    sipVal = new  ::FbxAxisSystem( ::FbxAxisSystem::DirectX);

    return sipConvertFromNewType(const_cast< ::FbxAxisSystem *>(sipVal), sipType_FbxAxisSystem, SIP_NULLPTR);
}


extern "C" {static PyObject *varget_FbxAxisSystem_Lightwave(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxAxisSystem_Lightwave(void *, PyObject *, PyObject *)
{
    const  ::FbxAxisSystem*sipVal;

    sipVal = new  ::FbxAxisSystem( ::FbxAxisSystem::Lightwave);

    return sipConvertFromNewType(const_cast< ::FbxAxisSystem *>(sipVal), sipType_FbxAxisSystem, SIP_NULLPTR);
}


extern "C" {static PyObject *varget_FbxAxisSystem_Max(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxAxisSystem_Max(void *, PyObject *, PyObject *)
{
    const  ::FbxAxisSystem*sipVal;

    sipVal = new  ::FbxAxisSystem( ::FbxAxisSystem::Max);

    return sipConvertFromNewType(const_cast< ::FbxAxisSystem *>(sipVal), sipType_FbxAxisSystem, SIP_NULLPTR);
}


extern "C" {static PyObject *varget_FbxAxisSystem_MayaYUp(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxAxisSystem_MayaYUp(void *, PyObject *, PyObject *)
{
    const  ::FbxAxisSystem*sipVal;

    sipVal = new  ::FbxAxisSystem( ::FbxAxisSystem::MayaYUp);

    return sipConvertFromNewType(const_cast< ::FbxAxisSystem *>(sipVal), sipType_FbxAxisSystem, SIP_NULLPTR);
}


extern "C" {static PyObject *varget_FbxAxisSystem_MayaZUp(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxAxisSystem_MayaZUp(void *, PyObject *, PyObject *)
{
    const  ::FbxAxisSystem*sipVal;

    sipVal = new  ::FbxAxisSystem( ::FbxAxisSystem::MayaZUp);

    return sipConvertFromNewType(const_cast< ::FbxAxisSystem *>(sipVal), sipType_FbxAxisSystem, SIP_NULLPTR);
}


extern "C" {static PyObject *varget_FbxAxisSystem_Motionbuilder(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxAxisSystem_Motionbuilder(void *, PyObject *, PyObject *)
{
    const  ::FbxAxisSystem*sipVal;

    sipVal = new  ::FbxAxisSystem( ::FbxAxisSystem::Motionbuilder);

    return sipConvertFromNewType(const_cast< ::FbxAxisSystem *>(sipVal), sipType_FbxAxisSystem, SIP_NULLPTR);
}


extern "C" {static PyObject *varget_FbxAxisSystem_OpenGL(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxAxisSystem_OpenGL(void *, PyObject *, PyObject *)
{
    const  ::FbxAxisSystem*sipVal;

    sipVal = new  ::FbxAxisSystem( ::FbxAxisSystem::OpenGL);

    return sipConvertFromNewType(const_cast< ::FbxAxisSystem *>(sipVal), sipType_FbxAxisSystem, SIP_NULLPTR);
}

sipVariableDef variables_FbxAxisSystem[] = {
    {ClassVariable, sipName_DirectX, (PyMethodDef *)varget_FbxAxisSystem_DirectX, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {ClassVariable, sipName_Lightwave, (PyMethodDef *)varget_FbxAxisSystem_Lightwave, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {ClassVariable, sipName_Max, (PyMethodDef *)varget_FbxAxisSystem_Max, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {ClassVariable, sipName_MayaYUp, (PyMethodDef *)varget_FbxAxisSystem_MayaYUp, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {ClassVariable, sipName_MayaZUp, (PyMethodDef *)varget_FbxAxisSystem_MayaZUp, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {ClassVariable, sipName_Motionbuilder, (PyMethodDef *)varget_FbxAxisSystem_Motionbuilder, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {ClassVariable, sipName_OpenGL, (PyMethodDef *)varget_FbxAxisSystem_OpenGL, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
};


/* Define the enum members and ints to be added to this type. */
static sipIntInstanceDef intInstances_FbxAxisSystem[] = {
    {sipName_eRightHanded, static_cast<int>( ::FbxAxisSystem::eRightHanded)},
    {sipName_eLeftHanded, static_cast<int>( ::FbxAxisSystem::eLeftHanded)},
    {sipName_eParityEven, static_cast<int>( ::FbxAxisSystem::eParityEven)},
    {sipName_eParityOdd, static_cast<int>( ::FbxAxisSystem::eParityOdd)},
    {sipName_eMayaZUp, static_cast<int>( ::FbxAxisSystem::eMayaZUp)},
    {sipName_eMayaYUp, static_cast<int>( ::FbxAxisSystem::eMayaYUp)},
    {sipName_eMax, static_cast<int>( ::FbxAxisSystem::eMax)},
    {sipName_eMotionBuilder, static_cast<int>( ::FbxAxisSystem::eMotionBuilder)},
    {sipName_eOpenGL, static_cast<int>( ::FbxAxisSystem::eOpenGL)},
    {sipName_eDirectX, static_cast<int>( ::FbxAxisSystem::eDirectX)},
    {sipName_eLightwave, static_cast<int>( ::FbxAxisSystem::eLightwave)},
    {sipName_eXAxis, static_cast<int>( ::FbxAxisSystem::eXAxis)},
    {sipName_eYAxis, static_cast<int>( ::FbxAxisSystem::eYAxis)},
    {sipName_eZAxis, static_cast<int>( ::FbxAxisSystem::eZAxis)},
    {0, 0}
};

PyDoc_STRVAR(doc_FbxAxisSystem, "\1FbxAxisSystem(FbxAxisSystem.EUpVector, FbxAxisSystem.EFrontVector, FbxAxisSystem.ECoordSystem)\n"
"FbxAxisSystem(FbxAxisSystem)\n"
"FbxAxisSystem(FbxAxisSystem.EPreDefinedAxisSystem)");


sipClassTypeDef sipTypeDef_fbx_FbxAxisSystem = {
    {
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_FbxAxisSystem,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_FbxAxisSystem,
        {0, 0, 1},
        5, methods_FbxAxisSystem,
        7, variables_FbxAxisSystem,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, intInstances_FbxAxisSystem, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_FbxAxisSystem,
    -1,
    -1,
    SIP_NULLPTR,
    slots_FbxAxisSystem,
    init_type_FbxAxisSystem,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_FbxAxisSystem,
    assign_FbxAxisSystem,
    SIP_NULLPTR,
    copy_FbxAxisSystem,
    release_FbxAxisSystem,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};
