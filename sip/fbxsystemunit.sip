class FbxSystemUnit /NoDefaultCtors/
{
public:
    struct ConversionOptions
    {
		bool mConvertRrsNodes;  
        bool mConvertLimits;
        bool mConvertClusters;
        bool mConvertLightIntensity;	
        bool mConvertPhotometricLProperties;
        bool mConvertCameraClipPlanes;
    };
    
    FbxSystemUnit(double pScaleFactor, double pMultiplier = 1.0);
    ~FbxSystemUnit();
    
    static const FbxSystemUnit mm;
    static const FbxSystemUnit dm;
    static const FbxSystemUnit cm;
    static const FbxSystemUnit m;
    static const FbxSystemUnit km;
    static const FbxSystemUnit Inch;
    static const FbxSystemUnit Foot;
    static const FbxSystemUnit Mile;
    static const FbxSystemUnit Yard;
    static const FbxSystemUnit *sPredefinedUnits;
    static const ConversionOptions DefaultConversionOptions;

    void ConvertScene( FbxScene* pScene, const ConversionOptions& pOptions = FbxSystemUnit::DefaultConversionOptions ) const;
    void ConvertChildren( FbxNode* pRoot, const FbxSystemUnit& pSrcUnit, const ConversionOptions& pOptions = FbxSystemUnit::DefaultConversionOptions ) const;
    void ConvertScene( FbxScene* pScene, FbxNode* pFbxRoot, const ConversionOptions& pOptions = FbxSystemUnit::DefaultConversionOptions ) const;

    double GetScaleFactor() const;
    FbxString GetScaleFactorAsString(bool pAbbreviated = true) const;
    FbxString GetScaleFactorAsString_Plurial() const;
    double GetMultiplier() const;

    bool operator==(const FbxSystemUnit& pOther) const;
    bool operator!=(const FbxSystemUnit& pOther) const;

    double GetConversionFactorTo( const FbxSystemUnit& pTarget ) const;
    double GetConversionFactorFrom( const FbxSystemUnit& pSource ) const;
};