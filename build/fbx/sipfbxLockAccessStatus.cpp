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




/* Call the instance's destructor. */
extern "C" {static void release_LockAccessStatus(void *, int);}
static void release_LockAccessStatus(void *sipCppV, int)
{
    delete reinterpret_cast< ::LockAccessStatus *>(sipCppV);
}


extern "C" {static void *array_LockAccessStatus(Py_ssize_t);}
static void *array_LockAccessStatus(Py_ssize_t sipNrElem)
{
    return new  ::LockAccessStatus[sipNrElem];
}


extern "C" {static void assign_LockAccessStatus(void *, Py_ssize_t, void *);}
static void assign_LockAccessStatus(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::LockAccessStatus *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::LockAccessStatus *>(sipSrc);
}


extern "C" {static void *copy_LockAccessStatus(const void *, Py_ssize_t);}
static void *copy_LockAccessStatus(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::LockAccessStatus(reinterpret_cast<const  ::LockAccessStatus *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_LockAccessStatus(sipSimpleWrapper *);}
static void dealloc_LockAccessStatus(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_LockAccessStatus(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_LockAccessStatus(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_LockAccessStatus(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::LockAccessStatus *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new  ::LockAccessStatus();

            return sipCpp;
        }
    }

    {
        const  ::LockAccessStatus* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_LockAccessStatus, &a0))
        {
            sipCpp = new  ::LockAccessStatus(*a0);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define the enum members and ints to be added to this type. */
static sipIntInstanceDef intInstances_LockAccessStatus[] = {
    {sipName_eSuccess, static_cast<int>( ::LockAccessStatus::eSuccess)},
    {sipName_eUnsupportedDTConversion, static_cast<int>( ::LockAccessStatus::eUnsupportedDTConversion)},
    {sipName_eCorruptedCopyback, static_cast<int>( ::LockAccessStatus::eCorruptedCopyback)},
    {sipName_eBadValue, static_cast<int>( ::LockAccessStatus::eBadValue)},
    {sipName_eLockMismatch, static_cast<int>( ::LockAccessStatus::eLockMismatch)},
    {sipName_eNoWriteLock, static_cast<int>( ::LockAccessStatus::eNoWriteLock)},
    {sipName_eNoReadLock, static_cast<int>( ::LockAccessStatus::eNoReadLock)},
    {sipName_eNotOwner, static_cast<int>( ::LockAccessStatus::eNotOwner)},
    {sipName_eDirectLockExist, static_cast<int>( ::LockAccessStatus::eDirectLockExist)},
    {0, 0}
};

PyDoc_STRVAR(doc_LockAccessStatus, "\1LockAccessStatus()\n"
"LockAccessStatus(LockAccessStatus)");


sipClassTypeDef sipTypeDef_fbx_LockAccessStatus = {
    {
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_LockAccessStatus,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_LockAccessStatus,
        {0, 0, 1},
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, intInstances_LockAccessStatus, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_LockAccessStatus,
    -1,
    -1,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_LockAccessStatus,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_LockAccessStatus,
    assign_LockAccessStatus,
    array_LockAccessStatus,
    copy_LockAccessStatus,
    release_LockAccessStatus,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};