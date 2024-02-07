class FbxLayerContainer : FbxNodeAttribute /NoDefaultCtors/
{
public:
    static FbxClassId ClassId;
    static FbxLayerContainer* Create(FbxManager *pManager, const char *pName);
    virtual FbxClassId GetClassId() const;
    static FbxLayerContainer* Create(FbxObject *pContainer,  const char *pName);

    bool operator==(const FbxLayerContainer & pObj);
    
    int CreateLayer();
    void ClearLayers();
    int GetLayerCount() const;
    int GetLayerCount(FbxLayerElement::EType pType,  bool pUVCount=false) const;
    
    FbxLayer* GetLayer(int pIndex);
    FbxLayer* GetLayer(int pIndex, FbxLayerElement::EType pType, bool pIsUV=false);
    int GetLayerIndex(int pIndex, FbxLayerElement::EType pType, bool pIsUV=false) const;
    int GetLayerTypedIndex(int pGlobalIndex, FbxLayerElement::EType pType, bool pIsUV=false);
    
    bool ConvertDirectToIndexToDirect(int pLayer);

protected:
    virtual ~FbxLayerContainer();
};