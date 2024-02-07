class FbxGeometryBase : FbxLayerContainer /NoDefaultCtors/
{
public:
    static FbxClassId ClassId;
    static FbxGeometryBase* Create(FbxManager *pManager, const char *pName);
    virtual FbxClassId GetClassId() const;
    static FbxGeometryBase* Create(FbxObject *pContainer,  const char *pName);

    FbxPropertyBool1    PrimaryVisibility;
    FbxPropertyBool1    CastShadow;
    FbxPropertyBool1    ReceiveShadow;
    FbxPropertyDouble3  BBoxMin;
    FbxPropertyDouble3  BBoxMax;    
    
    bool operator==(const FbxGeometryBase & pObj);
    
    virtual void InitControlPoints(int pCount);
    void InitNormals(int pCount = 0 );
    void InitNormals(FbxGeometryBase* pSrc);
    void InitTangents(int pCount = 0 );
    void InitTangents(FbxGeometryBase* pSrc);
    void InitBinormals(int pCount = 0 );
    void InitBinormals(FbxGeometryBase* pSrc);
    virtual void SetControlPointAt(FbxVector4 &pCtrlPoint , FbxVector4 &pNormal , int pIndex, bool pI2DSearch = false);
    virtual void SetControlPointAt(FbxVector4 &pCtrlPoint , int pIndex);
    virtual FbxVector4 GetControlPointAt(int pIndex) const;
    virtual void SetControlPointNormalAt(FbxVector4 &pNormal, int pIndex, bool pI2DSearch=false);
    virtual int GetControlPointsCount() const;
    virtual SIP_PYLIST GetControlPoints() const;
%MethodCode
    FbxVector4 *cps;
    int cpCount;

    cps = sipCpp->GetControlPoints();
    cpCount = sipCpp->GetControlPointsCount();

    // Create the Python list of the correct length.
    if ((sipRes = PyList_New(cpCount)) == NULL)
        return NULL;

    // Go through each element in the C++ instance and convert it to the
    // corresponding Python object.
    for (int i = 0; i < cpCount; ++i)
    {
        PyList_SET_ITEM(sipRes, i, sipConvertFromType(cps,sipType_FbxVector4,NULL));
        cps++;
    }
%End
   
    virtual void SetControlPointCount(int pCount);
    
    void ComputeBBox();    
   
    FbxLayerElementNormal* CreateElementNormal();
    bool RemoveElementNormal(FbxLayerElementNormal* pElementNormal);
    FbxLayerElementNormal* GetElementNormal(int pIndex = 0);
    int GetElementNormalCount() const;

    FbxLayerElementBinormal* CreateElementBinormal();
    bool RemoveElementBinormal(FbxLayerElementBinormal* pElementBinormal);
    FbxLayerElementBinormal* GetElementBinormal(int pIndex = 0);
    int GetElementBinormalCount() const;

    FbxLayerElementTangent* CreateElementTangent();
    bool RemoveElementTangent(FbxLayerElementTangent* pElementTangent);
    FbxLayerElementTangent* GetElementTangent(int pIndex = 0);
    int GetElementTangentCount() const;

    FbxLayerElementMaterial* CreateElementMaterial();
    bool RemoveElementMaterial(FbxLayerElementMaterial* pElementMaterial);
    FbxLayerElementMaterial* GetElementMaterial(int pIndex = 0);
    int GetElementMaterialCount() const;

    FbxLayerElementPolygonGroup* CreateElementPolygonGroup();
    bool RemoveElementPolygonGroup(FbxLayerElementPolygonGroup* pElementPolygonGroup);
    FbxLayerElementPolygonGroup* GetElementPolygonGroup(int pIndex = 0);
    int GetElementPolygonGroupCount() const;

    FbxLayerElementVertexColor* CreateElementVertexColor();
    bool RemoveElementVertexColor(FbxLayerElementVertexColor* pElementVertexColor);
    FbxLayerElementVertexColor* GetElementVertexColor(int pIndex = 0);
    int GetElementVertexColorCount() const;

    FbxLayerElementSmoothing* CreateElementSmoothing();
    bool RemoveElementSmoothing(FbxLayerElementSmoothing* pElementSmoothing);
    FbxLayerElementSmoothing* GetElementSmoothing(int pIndex = 0);
    int GetElementSmoothingCount() const;

    FbxLayerElementCrease* CreateElementVertexCrease();
    bool RemoveElementVertexCrease(FbxLayerElementCrease* pElementCrease);
    FbxLayerElementCrease* GetElementVertexCrease(int pIndex = 0);
    int GetElementVertexCreaseCount() const;
    
    FbxLayerElementCrease* CreateElementEdgeCrease();
    bool RemoveElementEdgeCrease(FbxLayerElementCrease* pElementCrease);
    FbxLayerElementCrease* GetElementEdgeCrease(int pIndex = 0);
    int GetElementEdgeCreaseCount() const;
    
    FbxLayerElementVisibility* CreateElementVisibility();
    bool RemoveElementVisibility(FbxLayerElementVisibility* pElementVisibility);
    FbxLayerElementVisibility* GetElementVisibility(int pIndex = 0);
    int GetElementVisibilityCount() const;

    FbxLayerElementUV* CreateElementUV(const char* pUVSetName);
    bool RemoveElementUV(FbxLayerElementUV* pElementUV);
    FbxLayerElementUV* GetElementUV(int pIndex = 0);
    FbxLayerElementUV* GetElementUV(const char* pUVSetName);
    int GetElementUVCount() const;

   
    void GetUVSetNames(SIP_PYLIST) const;
%MethodCode
        FbxLayerContainer* lC = (FbxLayerContainer*)sipCpp;
        FbxArray< FbxString > names;
        for (int i = 0; i < lC->GetLayerCount(); ++i)
        {
            const FbxLayer* lLayer = lC->GetLayer(i);
            for(int lIndex=0;lIndex<FbxLayerElement::sTypeTextureCount;lIndex++)
            {
                FbxLayerElement::EType type = FbxLayerElement::EType(lIndex+FbxLayerElement::sTypeTextureStartIndex);
                const FbxLayerElementUV* lUVLayerElement = lLayer->GetUVs(type);
                if (lUVLayerElement)
                {
                    names.Add(lUVLayerElement->GetName());
                }
            }
        }

        for (int j = 0; j < names.GetCount(); j++)
        {
            PyList_Append(a0, sipConvertFromType(&names[j], sipType_FbxString, NULL));
        }
%End 
    
protected:
    virtual ~FbxGeometryBase();
};
