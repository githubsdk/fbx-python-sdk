class FbxSurfaceMaterial : FbxObject /NoDefaultCtors/
{

public:
    static FbxClassId ClassId;
    static FbxSurfaceMaterial* Create(FbxManager *pManager, const char *pName);
    virtual FbxClassId GetClassId() const;
    static FbxSurfaceMaterial* Create(FbxObject *pContainer,  const char *pName);

    bool operator==(const FbxSurfaceMaterial & pObj);
    
    static const char* sShadingModel;
    static const char* sMultiLayer;

    static const char* sEmissive;
    static const char* sEmissiveFactor;

    static const char* sAmbient;
    static const char* sAmbientFactor;

    static const char* sDiffuse;
    static const char* sDiffuseFactor;

    static const char* sSpecular;
    static const char* sSpecularFactor;
    static const char* sShininess;

    static const char* sBump;
    static const char* sNormalMap;
    static const char* sBumpFactor;

    static const char* sTransparentColor;
    static const char* sTransparencyFactor;

    static const char* sReflection;
    static const char* sReflectionFactor;

    static const char* sDisplacementColor;
    static const char* sDisplacementFactor;
    
    FbxPropertyString ShadingModel;
    FbxPropertyBool1 MultiLayer;
    
    static const FbxBool sMultiLayerDefault;
    static const char* sShadingModelDefault;

protected:
    virtual ~FbxSurfaceMaterial();
};

typedef FbxSurfaceMaterial * HFbxSurfaceMaterial;