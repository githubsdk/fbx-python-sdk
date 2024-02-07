class FbxVertexCacheDeformer : FbxDeformer /NoDefaultCtors/
{
public:
    static FbxClassId ClassId;
    static FbxVertexCacheDeformer* Create(FbxManager *pManager, const char *pName);
    virtual FbxClassId GetClassId() const;
    static FbxVertexCacheDeformer* Create(FbxObject *pContainer,  const char *pName);
    bool operator==(const FbxVertexCacheDeformer & pObj);
    
    enum ECacheChannelType
    {
        ePositions,
        eNormals,
        eUVs,
        eTangents,
        eBinormals,
        eUserDefined
    };
    
    
    void SetCache( FbxCache* pCache );
    FbxCache* GetCache() const;
    
    FbxPropertyBool1 Active;
    FbxPropertyString Channel;
    FbxPropertyString CacheSet;
    FbxPropertyFbxVertexCacheDeformerType Type;
    
    virtual EDeformerType GetDeformerType() const;

protected:
    virtual ~FbxVertexCacheDeformer();
};