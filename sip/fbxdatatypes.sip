class FbxDataType
{
public:
    static FbxDataType Create(const char *pName, EFbxType pType);
    static FbxDataType Create(const char *pName, const FbxDataType &pDataType);


    FbxDataType();
    FbxDataType(const FbxDataType &pDataType);
    void Destroy();
    ~FbxDataType();
    
    bool operator==(const FbxDataType& pDataType) const;
    bool operator!=(const FbxDataType& pDataType) const;
    
    bool     Valid();
    bool     Is(const FbxDataType& pDataType);
    EFbxType GetType() const;
    const char* GetName() const;
};

const FbxDataType & FbxGetDataTypeFromEnum(const EFbxType pType);
const char* FbxGetDataTypeNameForIO(const FbxDataType& pDataType);

//! \name Basic Data Types
//@{
	FbxDataType FbxUndefinedDT;
	FbxDataType FbxBoolDT;
	FbxDataType FbxCharDT;
	FbxDataType FbxUCharDT;
	FbxDataType FbxShortDT;
	FbxDataType FbxUShortDT;
	FbxDataType FbxIntDT;
	FbxDataType FbxUIntDT;
	FbxDataType FbxLongLongDT;
	FbxDataType FbxULongLongDT;
	FbxDataType FbxFloatDT;
	FbxDataType FbxHalfFloatDT;
	FbxDataType FbxDoubleDT;
	FbxDataType FbxDouble2DT;
	FbxDataType FbxDouble3DT;
	FbxDataType FbxDouble4DT;
	FbxDataType FbxDouble4x4DT;
	FbxDataType FbxEnumDT;
	FbxDataType FbxStringDT;
	FbxDataType FbxTimeDT;
	FbxDataType FbxReferenceDT;
	FbxDataType FbxBlobDT;
	FbxDataType FbxDistanceDT;
	FbxDataType FbxDateTimeDT;
//@}

//! \name Extended Data Types
//@{
	FbxDataType FbxColor3DT;
	FbxDataType FbxColor4DT;
	FbxDataType FbxCompoundDT;
	FbxDataType FbxReferenceObjectDT;
	FbxDataType FbxReferencePropertyDT;
	FbxDataType FbxVisibilityDT;
	FbxDataType FbxVisibilityInheritanceDT;
	FbxDataType FbxUrlDT;
	FbxDataType FbxXRefUrlDT;
//@}

//! \name Transform Data Types
//@{
	FbxDataType FbxTranslationDT;
	FbxDataType FbxRotationDT;
	FbxDataType FbxScalingDT;
	FbxDataType FbxQuaternionDT;
	FbxDataType FbxLocalTranslationDT;
	FbxDataType FbxLocalRotationDT;
	FbxDataType FbxLocalScalingDT;
	FbxDataType FbxLocalQuaternionDT;
	FbxDataType FbxTransformMatrixDT;
	FbxDataType FbxTranslationMatrixDT;
	FbxDataType FbxRotationMatrixDT;
	FbxDataType FbxScalingMatrixDT;
//@}

//! \name Material Data Types
//@{
	FbxDataType FbxMaterialEmissiveDT;
	FbxDataType FbxMaterialEmissiveFactorDT;
	FbxDataType FbxMaterialAmbientDT;
	FbxDataType FbxMaterialAmbientFactorDT;
	FbxDataType FbxMaterialDiffuseDT;
	FbxDataType FbxMaterialDiffuseFactorDT;
	FbxDataType FbxMaterialBumpDT;
	FbxDataType FbxMaterialNormalMapDT;
	FbxDataType FbxMaterialTransparentColorDT;
	FbxDataType FbxMaterialTransparencyFactorDT;
	FbxDataType FbxMaterialSpecularDT;
	FbxDataType FbxMaterialSpecularFactorDT;
	FbxDataType FbxMaterialShininessDT;
	FbxDataType FbxMaterialReflectionDT;
	FbxDataType FbxMaterialReflectionFactorDT;
	FbxDataType FbxMaterialDisplacementDT;
	FbxDataType FbxMaterialVectorDisplacementDT;
	FbxDataType FbxMaterialCommonFactorDT;
	FbxDataType FbxMaterialCommonTextureDT;
//@}

//! \name Layer Element Data Types
//@{
	FbxDataType FbxLayerElementUndefinedDT;
	FbxDataType FbxLayerElementNormalDT;
	FbxDataType FbxLayerElementBinormalDT;
	FbxDataType FbxLayerElementTangentDT;
	FbxDataType FbxLayerElementMaterialDT;
	FbxDataType FbxLayerElementTextureDT;
	FbxDataType FbxLayerElementPolygonGroupDT;
	FbxDataType FbxLayerElementUVDT;
	FbxDataType FbxLayerElementVertexColorDT;
	FbxDataType FbxLayerElementSmoothingDT;
	FbxDataType FbxLayerElementCreaseDT;
	FbxDataType FbxLayerElementHoleDT;
	FbxDataType FbxLayerElementUserDataDT;
	FbxDataType FbxLayerElementVisibilityDT;
//@}

//! \name I/O Specialized Data Types
//@{
	FbxDataType FbxAliasDT;
	FbxDataType FbxPresetsDT;
	FbxDataType FbxStatisticsDT;
	FbxDataType FbxTextLineDT;
	FbxDataType FbxUnitsDT;
	FbxDataType FbxWarningDT;
	FbxDataType FbxWebDT;
//@}

//! \name External Support Data Types
//@{
	FbxDataType FbxActionDT;
	FbxDataType FbxCameraIndexDT;
	FbxDataType FbxCharPtrDT;
	FbxDataType FbxConeAngleDT;
	FbxDataType FbxEventDT;
	FbxDataType FbxFieldOfViewDT;
	FbxDataType FbxFieldOfViewXDT;
	FbxDataType FbxFieldOfViewYDT;
	FbxDataType FbxFogDT;
	FbxDataType FbxHSBDT;
	FbxDataType FbxIKReachTranslationDT;
	FbxDataType FbxIKReachRotationDT;
	FbxDataType FbxIntensityDT;
	FbxDataType FbxLookAtDT;
	FbxDataType FbxOcclusionDT;
	FbxDataType FbxOpticalCenterXDT;
	FbxDataType FbxOpticalCenterYDT;
	FbxDataType FbxOrientationDT;
	FbxDataType FbxRealDT;
	FbxDataType FbxRollDT;
	FbxDataType FbxScalingUVDT;
	FbxDataType FbxShapeDT;
	FbxDataType FbxStringListDT;
	FbxDataType FbxTextureRotationDT;
	FbxDataType FbxTimeCodeDT;
	FbxDataType FbxTimeWarpDT;
	FbxDataType FbxTranslationUVDT;
	FbxDataType FbxWeightDT;
//@}
