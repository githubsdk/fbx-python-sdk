class FbxNodeAttribute : FbxObject /NoDefaultCtors/
{

public:
    enum EType
    {   
        eUnknown,
        eNull,
        eMarker,
        eSkeleton, 
        eMesh, 
        eNurbs, 
        ePatch,
        eCamera, 
        eCameraStereo,
        eCameraSwitcher,
        eLight,
        eOpticalReference,
        eOpticalMarker,
        eNurbsCurve,
        eTrimNurbsSurface,
        eBoundary,
        eNurbsSurface,
        eShape,
        eLODGroup,
        eSubDiv,
        eCachedEffect,
        eLine
    };

    static FbxClassId ClassId;
    static FbxNodeAttribute* Create(FbxManager *pManager, const char *pName);
    virtual FbxClassId GetClassId() const;
    static FbxNodeAttribute* Create(FbxObject *pContainer,  const char *pName);

    bool operator==(const FbxNodeAttribute & pObj);
    
    static const char* sColor;
    static const FbxDouble3 sDefaultColor;
    FbxPropertyDouble3 Color;

    virtual EType GetAttributeType() const;
    
    int GetNodeCount();
    FbxNode* GetNode(int pIndex=0) const;

protected:
    virtual ~FbxNodeAttribute();
};
