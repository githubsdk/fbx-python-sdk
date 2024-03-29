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




PyDoc_STRVAR(doc_FbxGeometryConverter_Triangulate, "Triangulate(self, FbxScene, bool, bool = False) -> bool\n"
"Triangulate(self, FbxNodeAttribute, bool, bool = False) -> FbxNodeAttribute");

extern "C" {static PyObject *meth_FbxGeometryConverter_Triangulate(PyObject *, PyObject *);}
static PyObject *meth_FbxGeometryConverter_Triangulate(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxScene* a0;
        bool a1;
        bool a2 = 0;
         ::FbxGeometryConverter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8b|b", &sipSelf, sipType_FbxGeometryConverter, &sipCpp, sipType_FbxScene, &a0, &a1, &a2))
        {
            bool sipRes;

            sipRes = sipCpp->Triangulate(a0,a1,a2);

            return PyBool_FromLong(sipRes);
        }
    }

    {
         ::FbxNodeAttribute* a0;
        bool a1;
        bool a2 = 0;
         ::FbxGeometryConverter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8b|b", &sipSelf, sipType_FbxGeometryConverter, &sipCpp, sipType_FbxNodeAttribute, &a0, &a1, &a2))
        {
             ::FbxNodeAttribute*sipRes;

            sipRes = sipCpp->Triangulate(a0,a1,a2);

            return sipConvertFromType(sipRes,sipType_FbxNodeAttribute,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxGeometryConverter, sipName_Triangulate, doc_FbxGeometryConverter_Triangulate);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxGeometryConverter_ComputeGeometryControlPointsWeightedMapping, "ComputeGeometryControlPointsWeightedMapping(self, FbxGeometry, FbxGeometry, FbxWeightedMapping, bool = False) -> bool");

extern "C" {static PyObject *meth_FbxGeometryConverter_ComputeGeometryControlPointsWeightedMapping(PyObject *, PyObject *);}
static PyObject *meth_FbxGeometryConverter_ComputeGeometryControlPointsWeightedMapping(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxGeometry* a0;
         ::FbxGeometry* a1;
         ::FbxWeightedMapping* a2;
        bool a3 = 0;
         ::FbxGeometryConverter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8J8J8|b", &sipSelf, sipType_FbxGeometryConverter, &sipCpp, sipType_FbxGeometry, &a0, sipType_FbxGeometry, &a1, sipType_FbxWeightedMapping, &a2, &a3))
        {
            bool sipRes;

            sipRes = sipCpp->ComputeGeometryControlPointsWeightedMapping(a0,a1,a2,a3);

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxGeometryConverter, sipName_ComputeGeometryControlPointsWeightedMapping, doc_FbxGeometryConverter_ComputeGeometryControlPointsWeightedMapping);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxGeometryConverter_MergeMeshes, "MergeMeshes(self, FbxNodeArray, str, FbxScene) -> FbxNode");

extern "C" {static PyObject *meth_FbxGeometryConverter_MergeMeshes(PyObject *, PyObject *);}
static PyObject *meth_FbxGeometryConverter_MergeMeshes(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxNodeArray* a0;
        const char* a1;
        PyObject *a1Keep;
         ::FbxScene* a2;
         ::FbxGeometryConverter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9A8J8", &sipSelf, sipType_FbxGeometryConverter, &sipCpp, sipType_FbxNodeArray, &a0, &a1Keep, &a1, sipType_FbxScene, &a2))
        {
             ::FbxNode*sipRes;

            sipRes = sipCpp->MergeMeshes(*a0,a1,a2);
            Py_DECREF(a1Keep);

            return sipConvertFromType(sipRes,sipType_FbxNode,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxGeometryConverter, sipName_MergeMeshes, doc_FbxGeometryConverter_MergeMeshes);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxGeometryConverter_ConvertPatchToNurbs, "ConvertPatchToNurbs(self, FbxPatch) -> FbxNurbs");

extern "C" {static PyObject *meth_FbxGeometryConverter_ConvertPatchToNurbs(PyObject *, PyObject *);}
static PyObject *meth_FbxGeometryConverter_ConvertPatchToNurbs(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxPatch* a0;
         ::FbxGeometryConverter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_FbxGeometryConverter, &sipCpp, sipType_FbxPatch, &a0))
        {
             ::FbxNurbs*sipRes;

            sipRes = sipCpp->ConvertPatchToNurbs(a0);

            return sipConvertFromType(sipRes,sipType_FbxNurbs,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxGeometryConverter, sipName_ConvertPatchToNurbs, doc_FbxGeometryConverter_ConvertPatchToNurbs);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxGeometryConverter_ConvertPatchToNurbsInPlace, "ConvertPatchToNurbsInPlace(self, FbxNode) -> bool");

extern "C" {static PyObject *meth_FbxGeometryConverter_ConvertPatchToNurbsInPlace(PyObject *, PyObject *);}
static PyObject *meth_FbxGeometryConverter_ConvertPatchToNurbsInPlace(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxNode* a0;
         ::FbxGeometryConverter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_FbxGeometryConverter, &sipCpp, sipType_FbxNode, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->ConvertPatchToNurbsInPlace(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxGeometryConverter, sipName_ConvertPatchToNurbsInPlace, doc_FbxGeometryConverter_ConvertPatchToNurbsInPlace);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxGeometryConverter_ConvertPatchToNurbsSurface, "ConvertPatchToNurbsSurface(self, FbxPatch) -> FbxNurbsSurface");

extern "C" {static PyObject *meth_FbxGeometryConverter_ConvertPatchToNurbsSurface(PyObject *, PyObject *);}
static PyObject *meth_FbxGeometryConverter_ConvertPatchToNurbsSurface(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxPatch* a0;
         ::FbxGeometryConverter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_FbxGeometryConverter, &sipCpp, sipType_FbxPatch, &a0))
        {
             ::FbxNurbsSurface*sipRes;

            sipRes = sipCpp->ConvertPatchToNurbsSurface(a0);

            return sipConvertFromType(sipRes,sipType_FbxNurbsSurface,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxGeometryConverter, sipName_ConvertPatchToNurbsSurface, doc_FbxGeometryConverter_ConvertPatchToNurbsSurface);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxGeometryConverter_ConvertPatchToNurbsSurfaceInPlace, "ConvertPatchToNurbsSurfaceInPlace(self, FbxNode) -> bool");

extern "C" {static PyObject *meth_FbxGeometryConverter_ConvertPatchToNurbsSurfaceInPlace(PyObject *, PyObject *);}
static PyObject *meth_FbxGeometryConverter_ConvertPatchToNurbsSurfaceInPlace(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxNode* a0;
         ::FbxGeometryConverter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_FbxGeometryConverter, &sipCpp, sipType_FbxNode, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->ConvertPatchToNurbsSurfaceInPlace(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxGeometryConverter, sipName_ConvertPatchToNurbsSurfaceInPlace, doc_FbxGeometryConverter_ConvertPatchToNurbsSurfaceInPlace);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxGeometryConverter_ConvertNurbsToNurbsSurface, "ConvertNurbsToNurbsSurface(self, FbxNurbs) -> FbxNurbsSurface");

extern "C" {static PyObject *meth_FbxGeometryConverter_ConvertNurbsToNurbsSurface(PyObject *, PyObject *);}
static PyObject *meth_FbxGeometryConverter_ConvertNurbsToNurbsSurface(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxNurbs* a0;
         ::FbxGeometryConverter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_FbxGeometryConverter, &sipCpp, sipType_FbxNurbs, &a0))
        {
             ::FbxNurbsSurface*sipRes;

            sipRes = sipCpp->ConvertNurbsToNurbsSurface(a0);

            return sipConvertFromType(sipRes,sipType_FbxNurbsSurface,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxGeometryConverter, sipName_ConvertNurbsToNurbsSurface, doc_FbxGeometryConverter_ConvertNurbsToNurbsSurface);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxGeometryConverter_ConvertNurbsSurfaceToNurbs, "ConvertNurbsSurfaceToNurbs(self, FbxNurbsSurface) -> FbxNurbs");

extern "C" {static PyObject *meth_FbxGeometryConverter_ConvertNurbsSurfaceToNurbs(PyObject *, PyObject *);}
static PyObject *meth_FbxGeometryConverter_ConvertNurbsSurfaceToNurbs(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxNurbsSurface* a0;
         ::FbxGeometryConverter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_FbxGeometryConverter, &sipCpp, sipType_FbxNurbsSurface, &a0))
        {
             ::FbxNurbs*sipRes;

            sipRes = sipCpp->ConvertNurbsSurfaceToNurbs(a0);

            return sipConvertFromType(sipRes,sipType_FbxNurbs,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxGeometryConverter, sipName_ConvertNurbsSurfaceToNurbs, doc_FbxGeometryConverter_ConvertNurbsSurfaceToNurbs);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxGeometryConverter_ConvertNurbsToNurbsSurfaceInPlace, "ConvertNurbsToNurbsSurfaceInPlace(self, FbxNode) -> bool");

extern "C" {static PyObject *meth_FbxGeometryConverter_ConvertNurbsToNurbsSurfaceInPlace(PyObject *, PyObject *);}
static PyObject *meth_FbxGeometryConverter_ConvertNurbsToNurbsSurfaceInPlace(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxNode* a0;
         ::FbxGeometryConverter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_FbxGeometryConverter, &sipCpp, sipType_FbxNode, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->ConvertNurbsToNurbsSurfaceInPlace(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxGeometryConverter, sipName_ConvertNurbsToNurbsSurfaceInPlace, doc_FbxGeometryConverter_ConvertNurbsToNurbsSurfaceInPlace);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxGeometryConverter_ConvertNurbsSurfaceToNurbsInPlace, "ConvertNurbsSurfaceToNurbsInPlace(self, FbxNode) -> bool");

extern "C" {static PyObject *meth_FbxGeometryConverter_ConvertNurbsSurfaceToNurbsInPlace(PyObject *, PyObject *);}
static PyObject *meth_FbxGeometryConverter_ConvertNurbsSurfaceToNurbsInPlace(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxNode* a0;
         ::FbxGeometryConverter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_FbxGeometryConverter, &sipCpp, sipType_FbxNode, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->ConvertNurbsSurfaceToNurbsInPlace(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxGeometryConverter, sipName_ConvertNurbsSurfaceToNurbsInPlace, doc_FbxGeometryConverter_ConvertNurbsSurfaceToNurbsInPlace);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxGeometryConverter_FlipNurbs, "FlipNurbs(self, FbxNurbs, bool, bool) -> FbxNurbs");

extern "C" {static PyObject *meth_FbxGeometryConverter_FlipNurbs(PyObject *, PyObject *);}
static PyObject *meth_FbxGeometryConverter_FlipNurbs(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxNurbs* a0;
        bool a1;
        bool a2;
         ::FbxGeometryConverter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8bb", &sipSelf, sipType_FbxGeometryConverter, &sipCpp, sipType_FbxNurbs, &a0, &a1, &a2))
        {
             ::FbxNurbs*sipRes;

            sipRes = sipCpp->FlipNurbs(a0,a1,a2);

            return sipConvertFromType(sipRes,sipType_FbxNurbs,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxGeometryConverter, sipName_FlipNurbs, doc_FbxGeometryConverter_FlipNurbs);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxGeometryConverter_FlipNurbsSurface, "FlipNurbsSurface(self, FbxNurbsSurface, bool, bool) -> FbxNurbsSurface");

extern "C" {static PyObject *meth_FbxGeometryConverter_FlipNurbsSurface(PyObject *, PyObject *);}
static PyObject *meth_FbxGeometryConverter_FlipNurbsSurface(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxNurbsSurface* a0;
        bool a1;
        bool a2;
         ::FbxGeometryConverter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8bb", &sipSelf, sipType_FbxGeometryConverter, &sipCpp, sipType_FbxNurbsSurface, &a0, &a1, &a2))
        {
             ::FbxNurbsSurface*sipRes;

            sipRes = sipCpp->FlipNurbsSurface(a0,a1,a2);

            return sipConvertFromType(sipRes,sipType_FbxNurbsSurface,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxGeometryConverter, sipName_FlipNurbsSurface, doc_FbxGeometryConverter_FlipNurbsSurface);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxGeometryConverter_EmulateNormalsByPolygonVertex, "EmulateNormalsByPolygonVertex(self, FbxMesh) -> bool");

extern "C" {static PyObject *meth_FbxGeometryConverter_EmulateNormalsByPolygonVertex(PyObject *, PyObject *);}
static PyObject *meth_FbxGeometryConverter_EmulateNormalsByPolygonVertex(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxMesh* a0;
         ::FbxGeometryConverter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_FbxGeometryConverter, &sipCpp, sipType_FbxMesh, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->EmulateNormalsByPolygonVertex(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxGeometryConverter, sipName_EmulateNormalsByPolygonVertex, doc_FbxGeometryConverter_EmulateNormalsByPolygonVertex);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxGeometryConverter_ComputeEdgeSmoothingFromNormals, "ComputeEdgeSmoothingFromNormals(self, FbxMesh) -> bool");

extern "C" {static PyObject *meth_FbxGeometryConverter_ComputeEdgeSmoothingFromNormals(PyObject *, PyObject *);}
static PyObject *meth_FbxGeometryConverter_ComputeEdgeSmoothingFromNormals(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxMesh* a0;
        const  ::FbxGeometryConverter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_FbxGeometryConverter, &sipCpp, sipType_FbxMesh, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->ComputeEdgeSmoothingFromNormals(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxGeometryConverter, sipName_ComputeEdgeSmoothingFromNormals, doc_FbxGeometryConverter_ComputeEdgeSmoothingFromNormals);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxGeometryConverter_ComputePolygonSmoothingFromEdgeSmoothing, "ComputePolygonSmoothingFromEdgeSmoothing(self, FbxMesh, int = 0) -> bool");

extern "C" {static PyObject *meth_FbxGeometryConverter_ComputePolygonSmoothingFromEdgeSmoothing(PyObject *, PyObject *);}
static PyObject *meth_FbxGeometryConverter_ComputePolygonSmoothingFromEdgeSmoothing(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxMesh* a0;
        int a1 = 0;
        const  ::FbxGeometryConverter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8|i", &sipSelf, sipType_FbxGeometryConverter, &sipCpp, sipType_FbxMesh, &a0, &a1))
        {
            bool sipRes;

            sipRes = sipCpp->ComputePolygonSmoothingFromEdgeSmoothing(a0,a1);

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxGeometryConverter, sipName_ComputePolygonSmoothingFromEdgeSmoothing, doc_FbxGeometryConverter_ComputePolygonSmoothingFromEdgeSmoothing);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxGeometryConverter_ComputeEdgeSmoothingFromPolygonSmoothing, "ComputeEdgeSmoothingFromPolygonSmoothing(self, FbxMesh, int = 0) -> bool");

extern "C" {static PyObject *meth_FbxGeometryConverter_ComputeEdgeSmoothingFromPolygonSmoothing(PyObject *, PyObject *);}
static PyObject *meth_FbxGeometryConverter_ComputeEdgeSmoothingFromPolygonSmoothing(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxMesh* a0;
        int a1 = 0;
        const  ::FbxGeometryConverter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8|i", &sipSelf, sipType_FbxGeometryConverter, &sipCpp, sipType_FbxMesh, &a0, &a1))
        {
            bool sipRes;

            sipRes = sipCpp->ComputeEdgeSmoothingFromPolygonSmoothing(a0,a1);

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxGeometryConverter, sipName_ComputeEdgeSmoothingFromPolygonSmoothing, doc_FbxGeometryConverter_ComputeEdgeSmoothingFromPolygonSmoothing);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxGeometryConverter_SplitMeshesPerMaterial, "SplitMeshesPerMaterial(self, FbxScene, bool) -> bool");

extern "C" {static PyObject *meth_FbxGeometryConverter_SplitMeshesPerMaterial(PyObject *, PyObject *);}
static PyObject *meth_FbxGeometryConverter_SplitMeshesPerMaterial(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxScene* a0;
        bool a1;
         ::FbxGeometryConverter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8b", &sipSelf, sipType_FbxGeometryConverter, &sipCpp, sipType_FbxScene, &a0, &a1))
        {
            bool sipRes;

            sipRes = sipCpp->SplitMeshesPerMaterial(a0,a1);

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxGeometryConverter, sipName_SplitMeshesPerMaterial, doc_FbxGeometryConverter_SplitMeshesPerMaterial);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxGeometryConverter_SplitMeshPerMaterial, "SplitMeshPerMaterial(self, FbxMesh, bool) -> bool");

extern "C" {static PyObject *meth_FbxGeometryConverter_SplitMeshPerMaterial(PyObject *, PyObject *);}
static PyObject *meth_FbxGeometryConverter_SplitMeshPerMaterial(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxMesh* a0;
        bool a1;
         ::FbxGeometryConverter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8b", &sipSelf, sipType_FbxGeometryConverter, &sipCpp, sipType_FbxMesh, &a0, &a1))
        {
            bool sipRes;

            sipRes = sipCpp->SplitMeshPerMaterial(a0,a1);

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxGeometryConverter, sipName_SplitMeshPerMaterial, doc_FbxGeometryConverter_SplitMeshPerMaterial);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_FbxGeometryConverter_RecenterSceneToWorldCenter, "RecenterSceneToWorldCenter(self, FbxScene, float) -> bool");

extern "C" {static PyObject *meth_FbxGeometryConverter_RecenterSceneToWorldCenter(PyObject *, PyObject *);}
static PyObject *meth_FbxGeometryConverter_RecenterSceneToWorldCenter(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::FbxScene* a0;
         ::FbxDouble a1;
         ::FbxGeometryConverter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8d", &sipSelf, sipType_FbxGeometryConverter, &sipCpp, sipType_FbxScene, &a0, &a1))
        {
            bool sipRes;

            sipRes = sipCpp->RecenterSceneToWorldCenter(a0,a1);

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_FbxGeometryConverter, sipName_RecenterSceneToWorldCenter, doc_FbxGeometryConverter_RecenterSceneToWorldCenter);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_FbxGeometryConverter(void *, int);}
static void release_FbxGeometryConverter(void *sipCppV, int)
{
    delete reinterpret_cast< ::FbxGeometryConverter *>(sipCppV);
}


extern "C" {static void assign_FbxGeometryConverter(void *, Py_ssize_t, void *);}
static void assign_FbxGeometryConverter(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::FbxGeometryConverter *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::FbxGeometryConverter *>(sipSrc);
}


extern "C" {static void *copy_FbxGeometryConverter(const void *, Py_ssize_t);}
static void *copy_FbxGeometryConverter(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::FbxGeometryConverter(reinterpret_cast<const  ::FbxGeometryConverter *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_FbxGeometryConverter(sipSimpleWrapper *);}
static void dealloc_FbxGeometryConverter(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_FbxGeometryConverter(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_FbxGeometryConverter(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_FbxGeometryConverter(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::FbxGeometryConverter *sipCpp = SIP_NULLPTR;

    {
         ::FbxManager* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J8", sipType_FbxManager, &a0))
        {
            sipCpp = new  ::FbxGeometryConverter(a0);

            return sipCpp;
        }
    }

    {
        const  ::FbxGeometryConverter* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_FbxGeometryConverter, &a0))
        {
            sipCpp = new  ::FbxGeometryConverter(*a0);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


static PyMethodDef methods_FbxGeometryConverter[] = {
    {sipName_ComputeEdgeSmoothingFromNormals, meth_FbxGeometryConverter_ComputeEdgeSmoothingFromNormals, METH_VARARGS, doc_FbxGeometryConverter_ComputeEdgeSmoothingFromNormals},
    {sipName_ComputeEdgeSmoothingFromPolygonSmoothing, meth_FbxGeometryConverter_ComputeEdgeSmoothingFromPolygonSmoothing, METH_VARARGS, doc_FbxGeometryConverter_ComputeEdgeSmoothingFromPolygonSmoothing},
    {sipName_ComputeGeometryControlPointsWeightedMapping, meth_FbxGeometryConverter_ComputeGeometryControlPointsWeightedMapping, METH_VARARGS, doc_FbxGeometryConverter_ComputeGeometryControlPointsWeightedMapping},
    {sipName_ComputePolygonSmoothingFromEdgeSmoothing, meth_FbxGeometryConverter_ComputePolygonSmoothingFromEdgeSmoothing, METH_VARARGS, doc_FbxGeometryConverter_ComputePolygonSmoothingFromEdgeSmoothing},
    {sipName_ConvertNurbsSurfaceToNurbs, meth_FbxGeometryConverter_ConvertNurbsSurfaceToNurbs, METH_VARARGS, doc_FbxGeometryConverter_ConvertNurbsSurfaceToNurbs},
    {sipName_ConvertNurbsSurfaceToNurbsInPlace, meth_FbxGeometryConverter_ConvertNurbsSurfaceToNurbsInPlace, METH_VARARGS, doc_FbxGeometryConverter_ConvertNurbsSurfaceToNurbsInPlace},
    {sipName_ConvertNurbsToNurbsSurface, meth_FbxGeometryConverter_ConvertNurbsToNurbsSurface, METH_VARARGS, doc_FbxGeometryConverter_ConvertNurbsToNurbsSurface},
    {sipName_ConvertNurbsToNurbsSurfaceInPlace, meth_FbxGeometryConverter_ConvertNurbsToNurbsSurfaceInPlace, METH_VARARGS, doc_FbxGeometryConverter_ConvertNurbsToNurbsSurfaceInPlace},
    {sipName_ConvertPatchToNurbs, meth_FbxGeometryConverter_ConvertPatchToNurbs, METH_VARARGS, doc_FbxGeometryConverter_ConvertPatchToNurbs},
    {sipName_ConvertPatchToNurbsInPlace, meth_FbxGeometryConverter_ConvertPatchToNurbsInPlace, METH_VARARGS, doc_FbxGeometryConverter_ConvertPatchToNurbsInPlace},
    {sipName_ConvertPatchToNurbsSurface, meth_FbxGeometryConverter_ConvertPatchToNurbsSurface, METH_VARARGS, doc_FbxGeometryConverter_ConvertPatchToNurbsSurface},
    {sipName_ConvertPatchToNurbsSurfaceInPlace, meth_FbxGeometryConverter_ConvertPatchToNurbsSurfaceInPlace, METH_VARARGS, doc_FbxGeometryConverter_ConvertPatchToNurbsSurfaceInPlace},
    {sipName_EmulateNormalsByPolygonVertex, meth_FbxGeometryConverter_EmulateNormalsByPolygonVertex, METH_VARARGS, doc_FbxGeometryConverter_EmulateNormalsByPolygonVertex},
    {sipName_FlipNurbs, meth_FbxGeometryConverter_FlipNurbs, METH_VARARGS, doc_FbxGeometryConverter_FlipNurbs},
    {sipName_FlipNurbsSurface, meth_FbxGeometryConverter_FlipNurbsSurface, METH_VARARGS, doc_FbxGeometryConverter_FlipNurbsSurface},
    {sipName_MergeMeshes, meth_FbxGeometryConverter_MergeMeshes, METH_VARARGS, doc_FbxGeometryConverter_MergeMeshes},
    {sipName_RecenterSceneToWorldCenter, meth_FbxGeometryConverter_RecenterSceneToWorldCenter, METH_VARARGS, doc_FbxGeometryConverter_RecenterSceneToWorldCenter},
    {sipName_SplitMeshPerMaterial, meth_FbxGeometryConverter_SplitMeshPerMaterial, METH_VARARGS, doc_FbxGeometryConverter_SplitMeshPerMaterial},
    {sipName_SplitMeshesPerMaterial, meth_FbxGeometryConverter_SplitMeshesPerMaterial, METH_VARARGS, doc_FbxGeometryConverter_SplitMeshesPerMaterial},
    {sipName_Triangulate, meth_FbxGeometryConverter_Triangulate, METH_VARARGS, doc_FbxGeometryConverter_Triangulate}
};

PyDoc_STRVAR(doc_FbxGeometryConverter, "\1FbxGeometryConverter(FbxManager)\n"
"FbxGeometryConverter(FbxGeometryConverter)");


sipClassTypeDef sipTypeDef_fbx_FbxGeometryConverter = {
    {
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_FbxGeometryConverter,
        SIP_NULLPTR,
        SIP_NULLPTR
    },
    {
        sipNameNr_FbxGeometryConverter,
        {0, 0, 1},
        20, methods_FbxGeometryConverter,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_FbxGeometryConverter,
    -1,
    -1,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_FbxGeometryConverter,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_FbxGeometryConverter,
    assign_FbxGeometryConverter,
    SIP_NULLPTR,
    copy_FbxGeometryConverter,
    release_FbxGeometryConverter,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
};
