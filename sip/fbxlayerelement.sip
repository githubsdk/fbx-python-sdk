class FbxLayerElement
{
%ConvertToSubClassCode
    if (dynamic_cast<FbxLayerElementNormal *>(sipCpp))
        sipType = sipType_FbxLayerElementNormal;
    else if (dynamic_cast<FbxLayerElementBinormal *>(sipCpp))
        sipType = sipType_FbxLayerElementBinormal;
    else if (dynamic_cast<FbxLayerElementTangent *>(sipCpp))
        sipType = sipType_FbxLayerElementTangent;
    else if (dynamic_cast<FbxLayerElementMaterial *>(sipCpp))
        sipType = sipType_FbxLayerElementMaterial;
    else if (dynamic_cast<FbxLayerElementPolygonGroup *>(sipCpp))
        sipType = sipType_FbxLayerElementPolygonGroup;
    else if (dynamic_cast<FbxLayerElementUV *>(sipCpp))
        sipType = sipType_FbxLayerElementUV;
    else if (dynamic_cast<FbxLayerElementVertexColor *>(sipCpp))
        sipType = sipType_FbxLayerElementVertexColor;
    else if (dynamic_cast<FbxLayerElementSmoothing *>(sipCpp))
        sipType = sipType_FbxLayerElementSmoothing;
    else if (dynamic_cast<FbxLayerElementCrease *>(sipCpp))
        sipType = sipType_FbxLayerElementCrease;
    else if (dynamic_cast<FbxLayerElementVisibility *>(sipCpp))
        sipType = sipType_FbxLayerElementVisibility;
    else if (dynamic_cast<FbxLayerElementTexture *>(sipCpp))
        sipType = sipType_FbxLayerElementTexture;
    else
        sipType = 0;
%End

public:
	enum EType
	{
		eUnknown = 0,

        //Non-Texture layer element types
		//Note: Make sure to update static index below if you change this enum!
		eNormal = 1,
        eBiNormal = 2,
        eTangent = 3,
		eMaterial = 4,
		ePolygonGroup = 5,
		eUV = 6,
		eVertexColor = 7,
		eSmoothing = 8,
        eVertexCrease = 9,
        eEdgeCrease = 10,
        eHole = 11,
		eUserData = 12,
		eVisibility = 13,

        //Texture layer element types
		//Note: Make sure to update static index below if you change this enum!
        eTextureDiffuse = 14,
        eTextureDiffuseFactor = 15,
		eTextureEmissive = 16,
		eTextureEmissiveFactor = 17,
		eTextureAmbient = 18,
		eTextureAmbientFactor = 19,
		eTextureSpecular = 20,
        eTextureSpecularFactor = 21,
        eTextureShininess = 22,
		eTextureNormalMap = 23,
		eTextureBump = 24,
		eTextureTransparency = 25,
		eTextureTransparencyFactor = 26,
		eTextureReflection = 27,
		eTextureReflectionFactor = 28,
        eTextureDisplacement = 29,
        eTextureDisplacementVector = 30,

		eTypeCount = 31
	};
	
	enum EMappingMode
	{
		eNone,
		eByControlPoint,
		eByPolygonVertex,
		eByPolygon,
		eByEdge,
		eAllSame
	};
    
	enum EReferenceMode
	{
		eDirect,
		eIndex,
		eIndexToDirect
	};
    
    // We need to emulate these by providing our own functions
    // SIP does not support using the 'const' keyword twice in a declaration
   
    // const static int sTypeTextureStartIndex = int(eTextureDiffuse);	//!< The start index of texture type layer elements. 
    // const static int sTypeTextureEndIndex = int(eTypeCount) - 1;	//!< The end index of texture type layer elements.
    // const static int sTypeTextureCount = sTypeTextureEndIndex - sTypeTextureStartIndex + 1;	//!< The count of texture type layer elements.
    // const static int sTypeNonTextureStartIndex = int(eNormal);		//!< The start index of non-texture type layer elements.
    // const static int sTypeNonTextureEndIndex = int(eVisibility);	//!< The end index of non-texture type layer elements.
    // const static int sTypeNonTextureCount = sTypeNonTextureEndIndex - sTypeNonTextureStartIndex + 1;	//!< The count of non-texture type layer elements.             
    static const int sTypeTextureStartIndex();
%MethodCode
    sipRes = FbxLayerElement::sTypeTextureStartIndex;
%End    

    static const int sTypeTextureEndIndex();
%MethodCode
    sipRes = FbxLayerElement::sTypeTextureEndIndex;
%End    

    static const int sTypeTextureCount();
%MethodCode
    sipRes = FbxLayerElement::sTypeTextureCount;
%End    

    static const int sTypeNonTextureStartIndex();
%MethodCode
    sipRes = FbxLayerElement::sTypeNonTextureStartIndex;
%End    

    static const int sTypeNonTextureEndIndex();
%MethodCode
    sipRes = FbxLayerElement::sTypeNonTextureEndIndex;
%End    

    static const int sTypeNonTextureCount();
%MethodCode
    sipRes = FbxLayerElement::sTypeNonTextureCount;
%End    
          
    
    // We need to emulate these by providing our own functions
    //static const char* const sTextureNames[];						//!< Array of names of texture type layer elements.
    //static const char* const sTextureUVNames[];						//!< Array of names of UV layer elements.
    //static const char* const sNonTextureNames[];					//!< Array of names of non-texture type layer elements.
    //static const FbxDataType sTextureDataTypes[];					//!< Array of texture types.
    //static const char* const sTextureChannelNames[];				//!< Array of texture channels.    
    
    static const char* sTextureNames(int index);
%MethodCode
    sipRes = const_cast<const char *>(FbxLayerElement::sTextureNames[a0]);
%End
   
    static const char* sTextureUVNames(int index);
%MethodCode
    sipRes = const_cast<const char *>(FbxLayerElement::sTextureUVNames[a0]);
%End

    static const char* sNonTextureNames(int index);
%MethodCode
    sipRes = const_cast<const char *>(FbxLayerElement::sNonTextureNames[a0]);
%End

    static const FbxDataType* sTextureDataTypes(int index);
%MethodCode
    sipRes = &(FbxLayerElement::sTextureDataTypes[a0]);
%End

    static const char* sTextureChannelNames(int index);
%MethodCode
    sipRes = const_cast<const char *>(FbxLayerElement::sTextureChannelNames[a0]);
%End
   
    void SetMappingMode(EMappingMode pMappingMode);
    void SetReferenceMode(EReferenceMode pReferenceMode);
    EMappingMode GetMappingMode() const;
    EReferenceMode GetReferenceMode() const;
    void SetName(const char* pName);
    const char* GetName() const;
    bool operator==(const FbxLayerElement& pOther) const;
    void Destroy();

protected:
    FbxLayerElement();
    virtual ~FbxLayerElement();
};

template <Type>
class FbxLayerElementTemplate : FbxLayerElement
{
public:
    FbxLayerElementArrayTemplate<Type>& GetDirectArray();
    FbxLayerElementArrayTemplate_int& GetIndexArray();
    bool Clear();
    
    bool operator==(const FbxLayerElementTemplate& pOther) const;
    int RemapIndexTo(FbxLayerElement::EMappingMode pNewMapping);
    
protected:
    FbxLayerElementTemplate();
    ~FbxLayerElementTemplate();
};

%ModuleHeaderCode
typedef FbxLayerElementTemplate<int>                    FbxLayerElementTemplate_int;
typedef FbxLayerElementTemplate<bool>                   FbxLayerElementTemplate_bool;
typedef FbxLayerElementTemplate<double>                 FbxLayerElementTemplate_double;
typedef FbxLayerElementTemplate<FbxVector4>             FbxLayerElementTemplate_FbxVector4;
typedef FbxLayerElementTemplate<FbxVector2>             FbxLayerElementTemplate_FbxVector2;
typedef FbxLayerElementTemplate<FbxSurfaceMaterialPtr>  FbxLayerElementTemplate_HFbxSurfaceMaterial;
typedef FbxLayerElementTemplate<FbxTexturePtr>          FbxLayerElementTemplate_TexturePtr;
typedef FbxLayerElementTemplate<FbxColor>               FbxLayerElementTemplate_FbxColor;
%End

typedef FbxLayerElementTemplate<int>                    FbxLayerElementTemplate_int;
typedef FbxLayerElementTemplate<bool>                   FbxLayerElementTemplate_bool;
typedef FbxLayerElementTemplate<double>                 FbxLayerElementTemplate_double;
typedef FbxLayerElementTemplate<FbxVector4>             FbxLayerElementTemplate_FbxVector4;
typedef FbxLayerElementTemplate<FbxVector2>             FbxLayerElementTemplate_FbxVector2;
typedef FbxLayerElementTemplate<FbxSurfaceMaterialPtr>  FbxLayerElementTemplate_HFbxSurfaceMaterial;
typedef FbxLayerElementTemplate<FbxTexturePtr>          FbxLayerElementTemplate_TexturePtr;
typedef FbxLayerElementTemplate<FbxColor>               FbxLayerElementTemplate_FbxColor;

class FbxLayerElementNormal : FbxLayerElementTemplate_FbxVector4
{
public:
    static FbxLayerElementNormal * Create(FbxLayerContainer* pOwner, const char *pName);
    
protected:
    FbxLayerElementNormal();
    ~FbxLayerElementNormal();
};

class FbxLayerElementBinormal : FbxLayerElementTemplate_FbxVector4
{
public:
    static FbxLayerElementBinormal * Create(FbxLayerContainer* pOwner, const char *pName);
    
protected:
    FbxLayerElementBinormal();
    ~FbxLayerElementBinormal();
};

class FbxLayerElementTangent : FbxLayerElementTemplate_FbxVector4
{
public:
    static FbxLayerElementTangent * Create(FbxLayerContainer* pOwner, const char *pName);

protected:
    FbxLayerElementTangent();
    ~FbxLayerElementTangent();
};

class FbxLayerElementMaterial : FbxLayerElementTemplate_HFbxSurfaceMaterial
{
public:
    static FbxLayerElementMaterial * Create(FbxLayerContainer* pOwner, const char *pName);
    
protected:
    FbxLayerElementMaterial();
    ~FbxLayerElementMaterial();
};

class FbxLayerElementPolygonGroup : FbxLayerElementTemplate_int
{
public:
    static FbxLayerElementPolygonGroup * Create(FbxLayerContainer* pOwner, const char *pName);

protected:
    FbxLayerElementPolygonGroup();
    ~FbxLayerElementPolygonGroup();
};

class FbxLayerElementUV : FbxLayerElementTemplate_FbxVector2
{
public:
    static FbxLayerElementUV * Create(FbxLayerContainer* pOwner, const char *pName);
    
protected:
    FbxLayerElementUV();
    ~FbxLayerElementUV();
};

class FbxLayerElementVertexColor : FbxLayerElementTemplate_FbxColor
{
public:
    static FbxLayerElementVertexColor * Create(FbxLayerContainer* pOwner, const char *pName);

protected:
    FbxLayerElementVertexColor();
    ~FbxLayerElementVertexColor();
};

class FbxLayerElementSmoothing : FbxLayerElementTemplate_int
{
public:
    static FbxLayerElementSmoothing * Create(FbxLayerContainer* pOwner, const char *pName);

    void SetReferenceMode( FbxLayerElement::EReferenceMode pMode );

protected:
    FbxLayerElementSmoothing();
};

class FbxLayerElementCrease : FbxLayerElementTemplate_double
{
public:
    static FbxLayerElementCrease * Create(FbxLayerContainer* pOwner, const char *pName);

    void SetReferenceMode( FbxLayerElement::EReferenceMode pMode );

protected:
    FbxLayerElementCrease();
};

class FbxLayerElementVisibility : FbxLayerElementTemplate_bool
{
public:
    static FbxLayerElementVisibility * Create(FbxLayerContainer* pOwner, const char *pName);
protected:
    FbxLayerElementVisibility();
    ~FbxLayerElementVisibility();
};

class FbxLayerElementTexture : FbxLayerElementTemplate_TexturePtr
{
public:
    static FbxLayerElementTexture * Create(FbxLayerContainer* pOwner, const char *pName);
    
	enum EBlendMode
	{
		eTranslucent,
		eAdd,
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

    void        SetBlendMode(EBlendMode pBlendMode);
    void        SetAlpha(double pAlpha);
    EBlendMode  GetBlendMode();
    double      GetAlpha();
    
protected:
    FbxLayerElementTexture();
    ~FbxLayerElementTexture();
};
