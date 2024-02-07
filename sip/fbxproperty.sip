class FbxCriteria 
{
public:
    // Hierarchy match
    static FbxCriteria ObjectType(FbxClassId pClassId);
    
    // Exact match
    static FbxCriteria ObjectTypeStrict(FbxClassId pClassId);
    
    static FbxCriteria IsProperty();
    
    FbxCriteria();
    FbxCriteria(const FbxCriteria &pCriteria);
    ~FbxCriteria();
};

class FbxProperty
{
public:
    static FbxProperty Create(const FbxProperty &pCompoundProperty, const FbxDataType &pDataType, 
        const char * pName, const char * pLabel="", bool pCheckForDup=true);
    static FbxProperty Create(FbxObject* pObject, const FbxDataType &pDataType, const char * pName,
        const char * pLabel="", bool pCheckForDup=true);
    static FbxProperty CreateFrom(const FbxProperty& pCompoundProperty, FbxProperty& pFromProperty, bool pCheckForDup=true);
    static FbxProperty CreateFrom(FbxObject* pObject, FbxProperty& pFromProperty, bool pCheckForDup=true);

    void Destroy();
    void DestroyRecursively();
    
    FbxProperty();
    FbxProperty(const FbxProperty &pProperty);
    ~FbxProperty();
    
    FbxDataType        GetPropertyDataType() const;
    FbxString         GetName() const;
    FbxString             GetHierarchicalName() const;
    FbxString         GetLabel(bool pReturnNameIfEmpty=true) const;
    void                SetLabel(const FbxString & pLabel);
    FbxObject*         GetFbxObject() const;
    
    void                SetUserTag(int pTag);
    int                 GetUserTag();
    //void  SetUserDataPtr(void* pUserData);
    //void* GetUserDataPtr();
    
    void ModifyFlag(FbxPropertyFlags::EFlags pFlag, bool pValue);

    bool GetFlag(FbxPropertyFlags::EFlags pFlag) const;
    FbxPropertyFlags::EInheritType GetFlagInheritType(FbxPropertyFlags::EFlags pFlag ) const;
    bool SetFlagInheritType(FbxPropertyFlags::EFlags pFlag, FbxPropertyFlags::EInheritType pType );
    bool ModifiedFlag(FbxPropertyFlags::EFlags pFlag ) const;    
    
    //FbxProperty & operator=  (FbxProperty const &pKProperty);
    bool operator== (const FbxProperty &pKProperty) const;
    bool operator!= (const FbxProperty &pKProperty) const;
    bool operator== (int pValue) const;
    bool operator!= (int pValue) const;
    bool CompareValue(const FbxProperty &pProp) const;
    bool CopyValue(const FbxProperty& pProp);
        
    bool IsValid() const;
    static bool HasDefaultValue( FbxProperty& pProperty );

    FbxPropertyFlags::EInheritType GetValueInheritType() const;
    bool SetValueInheritType( FbxPropertyFlags::EInheritType pType );
    bool Modified() const;

    bool           SupportSetLimitAsDouble();
    bool           SetMinLimit(double pMin);
    bool           HasMinLimit() const;
    double         GetMinLimit() const;
    bool           HasMaxLimit() const;
    bool           SetMaxLimit(double pMax);
    double         GetMaxLimit() const;
    bool           SetLimits(double pMin, double pMax);

    int                 AddEnumValue(const char *pStringValue);
    void                InsertEnumValue(int pIndex, const char *pStringValue);
    int                 GetEnumCount() const;
    void                SetEnumValue(int pIndex, const char *pStringValue);
    void                RemoveEnumValue(int pIndex);
    const char *              GetEnumValue(int pIndex) const;
    
    bool IsRoot() const;
    bool IsChildOf(const FbxProperty & pParent) const;
    bool IsDescendentOf(const FbxProperty & pAncestor) const;
    FbxProperty         GetParent() const;
    FbxProperty GetChild() const;
    FbxProperty GetSibling() const;
    FbxProperty GetFirstDescendent() const;
    FbxProperty GetNextDescendent(const FbxProperty &pProperty) const;
    FbxProperty Find (const char *pName,bool pCaseSensitive = true) const;
    FbxProperty Find (const char *pName,const FbxDataType &pDataType, bool pCaseSensitive = true) const;
    FbxProperty FindHierarchical (const char *pName,bool pCaseSensitive = true) const;
    FbxProperty FindHierarchical (const char *pName,const FbxDataType &pDataType, bool pCaseSensitive = true) const;
    
    void BeginCreateOrFindProperty();
    void EndCreateOrFindProperty();
    
    FbxAnimCurveNode* CreateCurveNode(FbxAnimLayer* pAnimLayer);
    FbxAnimCurveNode* GetCurveNode(FbxAnimLayer* pAnimLayer, bool pCreateAsNeeded=false);
    FbxAnimCurveNode* GetCurveNode(FbxAnimStack* pAnimStack, bool pCreate=false);
    FbxAnimCurve* GetCurve(FbxAnimLayer* pAnimLayer, bool pCreateAsNeeded=false);
%MethodCode
        sipRes = sipCpp->GetCurve(a0, a1);
%End
    FbxAnimCurve* GetCurve(FbxAnimLayer* pAnimLayer, const char* pChannel, bool pCreateAsNeeded=false);
%MethodCode
        sipRes = sipCpp->GetCurve(a0, a1, a2);
%End
    FbxAnimCurve* GetCurve(FbxAnimLayer* pAnimLayer, const char* pName, const char* pChannel, bool pCreateAsNeeded=false);
%MethodCode
        sipRes = sipCpp->GetCurve(a0, a1, a2, a3);
%End

    bool ConnectSrcObject       (FbxObject* pObject,FbxConnection::EType pType = FbxConnection::eNone);
    bool IsConnectedSrcObject   (const FbxObject* pObject) const;
    bool DisconnectSrcObject    (FbxObject* pObject);
    bool DisconnectAllSrcObject();
    bool DisconnectAllSrcObject(const FbxCriteria &pCriteria);
    int GetSrcObjectCount()const;
    int GetSrcObjectCount(const FbxCriteria &pCriteria)const;
    FbxObject* GetSrcObject(int pIndex=0) const;
    FbxObject* GetSrcObject(const FbxCriteria &pCriteria, int pIndex=0) const;
    FbxObject* FindSrcObject(const char *pName,int pStartIndex=0) const;
    FbxObject* FindSrcObject(const FbxCriteria &pCriteria,const char *pName,int pStartIndex=0) const;

    bool ConnectDstObject       (FbxObject* pObject, FbxConnection::EType pType = FbxConnection::eNone);
    bool IsConnectedDstObject   (const FbxObject* pObject) const;
    bool DisconnectDstObject    (FbxObject* pObject);
    bool DisconnectAllDstObject();
    bool DisconnectAllDstObject(const FbxCriteria &pCriteria);
    int GetDstObjectCount() const;
    int GetDstObjectCount(const FbxCriteria &pCriteria) const;
    FbxObject* GetDstObject(int pIndex=0) const;
    FbxObject* GetDstObject(const FbxCriteria &pCriteria,int pIndex=0) const;
    FbxObject* FindDstObject(const char *pName,int pStartIndex=0) const;
    FbxObject* FindDstObject(const FbxCriteria &pCriteria,const char *pName,int pStartIndex=0) const;

    bool            ConnectSrcProperty      (const FbxProperty & pProperty);
    bool            IsConnectedSrcProperty  (const FbxProperty & pProperty);
    bool            DisconnectSrcProperty   (const FbxProperty & pProperty);
    int             GetSrcPropertyCount     () const;
    FbxProperty    GetSrcProperty          (int pIndex=0) const;
    FbxProperty    FindSrcProperty         (const char *pName,int pStartIndex=0) const;
    bool            ConnectDstProperty      (const FbxProperty & pProperty);
    bool            IsConnectedDstProperty  (const FbxProperty & pProperty);
    bool            DisconnectDstProperty   (const FbxProperty & pProperty);
    int             GetDstPropertyCount     () const;
    FbxProperty    GetDstProperty          (int pIndex=0) const;
    FbxProperty    FindDstProperty         (const char *pName,int pStartIndex=0) const;
    void            ClearConnectCache();

    bool Set(double pValue);  //template method
    bool Set(const FbxString &pValue);
    bool Set(const FbxColor &pValue);
    bool Set(const FbxDouble3 &pValue);
    bool Set(const FbxQuaternion &pValue);
    bool Set(const FbxDouble4 &pValue);
    bool Set(const FbxDouble4x4 &pValue);
    bool Set(const FbxTime &pValue);
};

template<T> 
class FbxPropertyT : FbxProperty
{
public:
    FbxPropertyT();
    FbxPropertyT(const FbxProperty &pProperty);
    ~FbxPropertyT();
    
    T Get() const;
};

%ModuleHeaderCode
    typedef FbxPropertyT<FbxBool>           FbxPropertyBool1;
    typedef FbxPropertyT<FbxUChar>          FbxPropertyUChar1;
    typedef FbxPropertyT<FbxInt>            FbxPropertyInteger1;
    typedef FbxPropertyT<FbxFloat>          FbxPropertyFloat1;
    typedef FbxPropertyT<FbxDouble>         FbxPropertyDouble1;
    typedef FbxPropertyT<FbxDouble2>       FbxPropertyDouble2;
    typedef FbxPropertyT<FbxDouble3>       FbxPropertyDouble3;
    typedef FbxPropertyT<FbxDouble4>       FbxPropertyDouble4;
    typedef FbxPropertyT<FbxAMatrix>           FbxPropertyXMatrix;
    typedef FbxPropertyT<FbxTime>                FbxPropertyFbxTime;
    typedef FbxPropertyT<FbxDateTime>                FbxPropertyDateTime;
    typedef FbxPropertyT<FbxEnum>            FbxPropertyEnum;
    typedef FbxPropertyT<FbxString>        FbxPropertyString;
    typedef FbxPropertyT<EFbxRotationOrder>  FbxPropertyEFbxRotationOrder;
    typedef FbxPropertyT<FbxTransform::EInheritType>  FbxPropertyFbxTransformEInheritType;
    typedef FbxPropertyT<FbxReference>     FbxPropertyFbxReference;
    typedef FbxPropertyT<FbxBlob>         FbxPropertyBlob;
    typedef FbxPropertyT<EFbxQuatInterpMode>         FbxPropertyEFbxQuatInterpMode;

    typedef FbxPropertyT<FbxCamera::EAspectRatioMode>  FbxPropertyEAspectRatioMode;
    typedef FbxPropertyT<FbxCamera::EApertureMode>     FbxPropertyEApertureMode;
    typedef FbxPropertyT<FbxCamera::EGateFit>          FbxPropertyEGateFit;
    typedef FbxPropertyT<FbxCamera::EFormat>           FbxPropertyEFormat;
    typedef FbxPropertyT<FbxCamera::EApertureFormat>   FbxPropertyEApertureFormat;
    typedef FbxPropertyT<FbxCamera::EFilmRollOrder>    FbxPropertyEFilmRollOrder;
    typedef FbxPropertyT<FbxCamera::EFrontBackPlaneDisplayMode>  FbxPropertyEFrontBackPlaneDisplayMode;
    typedef FbxPropertyT<FbxCamera::EFrontBackPlaneDistanceMode> FbxPropertyEFrontBackPlaneDistanceMode;
    typedef FbxPropertyT<FbxCamera::ESafeAreaStyle>    FbxPropertyESafeAreaStyle;
    typedef FbxPropertyT<FbxCamera::EProjectionType>   FbxPropertyEProjectionType;
    typedef FbxPropertyT<FbxCamera::EFocusDistanceSource>        FbxPropertyEFocusDistanceSource;
    typedef FbxPropertyT<FbxCamera::EAntialiasingMethod>         FbxPropertyEAntialiasingMethod;
    typedef FbxPropertyT<FbxCamera::ESamplingType>               FbxPropertyESamplingType;
    
    typedef FbxPropertyT<FbxCameraStereo::EStereoType>               FbxPropertyFbxCameraStereoEStereoType;       

    typedef FbxPropertyT<FbxCharacter::EOffAutoUser>  FbxPropertyFbxCharacterEOffAutoUser;
    typedef FbxPropertyT<FbxCharacter::EAutoUser>  FbxPropertyFbxCharacterEAutoUser;
    typedef FbxPropertyT<FbxCharacter::EPostureMode>  FbxPropertyFbxCharacterEPostureMode;
    typedef FbxPropertyT<FbxCharacter::EFloorPivot>  FbxPropertyFbxCharacterEFloorPivot;
    typedef FbxPropertyT<FbxCharacter::ERollExtractionMode>  FbxPropertyFbxCharacterERollExtractionMode;
    typedef FbxPropertyT<FbxCharacter::EHipsTranslationMode>  FbxPropertyFbxCharacterEHipsTranslationMode;
    typedef FbxPropertyT<FbxCharacter::EFootContactType>  FbxPropertyFbxCharacterEFootContactType;
    typedef FbxPropertyT<FbxCharacter::EHandContactType>  FbxPropertyFbxCharacterEHandContactType;
    typedef FbxPropertyT<FbxCharacter::EFingerContactMode>  FbxPropertyFbxCharacterEFingerContactMode;
    typedef FbxPropertyT<FbxCharacter::EContactBehaviour>  FbxPropertyFbxCharacterEContactBehaviour;

    typedef FbxPropertyT<FbxTexture::ETextureUse6>  FbxPropertyETextureUse6;
    typedef FbxPropertyT<FbxTexture::EUnifiedMappingType>  FbxPropertyEUnifiedMappingType;
    typedef FbxPropertyT<FbxTexture::EWrapMode>  FbxPropertyEWrapMode;
    typedef FbxPropertyT<FbxTexture::EBlendMode>  FbxPropertyEBlendMode;

    typedef FbxPropertyT<FbxNull::ELook>  FbxPropertyFbxNullELook;

    typedef FbxPropertyT<FbxLight::EType> FbxPropertyEType;
    typedef FbxPropertyT<FbxLight::EDecayType> FbxPropertyEDecayType;
    typedef FbxPropertyT<FbxLight::EAreaLightShape> FbxPropertyEAreaLightShape;

    typedef FbxPropertyT<FbxMarker::ELook>  FbxPropertyELook;
    
    typedef FbxPropertyT<FbxMediaClip::EAccessMode>  FbxPropertyFbxMediaClipEAccessMode;
    typedef FbxPropertyT<FbxVideo::EInterlaceMode>  FbxPropertyFbxVideoEInterlaceMode;    
    
    typedef FbxPropertyT<FbxControlSet::EType>  FbxPropertyFbxControlSetEType;

	typedef FbxPropertyT<FbxVertexCacheDeformer::ECacheChannelType> FbxPropertyFbxVertexCacheDeformerType;
%End

    typedef FbxPropertyT<FbxBool>         FbxPropertyBool1;
    typedef FbxPropertyT<FbxUChar>        FbxPropertyUChar1;
    typedef FbxPropertyT<FbxInt>      FbxPropertyInteger1;
    typedef FbxPropertyT<FbxFloat>         FbxPropertyFloat1;
    typedef FbxPropertyT<FbxDouble>       FbxPropertyDouble1;
    typedef FbxPropertyT<FbxDouble2>       FbxPropertyDouble2;
    typedef FbxPropertyT<FbxDouble3>       FbxPropertyDouble3;
    typedef FbxPropertyT<FbxDouble4>       FbxPropertyDouble4;
    typedef FbxPropertyT<FbxAMatrix>           FbxPropertyXMatrix;
    typedef FbxPropertyT<FbxTime>                FbxPropertyFbxTime;
    typedef FbxPropertyT<FbxDateTime>                FbxPropertyDateTime;
    typedef FbxPropertyT<FbxEnum>            FbxPropertyEnum;
    typedef FbxPropertyT<FbxString>        FbxPropertyString;
    typedef FbxPropertyT<EFbxRotationOrder>  FbxPropertyEFbxRotationOrder;
    typedef FbxPropertyT<FbxTransform::EInheritType>  FbxPropertyFbxTransformEInheritType;
    typedef FbxPropertyT<FbxReference>     FbxPropertyFbxReference;
    typedef FbxPropertyT<FbxBlob>         FbxPropertyBlob;
    typedef FbxPropertyT<EFbxQuatInterpMode>         FbxPropertyEFbxQuatInterpMode;

    typedef FbxPropertyT<FbxCamera::EAspectRatioMode>  FbxPropertyEAspectRatioMode;
    typedef FbxPropertyT<FbxCamera::EApertureMode>     FbxPropertyEApertureMode;
    typedef FbxPropertyT<FbxCamera::EGateFit>          FbxPropertyEGateFit;
    typedef FbxPropertyT<FbxCamera::EFormat>           FbxPropertyEFormat;
    typedef FbxPropertyT<FbxCamera::EApertureFormat>   FbxPropertyEApertureFormat;
    typedef FbxPropertyT<FbxCamera::EFilmRollOrder>    FbxPropertyEFilmRollOrder;
    typedef FbxPropertyT<FbxCamera::EFrontBackPlaneDisplayMode>  FbxPropertyEFrontBackPlaneDisplayMode;
    typedef FbxPropertyT<FbxCamera::EFrontBackPlaneDistanceMode> FbxPropertyEFrontBackPlaneDistanceMode;
    typedef FbxPropertyT<FbxCamera::ESafeAreaStyle>    FbxPropertyESafeAreaStyle;
    typedef FbxPropertyT<FbxCamera::EProjectionType>   FbxPropertyEProjectionType;
    typedef FbxPropertyT<FbxCamera::EFocusDistanceSource>        FbxPropertyEFocusDistanceSource;
    typedef FbxPropertyT<FbxCamera::EAntialiasingMethod>         FbxPropertyEAntialiasingMethod;
    typedef FbxPropertyT<FbxCamera::ESamplingType>               FbxPropertyESamplingType;
    
    typedef FbxPropertyT<FbxCameraStereo::EStereoType>               FbxPropertyFbxCameraStereoEStereoType;    

    typedef FbxPropertyT<FbxCharacter::EOffAutoUser>  FbxPropertyFbxCharacterEOffAutoUser;
    typedef FbxPropertyT<FbxCharacter::EPostureMode>  FbxPropertyFbxCharacterEPostureMode;	
    typedef FbxPropertyT<FbxCharacter::EAutoUser>  FbxPropertyFbxCharacterEAutoUser;
    typedef FbxPropertyT<FbxCharacter::EFloorPivot>  FbxPropertyFbxCharacterEFloorPivot;
    typedef FbxPropertyT<FbxCharacter::ERollExtractionMode>  FbxPropertyFbxCharacterERollExtractionMode;
    typedef FbxPropertyT<FbxCharacter::EHipsTranslationMode>  FbxPropertyFbxCharacterEHipsTranslationMode;
    typedef FbxPropertyT<FbxCharacter::EFootContactType>  FbxPropertyFbxCharacterEFootContactType;
    typedef FbxPropertyT<FbxCharacter::EHandContactType>  FbxPropertyFbxCharacterEHandContactType;
    typedef FbxPropertyT<FbxCharacter::EFingerContactMode>  FbxPropertyFbxCharacterEFingerContactMode;
    typedef FbxPropertyT<FbxCharacter::EContactBehaviour>  FbxPropertyFbxCharacterEContactBehaviour;

    typedef FbxPropertyT<FbxTexture::ETextureUse6>  FbxPropertyETextureUse6;
    typedef FbxPropertyT<FbxTexture::EUnifiedMappingType>  FbxPropertyEUnifiedMappingType;
    typedef FbxPropertyT<FbxTexture::EWrapMode>  FbxPropertyEWrapMode;
    typedef FbxPropertyT<FbxTexture::EBlendMode>  FbxPropertyEBlendMode;

    typedef FbxPropertyT<FbxNull::ELook>  FbxPropertyFbxNullELook;

    typedef FbxPropertyT<FbxLight::EType> FbxPropertyEType;
    typedef FbxPropertyT<FbxLight::EDecayType> FbxPropertyEDecayType;
    typedef FbxPropertyT<FbxLight::EAreaLightShape> FbxPropertyEAreaLightShape;

    typedef FbxPropertyT<FbxMarker::ELook>  FbxPropertyELook;
    
    typedef FbxPropertyT<FbxMediaClip::EAccessMode>  FbxPropertyFbxMediaClipEAccessMode;
    typedef FbxPropertyT<FbxVideo::EInterlaceMode>  FbxPropertyFbxVideoEInterlaceMode;        
    
    typedef FbxPropertyT<FbxControlSet::EType>  FbxPropertyFbxControlSetEType;    
    
	typedef FbxPropertyT<FbxVertexCacheDeformer::ECacheChannelType> FbxPropertyFbxVertexCacheDeformerType;

