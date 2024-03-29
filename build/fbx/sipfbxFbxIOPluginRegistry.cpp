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




class sipFbxIOPluginRegistry : public  ::FbxIOPluginRegistry
{
public:
    sipFbxIOPluginRegistry();
    sipFbxIOPluginRegistry(const  ::FbxIOPluginRegistry&);
    ~sipFbxIOPluginRegistry();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipFbxIOPluginRegistry(const sipFbxIOPluginRegistry &);
    sipFbxIOPluginRegistry &operator = (const sipFbxIOPluginRegistry &);
};

sipFbxIOPluginRegistry::sipFbxIOPluginRegistry():  ::FbxIOPluginRegistry(), sipPySelf(SIP_NULLPTR)
{
}

sipFbxIOPluginRegistry::sipFbxIOPluginRegistry(const  ::FbxIOPluginRegistry& a0):  ::FbxIOPluginRegistry(a0), sipPySelf(SIP_NULLPTR)
{
}

sipFbxIOPluginRegistry::~sipFbxIOPluginRegistry()
{
    sipInstanceDestroyedEx(&sipPySelf);
}


PyDoc_STRVAR(doc_FbxIOPluginRegistry_RegisterReader, "RegisterReader(self, str, bool = False) -> Tuple[int, int]");

extern "C" {static PyObject *meth_FbxIOPluginRegistry_RegisterReader(PyObject *, PyObject *);}
static PyObject *meth_FbxIOPluginRegistry_RegisterReader(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const char* a0;
        PyObject *a0Keep;
        int a1;
        int a2;
        bool a3 = 0;
         ::FbxIOPluginRegistry *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BA8|b", &sipSelf, sipType_FbxIOPluginRegistry, &sipCpp, &a0Keep, &a0, &a3))
        {
            sipCpp->RegisterReader(a0,a1,a2,a3);
            Py_DECREF(a0Keep);

            return sipBuildResult(0,"(ii)",a1,a2);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxIOPluginRegistry, sipName_RegisterReader, doc_FbxIOPluginRegistry_RegisterReader);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxIOPluginRegistry_RegisterWriter, "RegisterWriter(self, str, bool = False) -> Tuple[int, int]");

extern "C" {static PyObject *meth_FbxIOPluginRegistry_RegisterWriter(PyObject *, PyObject *);}
static PyObject *meth_FbxIOPluginRegistry_RegisterWriter(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const char* a0;
        PyObject *a0Keep;
        int a1;
        int a2;
        bool a3 = 0;
         ::FbxIOPluginRegistry *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BA8|b", &sipSelf, sipType_FbxIOPluginRegistry, &sipCpp, &a0Keep, &a0, &a3))
        {
            sipCpp->RegisterWriter(a0,a1,a2,a3);
            Py_DECREF(a0Keep);

            return sipBuildResult(0,"(ii)",a1,a2);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxIOPluginRegistry, sipName_RegisterWriter, doc_FbxIOPluginRegistry_RegisterWriter);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxIOPluginRegistry_FindReaderIDByExtension, "FindReaderIDByExtension(self, str) -> int");

extern "C" {static PyObject *meth_FbxIOPluginRegistry_FindReaderIDByExtension(PyObject *, PyObject *);}
static PyObject *meth_FbxIOPluginRegistry_FindReaderIDByExtension(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const char* a0;
        PyObject *a0Keep;
        const  ::FbxIOPluginRegistry *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BA8", &sipSelf, sipType_FbxIOPluginRegistry, &sipCpp, &a0Keep, &a0))
        {
            int sipRes;

            sipRes = sipCpp->FindReaderIDByExtension(a0);
            Py_DECREF(a0Keep);

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxIOPluginRegistry, sipName_FindReaderIDByExtension, doc_FbxIOPluginRegistry_FindReaderIDByExtension);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxIOPluginRegistry_FindWriterIDByExtension, "FindWriterIDByExtension(self, str) -> int");

extern "C" {static PyObject *meth_FbxIOPluginRegistry_FindWriterIDByExtension(PyObject *, PyObject *);}
static PyObject *meth_FbxIOPluginRegistry_FindWriterIDByExtension(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const char* a0;
        PyObject *a0Keep;
        const  ::FbxIOPluginRegistry *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BA8", &sipSelf, sipType_FbxIOPluginRegistry, &sipCpp, &a0Keep, &a0))
        {
            int sipRes;

            sipRes = sipCpp->FindWriterIDByExtension(a0);
            Py_DECREF(a0Keep);

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxIOPluginRegistry, sipName_FindWriterIDByExtension, doc_FbxIOPluginRegistry_FindWriterIDByExtension);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxIOPluginRegistry_FindReaderIDByDescription, "FindReaderIDByDescription(self, str) -> int");

extern "C" {static PyObject *meth_FbxIOPluginRegistry_FindReaderIDByDescription(PyObject *, PyObject *);}
static PyObject *meth_FbxIOPluginRegistry_FindReaderIDByDescription(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const char* a0;
        PyObject *a0Keep;
        const  ::FbxIOPluginRegistry *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BA8", &sipSelf, sipType_FbxIOPluginRegistry, &sipCpp, &a0Keep, &a0))
        {
            int sipRes;

            sipRes = sipCpp->FindReaderIDByDescription(a0);
            Py_DECREF(a0Keep);

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxIOPluginRegistry, sipName_FindReaderIDByDescription, doc_FbxIOPluginRegistry_FindReaderIDByDescription);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxIOPluginRegistry_FindWriterIDByDescription, "FindWriterIDByDescription(self, str) -> int");

extern "C" {static PyObject *meth_FbxIOPluginRegistry_FindWriterIDByDescription(PyObject *, PyObject *);}
static PyObject *meth_FbxIOPluginRegistry_FindWriterIDByDescription(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const char* a0;
        PyObject *a0Keep;
        const  ::FbxIOPluginRegistry *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BA8", &sipSelf, sipType_FbxIOPluginRegistry, &sipCpp, &a0Keep, &a0))
        {
            int sipRes;

            sipRes = sipCpp->FindWriterIDByDescription(a0);
            Py_DECREF(a0Keep);

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxIOPluginRegistry, sipName_FindWriterIDByDescription, doc_FbxIOPluginRegistry_FindWriterIDByDescription);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxIOPluginRegistry_ReaderIsFBX, "ReaderIsFBX(self, int) -> bool");

extern "C" {static PyObject *meth_FbxIOPluginRegistry_ReaderIsFBX(PyObject *, PyObject *);}
static PyObject *meth_FbxIOPluginRegistry_ReaderIsFBX(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
        const  ::FbxIOPluginRegistry *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_FbxIOPluginRegistry, &sipCpp, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->ReaderIsFBX(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxIOPluginRegistry, sipName_ReaderIsFBX, doc_FbxIOPluginRegistry_ReaderIsFBX);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxIOPluginRegistry_WriterIsFBX, "WriterIsFBX(self, int) -> bool");

extern "C" {static PyObject *meth_FbxIOPluginRegistry_WriterIsFBX(PyObject *, PyObject *);}
static PyObject *meth_FbxIOPluginRegistry_WriterIsFBX(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
        const  ::FbxIOPluginRegistry *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_FbxIOPluginRegistry, &sipCpp, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->WriterIsFBX(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxIOPluginRegistry, sipName_WriterIsFBX, doc_FbxIOPluginRegistry_WriterIsFBX);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxIOPluginRegistry_ReaderIsGenuine, "ReaderIsGenuine(self, int) -> bool");

extern "C" {static PyObject *meth_FbxIOPluginRegistry_ReaderIsGenuine(PyObject *, PyObject *);}
static PyObject *meth_FbxIOPluginRegistry_ReaderIsGenuine(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
        const  ::FbxIOPluginRegistry *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_FbxIOPluginRegistry, &sipCpp, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->ReaderIsGenuine(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxIOPluginRegistry, sipName_ReaderIsGenuine, doc_FbxIOPluginRegistry_ReaderIsGenuine);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxIOPluginRegistry_WriterIsGenuine, "WriterIsGenuine(self, int) -> bool");

extern "C" {static PyObject *meth_FbxIOPluginRegistry_WriterIsGenuine(PyObject *, PyObject *);}
static PyObject *meth_FbxIOPluginRegistry_WriterIsGenuine(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
        const  ::FbxIOPluginRegistry *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_FbxIOPluginRegistry, &sipCpp, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->WriterIsGenuine(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxIOPluginRegistry, sipName_WriterIsGenuine, doc_FbxIOPluginRegistry_WriterIsGenuine);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxIOPluginRegistry_GetReaderFormatCount, "GetReaderFormatCount(self) -> int");

extern "C" {static PyObject *meth_FbxIOPluginRegistry_GetReaderFormatCount(PyObject *, PyObject *);}
static PyObject *meth_FbxIOPluginRegistry_GetReaderFormatCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxIOPluginRegistry *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxIOPluginRegistry, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->GetReaderFormatCount();

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxIOPluginRegistry, sipName_GetReaderFormatCount, doc_FbxIOPluginRegistry_GetReaderFormatCount);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxIOPluginRegistry_GetWriterFormatCount, "GetWriterFormatCount(self) -> int");

extern "C" {static PyObject *meth_FbxIOPluginRegistry_GetWriterFormatCount(PyObject *, PyObject *);}
static PyObject *meth_FbxIOPluginRegistry_GetWriterFormatCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxIOPluginRegistry *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxIOPluginRegistry, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->GetWriterFormatCount();

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxIOPluginRegistry, sipName_GetWriterFormatCount, doc_FbxIOPluginRegistry_GetWriterFormatCount);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxIOPluginRegistry_GetReaderFormatDescription, "GetReaderFormatDescription(self, int) -> str");

extern "C" {static PyObject *meth_FbxIOPluginRegistry_GetReaderFormatDescription(PyObject *, PyObject *);}
static PyObject *meth_FbxIOPluginRegistry_GetReaderFormatDescription(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
        const  ::FbxIOPluginRegistry *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_FbxIOPluginRegistry, &sipCpp, &a0))
        {
            const char*sipRes;

            sipRes = sipCpp->GetReaderFormatDescription(a0);

            if (sipRes == SIP_NULLPTR)
            {
                Py_INCREF(Py_None);
                return Py_None;
            }

            return PyUnicode_FromString(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxIOPluginRegistry, sipName_GetReaderFormatDescription, doc_FbxIOPluginRegistry_GetReaderFormatDescription);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxIOPluginRegistry_GetWriterFormatDescription, "GetWriterFormatDescription(self, int) -> str");

extern "C" {static PyObject *meth_FbxIOPluginRegistry_GetWriterFormatDescription(PyObject *, PyObject *);}
static PyObject *meth_FbxIOPluginRegistry_GetWriterFormatDescription(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
        const  ::FbxIOPluginRegistry *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_FbxIOPluginRegistry, &sipCpp, &a0))
        {
            const char*sipRes;

            sipRes = sipCpp->GetWriterFormatDescription(a0);

            if (sipRes == SIP_NULLPTR)
            {
                Py_INCREF(Py_None);
                return Py_None;
            }

            return PyUnicode_FromString(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxIOPluginRegistry, sipName_GetWriterFormatDescription, doc_FbxIOPluginRegistry_GetWriterFormatDescription);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxIOPluginRegistry_GetReaderFormatExtension, "GetReaderFormatExtension(self, int) -> str");

extern "C" {static PyObject *meth_FbxIOPluginRegistry_GetReaderFormatExtension(PyObject *, PyObject *);}
static PyObject *meth_FbxIOPluginRegistry_GetReaderFormatExtension(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
        const  ::FbxIOPluginRegistry *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_FbxIOPluginRegistry, &sipCpp, &a0))
        {
            const char*sipRes;

            sipRes = sipCpp->GetReaderFormatExtension(a0);

            if (sipRes == SIP_NULLPTR)
            {
                Py_INCREF(Py_None);
                return Py_None;
            }

            return PyUnicode_FromString(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxIOPluginRegistry, sipName_GetReaderFormatExtension, doc_FbxIOPluginRegistry_GetReaderFormatExtension);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxIOPluginRegistry_GetWriterFormatExtension, "GetWriterFormatExtension(self, int) -> str");

extern "C" {static PyObject *meth_FbxIOPluginRegistry_GetWriterFormatExtension(PyObject *, PyObject *);}
static PyObject *meth_FbxIOPluginRegistry_GetWriterFormatExtension(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
        const  ::FbxIOPluginRegistry *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_FbxIOPluginRegistry, &sipCpp, &a0))
        {
            const char*sipRes;

            sipRes = sipCpp->GetWriterFormatExtension(a0);

            if (sipRes == SIP_NULLPTR)
            {
                Py_INCREF(Py_None);
                return Py_None;
            }

            return PyUnicode_FromString(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxIOPluginRegistry, sipName_GetWriterFormatExtension, doc_FbxIOPluginRegistry_GetWriterFormatExtension);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxIOPluginRegistry_DetectReaderFileFormat, "DetectReaderFileFormat(self, str) -> Tuple[bool, int]");

extern "C" {static PyObject *meth_FbxIOPluginRegistry_DetectReaderFileFormat(PyObject *, PyObject *);}
static PyObject *meth_FbxIOPluginRegistry_DetectReaderFileFormat(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const char* a0;
        PyObject *a0Keep;
        int a1;
        const  ::FbxIOPluginRegistry *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BA8", &sipSelf, sipType_FbxIOPluginRegistry, &sipCpp, &a0Keep, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->DetectReaderFileFormat(a0,a1);
            Py_DECREF(a0Keep);

            return sipBuildResult(0,"(bi)",sipRes,a1);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxIOPluginRegistry, sipName_DetectReaderFileFormat, doc_FbxIOPluginRegistry_DetectReaderFileFormat);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxIOPluginRegistry_DetectWriterFileFormat, "DetectWriterFileFormat(self, str) -> Tuple[bool, int]");

extern "C" {static PyObject *meth_FbxIOPluginRegistry_DetectWriterFileFormat(PyObject *, PyObject *);}
static PyObject *meth_FbxIOPluginRegistry_DetectWriterFileFormat(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const char* a0;
        PyObject *a0Keep;
        int a1;
        const  ::FbxIOPluginRegistry *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BA8", &sipSelf, sipType_FbxIOPluginRegistry, &sipCpp, &a0Keep, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->DetectWriterFileFormat(a0,a1);
            Py_DECREF(a0Keep);

            return sipBuildResult(0,"(bi)",sipRes,a1);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxIOPluginRegistry, sipName_DetectWriterFileFormat, doc_FbxIOPluginRegistry_DetectWriterFileFormat);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxIOPluginRegistry_GetNativeReaderFormat, "GetNativeReaderFormat(self) -> int");

extern "C" {static PyObject *meth_FbxIOPluginRegistry_GetNativeReaderFormat(PyObject *, PyObject *);}
static PyObject *meth_FbxIOPluginRegistry_GetNativeReaderFormat(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxIOPluginRegistry *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxIOPluginRegistry, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->GetNativeReaderFormat();

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxIOPluginRegistry, sipName_GetNativeReaderFormat, doc_FbxIOPluginRegistry_GetNativeReaderFormat);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxIOPluginRegistry_GetNativeWriterFormat, "GetNativeWriterFormat(self) -> int");

extern "C" {static PyObject *meth_FbxIOPluginRegistry_GetNativeWriterFormat(PyObject *, PyObject *);}
static PyObject *meth_FbxIOPluginRegistry_GetNativeWriterFormat(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxIOPluginRegistry *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxIOPluginRegistry, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->GetNativeWriterFormat();

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxIOPluginRegistry, sipName_GetNativeWriterFormat, doc_FbxIOPluginRegistry_GetNativeWriterFormat);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxIOPluginRegistry_FillIOSettingsForReadersRegistered, "FillIOSettingsForReadersRegistered(self, FbxIOSettings)");

extern "C" {static PyObject *meth_FbxIOPluginRegistry_FillIOSettingsForReadersRegistered(PyObject *, PyObject *);}
static PyObject *meth_FbxIOPluginRegistry_FillIOSettingsForReadersRegistered(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxIOSettings* a0;
         ::FbxIOPluginRegistry *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_FbxIOPluginRegistry, &sipCpp, sipType_FbxIOSettings, &a0))
        {
            sipCpp->FillIOSettingsForReadersRegistered(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxIOPluginRegistry, sipName_FillIOSettingsForReadersRegistered, doc_FbxIOPluginRegistry_FillIOSettingsForReadersRegistered);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxIOPluginRegistry_FillIOSettingsForWritersRegistered, "FillIOSettingsForWritersRegistered(self, FbxIOSettings)");

extern "C" {static PyObject *meth_FbxIOPluginRegistry_FillIOSettingsForWritersRegistered(PyObject *, PyObject *);}
static PyObject *meth_FbxIOPluginRegistry_FillIOSettingsForWritersRegistered(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxIOSettings* a0;
         ::FbxIOPluginRegistry *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_FbxIOPluginRegistry, &sipCpp, sipType_FbxIOSettings, &a0))
        {
            sipCpp->FillIOSettingsForWritersRegistered(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxIOPluginRegistry, sipName_FillIOSettingsForWritersRegistered, doc_FbxIOPluginRegistry_FillIOSettingsForWritersRegistered);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_FbxIOPluginRegistry(void *, int);}
static void release_FbxIOPluginRegistry(void *sipCppV, int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipFbxIOPluginRegistry *>(sipCppV);
    else
        delete reinterpret_cast< ::FbxIOPluginRegistry *>(sipCppV);
}


extern "C" {static void *array_FbxIOPluginRegistry(Py_ssize_t);}
static void *array_FbxIOPluginRegistry(Py_ssize_t sipNrElem)
{
    return new  ::FbxIOPluginRegistry[sipNrElem];
}


extern "C" {static void assign_FbxIOPluginRegistry(void *, Py_ssize_t, void *);}
static void assign_FbxIOPluginRegistry(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::FbxIOPluginRegistry *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::FbxIOPluginRegistry *>(sipSrc);
}


extern "C" {static void *copy_FbxIOPluginRegistry(const void *, Py_ssize_t);}
static void *copy_FbxIOPluginRegistry(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::FbxIOPluginRegistry(reinterpret_cast<const  ::FbxIOPluginRegistry *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_FbxIOPluginRegistry(sipSimpleWrapper *);}
static void dealloc_FbxIOPluginRegistry(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipFbxIOPluginRegistry *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_FbxIOPluginRegistry(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_FbxIOPluginRegistry(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_FbxIOPluginRegistry(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipFbxIOPluginRegistry *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new sipFbxIOPluginRegistry();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const  ::FbxIOPluginRegistry* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_FbxIOPluginRegistry, &a0))
        {
            sipCpp = new sipFbxIOPluginRegistry(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


static PyMethodDef methods_FbxIOPluginRegistry[] = {
    {sipName_DetectReaderFileFormat, meth_FbxIOPluginRegistry_DetectReaderFileFormat, METH_VARARGS, doc_FbxIOPluginRegistry_DetectReaderFileFormat},
    {sipName_DetectWriterFileFormat, meth_FbxIOPluginRegistry_DetectWriterFileFormat, METH_VARARGS, doc_FbxIOPluginRegistry_DetectWriterFileFormat},
    {sipName_FillIOSettingsForReadersRegistered, meth_FbxIOPluginRegistry_FillIOSettingsForReadersRegistered, METH_VARARGS, doc_FbxIOPluginRegistry_FillIOSettingsForReadersRegistered},
    {sipName_FillIOSettingsForWritersRegistered, meth_FbxIOPluginRegistry_FillIOSettingsForWritersRegistered, METH_VARARGS, doc_FbxIOPluginRegistry_FillIOSettingsForWritersRegistered},
    {sipName_FindReaderIDByDescription, meth_FbxIOPluginRegistry_FindReaderIDByDescription, METH_VARARGS, doc_FbxIOPluginRegistry_FindReaderIDByDescription},
    {sipName_FindReaderIDByExtension, meth_FbxIOPluginRegistry_FindReaderIDByExtension, METH_VARARGS, doc_FbxIOPluginRegistry_FindReaderIDByExtension},
    {sipName_FindWriterIDByDescription, meth_FbxIOPluginRegistry_FindWriterIDByDescription, METH_VARARGS, doc_FbxIOPluginRegistry_FindWriterIDByDescription},
    {sipName_FindWriterIDByExtension, meth_FbxIOPluginRegistry_FindWriterIDByExtension, METH_VARARGS, doc_FbxIOPluginRegistry_FindWriterIDByExtension},
    {sipName_GetNativeReaderFormat, meth_FbxIOPluginRegistry_GetNativeReaderFormat, METH_VARARGS, doc_FbxIOPluginRegistry_GetNativeReaderFormat},
    {sipName_GetNativeWriterFormat, meth_FbxIOPluginRegistry_GetNativeWriterFormat, METH_VARARGS, doc_FbxIOPluginRegistry_GetNativeWriterFormat},
    {sipName_GetReaderFormatCount, meth_FbxIOPluginRegistry_GetReaderFormatCount, METH_VARARGS, doc_FbxIOPluginRegistry_GetReaderFormatCount},
    {sipName_GetReaderFormatDescription, meth_FbxIOPluginRegistry_GetReaderFormatDescription, METH_VARARGS, doc_FbxIOPluginRegistry_GetReaderFormatDescription},
    {sipName_GetReaderFormatExtension, meth_FbxIOPluginRegistry_GetReaderFormatExtension, METH_VARARGS, doc_FbxIOPluginRegistry_GetReaderFormatExtension},
    {sipName_GetWriterFormatCount, meth_FbxIOPluginRegistry_GetWriterFormatCount, METH_VARARGS, doc_FbxIOPluginRegistry_GetWriterFormatCount},
    {sipName_GetWriterFormatDescription, meth_FbxIOPluginRegistry_GetWriterFormatDescription, METH_VARARGS, doc_FbxIOPluginRegistry_GetWriterFormatDescription},
    {sipName_GetWriterFormatExtension, meth_FbxIOPluginRegistry_GetWriterFormatExtension, METH_VARARGS, doc_FbxIOPluginRegistry_GetWriterFormatExtension},
    {sipName_ReaderIsFBX, meth_FbxIOPluginRegistry_ReaderIsFBX, METH_VARARGS, doc_FbxIOPluginRegistry_ReaderIsFBX},
    {sipName_ReaderIsGenuine, meth_FbxIOPluginRegistry_ReaderIsGenuine, METH_VARARGS, doc_FbxIOPluginRegistry_ReaderIsGenuine},
    {sipName_RegisterReader, meth_FbxIOPluginRegistry_RegisterReader, METH_VARARGS, doc_FbxIOPluginRegistry_RegisterReader},
    {sipName_RegisterWriter, meth_FbxIOPluginRegistry_RegisterWriter, METH_VARARGS, doc_FbxIOPluginRegistry_RegisterWriter},
    {sipName_WriterIsFBX, meth_FbxIOPluginRegistry_WriterIsFBX, METH_VARARGS, doc_FbxIOPluginRegistry_WriterIsFBX},
    {sipName_WriterIsGenuine, meth_FbxIOPluginRegistry_WriterIsGenuine, METH_VARARGS, doc_FbxIOPluginRegistry_WriterIsGenuine}
};

PyDoc_STRVAR(doc_FbxIOPluginRegistry, "\1FbxIOPluginRegistry()\n"
"FbxIOPluginRegistry(FbxIOPluginRegistry)");


sipClassTypeDef sipTypeDef_fbx_FbxIOPluginRegistry = {
    {
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_FbxIOPluginRegistry,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_FbxIOPluginRegistry,
        {0, 0, 1},
        22, methods_FbxIOPluginRegistry,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_FbxIOPluginRegistry,
    -1,
    -1,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_FbxIOPluginRegistry,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_FbxIOPluginRegistry,
    assign_FbxIOPluginRegistry,
    array_FbxIOPluginRegistry,
    copy_FbxIOPluginRegistry,
    release_FbxIOPluginRegistry,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};
