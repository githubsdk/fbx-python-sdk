class FbxAnimLayer : FbxCollection /NoDefaultCtors/
{
public:
    static FbxClassId ClassId;
    static FbxAnimLayer* Create(FbxManager *pManager, const char *pName);
    virtual FbxClassId GetClassId() const;

    bool operator==(const FbxAnimLayer & pObj);
    static FbxAnimLayer* Create(FbxObject *pContainer,  const char *pName);
		
	FbxPropertyDouble1       Weight;
	FbxPropertyBool1         Mute;
	FbxPropertyBool1         Solo;
	FbxPropertyBool1         Lock;
	FbxPropertyDouble3       Color;
	FbxPropertyEnum			BlendMode;
	FbxPropertyEnum			RotationAccumulationMode;
	FbxPropertyEnum			ScaleAccumulationMode;

    //! Reset this object properties to their default value.
    void Reset();
    
    /** Set the bypass flag for the given data type.
      * \param pType The fbxType identifier.
      * \param pState The new state of the bypass flag.
      * \remarks If pType is eMAX_TYPES, then pState is applied to all the data types.
      */
    void SetBlendModeBypass(EFbxType pType, bool pState);

    /** Get the current state of the bypass flag for the given data type.
      * \param pType The fbxType identifier.
      * \return The current state of the flag for a valid pType value and \c false in any other case.
      */
    bool GetBlendModeBypass(EFbxType pType);
    
    /** \enum BlendMode Blend mode type between animation layers.
      */
	enum EBlendMode
	{
		eBlendAdditive,	//! The layer "adds" its animation to layers that precede it in the stack and affect the same attributes.
		eBlendOverride,	//! The layer "overrides" the animation of any layer that shares the same attributes and precedes it in the stack.
		eBlendOverridePassthrough	/*!<This mode is like the eOverride but the Weight value 
									influence how much animation from the preceding layers is 
									allowed to pass-through. When using this mode with a Weight of 
									100.0, this layer is completely opaque and it masks any animation
									from the preceding layers for the same attribute. If the Weight
									is 50.0, half of this layer animation is mixed with half of the
									animation of the preceding layers for the same attribute. */
	};
    
    /** \enum RotationAccumulationMode Rotation accumulation mode of animation layer.
      */
	enum ERotationAccumulationMode
	{
		eRotationByLayer,	//! Rotation values are weighted per layer and the result rotation curves are calculated using concatenated quaternion values.
		eRotationByChannel	//! Rotation values are weighted per component and the result rotation curves are calculated by adding each independent Euler XYZ value.
	};

    /** \enum ScaleAccumulationMode Scale accumulation mode of animation layer.
      */
	enum EScaleAccumulationMode
	{
		eScaleMultiply,	//! Independent XYZ scale values per layer are calculated using the layer weight value as an exponent, and result scale curves are calculated by multiplying each independent XYZ scale value.
		eScaleAdditive	//! Result scale curves are calculated by adding each independent XYZ value.
	};
    
    /** Create a FbxAnimCurveNode based on the property data type.
      * \param pProperty The property that the created FbxAnimCurveNode will be connected to.
      * \return Pointer to the created FbxAnimCurveNode, or NULL if an error occurred.
      * \remarks This function will fail if the property eANIMATABLE flag it is not set.
      * \remarks This function sets the ePUBLISHED flag of the property.
      * \remarks The newly created FbxAnimCurveNode is automatically connected to both
      *         this object and the property.
      */
    FbxAnimCurveNode* CreateCurveNode(FbxProperty& pProperty);

protected:
    virtual ~FbxAnimLayer();
};
