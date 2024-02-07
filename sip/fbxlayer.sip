class FbxLayer /NoDefaultCtors/
{
public:
    FbxLayerElementNormal* GetNormals();
    FbxLayerElementTangent* GetTangents();
    FbxLayerElementBinormal* GetBinormals();
    FbxLayerElementMaterial* GetMaterials();
    FbxLayerElementPolygonGroup* GetPolygonGroups();
    FbxLayerElementUV* GetUVs(FbxLayerElement::EType pTypeIdentifier=FbxLayerElement::eTextureDiffuse);
    int GetUVSetCount() const;
    
    FbxLayerElementTypeArray GetUVSetChannels() const;
    SIP_PYLIST GetUVSets() const;
%MethodCode
        FbxArray<FbxLayerElementUV const*> lUVSets = sipCpp->GetUVSets();
        if ((sipRes = PyList_New(lUVSets.GetCount())) == NULL)
            return NULL;
        
        for (int i = 0; i < lUVSets.GetCount(); ++i)
        {
            FbxLayerElementUV * lTemp = new FbxLayerElementUV(*(lUVSets[i]));
            PyList_SET_ITEM(sipRes, i, sipConvertFromNewType(lTemp, sipType_FbxLayerElementUV, NULL));
        }
%End
    
    FbxLayerElementVertexColor* GetVertexColors();
    FbxLayerElementSmoothing* GetSmoothing();
    FbxLayerElementCrease* GetVertexCrease();
    FbxLayerElementCrease* GetEdgeCrease();
    FbxLayerElementVisibility* GetVisibility();
    
    FbxLayerElementTexture* GetTextures(FbxLayerElement::EType pType);
    void SetTextures(FbxLayerElement::EType pType, FbxLayerElementTexture* pTextures);
    FbxLayerElement* GetLayerElementOfType(FbxLayerElement::EType pType, bool pIsUV=false);
    void SetNormals(FbxLayerElementNormal* pNormals);
    void SetBinormals(FbxLayerElementBinormal* pBinormals);
    void SetTangents(FbxLayerElementTangent* pTangents);
    void SetMaterials(FbxLayerElementMaterial* pMaterials);
    void SetPolygonGroups(FbxLayerElementPolygonGroup* pPolygonGroups);
    void SetUVs(FbxLayerElementUV* pUVs, FbxLayerElement::EType pTypeIdentifier=FbxLayerElement::eTextureDiffuse);
    void SetVertexColors (FbxLayerElementVertexColor* pVertexColors);
    void SetSmoothing (FbxLayerElementSmoothing* pSmoothing);
    void SetVertexCrease (FbxLayerElementCrease* pCrease);
    void SetEdgeCrease (FbxLayerElementCrease* pCrease);
    void SetVisibility( FbxLayerElementVisibility* pVisibility );
    FbxLayerElement* CreateLayerElementOfType(FbxLayerElement::EType pType, bool pIsUV=false);

private:
    FbxLayer(FbxLayerContainer& pOwner);
    virtual ~FbxLayer();
};
