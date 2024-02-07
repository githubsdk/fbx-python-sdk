class FbxLayeredTexture : FbxTexture /NoDefaultCtors/
{
public:
    static FbxClassId ClassId;
    static FbxLayeredTexture* Create(FbxManager *pManager, const char *pName);
    virtual FbxClassId GetClassId() const;
    static FbxLayeredTexture* Create(FbxObject *pContainer,  const char *pName);

    bool operator==(const FbxLayeredTexture & pObj);
    
	enum EBlendMode
	{
		eTranslucent,
		eAdditive,
		eModulate,
		eModulate2,
        eOver,
        eNormal,		
        eDissolve,
        eDarken,			
        eColorBurn,
        eLinearBurn, 	
        eDarkerColor,
        eLighten,			
        eScreen,		
        eColorDodge,
        eLinearDodge,
        eLighterColor,
        eSoftLight,		
        eHardLight,		
        eVividLight,
        eLinearLight,
        ePinLight, 		
        eHardMix,		
        eDifference, 		
        eExclusion, 		
        eSubtract,
        eDivide,
        eHue, 			
        eSaturation,		
        eColor,		
        eLuminosity,
        eOverlay,
        eBlendModeCount
	};
    
    bool SetTextureBlendMode( int pIndex, EBlendMode pMode );
    bool GetTextureBlendMode( int pIndex, EBlendMode& pMode ) const;

protected:
    virtual ~FbxLayeredTexture();
};