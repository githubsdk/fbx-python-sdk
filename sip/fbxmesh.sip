class FbxMesh : FbxGeometry /NoDefaultCtors/
{
public:
    static FbxClassId ClassId;
    static FbxMesh* Create(FbxManager *pManager, const char *pName);
    virtual FbxClassId GetClassId() const;
    static FbxMesh* Create(FbxObject *pContainer,  const char *pName);

    bool operator==(const FbxMesh & pObj);
    
    virtual FbxNodeAttribute::EType GetAttributeType() const;
    
    void BeginPolygon(int pMaterial = -1, int pTexture = -1, int pGroup = -1, bool pLegacy=true);
    void BeginPolygonExt(int pMaterial, int* pTextures);
    void AddPolygon(int pIndex, int pTextureUVIndex = -1);
    void EndPolygon();

    int GetPolygonCount() const;
    int GetPolygonSize(int pPolygonIndex) const;
    int GetPolygonGroup(int pPolygonIndex) const;
    void SetPolygonGroup(int pPolygonIndex, int pGroup) const;
    int GetPolygonVertex(int pPolygonIndex, int pPositionInPolygon) const;
    void GetPolygonVertexNormal(int pPolyIndex, int pVertexIndex, FbxVector4 &pNormal) const;
    bool GetPolygonVertexNormals(FbxVector4Array& pNormals) const;    
    bool GetPolygonVertexUV(int pPolyIndex, int pVertexIndex, const char* pUVSetName, FbxVector2& pUV, bool& pUnmapped) const;    
    bool GetPolygonVertexUVs(const char* pUVSetName, FbxVector2Array& pUVs, FbxArray<int>* pUnmappedUVId = NULL) const;    
    SIP_PYLIST GetPolygonVertices();
%MethodCode
    int* vertices;
    int polygonVertexCount;

    vertices = sipCpp->GetPolygonVertices();
    polygonVertexCount = sipCpp->GetPolygonVertexCount();

    // Create the Python list of the correct length.
    if ((sipRes = PyList_New(polygonVertexCount)) == NULL)
        return NULL;

    // Go through each element in the C++ instance and convert it to the
    // corresponding Python object.
    for (int i = 0; i < polygonVertexCount; ++i)
    {
        PyList_SET_ITEM(sipRes, i, PyLong_FromLong(*vertices));
        vertices++;
    }
%End
    
    int GetPolygonVertexCount() const;
    int GetPolygonVertexIndex( int pPolygonIndex ) const;
    int RemovePolygon(int pPolygonIndex);
    int RemoveDuplicatedEdges(FbxArray<int>& pEdgeIndexList);    
    
    void InitTextureUV(int pCount, FbxLayerElement::EType pTypeIdentifier=FbxLayerElement::eTextureDiffuse);

    void AddTextureUV(FbxVector2 pUV, FbxLayerElement::EType pTypeIdentifier=FbxLayerElement::eTextureDiffuse);
    int GetTextureUVCount(FbxLayerElement::EType pTypeIdentifier=FbxLayerElement::eTextureDiffuse);
    int GetUVLayerCount();
    FbxLayerElementTypeArray GetAllChannelUV(int pLayer);

    void InitMaterialIndices(FbxLayerElement::EMappingMode pMappingMode);
    void InitTextureIndices(FbxLayerElement::EMappingMode pMappingMode, FbxLayerElement::EType pTextureType);
    void InitTextureUVIndices(FbxLayerElement::EMappingMode pMappingMode, FbxLayerElement::EType pTypeIdentifier=FbxLayerElement::eTextureDiffuse);

    int GetTextureUVIndex(int pPolygonIndex, int pPositionInPolygon, FbxLayerElement::EType pTypeIdentifier=FbxLayerElement::eTextureDiffuse);
    void SetTextureUVIndex(int pPolygonIndex, int pPositionInPolygon, int pIndex, FbxLayerElement::EType pTypeIdentifier);
    
    void Reset();

    bool GenerateNormals(bool pOverwrite=false, bool pByCtrlPoint = false, bool pCW=false);
    bool CheckIfVertexNormalsCCW();
    
    bool CheckSamePointTwice();
    int RemoveBadPolygons();

    void SplitPoints(FbxLayerElement::EType pTypeIdentifier=FbxLayerElement::eTextureDiffuse);
    bool BuildMergeList(IntArray &pMergeList);
    void MergePointsForPolygonVerteNormals(IntArray &pMergeList);

    void BuildMeshEdgeArray();
    int GetMeshEdgeCount() const;
    int GetMeshEdgeIndex( int pStartVertexIndex, int pEndVertexIndex, bool& pReversed );
    int GetMeshEdgeIndexForPolygon( int pPolygon, int pPositionInPolygon );
    void GetMeshEdgeVertices( int pEdgeIndex, int& pStartVertexIndex, int& pEndVertexIndex );

    void BeginGetMeshEdgeVertices();
    void EndGetMeshEdgeVertices();
    void SetMeshEdgeCount( int pEdgeCount );
    void SetMeshEdge( int pEdgeIndex, int pValue );
    int AddMeshEdgeIndex( int pStartVertexIndex, int pEndVertexIndex, bool pCheckForDuplicates );
    int SetMeshEdgeIndex( int pEdgeIndex, int pStartVertexIndex, int pEndVertexIndex, bool pCheckForDuplicates );
    void BeginAddMeshEdgeIndex();
    void EndAddMeshEdgeIndex();
    int AddMeshEdgeIndexForPolygon( int pPolygonIndex, int pPositionInPolygon );
    bool SetMeshEdgeIndex( int pEdgeIndex, int pPolygonIndex, int pPositionInPolygon );

    bool IsTriangleMesh() const;
    
    bool GetTextureUV(FbxLayerElementArrayTemplate<FbxVector2>** pLockableArray, FbxLayerElement::EType pTypeIdentifier=FbxLayerElement::eTextureDiffuse) const;
    bool GetMaterialIndices(FbxLayerElementArrayTemplate<int>** pLockableArray) const;
    bool GetTextureIndices(FbxLayerElementArrayTemplate<int>** pLockableArray, FbxLayerElement::EType pTextureType) const;    

    double GetEdgeCreaseInfo(int pEdgeIndex);

    bool GetEdgeCreaseInfoArray(FbxLayerElementArrayTemplate<double>** pCreaseArray);

    double GetVertexCreaseInfo(int pVertexIndex);

    bool GetVertexCreaseInfoArray(FbxLayerElementArrayTemplate<double>** pCreaseArray);

    bool SetEdgeCreaseInfo(int pEdgeIndex, double pWeight);

    bool SetEdgeCreaseInfoArray(DoubleArray* pWeightArray);

    bool SetVertexCreaseInfo(int pVertexIndex, double pWeight);

    bool SetVertexCreaseInfoArray(DoubleArray* pWeightArray);

    enum ESmoothness
    {
        eHull,			
        eRough,			
        eMedium,		
        eFine			
    };

    enum EBoundaryRule
    {
        eLegacy,			
        eCreaseAll,		
        eCreaseEdge		
    };

    FbxMesh::ESmoothness GetMeshSmoothness() const;

    void SetMeshSmoothness(FbxMesh::ESmoothness pSmoothness);

    int GetMeshPreviewDivisionLevels() const;

    void SetMeshPreviewDivisionLevels(int pPreviewDivisionLevels);

    int GetMeshRenderDivisionLevels() const;

    void SetMeshRenderDivisionLevels(int pRenderDivisionLevels);

    bool GetDisplaySubdivisions() const;

    void SetDisplaySubdivisions(bool pDisplySubdivisions);

    EBoundaryRule GetBoundaryRule() const;

    void SetBoundaryRule(EBoundaryRule pBoundaryRule);

    bool GetPreserveBorders() const;

    void SetPreserveBorders(bool pPreserveBorders);

    bool GetPreserveHardEdges() const;

    void SetPreserveHardEdges(bool pPreserveHardEdges);

    bool GetPropagateEdgeHardness() const;

    void SetPropagateEdgeHardness(bool pPropagateEdgeHardness);

    bool GetPolyHoleInfo(int pFaceIndex);

    bool GetPolyHoleInfoArray(FbxLayerElementArrayTemplate<bool>** pHoleArray);

    bool SetPolyHoleInfo(int pFaceIndex, bool pIsHole);

    bool SetPolyHoleInfoArray(BoolArray* pHoleArray);

    bool GenerateTangentsData(FbxString pUVSetName = "", bool pOverwrite = false, bool pIgnoreTangentFlip = false);
    bool GenerateTangentsData(int pUVSetLayerIndex, bool pOverwrite = false, bool pIgnoreTangentFlip = false);
    bool GenerateTangentsDataForAllUVSets(bool pOverwrite = false, bool pIgnoreTangentFlip = false);
    
protected:
    virtual ~FbxMesh();    
};
