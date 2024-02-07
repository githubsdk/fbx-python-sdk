class FbxNode : FbxObject /NoDefaultCtors/
{
public:
    static FbxClassId ClassId;
    static FbxNode* Create(FbxManager *pManager, const char *pName);
    virtual FbxClassId GetClassId() const;
    static FbxNode* Create(FbxObject *pContainer,  const char *pName);

    bool operator==(const FbxNode & pObj);
    
    FbxNode* GetParent();
    bool AddChild(FbxNode* pNode);
    FbxNode* RemoveChild(FbxNode* pNode);
    int GetChildCount(bool pRecursive = false) const;
    FbxNode* GetChild(int pIndex);
    FbxNode* FindChild(const char *pName, bool pRecursive = true, bool pInitial = false);
    
    void SetTarget(FbxNode* pNode);
    FbxNode* GetTarget() const;
    void SetPostTargetRotation(FbxVector4 pVector);
    FbxVector4 GetPostTargetRotation() const;
    void SetTargetUp(FbxNode* pNode);
    FbxNode* GetTargetUp() const;
    void SetTargetUpVector(FbxVector4 pVector);
    FbxVector4 GetTargetUpVector() const;
    
    void SetVisibility(bool pIsVisible);
    bool GetVisibility() const;
	enum EShadingMode
	{
		eHardShading,		/*!<	Solid geometries rendered with smooth surfaces - using the system light. */
		eWireFrame,			/*!<	Geometries displayed in wire frame. */
		eFlatShading,		/*!<	Solid geometries rendered faceted - using the system light. */
		eLightShading,		/*!<	Solid geometries rendered with the scene lights. */
		eTextureShading,	/*!<	Solid geometries rendered with smooth textured surfaces - using system light. */
		eFullShading		/*!<	Solid geometries rendered with smooth textured surfaces and scene lights. */
	};

    void SetShadingMode(EShadingMode pShadingMode);
    EShadingMode GetShadingMode() const;
       
    FbxNodeAttribute* SetNodeAttribute(FbxNodeAttribute* pNodeAttribute);    
    FbxNodeAttribute* GetNodeAttribute();
    int GetNodeAttributeCount() const;
    int GetDefaultNodeAttributeIndex() const;
    bool SetDefaultNodeAttributeIndex(int pIndex, FbxStatus* pStatus = NULL);
    FbxNodeAttribute* GetNodeAttributeByIndex(int pIndex);
    int GetNodeAttributeIndex(FbxNodeAttribute* pNodeAttribute, FbxStatus* pStatus = NULL) const;
    bool AddNodeAttribute(FbxNodeAttribute* pNodeAttribute, FbxStatus* pStatus = NULL);
    FbxNodeAttribute* RemoveNodeAttribute(FbxNodeAttribute* pNodeAttribute);
    FbxNodeAttribute* RemoveNodeAttributeByIndex(int pIndex);
    FbxLODGroup* GetLodGroup();
    FbxNull* GetNull();
    FbxMarker* GetMarker();
    FbxSkeleton* GetSkeleton();
    FbxGeometry* GetGeometry();
    FbxMesh* GetMesh();
    FbxNurbs* GetNurbs();
    FbxNurbsSurface* GetNurbsSurface();
    FbxNurbsCurve* GetNurbsCurve();
    FbxTrimNurbsSurface* GetTrimNurbsSurface();
    FbxPatch* GetPatch();
    FbxCamera* GetCamera();
    FbxCameraSwitcher* GetCameraSwitcher();
    FbxLight* GetLight();

    void SetTransformationInheritType(FbxTransform::EInheritType pInheritType);
    void GetTransformationInheritType(FbxTransform::EInheritType& pInheritType);
    
	enum EPivotSet
	{
		eSourcePivot,		//!< The source pivot context.
		eDestinationPivot	//!< The destination pivot context.
	};

	/** \enum EPivotState  Pivot context state.
	  */
	enum EPivotState
	{
		ePivotActive,	//!< The pivot context with this state is affecting the node's transform computation.
		ePivotReference	//!< The pivot context with this state is not used during the node transform computation but can be accessed for reference purposes.
	};
    
    void SetPivotState(EPivotSet pPivotSet, EPivotState pPivotState);
    void GetPivotState(EPivotSet pPivotSet, EPivotState& pPivotState);
    
    void SetRotationOrder(EPivotSet pPivotSet, EFbxRotationOrder pRotationOrder);
    void GetRotationOrder(EPivotSet pPivotSet, EFbxRotationOrder& pRotationOrder);
    void SetUseRotationSpaceForLimitOnly(EPivotSet pPivotSet, bool pUseForLimitOnly);
    bool GetUseRotationSpaceForLimitOnly(EPivotSet pPivotSet);
    void SetRotationActive(bool pVal);
    bool GetRotationActive() const;
    
    /** Specify which Quaternion interpolation mode is used on the pivot context.
      * \param pPivotSet Specify which pivot context is manipulated.
      * \param pQuatIterp  The new value.
		  * \remarks When the \e pPivotSet is eSourcePivot, this method also updates the value of the 
      *          QuaternionInterpolate property.
      */
    void SetQuaternionInterpolation(EPivotSet pPivotSet, EFbxQuatInterpMode pQuatIterp);

    /** Get the Quaternion interpolation mode of the pivot context.
      * \param pPivotSet Specify which pivot context is queried.
      * \return The current mode set on the pivot context.
      */
    EFbxQuatInterpMode GetQuaternionInterpolation(EPivotSet pPivotSet) const;
    
    void SetRotationStiffness(FbxVector4 pRotationStiffness);
    FbxVector4 GetRotationStiffness();
    void SetMinDampRange(FbxVector4 pMinDampRange);
    FbxVector4 GetMinDampRange();
    void SetMaxDampRange(FbxVector4 pMaxDampRange);
    FbxVector4 GetMaxDampRange();
    void SetMinDampStrength(FbxVector4 pMinDampStrength);
    FbxVector4 GetMinDampStrength();
    void SetMaxDampStrength(FbxVector4 pMaxDampStrength);
    FbxVector4 GetMaxDampStrength();
    void SetPreferedAngle(FbxVector4 pPreferedAngle);
    FbxVector4 GetPreferedAngle();
    
    void SetRotationOffset(EPivotSet pPivotSet, FbxVector4 pVector);
    const FbxVector4& GetRotationOffset(EPivotSet pPivotSet) const;
    void SetRotationPivot(EPivotSet pPivotSet, FbxVector4 pVector);
    const FbxVector4& GetRotationPivot(EPivotSet pPivotSet) const;
    void SetPreRotation(EPivotSet pPivotSet, FbxVector4 pVector);
    const FbxVector4& GetPreRotation(EPivotSet pPivotSet) const;
    void SetPostRotation(EPivotSet pPivotSet, FbxVector4 pVector);
    const FbxVector4& GetPostRotation(EPivotSet pPivotSet) const;    
    void SetScalingOffset(EPivotSet pPivotSet, FbxVector4 pVector);
    const FbxVector4& GetScalingOffset(EPivotSet pPivotSet) const;
    void SetScalingPivot(EPivotSet pPivotSet, FbxVector4 pVector);
    const FbxVector4& GetScalingPivot(EPivotSet pPivotSet) const;
    void SetGeometricTranslation(EPivotSet pPivotSet, FbxVector4 pVector);
    FbxVector4 GetGeometricTranslation(EPivotSet pPivotSet) const;
    void SetGeometricRotation(EPivotSet pPivotSet, FbxVector4 pVector);
    FbxVector4 GetGeometricRotation(EPivotSet pPivotSet);
    void SetGeometricScaling(EPivotSet pPivotSet, FbxVector4 pVector);
    FbxVector4 GetGeometricScaling(EPivotSet pPivotSet);

    void ResetPivotSet( FbxNode::EPivotSet pPivotSet );
    void ConvertPivotAnimationRecursive(FbxAnimStack* pAnimStack, EPivotSet pConversionTarget, double pFrameRate, bool pKeyReduce=true);
    

	FbxAMatrix& EvaluateGlobalTransform(FbxTime pTime=FBXSDK_TIME_INFINITE, FbxNode::EPivotSet pPivotSet=FbxNode::eSourcePivot, bool pApplyTarget=false, bool pForceEval=false);
	FbxAMatrix& EvaluateLocalTransform(FbxTime pTime=FBXSDK_TIME_INFINITE, FbxNode::EPivotSet pPivotSet=FbxNode::eSourcePivot, bool pApplyTarget=false, bool pForceEval=false);
	FbxVector4& EvaluateLocalTranslation(FbxTime pTime=FBXSDK_TIME_INFINITE, FbxNode::EPivotSet pPivotSet=FbxNode::eSourcePivot, bool pApplyTarget=false, bool pForceEval=false);
  	FbxVector4& EvaluateLocalRotation(FbxTime pTime=FBXSDK_TIME_INFINITE, FbxNode::EPivotSet pPivotSet=FbxNode::eSourcePivot, bool pApplyTarget=false, bool pForceEval=false);
	FbxVector4& EvaluateLocalScaling(FbxTime pTime=FBXSDK_TIME_INFINITE, FbxNode::EPivotSet pPivotSet=FbxNode::eSourcePivot, bool pApplyTarget=false, bool pForceEval=false);	
	bool EvaluateGlobalBoundingBoxMinMaxCenter(FbxVector4& pBBoxMin, FbxVector4& pBBoxMax, FbxVector4& pBBoxCenter, const FbxTime& pTime=FBXSDK_TIME_INFINITE);
    
    int GetCharacterLinkCount();
    bool GetCharacterLink(int pIndex, FbxCharacter** pCharacter, int* pCharacterLinkType, int* pNodeId, int *pNodeSubId);
    int FindCharacterLink(FbxCharacter* pCharacter, int pCharacterLinkType, int pNodeId, int pNodeSubId);
    
    virtual bool GetAnimationInterval(FbxTimeSpan& pSpan, FbxAnimStack* pAnimStack = NULL, int pAnimLayerId = 0);
    
    int AddMaterial( FbxSurfaceMaterial* pMaterial );
    bool RemoveMaterial( FbxSurfaceMaterial* pMaterial );
    int GetMaterialCount() const;
    FbxSurfaceMaterial* GetMaterial( int pIndex ) const;
    void RemoveAllMaterials();
    int GetMaterialIndex(const char * pName ) const;
    
    
    FbxPropertyDouble3                  LclTranslation;
    FbxPropertyDouble3                  LclRotation;
    FbxPropertyDouble3                  LclScaling;
    FbxPropertyDouble1                  Visibility;
    FbxPropertyBool1				    VisibilityInheritance;
    FbxPropertyEFbxQuatInterpMode       QuaternionInterpolate;
    FbxPropertyDouble3                  RotationOffset;
    FbxPropertyDouble3                  RotationPivot;
    FbxPropertyDouble3                  ScalingOffset;
    FbxPropertyDouble3                  ScalingPivot;
    FbxPropertyBool1                    TranslationActive;
    FbxPropertyDouble3                  TranslationMin;
    FbxPropertyDouble3                  TranslationMax;
    FbxPropertyBool1                    TranslationMinX;
    FbxPropertyBool1                    TranslationMinY;
    FbxPropertyBool1                    TranslationMinZ;
    FbxPropertyBool1                    TranslationMaxX;
    FbxPropertyBool1                    TranslationMaxY;
    FbxPropertyBool1                    TranslationMaxZ;
    FbxPropertyEFbxRotationOrder        RotationOrder;
    FbxPropertyBool1                    RotationSpaceForLimitOnly;
    FbxPropertyDouble1                  RotationStiffnessX;
    FbxPropertyDouble1                  RotationStiffnessY;
    FbxPropertyDouble1                  RotationStiffnessZ;
    FbxPropertyDouble1                  AxisLen;
    FbxPropertyDouble3                  PreRotation;
    FbxPropertyDouble3                  PostRotation;
    FbxPropertyBool1                    RotationActive;
    FbxPropertyDouble3                  RotationMin;
    FbxPropertyDouble3                  RotationMax;
    FbxPropertyBool1                    RotationMinX;
    FbxPropertyBool1                    RotationMinY;
    FbxPropertyBool1                    RotationMinZ;
    FbxPropertyBool1                    RotationMaxX;
    FbxPropertyBool1                    RotationMaxY;
    FbxPropertyBool1                    RotationMaxZ;
    FbxPropertyFbxTransformEInheritType InheritType;
    FbxPropertyBool1                    ScalingActive;
    FbxPropertyDouble3                  ScalingMin;
    FbxPropertyDouble3                  ScalingMax;
    FbxPropertyBool1                    ScalingMinX;
    FbxPropertyBool1                    ScalingMinY;
    FbxPropertyBool1                    ScalingMinZ;
    FbxPropertyBool1                    ScalingMaxX;
    FbxPropertyBool1                    ScalingMaxY;
    FbxPropertyBool1                    ScalingMaxZ;
    FbxPropertyDouble3                  GeometricTranslation;
    FbxPropertyDouble3                  GeometricRotation;
    FbxPropertyDouble3                  GeometricScaling;
    FbxPropertyDouble1                  MinDampRangeX;
    FbxPropertyDouble1                  MinDampRangeY;
    FbxPropertyDouble1                  MinDampRangeZ;
    FbxPropertyDouble1                  MaxDampRangeX;
    FbxPropertyDouble1                  MaxDampRangeY;
    FbxPropertyDouble1                  MaxDampRangeZ;
    FbxPropertyDouble1                  MinDampStrengthX;
    FbxPropertyDouble1                  MinDampStrengthY;
    FbxPropertyDouble1                  MinDampStrengthZ;
    FbxPropertyDouble1                  MaxDampStrengthX;
    FbxPropertyDouble1                  MaxDampStrengthY;
    FbxPropertyDouble1                  MaxDampStrengthZ;
    FbxPropertyDouble1                  PreferedAngleX;
    FbxPropertyDouble1                  PreferedAngleY;
    FbxPropertyDouble1                  PreferedAngleZ;
    FbxPropertyFbxReference             LookAtProperty;
    FbxPropertyFbxReference             UpVectorProperty;
    FbxPropertyBool1                    Show;
    FbxPropertyBool1                    NegativePercentShapeSupport;
    FbxPropertyInteger1                 DefaultAttributeIndex;
    FbxPropertyBool1                    Freeze;
    FbxPropertyBool1                    LODBox;

protected:
    virtual ~FbxNode();
};

typedef FbxNode* HFbxNode;
