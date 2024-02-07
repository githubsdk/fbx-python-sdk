class FbxAnimCurveDef
{
public:
    static const float sDEFAULT_WEIGHT;
    static const float sMIN_WEIGHT;
    static const float sMAX_WEIGHT;
    static const float sDEFAULT_VELOCITY;

	//! Key tangent mode for cubic interpolation.
	enum ETangentMode
	{
		eTangentAuto = 0x00000100,													//! Auto key (spline cardinal).
		eTangentTCB = 0x00000200,													//! Spline TCB (Tension, Continuity, Bias)
		eTangentUser = 0x00000400,													//! Next slope at the left equal to slope at the right.
		eTangentGenericBreak = 0x00000800,											//! Independent left and right slopes.
		eTangentBreak =  0x00000C00     //eTangentGenericBreak|eTangentUser,							//! Independent left and right slopes, with next slope at the left equal to slope at the right.
		eTangentAutoBreak = 0x00000900 //eTangentGenericBreak|eTangentAuto,						//! Independent left and right slopes, with auto key.
		eTangentGenericClamp = 0x00001000,											//! Clamp: key should be flat if next or previous key has the same value (overrides tangent mode).
		eTangentGenericTimeIndependent = 0x00002000,								//! Time independent tangent (overrides tangent mode).
		eTangentGenericClampProgressive = 0x00006000  //0x00004000|eTangentGenericTimeIndependent	//! Clamp progressive: key should be flat if tangent control point is outside [next-previous key] range (overrides tangent mode).
	};

	//! Key interpolation type.
	enum EInterpolationType
	{
		eInterpolationConstant = 0x00000002,	//! Constant value until next key.
		eInterpolationLinear = 0x00000004,		//! Linear progression to next key.
		eInterpolationCubic = 0x00000008		//! Cubic progression to next key.
	};

	//! Weighted mode.
	enum EWeightedMode
	{
		eWeightedNone = 0x00000000,						//! Tangent has default weights of 0.333; we define this state as not weighted.
		eWeightedRight = 0x01000000,					//! Right tangent is weighted.
		eWeightedNextLeft = 0x02000000,					//! Left tangent is weighted.
		eWeightedAll = 0x03000000 //eWeightedRight|eWeightedNextLeft	//! Both left and right tangents are weighted.
	};

	//! Key constant mode.
	enum EConstantMode
	{
		eConstantStandard = 0x00000000,	//! Curve value is constant between this key and the next
		eConstantNext = 0x00000100		//! Curve value is constant, with next key's value
	};

	//! Velocity mode. Velocity settings speed up or slow down animation on either side of a key without changing the trajectory of the animation. Unlike Auto and Weight settings, Velocity changes the animation in time, but not in space.
	enum EVelocityMode
	{
		eVelocityNone = 0x00000000,						//! No velocity (default).
		eVelocityRight = 0x10000000,					//! Right tangent has velocity.
		eVelocityNextLeft = 0x20000000,					//! Left tangent has velocity.
		eVelocityAll = 0x30000000 //eVelocityRight|eVelocityNextLeft	//! Both left and right tangents have velocity.
	};

	//! Tangent visibility.
	enum ETangentVisibility
	{
		eTangentShowNone = 0x00000000,							//! No tangent is visible.
		eTangentShowLeft = 0x00100000,							//! Left tangent is visible.
		eTangentShowRight = 0x00200000,							//! Right tangent is visible.
		eTangentShowBoth = 0x00300000 //eTangentShowLeft|eTangentShowRight	//! Both left and right tangents are visible.
	};

	//! FbxAnimCurveKey data indices for cubic interpolation tangent information.
	enum EDataIndex
	{
		eRightSlope = 0,		//! Index of the right derivative, User and Break tangent mode (data are float).
		eNextLeftSlope = 1,		//! Index of the left derivative for the next key, User and Break tangent mode.
		eWeights = 2,			//! Start index of weight values, User and Break tangent break mode (data are FbxInt16 tokens from weight and converted to float).
		eRightWeight = 2,		//! Index of weight on right tangent, User and Break tangent break mode.
		eNextLeftWeight = 3,	//! Index of weight on next key's left tangent, User and Break tangent break mode.
		eVelocity = 4,			//! Start index of velocity values, Velocity mode
		eRightVelocity = 4,		//! Index of velocity on right tangent, Velocity mode
		eNextLeftVelocity = 5,	//! Index of velocity on next key's left tangent, Velocity mode
		eTCBTension = 0,		//! Index of Tension, TCB tangent mode (data are floats).
		eTCBContinuity = 1,		//! Index of Continuity, TCB tangent mode.
		eTCBBias = 2			//! Index of Bias, TCB tangent mode.
	};
};

struct FbxAnimCurveTangentInfo
{
	FbxAnimCurveTangentInfo();

	float	mDerivative;
	float	mWeight;
	float	mVelocity;
	float	mAuto;
	bool	mWeighted;
	bool	mHasVelocity;
};

/** This is the base class interface for the FBX animation curve keys.
A key is defined by a time and a value. It also has tangents that control how the animation curve enters and exits the key.

  * \nosubgrouping
  * This class, for the time being, is implemented by the legacy KFCurveKey
  * structure. However, this class is now the
  * main animation key object of the SDK, and its implementation
  * is subject to change.
  *
  * Default constructor does not initialize data 
  * members. If an instance has to be initialized, use function FbxAnimCurveKey::Set().
  */
class FbxAnimCurveKey : FbxAnimCurveKeyBase
{
public:
	/** Constructor with no argument
	  */
	FbxAnimCurveKey();

	/** Constructor with time.
      * \param pTime The time of key.
      */
    FbxAnimCurveKey(FbxTime pTime);

    /** Constructor with time and value.
      * \param pTime The time of key.
      * \param pVal The value of key.
      */
    FbxAnimCurveKey(FbxTime pTime, float pVal);

	/** Copy constructor
	  */
	FbxAnimCurveKey(const FbxAnimCurveKey & pFKey);

	/** Destructor
	  */
	~FbxAnimCurveKey();

    /** Get time value.
    * \return Time value.
    */
    FbxTime GetTime() const;

    /** Set time value.
    * \param pTime Time value to set.
    */
    void SetTime(const FbxTime& pTime);
    
    /** Set time and value of key.
      * \param pTime New time of this key.
      * \param pValue New value of this key.
      */
	void Set(FbxTime pTime, float pValue);

    /**	Set a key with cubic interpolation, TCB tangent mode. 	
	* The key is modified according to the other parameters. 
	* The TCB mode controls the tension, continuity,
	* and bias of the curve.
    *	\param pTime	Key time.
    *	\param pValue	Key value.
    *	\param pData0	Tension. Controls the amount of curvature in the animation curve. The higher the tension is, the more linear
	* the curve looks. When the tension is low, the curve looks rounder or wider. 
    *	\param pData1	Continuity. Controls the smoothness or singularity of the curve on the key. 
    *	\param pData2	Bias. Controls if the effect of tension and continuity affect the curve before or after the key.
    */
	void SetTCB(FbxTime pTime, float pValue, float pData0 = 0.0f, float pData1 = 0.0f, float pData2 = 0.0f);
	
    /** Get key value.
	* \return Key value.
    */
    float GetValue() const;

    /** Set key value.
    * \param pValue The value to set.
    */ 
	void SetValue(float pValue);
	
	/** Get key's interpolation type.
    *   \return                  Interpolation type of the queried key.
    */
    FbxAnimCurveDef::EInterpolationType GetInterpolation();

    /** Set key's interpolation type.
    *	\param pInterpolation Key interpolation type.
    */
	void SetInterpolation (FbxAnimCurveDef::EInterpolationType pInterpolation);

	/** Get key's tangent mode.
    *   \param pIncludeOverrides Include override flags: Break, Clamp, Time-Independant.
    *	This method is meaningful for cubic interpolation only.
    *			 Using this method for non cubic interpolated key will return unpredictable value.
    *	\return Key tangent mode.
    */
    FbxAnimCurveDef::ETangentMode GetTangentMode(bool pIncludeOverrides = false);

	/** Set tangent mode.
	  * \param pTangentMode Tangent mode to set.
	  */
	void SetTangentMode (FbxAnimCurveDef::ETangentMode pTangentMode);

	/** Get key's tangent weight mode.
	*	This method is meaningful for cubic interpolation only.
	*/
	FbxAnimCurveDef::EWeightedMode GetTangentWeightMode() const;

	/** Set key's tangent weight mode as double value (cubic interpolation, non TCB tangent mode).
    *	This method is meaningful for cubic interpolation only.
    *	\param pTangentWeightMode	Weight mode.
	*	\param pMask				Used to select the affected tangents.
	*/
	void SetTangentWeightMode(FbxAnimCurveDef::EWeightedMode pTangentWeightMode, FbxAnimCurveDef::EWeightedMode pMask = FbxAnimCurveDef::eWeightedAll );

	/** Get key's tangent velocity mode.
    *	This method is meaningful for cubic interpolation only.
	*/
	FbxAnimCurveDef::EVelocityMode GetTangentVelocityMode() const;
	
	/** Set key's tangent velocity mode as double value (cubic interpolation, non TCB tangent mode).
    *	This method is meaningful for cubic interpolation only.
    *	\param pTangentVelocityMode	Velocity mode. 
	*	\param pMask				Used to select the affected tangents
	*/
	void SetTangentVelocityMode(FbxAnimCurveDef::EVelocityMode pTangentVelocityMode, FbxAnimCurveDef::EVelocityMode pMask = FbxAnimCurveDef::eVelocityAll );

	/** Get key's constant mode.
    *	\note This method is only relevant if the key's interpolation type is constant (eINTERPOLATION_CONSTANT).
    *	Using this method on a key with an other interpolation type will return unpredictable value.
	*	\return Key constant mode.
	*/
	FbxAnimCurveDef::EConstantMode GetConstantMode() const;

	/** Set constant mode.
	  * \param pMode Constant mode to set.
	  */
	void SetConstantMode(FbxAnimCurveDef::EConstantMode pMode);

	/** Get key data.
	  * \param pIndex Data index, dependent on the key tangent mode.
	  * \return Data value.
	  */
	float GetDataFloat(FbxAnimCurveDef::EDataIndex pIndex) const;

	/** Set key data.
	  * \param pIndex Data index, dependent on the key tangent mode.
	  * \param pValue Data value to set.
	  */
	void SetDataFloat(FbxAnimCurveDef::EDataIndex pIndex, float pValue);

	/** Set tangent visibility mode. This would indicate what part of the tangent is visible in a graphical interface.
    *	This method is relevant for cubic interpolation only.
    *	\param pVisibility	Tangent visibility mode.
	*/
	void	SetTangentVisibility (FbxAnimCurveDef::ETangentVisibility pVisibility);

	/** Return tangent visibility mode.
    *	This method is relevant for cubic interpolation only.
    *	\return Tangent visibility mode.
	*/
	FbxAnimCurveDef::ETangentVisibility GetTangentVisibility () const;
	
	/** Set or unset the tangent break. When this flag is set (FbxAnimCurveDef::eTANGENT_BREAK), the key's left and right slopes are independent.
	* When this flag is off, the key's left and right slope are equal.
    * This method is relevant for User (FbxAnimCurveDef::eTANGENT_USER) and Auto (FbxAnimCurveDef::eTANGENT_AUTO) tangent modes only.
    * \param pVal Break flag (\c true or \c false).
	*/
	void SetBreak(bool pVal);
	
	/** Get if tangent is break
	* Only valid for User and Auto keys
	*/
	bool GetBreak() const;
};

/** An animation curve, defined by a collection of keys (FbxAnimCurveKey), and indicating how a value changes over time.
* Since an animation curve is a function, on a given animation curve, only one key per time is
* allowed. The keys are sorted
* in time order. They can be accessed by their index on the curve, from 0 to FbxAnimCurve::KeyGetCount-1.
* The time unit in FBX (FbxTime) is 1/46186158000 of one second. 
*
* Each key defines tangents and interpolation that modify the animation curve.
* Tangents control the way the animation curve enters and exits the keys.
* Interpolation indicates the animation curve's behaviour between keys.
*
* Interpolation modes are
* \li Constant - Curve value stays the same until next key
* \li Linear - Animation curve is a straight line
* \li Cubic - Animation curve is a Bezier spline
*
* Tangent modes are
* \li Auto (Spline cardinal)
* \li Spline TCB (Tension, Continuity, Bias)
* \li User (Next slope at the left equal to slope at the right)
*
* Tangent modes can be overriden by more tangent options:
* \li Break (Independent left and right slopes)
* \li Clamp (Key should be flat if next or previous key has the same value)
* \li Time independant
*
* Tangent can be modified some more by adding weights and velocity.
* By default, the weights are 0.333 on either side of the key, and there is 
* no velocity. Velocity settings speed up or slow down animation on either side of 
* a key without changing the trajectory of the animation. Unlike Auto and Weight settings, 
* Velocity changes the animation in time, but not in space.
* 
* @note When adding keys to an animation curve, use FbxAnimCurve::KeyModifyBegin and FbxAnimCurve::KeyModifyEnd.
*
* \nosubgrouping
* This class, for the time being, encapsulates the legacy KFCurve
* structure. However, FbxAnimCurve is now the
* main animation animation curve object of the SDK, and its implementation
* is subject to change.
*/
class FbxAnimCurve : FbxAnimCurveBase /NoDefaultCtors/
{
public:
    static FbxClassId ClassId;
    static FbxAnimCurve* Create(FbxManager *pManager, const char *pName);
    virtual FbxClassId GetClassId() const;
    bool operator==(const FbxAnimCurve & pObj);

	/**
	  * \name Animation curve creation.
	  *
	  */
	//@{
    /** Create a FbxAnimCurve.
	  * \param pContainer Scene to which the created animation curve belongs.
	  * \param pName Name of the animation curve.
	  * \return Newly created animation curve
	  */
    static FbxAnimCurve* Create(FbxScene* pContainer, const char *pName);
	//@}

    /**
      * \name Key management.
      *
      */
    //@{
    /** Resize animation curve buffer to hold a certain number of keys.
    * \param pKeyCount Number of keys the animation curve will eventually hold.
      */
    virtual void ResizeKeyBuffer(int pKeyCount) = 0;

    /** Call this function prior to adding, removing or editing keys of an animation curve.
      * Call function FbxAnimCurve::KeyModifyEnd() after modification.
      */
    virtual void KeyModifyBegin () = 0;
        
    /** Call this function after adding, removing or editing keys of an animation curve.
      * Function FbxAnimCurve::KeyModifyBegin() must have been called prior to modifying the keys.
      */
    virtual void KeyModifyEnd () = 0;

    //! Remove all the keys of the animation curve and free buffer memory.
    virtual void KeyClear () = 0;

    /** Get the number of keys.
      * \return Key count.
      */
    virtual int KeyGetCount () const = 0;

    /** Add a given key at given time. The new key is appended after all the other animation curve's keys.
    *	Function FbxAnimCurve::KeyInsert() should be used instead if the key 
    * is to be added in the curve and not at the end. This function does not
    * respect the interpolation type and tangents of the neighboring keys. 
    * If there is already a key at the given time, the key is modified and no 
    * new key is added.
    * \param pTime Time of the new key.
    * \param pKey Key to add.
    * \param pLast Key index to speed up search. If this 
    * function is called in a loop, initialize this value to 0 and let it 
    * be updated by each call.
    * \return Index of the key at given time, no matter if it was added 
    * or already present.
    * Key value, interpolation type and tangent mode must be set 
    * explicitly afterwards.
    */
    virtual int KeyAdd (FbxTime pTime, FbxAnimCurveKeyBase& pKey, int* pLast = NULL) = 0; 

    /** Add a key at given time. The new key is appended after all the other animation curve's keys.
    *	Function FbxAnimCurve::KeyInsert() should be used instead if the key 
    * is to be added in the curve and not at the end. This function does not
    * respect of the interpolation type and tangents of the neighboring keys. 
    * If there is already a key a the given time, no key is added.
    *	\param pTime Time of the new key.
    * \param pLast Key index to speed up search. If this 
    * function is called in a loop, initialize this value to 0 and let it 
    * be updated by each call.
    *	\return Index of the key at given time, no matter if it was added 
    * or already present.
    * Key value, interpolation type and tangent mode must be set 
    * explicitly afterwards.
    */
    virtual int KeyAdd (FbxTime pTime, int* pLast = NULL) = 0;

    /** Set (or replace) key at given index with given key. 
    * Result is undetermined if animation curve has no key or if index 
    * is out of bounds.
    * \param pIndex Index of the key to be set or replaced.
    * \param pKey New key at this index.
    * \return \c true if key time is superior to previous key time
    * and inferior to next key time, \c false otherwise.
    */
    virtual bool KeySet(int pIndex,  FbxAnimCurveKeyBase& pKey) = 0;
        
    /** Remove key at given index. Other key indices are updated automatically.
    *	\param pIndex Index of key to remove.
    *	\return \c true on success, \c false otherwise.
    */
    virtual bool KeyRemove(int pIndex) = 0;

    /** Remove all the keys in the given range.
      * \param pStartIndex Index of the first key to remove (inclusive).
      * \param pEndIndex Index of the last key to remove (inclusive).
      * \return true on success.
      */
    virtual bool KeyRemove(int pStartIndex, int pEndIndex) = 0;

    /** Insert a key at given time.
    *	This function should be used instead of FbxAnimCurve::KeyAdd() if the key 
    * is to be added in the curve and not at the end. It inserts the key in 
    * respect to the interpolation type and tangents of the neighboring keys. 
    * If there is already a key a the given time, the key is modified and no 
    * new key is added.
    * \param pTime Time of the new key.
    * \param pLast Key index to speed up search. If this 
    * function is called in a loop, initialize this value to 0 and let it 
    * be updated by each call.
    * \return Index of the key at given time, no matter if it was inserted 
    * or already present.
    * Key value must be set explicitly afterwards. The 
    * interpolation type and tangent mode are copied from the previous key.
    */
    virtual int KeyInsert ( FbxTime pTime, int* pLast = NULL ) = 0;
        
    /** Find key index for a given time.
    * \param pTime Time of the key looked for.
    * \param pLast Key index to speed up search. If this 
    * function is called in a loop, initialize this value to 0 and let it 
    * be updated by each call.
    * \return Key index. The integer part of the key index gives the 
    * index of the closest key with a smaller time. The decimals give
    * the relative position of given time compared to previous and next
    * key times. Returns -1 if animation curve has no key.
	*
	* For example (using seconds for clarity), if there is a key at time 10s with index 5, and a key at
	* time 11s with index 6, KeyFind(10.3s) would return 5.3.
    */
	virtual double KeyFind (FbxTime pTime, int* pLast = NULL) = 0;

    /** Scale value of all keys.
    *	\param pMultValue Scale applied on key values.
    *	\return \c true on success, \c false otherwise.
    */
	virtual bool KeyScaleValue (float pMultValue) = 0;

    /** Scale value and tangent of all keys.
    *	\param pMultValue Scale applied on key values and tangents.
    *	\return \c true on success, \c false otherwise.
    */
	virtual bool KeyScaleValueAndTangent (float pMultValue) = 0;
    //@}

    /**
    * \name Key Manipulation
    */

    //@{
    /** General function to set key properties.
	* The key at index pKeyIndex is retrieved and modified according to the other parameters. 
	* The key must have been previously created, for example using KeyAdd.
    *	Use FbxAnimCurve::SetTCB() in the specific case of setting a key with cubic interpolation and TCB tangent mode.
    *   \param pKeyIndex        Index of the key.
    *	\param pTime			Key time.
    *	\param pValue			Key value.
    *	\param pInterpolation	Key interpolation type.
    *	\param pTangentMode		Key tangent mode (meaningful for cubic interpolation only).
    *	\param pData0			Value of right slope.
    *	\param pData1			Value of next left slope.
    *	\param pTangentWeightMode	Weight mode, if used.
    *	\param pWeight0				Weight for right slope, if tangent weight mode is eWeightedRight or eWeightedAll.
    *	\param pWeight1				Weight for next left slope, if tangent weight mode is eWeightedNextLeft or eWeightedAll.
    *	\param pVelocity0			Velocity for right slope, if tangent velocity mode is eVelocityRight or eVelocityAll.
    *	\param pVelocity1			Velocity for next left slope, if tangent velocity mode is eVelocityNextLeft or eVelocityAll.
    */
	virtual void KeySet(int pKeyIndex,FbxTime pTime, float pValue, FbxAnimCurveDef::EInterpolationType pInterpolation = FbxAnimCurveDef::eInterpolationCubic, FbxAnimCurveDef::ETangentMode pTangentMode = FbxAnimCurveDef::eTangentAuto, float pData0 = 0.0,float pData1 = 0.0,FbxAnimCurveDef::EWeightedMode pTangentWeightMode = FbxAnimCurveDef::eWeightedNone, float pWeight0 = FbxAnimCurveDef::sDEFAULT_WEIGHT,float pWeight1 = FbxAnimCurveDef::sDEFAULT_WEIGHT,float pVelocity0 = FbxAnimCurveDef::sDEFAULT_VELOCITY,float pVelocity1 = FbxAnimCurveDef::sDEFAULT_VELOCITY) = 0;

    /**	Set a key with cubic interpolation, TCB tangent mode. 	
	* The key at index pKeyIndex is retrieved and modified according to the other parameters. 
	* The TCB mode controls the tension, continuity,
	* and bias of the curve.
    *   \param pKeyIndex  Index of the key.
    *	\param pTime	Key time.
    *	\param pValue	Key value.
    *	\param pData0	Tension. Controls the amount of curvature in the animation curve. The higher the tension is, the more linear
	* the curve looks. When the tension is low, the curve looks rounder or wider. 
    *	\param pData1	Continuity. Controls the smoothness or singularity of the curve on the key. 
    *	\param pData2	Bias. Controls if the effect of tension and continuity affect the curve before or after the key.
    */
    virtual void KeySetTCB(int pKeyIndex,FbxTime pTime, float pValue, float pData0 = 0.0f, float pData1 = 0.0f, float pData2 = 0.0f) = 0;

    /** Get key's interpolation type.
    *   \param pKeyIndex         Index of the queried key.
    *   \return                  Interpolation type of the queried key.
    */
    virtual FbxAnimCurveDef::EInterpolationType KeyGetInterpolation(int pKeyIndex) const = 0;

    /** Set key's interpolation type.
    *   \param pKeyIndex      Index of the key.
    *	\param pInterpolation Key interpolation type.
    */
    virtual void KeySetInterpolation(int pKeyIndex, FbxAnimCurveDef::EInterpolationType pInterpolation) = 0;

    /** Get key's constant mode.
    *	\note This method is only relevant if the key's interpolation type is constant (eInterpolationConstant).
    *	Using this method on a key with an other interpolation type will return unpredictable value.
    *   \param pKeyIndex      Index of the queried key.
    *	\return Key constant mode.
    */
    virtual FbxAnimCurveDef::EConstantMode KeyGetConstantMode(int pKeyIndex) const = 0;

    /** Get key's tangent mode.
    *   \param pKeyIndex  Index of the key.
    *   \param pIncludeOverrides Include override flags: Break, Clamp, Time-Independant.
    *	This method is meaningful for cubic interpolation only.
    *			 Using this method for non cubic interpolated key will return unpredictable value.
    *	\return Key tangent mode.
    */
    virtual FbxAnimCurveDef::ETangentMode KeyGetTangentMode(int pKeyIndex, bool pIncludeOverrides = false ) const = 0;

    /** Set key's constant mode.
    *	This method is meaningful for constant interpolation only.
    *   \param pKeyIndex            Index of the key.
    *	\param pMode Key constant mode.
    */
    virtual void KeySetConstantMode(int pKeyIndex, FbxAnimCurveDef::EConstantMode pMode) = 0;

    /** Set key's tangent mode.
    *	This method is meaningful for cubic interpolation only.
    *   \param pKeyIndex   Index of the key.
    *	\param pTangent Key tangent mode.
    */
    virtual void KeySetTangentMode(int pKeyIndex, FbxAnimCurveDef::ETangentMode pTangent) = 0;

    /** Get key at given index.
    * \param pIndex Index of the key on the animation curve.
    * \return Pointer to the key at the given index.
    * Result is undetermined if animation curve has no key or if index 
    * is out of bounds.
    */
	virtual FbxAnimCurveKey KeyGet(int pIndex) const = 0;

    /**	Get key value.
    * \param pKeyIndex Index of the queried key.
	* \return Key value.
    */
    virtual float KeyGetValue(int pKeyIndex) const = 0;

    /** Set key value.
    * \param pKeyIndex Index of the key.
    * \param pValue The value to set.
    */ 
    virtual void KeySetValue(int pKeyIndex, float pValue) = 0;

    /** Increment key value.
    *   \param pKeyIndex   Index of the key.
    *	\param pValue Term added to the key value.
    */
    virtual void KeyIncValue(int pKeyIndex, float pValue) = 0;

    /** Multiply key value.
    * \param pKeyIndex   Index of the key.
    * \param pValue Factor multiplying the key value.
	* \see FbxAnimCurve::KeyMultTangent.
    */
    virtual void KeyMultValue(int pKeyIndex, float pValue) = 0;

    /** Multiply key tangents.
    *	\remark When multiplying a key value, tangents must be
    *         multiplied to conserve the same topology.
    *   \param pKeyIndex   Index of the key.
    *	\param pValue Factor multiplying the key tangents.
    */
    virtual void KeyMultTangent(int pKeyIndex, float pValue) = 0;

    /** Get key time
    *   \param pKeyIndex   Index of the queried key.
    *	\return Key time (time at which this key is occurring).
    */
    virtual FbxTime KeyGetTime(int pKeyIndex) const = 0;

    /** Set key time.
    * \param pKeyIndex   Index of the key.
    * \param pTime Key time (time at which this key is occurring).
	* \remark The new key time might modify the key index.
    */
    virtual void KeySetTime(int pKeyIndex, FbxTime pTime) = 0;

    /** Set or unset the tangent break. When this flag is set (FbxAnimCurveDef::eTANGENT_BREAK), the key's left and right slopes are independent.
	* When this flag is off, the key's left and right slope are equal.
    * This method is relevant for User (FbxAnimCurveDef::eTANGENT_USER) and Auto (FbxAnimCurveDef::eTANGENT_AUTO) tangent modes only.
    * \param pKeyIndex Index of the key.
    * \param pVal Break flag (\c true or \c false).
    */
    virtual void KeySetBreak(int pKeyIndex, bool pVal) = 0; 

    /** Get if the tangent has a break. When this flag is set (FbxAnimCurveDef::eTANGENT_BREAK), the key's left and right slopes are independent.
	* When this flag is off, the key's left and right slope are equal.
    * This method is relevant for User (FbxAnimCurveDef::eTANGENT_USER) and Auto (FbxAnimCurveDef::eTANGENT_AUTO) tangent modes only.
    * \param pKeyIndex Index of the queried key.
	* \return Break flag (\c true or \c false).
    */
    virtual bool KeyGetBreak(int pKeyIndex) const = 0; 
    //@}

    /**
      * \name Key Tangent Management
      */
    //@{
    /** Get the left derivative of a key.
    *	\param pIndex Index of the queried key.
    *	\return Left derivative (Value over time (s)).
    * Result is undetermined if animation curve has no key or if index 
    * is out of bounds.
    */
    virtual float KeyGetLeftDerivative(int pIndex) = 0;

    /** Set the left derivative of a key.
    *	\param pIndex Index of the key.
    *	\param pValue Left derivative.
    * Result is undetermined if animation curve has no key or if index 
    * is out of bounds.
    * This function is only relevant if previous key interpolation
    * type is eINTERPOLATION_CUBIC and tangent mode is
    * FbxAnimCurveDef::eTANGENT_USER, FbxAnimCurveDef::eTANGENT_BREAK or FbxAnimCurveDef::eTANGENT_AUTO. 
    */
    virtual void KeySetLeftDerivative(int pIndex, float pValue) = 0;

    /** Get the left auto parametric of a key. This is used to compute the slope of Auto and User keys.
    *	\param pIndex Index of the key.
    *	\param pApplyOvershootProtection Clamp flag (eGENERIC_CLAMP) is taken into account.
    *	\return Left auto parametric.
    * Result is undetermined if animation curve has no key or if index 
    * is out of bounds.
    */
    virtual float KeyGetLeftAuto(int pIndex, bool pApplyOvershootProtection = false) = 0;

    /** Get the left derivative info (of type FbxAnimCurveTangentInfo) of a key.
    *	\param pIndex Index of the queried key.
    *	\return Left derivative info.
    * Result is undetermined if animation curve has no key or if index 
    * is out of bounds.
    */
	virtual FbxAnimCurveTangentInfo KeyGetLeftDerivativeInfo(int pIndex) = 0;

    /** Set the left derivative info (of type FbxAnimCurveTangentInfo) of a key.
    *	\param pIndex Index of the key.
    *	\param pValue Left derivative info.
    *   \param pForceDerivative If \c true, assign the tangent info's derivative value to the key derivative.
	* If \c false, use the tangent info's auto parametric value to recompute the key derivative.
    * Result is undetermined if animation curve has no key or if index 
    * is out of bounds.
    * This function is only relevant if previous key interpolation
    * type is eINTERPOLATION_CUBIC and tangent mode is
    * FbxAnimCurveDef::eTANGENT_USER or FbxAnimCurveDef::eTANGENT_BREAK.
    */
	virtual void KeySetLeftDerivativeInfo(int pIndex, FbxAnimCurveTangentInfo pValue, bool pForceDerivative = false) = 0;

    /** Get the right derivative of a key.
    *	\param pIndex Index of the key.
    *	\return Right derivative (Value over time (s)).
    * Result is undetermined if animation curve has no key or if index 
    * is out of bounds.
    */
    virtual float KeyGetRightDerivative(int pIndex) = 0;

    /** Set the right derivative of a key.
    *	\param pIndex Index of the key.
    *	\param pValue Right derivative.
    * Result is undetermined if animation curve has no key or if index 
    * is out of bounds.
    * This function is only relevant if previous key interpolation
    * type is eINTERPOLATION_CUBIC and tangent mode is
    * FbxAnimCurveDef::eTANGENT_USER, FbxAnimCurveDef::eTANGENT_BREAK or FbxAnimCurveDef::eTANGENT_AUTO.
    */
    virtual void KeySetRightDerivative(int pIndex, float pValue) = 0;

    /** Get the right auto parametric of a key. This is used to compute the slope of Auto and User keys.
    *	\param pIndex Index of the key.
    *	\param pApplyOvershootProtection Clamp flag (eGENERIC_CLAMP) is taken into account.
    *	\return Right auto parametric.
    * Result is undetermined if animation curve has no key or if index 
    * is out of bounds.
    */
    virtual float KeyGetRightAuto(int pIndex, bool pApplyOvershootProtection = false) = 0;

    /** Get the right derivative info (of type FbxAnimCurveTangentInfo) of a key.
    *	\param pIndex Index of the queried key.
    *	\return Right derivative info.
    * Result is undetermined if animation curve has no key or if index 
    * is out of bounds.
    */
	virtual FbxAnimCurveTangentInfo KeyGetRightDerivativeInfo(int pIndex) = 0;

    /** Set the right derivative info (of type FbxAnimCurveTangentInfo) of a key.
    *	\param pIndex Index of the key.
    *	\param pValue Right derivative info.
    *   \param pForceDerivative If \c true, assign the tangent info's derivative value to the key derivative.
	* If \c false, use the tangent info's auto parametric value to recompute the key derivative.
    * Result is undetermined if animation curve has no key or if index 
    * is out of bounds.
    * This function is only relevant if previous key interpolation
    * type is eINTERPOLATION_CUBIC and tangent mode is
    * FbxAnimCurveDef::eTANGENT_USER or FbxAnimCurveDef::eTANGENT_BREAK.
    */
    virtual void KeySetRightDerivativeInfo(int pIndex, FbxAnimCurveTangentInfo pValue, bool pForceDerivative = false) = 0;

    /** Get the right tangent weight mode of a key.
    *	\param pIndex Index of queried key.
    *	\return \c true if the key is right weighted (Weight mode is eWeightedRight or eWeightedRight). \c false otherwise.
    * Result is undetermined if animation curve has no key or if index 
    * is out of bounds.
    */
    virtual bool KeyIsLeftTangentWeighted(int pIndex) const = 0;

    /** Get the right tangent weight mode of a key.
    *	\param pIndex Index of queried key.
    *	\return \c true if the key is right weighted (Weight mode is eWeightedRight or eWeightedRight). \c false otherwise.
    * Result is undetermined if animation curve has no key or if index 
    * is out of bounds.
    */
    virtual bool KeyIsRightTangentWeighted(int pIndex) const = 0;

    /** Get the weight value component of the left tangent of a key.
    *	\param pIndex Index of the key.
    *	\return Left tangent weight, or eDefaultWeight (0.333...) if left tangent is not weighted.
    * This function is only relevant if key interpolation
    * type is eInterpolationCubic.
    */
    virtual float KeyGetLeftTangentWeight(int pIndex) const = 0;

    /** Get the weight value component of the right tangent of a key.
    *	\param pIndex Index of the key.
    *	\return Right tangent weight, or eDefaultWeight (0.333...) if right tangent is not weighted.
    * This function is only relevant if key interpolation
    * type is eInterpolationCubic.
    */	
    virtual float KeyGetRightTangentWeight(int pIndex) const = 0;

    /** Set the left tangent weight of a key
    *	\param pIndex Index of the key.
    *	\param pWeight Weight to set on the left tangent.
    *   \param pAdjustTan If true, recompute the tangent height to compensate for very small weights.
    * This function is only relevant if previous key interpolation
    * type is eInterpolationCubic and tangent mode is
    * FbxAnimCurveDef::eTangentUser or FbxAnimCurveDef::eTangentBreak. The tangent is 
    * automatically set in weighted mode.
    * \remarks The pAdjustTan option will only produce correct results provided that the tangent has already been
    * set before calling this function.
    */
    virtual void   KeySetLeftTangentWeight( int pIndex, float pWeight, bool pAdjustTan = false ) = 0;

    /** Set the right tangent weight of a key
    *	\param pIndex Index of the key.
    *	\param pWeight Weight to set on the right tangent.
    *   \param pAdjustTan If true, recompute the tangent height to compensate for very small weights.
    * This function is only relevant if key interpolation
    * type is eInterpolationCubic and tangent mode is
    * FbxAnimCurveDef::eTangentUser or FbxAnimCurveDef::eTangentBreak. The tangent is 
    * automatically set in weighted mode.
    * \remarks The pAdjustTan option will only produce correct results provided that the tangent has already been
    * set before calling this function.
    */
    virtual void   KeySetRightTangentWeight( int pIndex, float pWeight, bool pAdjustTan = false  ) = 0;

    /** Get the velocity value component of the left tangent of a key
    *	\param pIndex Index of the key.
    *	\return Tangent velocity of the left tangent.
    * This function is only relevant if key interpolation
    * type is eInterpolationCubic
    */
    virtual float KeyGetLeftTangentVelocity( int pIndex) const = 0;

    /** Get the velocity value component of the right tangent of a key
    *	\param pIndex Index of the key.
    *	\return Tangent velocity of the right tangent.
    * This function is only relevant if key interpolation
    * type is eInterpolationCubic
    */			
    virtual float KeyGetRightTangentVelocity( int pIndex) const = 0;

    //@}

    /**
      * \name Evaluation and Analysis
      */
    //@{
    /**	Evaluate animation curve value at a given time.
    *	\param pTime Time of evaluation.
    * If time falls between two keys, animation curve value is 
    * interpolated according to previous key interpolation type and
    * tangent mode if relevant.
    * \param pLast Index to speed up search. If this 
    * function is called in a loop, initialize this value to 0 and let it 
    * be updated by each call.
    * \return Animation curve value on given time, or animation curve's default value if animation curve
    * has no key.
    * This function takes extrapolation into account.
    */
    virtual float Evaluate (FbxTime pTime, int* pLast = NULL) = 0;

    /**	Evaluate animation curve value at a given key index.
    *	\param pIndex Any value between 0 and FbxAnimCurve::KeyGetCount() - 1.
    * If key index is not an integer value, animation curve value is 
    * interpolated according to previous key interpolation type and
    * tangent mode, if relevant.
    * This function does not take extrapolation into account.
    *	\return Animation curve value, or default value if animation curve
    * has no key. Result is undetermined if index is out of bounds.
    */
    virtual float EvaluateIndex( double pIndex) = 0;
        
    /**	Evaluate function left derivative at given time.
    *	\param pTime Time of evaluation.
    * \param pLast Key index to speed up search. If this 
    * function is called in a loop, initialize this value to 0 and let it 
    * be updated by each call.
    * \return Left derivative at given time.
    * This function does not take extrapolation into account. Result is undetermined if index is out of bounds.
    */
    virtual float EvaluateLeftDerivative (FbxTime pTime, int* pLast = NULL) = 0;
        
    /**	Evaluate function right derivative at given time.
    *	\param pTime Time of evaluation.
    * \param pLast Key index to speed up search. If this 
    * function is called in a loop, initialize this value to 0 and let it 
    * be updated by each call.
    *	\return Right derivative at given time.
    * This function does not take extrapolation into account. Result is undetermined if index is out of bounds.
    */
    virtual float EvaluateRightDerivative (FbxTime pTime, int* pLast = NULL) = 0;
    //@}

    /**
      * \name Utility functions.
      *
      */
    //@{
    /** Find out start and end time of the animation animation curve.
      * This function retrieves the animation curve's time span.
      * \param pTimeInterval Reference to receive start time and end time.
      * \return \c true on success, \c false otherwise.
      */
    virtual bool GetTimeInterval(FbxTimeSpan& pTimeInterval) = 0;

	/** Copy animation curve content into current animation curve.
      * \param pSource Animation curve to be copied (which will not be modified).
      * \param pWithKeys If \c true, clear keys in current animation curve and copy
      * keys from source animation curve. If \c false, keys in current animation curve
      * are left as is.
    */
    virtual void CopyFrom(FbxAnimCurve& pSource, bool pWithKeys = true) = 0;
    //@}
    
protected:
	virtual ~FbxAnimCurve();
};
