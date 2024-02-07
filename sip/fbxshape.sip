class FbxShape : FbxGeometryBase /NoDefaultCtors/
{
public:
    static FbxClassId ClassId;
    static FbxShape* Create(FbxManager *pManager, const char *pName);
    virtual FbxClassId GetClassId() const;
    static FbxShape* Create(FbxObject *pContainer,  const char *pName);

    void SetLegacyStyle(bool pState);
    bool IsLegacyStyle() const;
    void SetAbsoluteMode(bool pAbsolute);
    bool IsAbsoluteMode() const;

    bool SetBlendShapeChannel(FbxBlendShapeChannel* pBlendShapeChannel);
    FbxBlendShapeChannel* GetBlendShapeChannel() const;
    FbxGeometry* GetBaseGeometry();

    void Reset();

    bool operator==(const FbxShape & pObj);

protected:
    virtual ~FbxShape();
};