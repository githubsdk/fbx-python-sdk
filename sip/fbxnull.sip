class FbxNull : FbxNodeAttribute /NoDefaultCtors/
{
public:
    static FbxClassId ClassId;
    static FbxNull* Create(FbxManager *pManager, const char *pName);
    virtual FbxClassId GetClassId() const;
    static FbxNull* Create(FbxObject *pContainer,  const char *pName);

    bool operator==(const FbxNull & pObj);
    
    virtual FbxNodeAttribute::EType GetAttributeType() const;
    void Reset();

    enum ELook
	{
        eNone,
        eCross,
    };

    double GetSizeDefaultValue() const;

    static const char*          sSize;
    static const char*          sLook;
    static const FbxDouble     sDefaultSize;
    static const ELook      sDefaultLook;
    
    FbxPropertyDouble1          Size;
    FbxPropertyFbxNullELook     Look;

protected:
    virtual ~FbxNull();
};
