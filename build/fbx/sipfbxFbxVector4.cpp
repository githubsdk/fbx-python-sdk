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




PyDoc_STRVAR(doc_FbxVector4_Set, "Set(self, float, float, float, float = 1)");

extern "C" {static PyObject *meth_FbxVector4_Set(PyObject *, PyObject *);}
static PyObject *meth_FbxVector4_Set(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        double a0;
        double a1;
        double a2;
        double a3 = 1;
         ::FbxVector4 *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bddd|d", &sipSelf, sipType_FbxVector4, &sipCpp, &a0, &a1, &a2, &a3))
        {
            sipCpp->Set(a0,a1,a2,a3);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxVector4, sipName_Set, doc_FbxVector4_Set);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxVector4_DotProduct, "DotProduct(self, FbxVector4) -> float");

extern "C" {static PyObject *meth_FbxVector4_DotProduct(PyObject *, PyObject *);}
static PyObject *meth_FbxVector4_DotProduct(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxVector4* a0;
        const  ::FbxVector4 *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_FbxVector4, &sipCpp, sipType_FbxVector4, &a0))
        {
            double sipRes;

            sipRes = sipCpp->DotProduct(*a0);

            return PyFloat_FromDouble(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxVector4, sipName_DotProduct, doc_FbxVector4_DotProduct);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxVector4_CrossProduct, "CrossProduct(self, FbxVector4) -> FbxVector4");

extern "C" {static PyObject *meth_FbxVector4_CrossProduct(PyObject *, PyObject *);}
static PyObject *meth_FbxVector4_CrossProduct(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxVector4* a0;
        const  ::FbxVector4 *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_FbxVector4, &sipCpp, sipType_FbxVector4, &a0))
        {
             ::FbxVector4*sipRes;

            sipRes = new  ::FbxVector4(sipCpp->CrossProduct(*a0));

            return sipConvertFromNewType(sipRes,sipType_FbxVector4,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxVector4, sipName_CrossProduct, doc_FbxVector4_CrossProduct);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxVector4_AxisAlignmentInEulerAngle, "AxisAlignmentInEulerAngle(FbxVector4, FbxVector4, FbxVector4, FbxVector4) -> bool");

extern "C" {static PyObject *meth_FbxVector4_AxisAlignmentInEulerAngle(PyObject *, PyObject *);}
static PyObject *meth_FbxVector4_AxisAlignmentInEulerAngle(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxVector4* a0;
        const  ::FbxVector4* a1;
        const  ::FbxVector4* a2;
         ::FbxVector4* a3;

        if (sipParseArgs(&sipParseErr, sipArgs, "CJ9J9J9J9", &sipSelf, sipType_FbxVector4, &a0, sipType_FbxVector4, &a1, sipType_FbxVector4, &a2, sipType_FbxVector4, &a3))
        {
            bool sipRes;

            sipRes =  ::FbxVector4::AxisAlignmentInEulerAngle(*a0,*a1,*a2,*a3);

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxVector4, sipName_AxisAlignmentInEulerAngle, doc_FbxVector4_AxisAlignmentInEulerAngle);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxVector4_Length, "Length(self) -> float");

extern "C" {static PyObject *meth_FbxVector4_Length(PyObject *, PyObject *);}
static PyObject *meth_FbxVector4_Length(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxVector4 *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxVector4, &sipCpp))
        {
            double sipRes;

            sipRes = sipCpp->Length();

            return PyFloat_FromDouble(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxVector4, sipName_Length, doc_FbxVector4_Length);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxVector4_SquareLength, "SquareLength(self) -> float");

extern "C" {static PyObject *meth_FbxVector4_SquareLength(PyObject *, PyObject *);}
static PyObject *meth_FbxVector4_SquareLength(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxVector4 *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxVector4, &sipCpp))
        {
            double sipRes;

            sipRes = sipCpp->SquareLength();

            return PyFloat_FromDouble(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxVector4, sipName_SquareLength, doc_FbxVector4_SquareLength);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxVector4_Distance, "Distance(self, FbxVector4) -> float");

extern "C" {static PyObject *meth_FbxVector4_Distance(PyObject *, PyObject *);}
static PyObject *meth_FbxVector4_Distance(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxVector4* a0;
        const  ::FbxVector4 *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_FbxVector4, &sipCpp, sipType_FbxVector4, &a0))
        {
            double sipRes;

            sipRes = sipCpp->Distance(*a0);

            return PyFloat_FromDouble(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxVector4, sipName_Distance, doc_FbxVector4_Distance);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxVector4_Normalize, "Normalize(self)");

extern "C" {static PyObject *meth_FbxVector4_Normalize(PyObject *, PyObject *);}
static PyObject *meth_FbxVector4_Normalize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxVector4 *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxVector4, &sipCpp))
        {
            sipCpp->Normalize();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxVector4, sipName_Normalize, doc_FbxVector4_Normalize);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxVector4_SetXYZ, "SetXYZ(self, FbxQuaternion)");

extern "C" {static PyObject *meth_FbxVector4_SetXYZ(PyObject *, PyObject *);}
static PyObject *meth_FbxVector4_SetXYZ(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxQuaternion* a0;
         ::FbxVector4 *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_FbxVector4, &sipCpp, sipType_FbxQuaternion, &a0))
        {
            sipCpp->SetXYZ(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxVector4, sipName_SetXYZ, doc_FbxVector4_SetXYZ);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *slot_FbxVector4___repr__(PyObject *);}
static PyObject *slot_FbxVector4___repr__(PyObject *sipSelf)
{
     ::FbxVector4 *sipCpp = reinterpret_cast< ::FbxVector4 *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxVector4));

    if (!sipCpp)
        return SIP_NULLPTR;


    {
        {
            PyObject * sipRes = SIP_NULLPTR;

#line 215 "D:\\Program Files\\Autodesk\\FBX\\FBX Python Bindings\\2020.3.4\\sip\\fbxvector4.sip"
        char buf[256];
        sprintf(buf, "fbx.FbxVector4(%f, %f, %f, %f)", (*sipCpp)[0], (*sipCpp)[1], (*sipCpp)[2], (*sipCpp)[3]);
        sipRes = Py_BuildValue((char *)"s", buf);
#line 312 "D:\\Program Files\\Autodesk\\FBX\\FBX Python Bindings\\2020.3.4\\build\\fbx/sipfbxFbxVector4.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_FbxVector4___str__(PyObject *);}
static PyObject *slot_FbxVector4___str__(PyObject *sipSelf)
{
     ::FbxVector4 *sipCpp = reinterpret_cast< ::FbxVector4 *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxVector4));

    if (!sipCpp)
        return SIP_NULLPTR;


    {
        {
            PyObject * sipRes = SIP_NULLPTR;

#line 209 "D:\\Program Files\\Autodesk\\FBX\\FBX Python Bindings\\2020.3.4\\sip\\fbxvector4.sip"
        char buf[256];
        sprintf(buf, "fbx.FbxVector4(%f, %f, %f, %f)", (*sipCpp)[0], (*sipCpp)[1], (*sipCpp)[2], (*sipCpp)[3]);
        sipRes = Py_BuildValue((char *)"s", buf);
#line 339 "D:\\Program Files\\Autodesk\\FBX\\FBX Python Bindings\\2020.3.4\\build\\fbx/sipfbxFbxVector4.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_FbxVector4___neg__(PyObject *);}
static PyObject *slot_FbxVector4___neg__(PyObject *sipSelf)
{
     ::FbxVector4 *sipCpp = reinterpret_cast< ::FbxVector4 *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxVector4));

    if (!sipCpp)
        return SIP_NULLPTR;


    {
        {
             ::FbxVector4*sipRes;

            sipRes = new  ::FbxVector4(-(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_FbxVector4,SIP_NULLPTR);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_FbxVector4___itruediv__(PyObject *,PyObject *);}
static PyObject *slot_FbxVector4___itruediv__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_FbxVector4)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::FbxVector4 *sipCpp = reinterpret_cast< ::FbxVector4 *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxVector4));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        double a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1d", &a0))
        {
            sipCpp-> ::FbxVector4::operator/=(a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    {
        const  ::FbxVector4* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxVector4, &a0))
        {
            sipCpp-> ::FbxVector4::operator/=(*a0);

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


extern "C" {static PyObject *slot_FbxVector4___imul__(PyObject *,PyObject *);}
static PyObject *slot_FbxVector4___imul__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_FbxVector4)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::FbxVector4 *sipCpp = reinterpret_cast< ::FbxVector4 *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxVector4));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        double a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1d", &a0))
        {
            sipCpp-> ::FbxVector4::operator*=(a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    {
        const  ::FbxVector4* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxVector4, &a0))
        {
            sipCpp-> ::FbxVector4::operator*=(*a0);

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


extern "C" {static PyObject *slot_FbxVector4___isub__(PyObject *,PyObject *);}
static PyObject *slot_FbxVector4___isub__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_FbxVector4)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::FbxVector4 *sipCpp = reinterpret_cast< ::FbxVector4 *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxVector4));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        double a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1d", &a0))
        {
            sipCpp-> ::FbxVector4::operator-=(a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    {
        const  ::FbxVector4* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxVector4, &a0))
        {
            sipCpp-> ::FbxVector4::operator-=(*a0);

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


extern "C" {static PyObject *slot_FbxVector4___iadd__(PyObject *,PyObject *);}
static PyObject *slot_FbxVector4___iadd__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_FbxVector4)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::FbxVector4 *sipCpp = reinterpret_cast< ::FbxVector4 *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxVector4));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        double a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1d", &a0))
        {
            sipCpp-> ::FbxVector4::operator+=(a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    {
        const  ::FbxVector4* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxVector4, &a0))
        {
            sipCpp-> ::FbxVector4::operator+=(*a0);

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


extern "C" {static PyObject *slot_FbxVector4___truediv__(PyObject *,PyObject *);}
static PyObject *slot_FbxVector4___truediv__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxVector4* a0;
        double a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9d", sipType_FbxVector4, &a0, &a1))
        {
             ::FbxVector4*sipRes;

            sipRes = new  ::FbxVector4((*a0 / a1));

            return sipConvertFromNewType(sipRes,sipType_FbxVector4,SIP_NULLPTR);
        }
    }

    {
         ::FbxVector4* a0;
        const  ::FbxVector4* a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9J9", sipType_FbxVector4, &a0, sipType_FbxVector4, &a1))
        {
             ::FbxVector4*sipRes;

            sipRes = new  ::FbxVector4((*a0 / *a1));

            return sipConvertFromNewType(sipRes,sipType_FbxVector4,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_fbx, truediv_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_FbxVector4___mul__(PyObject *,PyObject *);}
static PyObject *slot_FbxVector4___mul__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxVector4* a0;
        double a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9d", sipType_FbxVector4, &a0, &a1))
        {
             ::FbxVector4*sipRes;

            sipRes = new  ::FbxVector4((*a0 * a1));

            return sipConvertFromNewType(sipRes,sipType_FbxVector4,SIP_NULLPTR);
        }
    }

    {
         ::FbxVector4* a0;
        const  ::FbxVector4* a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9J9", sipType_FbxVector4, &a0, sipType_FbxVector4, &a1))
        {
             ::FbxVector4*sipRes;

            sipRes = new  ::FbxVector4((*a0 * *a1));

            return sipConvertFromNewType(sipRes,sipType_FbxVector4,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_fbx, mul_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_FbxVector4___sub__(PyObject *,PyObject *);}
static PyObject *slot_FbxVector4___sub__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxVector4* a0;
        double a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9d", sipType_FbxVector4, &a0, &a1))
        {
             ::FbxVector4*sipRes;

            sipRes = new  ::FbxVector4((*a0 - a1));

            return sipConvertFromNewType(sipRes,sipType_FbxVector4,SIP_NULLPTR);
        }
    }

    {
         ::FbxVector4* a0;
        const  ::FbxVector4* a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9J9", sipType_FbxVector4, &a0, sipType_FbxVector4, &a1))
        {
             ::FbxVector4*sipRes;

            sipRes = new  ::FbxVector4((*a0 - *a1));

            return sipConvertFromNewType(sipRes,sipType_FbxVector4,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_fbx, sub_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_FbxVector4___add__(PyObject *,PyObject *);}
static PyObject *slot_FbxVector4___add__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxVector4* a0;
        double a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9d", sipType_FbxVector4, &a0, &a1))
        {
             ::FbxVector4*sipRes;

            sipRes = new  ::FbxVector4((*a0 + a1));

            return sipConvertFromNewType(sipRes,sipType_FbxVector4,SIP_NULLPTR);
        }
    }

    {
         ::FbxVector4* a0;
        const  ::FbxVector4* a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9J9", sipType_FbxVector4, &a0, sipType_FbxVector4, &a1))
        {
             ::FbxVector4*sipRes;

            sipRes = new  ::FbxVector4((*a0 + *a1));

            return sipConvertFromNewType(sipRes,sipType_FbxVector4,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_fbx, add_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_FbxVector4___getitem__(PyObject *,PyObject *);}
static PyObject *slot_FbxVector4___getitem__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxVector4 *sipCpp = reinterpret_cast< ::FbxVector4 *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxVector4));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            double sipRes = 0;
            int sipIsErr = 0;

#line 15 "D:\\Program Files\\Autodesk\\FBX\\FBX Python Bindings\\2020.3.4\\sip\\fbxvector4.sip"
        if (a0 < 0 || a0 >= 4)
        {
            PyErr_Format(PyExc_IndexError, "sequence index out of range");
            sipIsErr = 1;
        }
        else
        {
            sipRes = (*sipCpp)[a0];
        }
#line 776 "D:\\Program Files\\Autodesk\\FBX\\FBX Python Bindings\\2020.3.4\\build\\fbx/sipfbxFbxVector4.cpp"

            if (sipIsErr)
                return 0;

            return PyFloat_FromDouble(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxVector4, sipName___getitem__, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *slot_FbxVector4___ne__(PyObject *,PyObject *);}
static PyObject *slot_FbxVector4___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxVector4 *sipCpp = reinterpret_cast< ::FbxVector4 *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxVector4));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxVector4* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxVector4, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::FbxVector4::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_fbx, ne_slot, sipType_FbxVector4, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_FbxVector4___eq__(PyObject *,PyObject *);}
static PyObject *slot_FbxVector4___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxVector4 *sipCpp = reinterpret_cast< ::FbxVector4 *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxVector4));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxVector4* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxVector4, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::FbxVector4::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_fbx, eq_slot, sipType_FbxVector4, sipSelf, sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_FbxVector4(void *, int);}
static void release_FbxVector4(void *sipCppV, int)
{
    delete reinterpret_cast< ::FbxVector4 *>(sipCppV);
}


extern "C" {static void *array_FbxVector4(Py_ssize_t);}
static void *array_FbxVector4(Py_ssize_t sipNrElem)
{
    return new  ::FbxVector4[sipNrElem];
}


extern "C" {static void assign_FbxVector4(void *, Py_ssize_t, void *);}
static void assign_FbxVector4(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::FbxVector4 *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::FbxVector4 *>(sipSrc);
}


extern "C" {static void *copy_FbxVector4(const void *, Py_ssize_t);}
static void *copy_FbxVector4(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::FbxVector4(reinterpret_cast<const  ::FbxVector4 *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_FbxVector4(sipSimpleWrapper *);}
static void dealloc_FbxVector4(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_FbxVector4(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_FbxVector4(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_FbxVector4(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::FbxVector4 *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new  ::FbxVector4();

            return sipCpp;
        }
    }

    {
        const  ::FbxVector4* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_FbxVector4, &a0))
        {
            sipCpp = new  ::FbxVector4(*a0);

            return sipCpp;
        }
    }

    {
        double a0;
        double a1;
        double a2;
        double a3 = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "ddd|d", &a0, &a1, &a2, &a3))
        {
            sipCpp = new  ::FbxVector4(a0,a1,a2,a3);

            return sipCpp;
        }
    }

    {
        const  ::FbxDouble3* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_FbxDouble3, &a0))
        {
            sipCpp = new  ::FbxVector4(*a0);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_FbxVector4[] = {
    {(void *)slot_FbxVector4___repr__, repr_slot},
    {(void *)slot_FbxVector4___str__, str_slot},
    {(void *)slot_FbxVector4___neg__, neg_slot},
    {(void *)slot_FbxVector4___itruediv__, itruediv_slot},
    {(void *)slot_FbxVector4___imul__, imul_slot},
    {(void *)slot_FbxVector4___isub__, isub_slot},
    {(void *)slot_FbxVector4___iadd__, iadd_slot},
    {(void *)slot_FbxVector4___truediv__, truediv_slot},
    {(void *)slot_FbxVector4___mul__, mul_slot},
    {(void *)slot_FbxVector4___sub__, sub_slot},
    {(void *)slot_FbxVector4___add__, add_slot},
    {(void *)slot_FbxVector4___getitem__, getitem_slot},
    {(void *)slot_FbxVector4___ne__, ne_slot},
    {(void *)slot_FbxVector4___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_FbxVector4[] = {
    {sipName_AxisAlignmentInEulerAngle, meth_FbxVector4_AxisAlignmentInEulerAngle, METH_VARARGS, doc_FbxVector4_AxisAlignmentInEulerAngle},
    {sipName_CrossProduct, meth_FbxVector4_CrossProduct, METH_VARARGS, doc_FbxVector4_CrossProduct},
    {sipName_Distance, meth_FbxVector4_Distance, METH_VARARGS, doc_FbxVector4_Distance},
    {sipName_DotProduct, meth_FbxVector4_DotProduct, METH_VARARGS, doc_FbxVector4_DotProduct},
    {sipName_Length, meth_FbxVector4_Length, METH_VARARGS, doc_FbxVector4_Length},
    {sipName_Normalize, meth_FbxVector4_Normalize, METH_VARARGS, doc_FbxVector4_Normalize},
    {sipName_Set, meth_FbxVector4_Set, METH_VARARGS, doc_FbxVector4_Set},
    {sipName_SetXYZ, meth_FbxVector4_SetXYZ, METH_VARARGS, doc_FbxVector4_SetXYZ},
    {sipName_SquareLength, meth_FbxVector4_SquareLength, METH_VARARGS, doc_FbxVector4_SquareLength}
};

PyDoc_STRVAR(doc_FbxVector4, "\1FbxVector4()\n"
"FbxVector4(FbxVector4)\n"
"FbxVector4(float, float, float, float = 0)\n"
"FbxVector4(FbxDouble3)");


sipClassTypeDef sipTypeDef_fbx_FbxVector4 = {
    {
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_FbxVector4,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_FbxVector4,
        {0, 0, 1},
        9, methods_FbxVector4,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_FbxVector4,
    -1,
    -1,
    SIP_NULLPTR,
    slots_FbxVector4,
    init_type_FbxVector4,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_FbxVector4,
    assign_FbxVector4,
    array_FbxVector4,
    copy_FbxVector4,
    release_FbxVector4,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};
