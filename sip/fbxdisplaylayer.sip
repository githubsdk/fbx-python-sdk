class FbxDisplayLayer : FbxCollectionExclusive /NoDefaultCtors/
{
public:
    static FbxClassId ClassId;
    static FbxDisplayLayer* Create(FbxManager *pManager, const char *pName);
    virtual FbxClassId GetClassId() const;
    static FbxDisplayLayer* Create(FbxObject *pContainer,  const char *pName);

    bool operator==(const FbxDisplayLayer & pObj);
    
    FbxPropertyDouble3       Color;
    FbxPropertyBool1         Show;
    FbxPropertyBool1         Freeze;
    FbxPropertyBool1         LODBox;

    //////////////////////////////////////////////////////////////////////////
    // Static values
    //////////////////////////////////////////////////////////////////////////

    // Default property values
    static const FbxDouble3 sColorDefault;

protected:
    virtual ~FbxDisplayLayer();
};