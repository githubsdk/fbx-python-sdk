class FbxTexture : FbxObject /NoDefaultCtors/
{

public:
    static FbxClassId ClassId;
    static FbxTexture* Create(FbxManager *pManager, const char *pName);
    virtual FbxClassId GetClassId() const;
    static FbxTexture* Create(FbxObject *pContainer,  const char *pName);

    bool operator==(const FbxTexture & pObj);
    
	enum EUnifiedMappingType
	{ 
		eUMT_UV,			//! Maps to EMappingType::eUV.
		eUMT_XY,			//! Maps to EMappingType::ePlanar and EPlanarMappingNormal::ePlanarNormalZ.
		eUMT_YZ,			//! Maps to EMappingType::ePlanar and EPlanarMappingNormal::ePlanarNormalX.
		eUMT_XZ,			//! Maps to EMappingType::ePlanar and EPlanarMappingNormal::ePlanarNormalY.
		eUMT_SPHERICAL,		//! Maps to EMappingType::eSpherical.
		eUMT_CYLINDRICAL,	//! Maps to EMappingType::eCylindrical.
		eUMT_ENVIRONMENT,	//! Maps to EMappingType::eEnvironment.
		eUMT_PROJECTION,	//! Unused.
		eUMT_BOX,			//! DEPRECATED! Maps to EMappingType::eBox.
		eUMT_FACE,			//! DEPRECATED! Maps to EMappingType::eFace.
		eUMT_NO_MAPPING,	//! Maps to EMappingType::eNull.
	};

	enum ETextureUse6
	{
		eTEXTURE_USE_6_STANDARD,				//! Maps to ETextureUse::eStandard.
		eTEXTURE_USE_6_SPHERICAL_REFLEXION_MAP,	//! Maps to ETextureUse::eSphericalReflectionMap.
		eTEXTURE_USE_6_SPHERE_REFLEXION_MAP,	//! Maps to ETextureUse::eSphereReflectionMap.
		eTEXTURE_USE_6_SHADOW_MAP,				//! Maps to ETextureUse::eShadowMap.
		eTEXTURE_USE_6_LIGHT_MAP,				//! Maps to ETextureUse::eLightMap.
		eTEXTURE_USE_6_BUMP_NORMAL_MAP			//! Maps to ETextureUse::eBumpNormalMap.
	};
	
	enum EWrapMode
	{
		eRepeat,	//! Apply the texture over and over on the model's surface until the model is covered. This is the default setting.
		eClamp		//! Apply the texture to a model only once, using the color at the ends of the texture as the "filter".
	};

	enum EBlendMode
	{
		eTranslucent,	//! The texture is transparent, depending on the Alpha settings.
		eAdditive,		//! The color of the texture is added to the previous texture.
		eModulate,		//! The color value of the texture is multiplied by the color values of all previous layers of texture.
		eModulate2,		//! The color value of the texture is multiplied by two and then multiplied by the color values of all previous layers of texture.
		eOver			//! The texture is opaque.
	};
        
	enum EAlignMode
	{
		eLeft,	//! Left cropping.
		eRight,	//! Right cropping.
		eTop,	//! Top cropping.
		eBottom	//! Bottom cropping.
	};

	enum ECoordinates
	{
		eU,	//! U axis.
		eV,	//! V axis.
		eW	//! W axis.
	};

    FbxPropertyETextureUse6			TextureTypeUse;
    FbxPropertyDouble1			    Alpha;
    FbxPropertyEUnifiedMappingType	CurrentMappingType;
    FbxPropertyEWrapMode			WrapModeU;
    FbxPropertyEWrapMode			WrapModeV;
    FbxPropertyBool1				UVSwap;
    FbxPropertyBool1				PremultiplyAlpha;
    FbxPropertyDouble3			    Translation;
    FbxPropertyDouble3			    Rotation;
    FbxPropertyDouble3			    Scaling;
    FbxPropertyDouble3			    RotationPivot;
    FbxPropertyDouble3			    ScalingPivot;
    FbxPropertyEBlendMode	        CurrentTextureBlendMode;
    FbxPropertyString			    UVSet;
    
    void Reset();
    void SetSwapUV(bool pSwapUV);
    bool GetSwapUV() const;

    enum EAlphaSource
    { 
        eNone,			//! No Alpha.
        eRGBIntensity,	//! RGB Intensity (computed).
        eBlack			//! Alpha channel. Black is 100% transparency, white is opaque.
    };
	
    void SetAlphaSource(EAlphaSource pAlphaSource);
    EAlphaSource GetAlphaSource() const;
    void SetCropping(int pLeft, int pTop, int pRight, int pBottom);
    int GetCroppingLeft() const;
    int GetCroppingTop() const;
    int GetCroppingRight() const;
    int GetCroppingBottom() const;
   
    enum EMappingType
    { 
        eNull,			//! No texture mapping defined.
        ePlanar,		//! Apply texture to the model viewed as a plane.
        eSpherical,		//! Wrap texture around the model as if it was a sphere.
        eCylindrical,	//! Wrap texture around the model as if it was a cylinder.
        eBox,			//! Wrap texture around the model as if it was a box.
        eFace,			//! Apply texture to the model viewed as a face.
        eUV,			//! Apply texture to the model according to UVs.
		eEnvironment	//! Texture is an environment map.
    };

    void SetMappingType(EMappingType pMappingType);
    EMappingType GetMappingType() const;

    enum EPlanarMappingNormal
    { 
        ePlanarNormalX,	//! Normals are in the direction of the X axis, mapping plan is in the YZ axis.
        ePlanarNormalY,	//! Normals are in the direction of the Y axis, mapping plan is in the XZ axis.
        ePlanarNormalZ	//! Normals are in the direction of the Z axis, mapping plan is in the XY axis.
    };

    void SetPlanarMappingNormal(EPlanarMappingNormal pPlanarMappingNormal);
    EPlanarMappingNormal GetPlanarMappingNormal() const;

	enum ETextureUse
	{
		eStandard,					//! Standard texture use (ex. image)
		eShadowMap,					//! Shadow map
		eLightMap,					//! Light map
		eSphericalReflectionMap,	//! Spherical reflection map: Object reflects the contents of the scene
		eSphereReflectionMap,		//! Sphere reflection map: Object reflects the contents of the scene from only one point of view
		eBumpNormalMap				//! Bump map: Texture contains two direction vectors, that are used to convey relief in a texture.
	};

    void SetTextureUse(ETextureUse pMaterialUse);
    ETextureUse GetTextureUse() const;
    void SetWrapMode(EWrapMode pWrapU, EWrapMode pWrapV);
    EWrapMode GetWrapModeU() const;
    EWrapMode GetWrapModeV() const;

    void SetBlendMode(EBlendMode pBlendMode);
    EBlendMode GetBlendMode() const;
    
    void SetDefaultT(const FbxVector4& pT);
    FbxVector4& GetDefaultT(FbxVector4& pT) const;
    void SetDefaultR(const FbxVector4& pR);
    FbxVector4& GetDefaultR(FbxVector4& pR) const;
    void SetDefaultS(const FbxVector4& pS);
    FbxVector4& GetDefaultS(FbxVector4& pS) const;
    void SetDefaultAlpha(double pAlpha);
    double GetDefaultAlpha() const;
    
    void SetTranslation(double pU,double pV);
    double GetTranslationU() const;
    double GetTranslationV() const;
    void SetRotation(double pU, double pV, double pW = 0.0);
    double GetRotationU() const;
    double GetRotationV() const;
    double GetRotationW() const;
    void SetScale(double pU,double pV);
    double GetScaleU() const;
    double GetScaleV() const;

    void SetUVTranslation(FbxVector2& pT);
    FbxVector2& GetUVTranslation();
    void SetUVScaling(FbxVector2& pS);
    FbxVector2& GetUVScaling();

    FbxString GetTextureType();

protected:
    virtual ~FbxTexture();
};
