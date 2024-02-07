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




class sipFbxGlobalSettings : public  ::FbxGlobalSettings
{
public:
    sipFbxGlobalSettings( ::FbxManager&,const char*);
    virtual ~sipFbxGlobalSettings();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
     ::FbxClassId GetClassId() const SIP_OVERRIDE;
     ::FbxObject* Clone( ::FbxObject::ECloneType, ::FbxObject*,void*) const SIP_OVERRIDE;
    bool GetSelected() SIP_OVERRIDE;
    void SetSelected(bool) SIP_OVERRIDE;
    const char* Localize(const char*,const char*) const SIP_OVERRIDE;
     ::FbxString GetUrl() const SIP_OVERRIDE;
    bool SetUrl(const char*) SIP_OVERRIDE;
    const char* GetTypeName() const SIP_OVERRIDE;
     ::FbxStringList GetTypeFlags() const SIP_OVERRIDE;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipFbxGlobalSettings(const sipFbxGlobalSettings &);
    sipFbxGlobalSettings &operator = (const sipFbxGlobalSettings &);

    char sipPyMethods[9];
};

sipFbxGlobalSettings::sipFbxGlobalSettings( ::FbxManager& a0,const char*a1):  ::FbxGlobalSettings(a0,a1), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipFbxGlobalSettings::~sipFbxGlobalSettings()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

 ::FbxClassId sipFbxGlobalSettings::GetClassId() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[0]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_GetClassId);

    if (!sipMeth)
        return  ::FbxGlobalSettings::GetClassId();

    extern  ::FbxClassId sipVH_fbx_33(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_fbx_33(sipGILState, 0, sipPySelf, sipMeth);
}

 ::FbxObject* sipFbxGlobalSettings::Clone( ::FbxObject::ECloneType a0, ::FbxObject*a1,void*a2) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[1]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_Clone);

    if (!sipMeth)
        return  ::FbxGlobalSettings::Clone(a0,a1,a2);

    extern  ::FbxObject* sipVH_fbx_34(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::FbxObject::ECloneType, ::FbxObject*,void*);

    return sipVH_fbx_34(sipGILState, 0, sipPySelf, sipMeth, a0, a1, a2);
}

bool sipFbxGlobalSettings::GetSelected()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[2], &sipPySelf, SIP_NULLPTR, sipName_GetSelected);

    if (!sipMeth)
        return  ::FbxGlobalSettings::GetSelected();

    extern bool sipVH_fbx_17(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_fbx_17(sipGILState, 0, sipPySelf, sipMeth);
}

void sipFbxGlobalSettings::SetSelected(bool a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[3], &sipPySelf, SIP_NULLPTR, sipName_SetSelected);

    if (!sipMeth)
    {
         ::FbxGlobalSettings::SetSelected(a0);
        return;
    }

    extern void sipVH_fbx_35(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, bool);

    sipVH_fbx_35(sipGILState, 0, sipPySelf, sipMeth, a0);
}

const char* sipFbxGlobalSettings::Localize(const char*a0,const char*a1) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[4]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_Localize);

    if (!sipMeth)
        return  ::FbxGlobalSettings::Localize(a0,a1);

    extern const char* sipVH_fbx_36(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*,const char*, int);

    return sipVH_fbx_36(sipGILState, 0, sipPySelf, sipMeth, a0, a1, -1204);
}

 ::FbxString sipFbxGlobalSettings::GetUrl() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[5]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_GetUrl);

    if (!sipMeth)
        return  ::FbxGlobalSettings::GetUrl();

    extern  ::FbxString sipVH_fbx_37(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_fbx_37(sipGILState, 0, sipPySelf, sipMeth);
}

bool sipFbxGlobalSettings::SetUrl(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[6], &sipPySelf, SIP_NULLPTR, sipName_SetUrl);

    if (!sipMeth)
        return  ::FbxGlobalSettings::SetUrl(a0);

    extern bool sipVH_fbx_38(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    return sipVH_fbx_38(sipGILState, 0, sipPySelf, sipMeth, a0);
}

const char* sipFbxGlobalSettings::GetTypeName() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[7]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_GetTypeName);

    if (!sipMeth)
        return  ::FbxGlobalSettings::GetTypeName();

    extern const char* sipVH_fbx_27(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return sipVH_fbx_27(sipGILState, 0, sipPySelf, sipMeth, -1205);
}

 ::FbxStringList sipFbxGlobalSettings::GetTypeFlags() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[8]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_GetTypeFlags);

    if (!sipMeth)
        return  ::FbxGlobalSettings::GetTypeFlags();

    extern  ::FbxStringList sipVH_fbx_39(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_fbx_39(sipGILState, 0, sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_FbxGlobalSettings_Create, "Create(FbxManager, str) -> FbxGlobalSettings\n"
"Create(FbxObject, str) -> FbxGlobalSettings");

extern "C" {static PyObject *meth_FbxGlobalSettings_Create(PyObject *, PyObject *);}
static PyObject *meth_FbxGlobalSettings_Create(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxManager* a0;
        const char* a1;
        PyObject *a1Keep;

        if (sipParseArgs(&sipParseErr, sipArgs, "CJ8A8", &sipSelf, sipType_FbxManager, &a0, &a1Keep, &a1))
        {
             ::FbxGlobalSettings*sipRes;

            sipRes =  ::FbxGlobalSettings::Create(a0,a1);
            Py_DECREF(a1Keep);

            return sipConvertFromType(sipRes,sipType_FbxGlobalSettings,SIP_NULLPTR);
        }
    }

    {
         ::FbxObject* a0;
        const char* a1;
        PyObject *a1Keep;

        if (sipParseArgs(&sipParseErr, sipArgs, "CJ8A8", &sipSelf, sipType_FbxObject, &a0, &a1Keep, &a1))
        {
             ::FbxGlobalSettings*sipRes;

            sipRes =  ::FbxGlobalSettings::Create(a0,a1);
            Py_DECREF(a1Keep);

            return sipConvertFromType(sipRes,sipType_FbxGlobalSettings,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxGlobalSettings, sipName_Create, doc_FbxGlobalSettings_Create);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxGlobalSettings_GetClassId, "GetClassId(self) -> FbxClassId");

extern "C" {static PyObject *meth_FbxGlobalSettings_GetClassId(PyObject *, PyObject *);}
static PyObject *meth_FbxGlobalSettings_GetClassId(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_FbxGlobalSettings)) || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::FbxGlobalSettings *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxGlobalSettings, &sipCpp))
        {
             ::FbxClassId*sipRes;

            sipRes = new  ::FbxClassId((sipSelfWasArg ? sipCpp-> ::FbxGlobalSettings::GetClassId() : sipCpp->GetClassId()));

            return sipConvertFromNewType(sipRes,sipType_FbxClassId,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxGlobalSettings, sipName_GetClassId, doc_FbxGlobalSettings_GetClassId);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxGlobalSettings_SetAxisSystem, "SetAxisSystem(self, FbxAxisSystem)");

extern "C" {static PyObject *meth_FbxGlobalSettings_SetAxisSystem(PyObject *, PyObject *);}
static PyObject *meth_FbxGlobalSettings_SetAxisSystem(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxAxisSystem* a0;
         ::FbxGlobalSettings *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_FbxGlobalSettings, &sipCpp, sipType_FbxAxisSystem, &a0))
        {
            sipCpp->SetAxisSystem(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxGlobalSettings, sipName_SetAxisSystem, doc_FbxGlobalSettings_SetAxisSystem);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxGlobalSettings_GetAxisSystem, "GetAxisSystem(self) -> FbxAxisSystem");

extern "C" {static PyObject *meth_FbxGlobalSettings_GetAxisSystem(PyObject *, PyObject *);}
static PyObject *meth_FbxGlobalSettings_GetAxisSystem(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxGlobalSettings *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxGlobalSettings, &sipCpp))
        {
             ::FbxAxisSystem*sipRes;

            sipRes = new  ::FbxAxisSystem(sipCpp->GetAxisSystem());

            return sipConvertFromNewType(sipRes,sipType_FbxAxisSystem,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxGlobalSettings, sipName_GetAxisSystem, doc_FbxGlobalSettings_GetAxisSystem);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxGlobalSettings_SetOriginalUpAxis, "SetOriginalUpAxis(self, FbxAxisSystem)");

extern "C" {static PyObject *meth_FbxGlobalSettings_SetOriginalUpAxis(PyObject *, PyObject *);}
static PyObject *meth_FbxGlobalSettings_SetOriginalUpAxis(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxAxisSystem* a0;
         ::FbxGlobalSettings *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_FbxGlobalSettings, &sipCpp, sipType_FbxAxisSystem, &a0))
        {
            sipCpp->SetOriginalUpAxis(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxGlobalSettings, sipName_SetOriginalUpAxis, doc_FbxGlobalSettings_SetOriginalUpAxis);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxGlobalSettings_GetOriginalUpAxis, "GetOriginalUpAxis(self) -> int");

extern "C" {static PyObject *meth_FbxGlobalSettings_GetOriginalUpAxis(PyObject *, PyObject *);}
static PyObject *meth_FbxGlobalSettings_GetOriginalUpAxis(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxGlobalSettings *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxGlobalSettings, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->GetOriginalUpAxis();

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxGlobalSettings, sipName_GetOriginalUpAxis, doc_FbxGlobalSettings_GetOriginalUpAxis);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxGlobalSettings_SetSystemUnit, "SetSystemUnit(self, FbxSystemUnit)");

extern "C" {static PyObject *meth_FbxGlobalSettings_SetSystemUnit(PyObject *, PyObject *);}
static PyObject *meth_FbxGlobalSettings_SetSystemUnit(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxSystemUnit* a0;
         ::FbxGlobalSettings *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_FbxGlobalSettings, &sipCpp, sipType_FbxSystemUnit, &a0))
        {
            sipCpp->SetSystemUnit(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxGlobalSettings, sipName_SetSystemUnit, doc_FbxGlobalSettings_SetSystemUnit);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxGlobalSettings_GetSystemUnit, "GetSystemUnit(self) -> FbxSystemUnit");

extern "C" {static PyObject *meth_FbxGlobalSettings_GetSystemUnit(PyObject *, PyObject *);}
static PyObject *meth_FbxGlobalSettings_GetSystemUnit(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxGlobalSettings *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxGlobalSettings, &sipCpp))
        {
             ::FbxSystemUnit*sipRes;

            sipRes = new  ::FbxSystemUnit(sipCpp->GetSystemUnit());

            return sipConvertFromNewType(sipRes,sipType_FbxSystemUnit,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxGlobalSettings, sipName_GetSystemUnit, doc_FbxGlobalSettings_GetSystemUnit);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxGlobalSettings_SetOriginalSystemUnit, "SetOriginalSystemUnit(self, FbxSystemUnit)");

extern "C" {static PyObject *meth_FbxGlobalSettings_SetOriginalSystemUnit(PyObject *, PyObject *);}
static PyObject *meth_FbxGlobalSettings_SetOriginalSystemUnit(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxSystemUnit* a0;
         ::FbxGlobalSettings *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_FbxGlobalSettings, &sipCpp, sipType_FbxSystemUnit, &a0))
        {
            sipCpp->SetOriginalSystemUnit(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxGlobalSettings, sipName_SetOriginalSystemUnit, doc_FbxGlobalSettings_SetOriginalSystemUnit);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxGlobalSettings_GetOriginalSystemUnit, "GetOriginalSystemUnit(self) -> FbxSystemUnit");

extern "C" {static PyObject *meth_FbxGlobalSettings_GetOriginalSystemUnit(PyObject *, PyObject *);}
static PyObject *meth_FbxGlobalSettings_GetOriginalSystemUnit(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxGlobalSettings *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxGlobalSettings, &sipCpp))
        {
             ::FbxSystemUnit*sipRes;

            sipRes = new  ::FbxSystemUnit(sipCpp->GetOriginalSystemUnit());

            return sipConvertFromNewType(sipRes,sipType_FbxSystemUnit,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxGlobalSettings, sipName_GetOriginalSystemUnit, doc_FbxGlobalSettings_GetOriginalSystemUnit);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxGlobalSettings_SetAmbientColor, "SetAmbientColor(self, FbxColor)");

extern "C" {static PyObject *meth_FbxGlobalSettings_SetAmbientColor(PyObject *, PyObject *);}
static PyObject *meth_FbxGlobalSettings_SetAmbientColor(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxColor* a0;
         ::FbxGlobalSettings *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_FbxGlobalSettings, &sipCpp, sipType_FbxColor, &a0))
        {
            sipCpp->SetAmbientColor(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxGlobalSettings, sipName_SetAmbientColor, doc_FbxGlobalSettings_SetAmbientColor);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxGlobalSettings_GetAmbientColor, "GetAmbientColor(self) -> FbxColor");

extern "C" {static PyObject *meth_FbxGlobalSettings_GetAmbientColor(PyObject *, PyObject *);}
static PyObject *meth_FbxGlobalSettings_GetAmbientColor(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxGlobalSettings *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxGlobalSettings, &sipCpp))
        {
             ::FbxColor*sipRes;

            sipRes = new  ::FbxColor(sipCpp->GetAmbientColor());

            return sipConvertFromNewType(sipRes,sipType_FbxColor,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxGlobalSettings, sipName_GetAmbientColor, doc_FbxGlobalSettings_GetAmbientColor);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxGlobalSettings_SetDefaultCamera, "SetDefaultCamera(self, str) -> bool");

extern "C" {static PyObject *meth_FbxGlobalSettings_SetDefaultCamera(PyObject *, PyObject *);}
static PyObject *meth_FbxGlobalSettings_SetDefaultCamera(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const char* a0;
        PyObject *a0Keep;
         ::FbxGlobalSettings *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BA8", &sipSelf, sipType_FbxGlobalSettings, &sipCpp, &a0Keep, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->SetDefaultCamera(a0);
            Py_DECREF(a0Keep);

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxGlobalSettings, sipName_SetDefaultCamera, doc_FbxGlobalSettings_SetDefaultCamera);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxGlobalSettings_GetDefaultCamera, "GetDefaultCamera(self) -> FbxString");

extern "C" {static PyObject *meth_FbxGlobalSettings_GetDefaultCamera(PyObject *, PyObject *);}
static PyObject *meth_FbxGlobalSettings_GetDefaultCamera(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxGlobalSettings *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxGlobalSettings, &sipCpp))
        {
             ::FbxString*sipRes;

            sipRes = new  ::FbxString(sipCpp->GetDefaultCamera());

            return sipConvertFromNewType(sipRes,sipType_FbxString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxGlobalSettings, sipName_GetDefaultCamera, doc_FbxGlobalSettings_GetDefaultCamera);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxGlobalSettings_SetTimeMode, "SetTimeMode(self, FbxTime.EMode)");

extern "C" {static PyObject *meth_FbxGlobalSettings_SetTimeMode(PyObject *, PyObject *);}
static PyObject *meth_FbxGlobalSettings_SetTimeMode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxTime::EMode a0;
         ::FbxGlobalSettings *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_FbxGlobalSettings, &sipCpp, sipType_FbxTime_EMode, &a0))
        {
            sipCpp->SetTimeMode(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxGlobalSettings, sipName_SetTimeMode, doc_FbxGlobalSettings_SetTimeMode);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxGlobalSettings_GetTimeMode, "GetTimeMode(self) -> FbxTime.EMode");

extern "C" {static PyObject *meth_FbxGlobalSettings_GetTimeMode(PyObject *, PyObject *);}
static PyObject *meth_FbxGlobalSettings_GetTimeMode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxGlobalSettings *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxGlobalSettings, &sipCpp))
        {
             ::FbxTime::EMode sipRes;

            sipRes = sipCpp->GetTimeMode();

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_FbxTime_EMode);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxGlobalSettings, sipName_GetTimeMode, doc_FbxGlobalSettings_GetTimeMode);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxGlobalSettings_SetTimelineDefaultTimeSpan, "SetTimelineDefaultTimeSpan(self, FbxTimeSpan)");

extern "C" {static PyObject *meth_FbxGlobalSettings_SetTimelineDefaultTimeSpan(PyObject *, PyObject *);}
static PyObject *meth_FbxGlobalSettings_SetTimelineDefaultTimeSpan(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxTimeSpan* a0;
         ::FbxGlobalSettings *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_FbxGlobalSettings, &sipCpp, sipType_FbxTimeSpan, &a0))
        {
            sipCpp->SetTimelineDefaultTimeSpan(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxGlobalSettings, sipName_SetTimelineDefaultTimeSpan, doc_FbxGlobalSettings_SetTimelineDefaultTimeSpan);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxGlobalSettings_GetTimelineDefaultTimeSpan, "GetTimelineDefaultTimeSpan(self) -> FbxTimeSpan");

extern "C" {static PyObject *meth_FbxGlobalSettings_GetTimelineDefaultTimeSpan(PyObject *, PyObject *);}
static PyObject *meth_FbxGlobalSettings_GetTimelineDefaultTimeSpan(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxTimeSpan* a0;
        const  ::FbxGlobalSettings *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxGlobalSettings, &sipCpp))
        {
            a0 = new  ::FbxTimeSpan();

            sipCpp->GetTimelineDefaultTimeSpan(*a0);

            return sipConvertFromNewType(a0,sipType_FbxTimeSpan,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxGlobalSettings, sipName_GetTimelineDefaultTimeSpan, doc_FbxGlobalSettings_GetTimelineDefaultTimeSpan);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *slot_FbxGlobalSettings___ne__(PyObject *,PyObject *);}
static PyObject *slot_FbxGlobalSettings___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxGlobalSettings *sipCpp = reinterpret_cast< ::FbxGlobalSettings *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxGlobalSettings));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxGlobalSettings* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxGlobalSettings, &a0))
        {
            bool sipRes;

            sipRes = !sipCpp-> ::FbxGlobalSettings::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_fbx, ne_slot, sipType_FbxGlobalSettings, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_FbxGlobalSettings___eq__(PyObject *,PyObject *);}
static PyObject *slot_FbxGlobalSettings___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxGlobalSettings *sipCpp = reinterpret_cast< ::FbxGlobalSettings *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxGlobalSettings));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::FbxGlobalSettings* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxGlobalSettings, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::FbxGlobalSettings::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_fbx, eq_slot, sipType_FbxGlobalSettings, sipSelf, sipArg);
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_FbxGlobalSettings(void *, const sipTypeDef *);}
static void *cast_FbxGlobalSettings(void *sipCppV, const sipTypeDef *targetType)
{
     ::FbxGlobalSettings *sipCpp = reinterpret_cast< ::FbxGlobalSettings *>(sipCppV);

    if (targetType == sipType_FbxGlobalSettings)
        return sipCppV;

    if (targetType == sipType_FbxObject)
        return static_cast< ::FbxObject *>(sipCpp);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_FbxGlobalSettings(void *, int);}
static void release_FbxGlobalSettings(void *sipCppV, int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipFbxGlobalSettings *>(sipCppV);
}


extern "C" {static void dealloc_FbxGlobalSettings(sipSimpleWrapper *);}
static void dealloc_FbxGlobalSettings(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipFbxGlobalSettings *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_FbxGlobalSettings(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_FbxGlobalSettings(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_FbxGlobalSettings(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipFbxGlobalSettings *sipCpp = SIP_NULLPTR;

    {
         ::FbxManager* a0;
        const char* a1;
        PyObject *a1Keep;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9A8", sipType_FbxManager, &a0, &a1Keep, &a1))
        {
            sipCpp = new sipFbxGlobalSettings(*a0,a1);
            Py_DECREF(a1Keep);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_FbxGlobalSettings[] = {{244, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_FbxGlobalSettings[] = {
    {(void *)slot_FbxGlobalSettings___ne__, ne_slot},
    {(void *)slot_FbxGlobalSettings___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_FbxGlobalSettings[] = {
    {sipName_Create, meth_FbxGlobalSettings_Create, METH_VARARGS, doc_FbxGlobalSettings_Create},
    {sipName_GetAmbientColor, meth_FbxGlobalSettings_GetAmbientColor, METH_VARARGS, doc_FbxGlobalSettings_GetAmbientColor},
    {sipName_GetAxisSystem, meth_FbxGlobalSettings_GetAxisSystem, METH_VARARGS, doc_FbxGlobalSettings_GetAxisSystem},
    {sipName_GetClassId, meth_FbxGlobalSettings_GetClassId, METH_VARARGS, doc_FbxGlobalSettings_GetClassId},
    {sipName_GetDefaultCamera, meth_FbxGlobalSettings_GetDefaultCamera, METH_VARARGS, doc_FbxGlobalSettings_GetDefaultCamera},
    {sipName_GetOriginalSystemUnit, meth_FbxGlobalSettings_GetOriginalSystemUnit, METH_VARARGS, doc_FbxGlobalSettings_GetOriginalSystemUnit},
    {sipName_GetOriginalUpAxis, meth_FbxGlobalSettings_GetOriginalUpAxis, METH_VARARGS, doc_FbxGlobalSettings_GetOriginalUpAxis},
    {sipName_GetSystemUnit, meth_FbxGlobalSettings_GetSystemUnit, METH_VARARGS, doc_FbxGlobalSettings_GetSystemUnit},
    {sipName_GetTimeMode, meth_FbxGlobalSettings_GetTimeMode, METH_VARARGS, doc_FbxGlobalSettings_GetTimeMode},
    {sipName_GetTimelineDefaultTimeSpan, meth_FbxGlobalSettings_GetTimelineDefaultTimeSpan, METH_VARARGS, doc_FbxGlobalSettings_GetTimelineDefaultTimeSpan},
    {sipName_SetAmbientColor, meth_FbxGlobalSettings_SetAmbientColor, METH_VARARGS, doc_FbxGlobalSettings_SetAmbientColor},
    {sipName_SetAxisSystem, meth_FbxGlobalSettings_SetAxisSystem, METH_VARARGS, doc_FbxGlobalSettings_SetAxisSystem},
    {sipName_SetDefaultCamera, meth_FbxGlobalSettings_SetDefaultCamera, METH_VARARGS, doc_FbxGlobalSettings_SetDefaultCamera},
    {sipName_SetOriginalSystemUnit, meth_FbxGlobalSettings_SetOriginalSystemUnit, METH_VARARGS, doc_FbxGlobalSettings_SetOriginalSystemUnit},
    {sipName_SetOriginalUpAxis, meth_FbxGlobalSettings_SetOriginalUpAxis, METH_VARARGS, doc_FbxGlobalSettings_SetOriginalUpAxis},
    {sipName_SetSystemUnit, meth_FbxGlobalSettings_SetSystemUnit, METH_VARARGS, doc_FbxGlobalSettings_SetSystemUnit},
    {sipName_SetTimeMode, meth_FbxGlobalSettings_SetTimeMode, METH_VARARGS, doc_FbxGlobalSettings_SetTimeMode},
    {sipName_SetTimelineDefaultTimeSpan, meth_FbxGlobalSettings_SetTimelineDefaultTimeSpan, METH_VARARGS, doc_FbxGlobalSettings_SetTimelineDefaultTimeSpan}
};


extern "C" {static PyObject *varget_FbxGlobalSettings_ClassId(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxGlobalSettings_ClassId(void *, PyObject *sipPySelf, PyObject *)
{
    static PyObject *sipPy = SIP_NULLPTR;
     ::FbxClassId*sipVal;

    if (sipPy)
    {
        Py_INCREF(sipPy);
        return sipPy;
    }

    sipVal = & ::FbxGlobalSettings::ClassId;

    sipPy = sipConvertFromType(sipVal, sipType_FbxClassId, SIP_NULLPTR);

    if (sipPy)
    {
        sipKeepReference(sipPy, -1206, sipPySelf);
        Py_INCREF(sipPy);
    }

    return sipPy;
}


extern "C" {static int varset_FbxGlobalSettings_ClassId(void *, PyObject *, PyObject *);}
static int varset_FbxGlobalSettings_ClassId(void *, PyObject *sipPy, PyObject *)
{
     ::FbxClassId*sipVal;
    int sipIsErr = 0;
    sipVal = reinterpret_cast< ::FbxClassId *>(sipForceConvertToType(sipPy, sipType_FbxClassId, SIP_NULLPTR, SIP_NOT_NONE, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

     ::FbxGlobalSettings::ClassId = *sipVal;

    return 0;
}

sipVariableDef variables_FbxGlobalSettings[] = {
    {ClassVariable, sipName_ClassId, (PyMethodDef *)varget_FbxGlobalSettings_ClassId, (PyMethodDef *)varset_FbxGlobalSettings_ClassId, SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_FbxGlobalSettings, "\1FbxGlobalSettings(FbxManager, str)");


sipClassTypeDef sipTypeDef_fbx_FbxGlobalSettings = {
    {
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_FbxGlobalSettings,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_FbxGlobalSettings,
        {0, 0, 1},
        18, methods_FbxGlobalSettings,
        1, variables_FbxGlobalSettings,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_FbxGlobalSettings,
    -1,
    -1,
    supers_FbxGlobalSettings,
    slots_FbxGlobalSettings,
    init_type_FbxGlobalSettings,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_FbxGlobalSettings,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_FbxGlobalSettings,
    cast_FbxGlobalSettings,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};