class FbxLight : FbxNodeAttribute /NoDefaultCtors/
{
public:
    static FbxClassId ClassId;
    static FbxLight* Create(FbxManager *pManager, const char *pName);
    virtual FbxClassId GetClassId() const;
    static FbxLight* Create(FbxObject *pContainer,  const char *pName);

    bool operator==(const FbxLight & pObj);

    virtual FbxNodeAttribute::EType GetAttributeType() const;

	enum EType
	{
		ePoint, 
		eDirectional, 
		eSpot,
		eArea,
		eVolume
	};

	enum EDecayType
	{
		eNone,
		eLinear,
		eQuadratic,
		eCubic
	};

	enum EAreaLightShape
	{
		eRectangle,
		eSphere
	};

    void SetShadowTexture( FbxTexture* pTexture );
    FbxTexture* GetShadowTexture() const;
    
    FbxPropertyEType		LightType;
    FbxPropertyBool1			CastLight;
    FbxPropertyBool1			DrawVolumetricLight;
    FbxPropertyBool1			DrawGroundProjection;
    FbxPropertyBool1			DrawFrontFacingVolumetricLight;
    FbxPropertyDouble3			Color;
    FbxPropertyDouble1			Intensity;
    FbxPropertyDouble1			InnerAngle;
    FbxPropertyDouble1			OuterAngle;
    FbxPropertyDouble1			Fog;
    FbxPropertyEDecayType		DecayType;
    FbxPropertyDouble1			DecayStart;
    FbxPropertyString			FileName;
    FbxPropertyBool1			EnableNearAttenuation;
    FbxPropertyDouble1			NearAttenuationStart;
    FbxPropertyDouble1			NearAttenuationEnd;
    FbxPropertyBool1			EnableFarAttenuation;
    FbxPropertyDouble1			FarAttenuationStart;
    FbxPropertyDouble1			FarAttenuationEnd;
    FbxPropertyBool1			CastShadows;
    FbxPropertyDouble3			ShadowColor;
    FbxPropertyEAreaLightShape	AreaLightShape;
	FbxPropertyFloat1			LeftBarnDoor;
	FbxPropertyFloat1			RightBarnDoor;
	FbxPropertyFloat1			TopBarnDoor;
	FbxPropertyFloat1			BottomBarnDoor;
	FbxPropertyBool1			EnableBarnDoor;

protected:
    virtual ~FbxLight();
};
