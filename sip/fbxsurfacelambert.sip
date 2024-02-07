class FbxSurfaceLambert : FbxSurfaceMaterial /NoDefaultCtors/
{
public:
    static FbxClassId ClassId;
    static FbxSurfaceLambert* Create(FbxManager *pManager, const char *pName);
    virtual FbxClassId GetClassId() const;
    static FbxSurfaceLambert* Create(FbxObject *pContainer,  const char *pName);

    bool operator==(const FbxSurfaceLambert & pObj);
    
    FbxPropertyDouble3 Emissive;
    FbxPropertyDouble1 EmissiveFactor;
    FbxPropertyDouble3 Ambient;
    FbxPropertyDouble1 AmbientFactor;
    FbxPropertyDouble3 Diffuse;
    FbxPropertyDouble1 DiffuseFactor;
    FbxPropertyDouble3 NormalMap;
    FbxPropertyDouble3 Bump;
    FbxPropertyDouble1 BumpFactor;
    FbxPropertyDouble3 TransparentColor;
    FbxPropertyDouble1 TransparencyFactor;
    FbxPropertyDouble3 DisplacementColor;
    FbxPropertyDouble1 DisplacementFactor;
    FbxPropertyDouble3 VectorDisplacementColor;
    FbxPropertyDouble1 VectorDisplacementFactor;

protected:
    virtual ~FbxSurfaceLambert();
};