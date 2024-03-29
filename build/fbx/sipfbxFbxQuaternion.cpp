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




PyDoc_STRVAR(doc_FbxQuaternion_GetAt, "GetAt(self, int) -> float");

extern "C" {static PyObject *meth_FbxQuaternion_GetAt(PyObject *, PyObject *);}
static PyObject *meth_FbxQuaternion_GetAt(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
        const  ::FbxQuaternion *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_FbxQuaternion, &sipCpp, &a0))
        {
            double sipRes;

            sipRes = sipCpp->GetAt(a0);

            return PyFloat_FromDouble(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxQuaternion, sipName_GetAt, doc_FbxQuaternion_GetAt);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxQuaternion_SetAt, "SetAt(self, int, float)");

extern "C" {static PyObject *meth_FbxQuaternion_SetAt(PyObject *, PyObject *);}
static PyObject *meth_FbxQuaternion_SetAt(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
        double a1;
         ::FbxQuaternion *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bid", &sipSelf, sipType_FbxQuaternion, &sipCpp, &a0, &a1))
        {
            sipCpp->SetAt(a0,a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxQuaternion, sipName_SetAt, doc_FbxQuaternion_SetAt);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxQuaternion_Set, "Set(self, float, float, float, float = 1)");

extern "C" {static PyObject *meth_FbxQuaternion_Set(PyObject *, PyObject *);}
static PyObject *meth_FbxQuaternion_Set(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        double a0;
        double a1;
        double a2;
        double a3 = 1;
         ::FbxQuaternion *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bddd|d", &sipSelf, sipType_FbxQuaternion, &sipCpp, &a0, &a1, &a2, &a3))
        {
            sipCpp->Set(a0,a1,a2,a3);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxQuaternion, sipName_Set, doc_FbxQuaternion_Set);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxQuaternion_Product, "Product(self, FbxQuaternion) -> FbxQuaternion");

extern "C" {static PyObject *meth_FbxQuaternion_Product(PyObject *, PyObject *);}
static PyObject *meth_FbxQuaternion_Product(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxQuaternion* a0;
        const  ::FbxQuaternion *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_FbxQuaternion, &sipCpp, sipType_FbxQuaternion, &a0))
        {
             ::FbxQuaternion*sipRes;

            sipRes = new  ::FbxQuaternion(sipCpp->Product(*a0));

            return sipConvertFromNewType(sipRes,sipType_FbxQuaternion,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxQuaternion, sipName_Product, doc_FbxQuaternion_Product);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxQuaternion_Normalize, "Normalize(self)");

extern "C" {static PyObject *meth_FbxQuaternion_Normalize(PyObject *, PyObject *);}
static PyObject *meth_FbxQuaternion_Normalize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxQuaternion *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxQuaternion, &sipCpp))
        {
            sipCpp->Normalize();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxQuaternion, sipName_Normalize, doc_FbxQuaternion_Normalize);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxQuaternion_Conjugate, "Conjugate(self)");

extern "C" {static PyObject *meth_FbxQuaternion_Conjugate(PyObject *, PyObject *);}
static PyObject *meth_FbxQuaternion_Conjugate(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxQuaternion *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxQuaternion, &sipCpp))
        {
            sipCpp->Conjugate();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxQuaternion, sipName_Conjugate, doc_FbxQuaternion_Conjugate);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxQuaternion_ComposeSphericalXYZ, "ComposeSphericalXYZ(self, FbxVector4)");

extern "C" {static PyObject *meth_FbxQuaternion_ComposeSphericalXYZ(PyObject *, PyObject *);}
static PyObject *meth_FbxQuaternion_ComposeSphericalXYZ(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxVector4* a0;
         ::FbxQuaternion *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_FbxQuaternion, &sipCpp, sipType_FbxVector4, &a0))
        {
            sipCpp->ComposeSphericalXYZ(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxQuaternion, sipName_ComposeSphericalXYZ, doc_FbxQuaternion_ComposeSphericalXYZ);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxQuaternion_DecomposeSphericalXYZ, "DecomposeSphericalXYZ(self) -> FbxVector4");

extern "C" {static PyObject *meth_FbxQuaternion_DecomposeSphericalXYZ(PyObject *, PyObject *);}
static PyObject *meth_FbxQuaternion_DecomposeSphericalXYZ(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxQuaternion *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxQuaternion, &sipCpp))
        {
             ::FbxVector4*sipRes;

            sipRes = new  ::FbxVector4(sipCpp->DecomposeSphericalXYZ());

            return sipConvertFromNewType(sipRes,sipType_FbxVector4,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxQuaternion, sipName_DecomposeSphericalXYZ, doc_FbxQuaternion_DecomposeSphericalXYZ);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *slot_FbxQuaternion___ne__(PyObject *,PyObject *);}
static PyObject *slot_FbxQuaternion___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxQuaternion *sipCpp = reinterpret_cast< ::FbxQuaternion *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxQuaternion));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxQuaternion* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxQuaternion, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::FbxQuaternion::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_fbx, ne_slot, sipType_FbxQuaternion, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_FbxQuaternion___eq__(PyObject *,PyObject *);}
static PyObject *slot_FbxQuaternion___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxQuaternion *sipCpp = reinterpret_cast< ::FbxQuaternion *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxQuaternion));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxQuaternion* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxQuaternion, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::FbxQuaternion::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_fbx, eq_slot, sipType_FbxQuaternion, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_FbxQuaternion___neg__(PyObject *);}
static PyObject *slot_FbxQuaternion___neg__(PyObject *sipSelf)
{
     ::FbxQuaternion *sipCpp = reinterpret_cast< ::FbxQuaternion *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxQuaternion));

    if (!sipCpp)
        return SIP_NULLPTR;


    {
        {
             ::FbxQuaternion*sipRes;

            sipRes = new  ::FbxQuaternion(-(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_FbxQuaternion,SIP_NULLPTR);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_FbxQuaternion___itruediv__(PyObject *,PyObject *);}
static PyObject *slot_FbxQuaternion___itruediv__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_FbxQuaternion)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::FbxQuaternion *sipCpp = reinterpret_cast< ::FbxQuaternion *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxQuaternion));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        double a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1d", &a0))
        {
            sipCpp-> ::FbxQuaternion::operator/=(a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    {
        const  ::FbxQuaternion* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxQuaternion, &a0))
        {
            sipCpp-> ::FbxQuaternion::operator/=(*a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_FbxQuaternion___imul__(PyObject *,PyObject *);}
static PyObject *slot_FbxQuaternion___imul__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_FbxQuaternion)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::FbxQuaternion *sipCpp = reinterpret_cast< ::FbxQuaternion *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxQuaternion));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        double a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1d", &a0))
        {
            sipCpp-> ::FbxQuaternion::operator*=(a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    {
        const  ::FbxQuaternion* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxQuaternion, &a0))
        {
            sipCpp-> ::FbxQuaternion::operator*=(*a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_FbxQuaternion___isub__(PyObject *,PyObject *);}
static PyObject *slot_FbxQuaternion___isub__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_FbxQuaternion)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::FbxQuaternion *sipCpp = reinterpret_cast< ::FbxQuaternion *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxQuaternion));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        double a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1d", &a0))
        {
            sipCpp-> ::FbxQuaternion::operator-=(a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    {
        const  ::FbxQuaternion* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxQuaternion, &a0))
        {
            sipCpp-> ::FbxQuaternion::operator-=(*a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_FbxQuaternion___iadd__(PyObject *,PyObject *);}
static PyObject *slot_FbxQuaternion___iadd__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_FbxQuaternion)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::FbxQuaternion *sipCpp = reinterpret_cast< ::FbxQuaternion *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxQuaternion));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        double a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1d", &a0))
        {
            sipCpp-> ::FbxQuaternion::operator+=(a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    {
        const  ::FbxQuaternion* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxQuaternion, &a0))
        {
            sipCpp-> ::FbxQuaternion::operator+=(*a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_FbxQuaternion___truediv__(PyObject *,PyObject *);}
static PyObject *slot_FbxQuaternion___truediv__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxQuaternion* a0;
        double a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9d", sipType_FbxQuaternion, &a0, &a1))
        {
             ::FbxQuaternion*sipRes;

            sipRes = new  ::FbxQuaternion((*a0 / a1));

            return sipConvertFromNewType(sipRes,sipType_FbxQuaternion,SIP_NULLPTR);
        }
    }

    {
         ::FbxQuaternion* a0;
        const  ::FbxQuaternion* a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9J9", sipType_FbxQuaternion, &a0, sipType_FbxQuaternion, &a1))
        {
             ::FbxQuaternion*sipRes;

            sipRes = new  ::FbxQuaternion((*a0 / *a1));

            return sipConvertFromNewType(sipRes,sipType_FbxQuaternion,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_fbx, truediv_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_FbxQuaternion___mul__(PyObject *,PyObject *);}
static PyObject *slot_FbxQuaternion___mul__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxQuaternion* a0;
        double a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9d", sipType_FbxQuaternion, &a0, &a1))
        {
             ::FbxQuaternion*sipRes;

            sipRes = new  ::FbxQuaternion((*a0 * a1));

            return sipConvertFromNewType(sipRes,sipType_FbxQuaternion,SIP_NULLPTR);
        }
    }

    {
         ::FbxQuaternion* a0;
        const  ::FbxQuaternion* a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9J9", sipType_FbxQuaternion, &a0, sipType_FbxQuaternion, &a1))
        {
             ::FbxQuaternion*sipRes;

            sipRes = new  ::FbxQuaternion((*a0 * *a1));

            return sipConvertFromNewType(sipRes,sipType_FbxQuaternion,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_fbx, mul_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_FbxQuaternion___sub__(PyObject *,PyObject *);}
static PyObject *slot_FbxQuaternion___sub__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxQuaternion* a0;
        double a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9d", sipType_FbxQuaternion, &a0, &a1))
        {
             ::FbxQuaternion*sipRes;

            sipRes = new  ::FbxQuaternion((*a0 - a1));

            return sipConvertFromNewType(sipRes,sipType_FbxQuaternion,SIP_NULLPTR);
        }
    }

    {
         ::FbxQuaternion* a0;
        const  ::FbxQuaternion* a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9J9", sipType_FbxQuaternion, &a0, sipType_FbxQuaternion, &a1))
        {
             ::FbxQuaternion*sipRes;

            sipRes = new  ::FbxQuaternion((*a0 - *a1));

            return sipConvertFromNewType(sipRes,sipType_FbxQuaternion,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_fbx, sub_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_FbxQuaternion___add__(PyObject *,PyObject *);}
static PyObject *slot_FbxQuaternion___add__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxQuaternion* a0;
        double a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9d", sipType_FbxQuaternion, &a0, &a1))
        {
             ::FbxQuaternion*sipRes;

            sipRes = new  ::FbxQuaternion((*a0 + a1));

            return sipConvertFromNewType(sipRes,sipType_FbxQuaternion,SIP_NULLPTR);
        }
    }

    {
         ::FbxQuaternion* a0;
        const  ::FbxQuaternion* a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9J9", sipType_FbxQuaternion, &a0, sipType_FbxQuaternion, &a1))
        {
             ::FbxQuaternion*sipRes;

            sipRes = new  ::FbxQuaternion((*a0 + *a1));

            return sipConvertFromNewType(sipRes,sipType_FbxQuaternion,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_fbx, add_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_FbxQuaternion___getitem__(PyObject *,PyObject *);}
static PyObject *slot_FbxQuaternion___getitem__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxQuaternion *sipCpp = reinterpret_cast< ::FbxQuaternion *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxQuaternion));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            double sipRes = 0;
            int sipIsErr = 0;

#line 12 "D:\\Program Files\\Autodesk\\FBX\\FBX Python Bindings\\2020.3.4\\sip\\fbxquaternion.sip"
        if (a0 < 0 || a0 >= 4)
        {
            PyErr_Format(PyExc_IndexError, "sequence index out of range");
            sipIsErr = 1;
        }
        else
        {
            sipRes = (*sipCpp)[a0];
        }
#line 755 "D:\\Program Files\\Autodesk\\FBX\\FBX Python Bindings\\2020.3.4\\build\\fbx/sipfbxFbxQuaternion.cpp"

            if (sipIsErr)
                return 0;

            return PyFloat_FromDouble(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxQuaternion, sipName___getitem__, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_FbxQuaternion(void *, const sipTypeDef *);}
static void *cast_FbxQuaternion(void *sipCppV, const sipTypeDef *targetType)
{
     ::FbxQuaternion *sipCpp = reinterpret_cast< ::FbxQuaternion *>(sipCppV);

    if (targetType == sipType_FbxQuaternion)
        return sipCppV;

    if (targetType == sipType_FbxDouble4)
        return static_cast< ::FbxDouble4 *>(sipCpp);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_FbxQuaternion(void *, int);}
static void release_FbxQuaternion(void *sipCppV, int)
{
    delete reinterpret_cast< ::FbxQuaternion *>(sipCppV);
}


extern "C" {static void *array_FbxQuaternion(Py_ssize_t);}
static void *array_FbxQuaternion(Py_ssize_t sipNrElem)
{
    return new  ::FbxQuaternion[sipNrElem];
}


extern "C" {static void assign_FbxQuaternion(void *, Py_ssize_t, void *);}
static void assign_FbxQuaternion(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::FbxQuaternion *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::FbxQuaternion *>(sipSrc);
}


extern "C" {static void *copy_FbxQuaternion(const void *, Py_ssize_t);}
static void *copy_FbxQuaternion(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::FbxQuaternion(reinterpret_cast<const  ::FbxQuaternion *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_FbxQuaternion(sipSimpleWrapper *);}
static void dealloc_FbxQuaternion(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_FbxQuaternion(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_FbxQuaternion(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_FbxQuaternion(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::FbxQuaternion *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new  ::FbxQuaternion();

            return sipCpp;
        }
    }

    {
        const  ::FbxQuaternion* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_FbxQuaternion, &a0))
        {
            sipCpp = new  ::FbxQuaternion(*a0);

            return sipCpp;
        }
    }

    {
        double a0;
        double a1;
        double a2;
        double a3 = 1;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "ddd|d", &a0, &a1, &a2, &a3))
        {
            sipCpp = new  ::FbxQuaternion(a0,a1,a2,a3);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_FbxQuaternion[] = {{134, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_FbxQuaternion[] = {
    {(void *)slot_FbxQuaternion___ne__, ne_slot},
    {(void *)slot_FbxQuaternion___eq__, eq_slot},
    {(void *)slot_FbxQuaternion___neg__, neg_slot},
    {(void *)slot_FbxQuaternion___itruediv__, itruediv_slot},
    {(void *)slot_FbxQuaternion___imul__, imul_slot},
    {(void *)slot_FbxQuaternion___isub__, isub_slot},
    {(void *)slot_FbxQuaternion___iadd__, iadd_slot},
    {(void *)slot_FbxQuaternion___truediv__, truediv_slot},
    {(void *)slot_FbxQuaternion___mul__, mul_slot},
    {(void *)slot_FbxQuaternion___sub__, sub_slot},
    {(void *)slot_FbxQuaternion___add__, add_slot},
    {(void *)slot_FbxQuaternion___getitem__, getitem_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_FbxQuaternion[] = {
    {sipName_ComposeSphericalXYZ, meth_FbxQuaternion_ComposeSphericalXYZ, METH_VARARGS, doc_FbxQuaternion_ComposeSphericalXYZ},
    {sipName_Conjugate, meth_FbxQuaternion_Conjugate, METH_VARARGS, doc_FbxQuaternion_Conjugate},
    {sipName_DecomposeSphericalXYZ, meth_FbxQuaternion_DecomposeSphericalXYZ, METH_VARARGS, doc_FbxQuaternion_DecomposeSphericalXYZ},
    {sipName_GetAt, meth_FbxQuaternion_GetAt, METH_VARARGS, doc_FbxQuaternion_GetAt},
    {sipName_Normalize, meth_FbxQuaternion_Normalize, METH_VARARGS, doc_FbxQuaternion_Normalize},
    {sipName_Product, meth_FbxQuaternion_Product, METH_VARARGS, doc_FbxQuaternion_Product},
    {sipName_Set, meth_FbxQuaternion_Set, METH_VARARGS, doc_FbxQuaternion_Set},
    {sipName_SetAt, meth_FbxQuaternion_SetAt, METH_VARARGS, doc_FbxQuaternion_SetAt}
};

PyDoc_STRVAR(doc_FbxQuaternion, "\1FbxQuaternion()\n"
"FbxQuaternion(FbxQuaternion)\n"
"FbxQuaternion(float, float, float, float = 1)");


sipClassTypeDef sipTypeDef_fbx_FbxQuaternion = {
    {
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_FbxQuaternion,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_FbxQuaternion,
        {0, 0, 1},
        8, methods_FbxQuaternion,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_FbxQuaternion,
    -1,
    -1,
    supers_FbxQuaternion,
    slots_FbxQuaternion,
    init_type_FbxQuaternion,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_FbxQuaternion,
    assign_FbxQuaternion,
    array_FbxQuaternion,
    copy_FbxQuaternion,
    release_FbxQuaternion,
    cast_FbxQuaternion,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};
