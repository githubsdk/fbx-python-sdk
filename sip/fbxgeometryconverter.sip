class FbxGeometryConverter
{
public:
    FbxGeometryConverter(FbxManager* pManager);
    ~FbxGeometryConverter();

	bool                Triangulate(FbxScene* pScene, bool pReplace, bool pLegacy=false);
	FbxNodeAttribute*   Triangulate(FbxNodeAttribute* pNodeAttribute, bool pReplace, bool pLegacy=false);
	bool                ComputeGeometryControlPointsWeightedMapping(FbxGeometry* pSrcGeom, FbxGeometry* pDstGeom, FbxWeightedMapping* pSrcToDstWeightedMapping, bool pSwapUV=false);
	FbxNode*            MergeMeshes(FbxNodeArray& pMeshNodes, const char* pNodeName, FbxScene* pScene);

    FbxNurbs*           ConvertPatchToNurbs(FbxPatch *pPatch);
    bool                ConvertPatchToNurbsInPlace(FbxNode* pNode);
    FbxNurbsSurface*    ConvertPatchToNurbsSurface(FbxPatch *pPatch);
    bool                ConvertPatchToNurbsSurfaceInPlace(FbxNode* pNode);
    FbxNurbsSurface*    ConvertNurbsToNurbsSurface( FbxNurbs* pNurb );
    FbxNurbs*           ConvertNurbsSurfaceToNurbs( FbxNurbsSurface* pNurb );
    bool                ConvertNurbsToNurbsSurfaceInPlace(FbxNode* pNode);
    bool                ConvertNurbsSurfaceToNurbsInPlace(FbxNode* pNode);
    
    FbxNurbs*           FlipNurbs(FbxNurbs* pNurb, bool pSwapUV, bool pSwapClusters);
    FbxNurbsSurface*    FlipNurbsSurface(FbxNurbsSurface* pNurb, bool pSwapUV, bool pSwapClusters);
    
    bool                EmulateNormalsByPolygonVertex(FbxMesh* pMesh);
    bool                ComputeEdgeSmoothingFromNormals( FbxMesh* pMesh ) const;
    bool                ComputePolygonSmoothingFromEdgeSmoothing( FbxMesh* pMesh, int pIndex=0 ) const;
    bool                ComputeEdgeSmoothingFromPolygonSmoothing( FbxMesh* pMesh, int pIndex=0 ) const;
    
	bool                SplitMeshesPerMaterial(FbxScene* pScene, bool pReplace);
	bool                SplitMeshPerMaterial(FbxMesh* pMesh, bool pReplace);
    
    bool                RecenterSceneToWorldCenter(FbxScene* pScene, FbxDouble pThreshold);
};
