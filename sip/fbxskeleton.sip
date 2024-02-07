class FbxSkeleton : FbxNodeAttribute /NoDefaultCtors/
{
public:
    static FbxClassId ClassId;
    static FbxSkeleton* Create(FbxManager *pManager, const char *pName);
    virtual FbxClassId GetClassId() const;
    static FbxSkeleton* Create(FbxObject *pContainer,  const char *pName);

    bool operator==(const FbxSkeleton & pObj);
    
    virtual FbxNodeAttribute::EType GetAttributeType() const;
    void Reset();

    enum EType
    {
        eRoot, 
        eLimb, 
        eLimbNode, 
        eEffector
    };
    
    void SetSkeletonType(EType pSkeletonType);
    EType GetSkeletonType() const;
    bool GetSkeletonTypeIsSet() const;
    EType GetSkeletonTypeDefaultValue() const;
    double GetLimbLengthDefaultValue() const;
    double GetLimbNodeSizeDefaultValue() const;
    bool SetLimbNodeColor(const FbxColor& pColor);
    FbxColor GetLimbNodeColor() const;
    bool GetLimbNodeColorIsSet() const;
    FbxColor GetLimbNodeColorDefaultValue() const;
    bool IsSkeletonRoot() const;
    
    static const char*      sSize;
    static const char*      sLimbLength;

    static const FbxDouble sDefaultSize;
    static const FbxDouble sDefaultLimbLength;
    
    FbxPropertyDouble1		Size;
    FbxPropertyDouble1		LimbLength;

protected:
    virtual ~FbxSkeleton();
};