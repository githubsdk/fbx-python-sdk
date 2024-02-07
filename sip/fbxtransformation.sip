enum EFbxRotationOrder 
{ 
	eEulerXYZ,
	eEulerXZY,
	eEulerYZX,
	eEulerYXZ,
	eEulerZXY,
	eEulerZYX,
	eSphericXYZ
};

class FbxEuler
{
public:
	enum EAxis {eAxisX=0, eAxisY=1, eAxisZ=2};

	enum EOrder
	{    		
        eOrderXYZ = 0,
		eOrderXZY = 2,
		eOrderYZX = 4,
		eOrderYXZ = 6,
		eOrderZXY = 8,
		eOrderZYX = 10
	};
};

class FbxRotationOrder /NoDefaultCtors/
{
public:	
	FbxRotationOrder(FbxEuler::EOrder pOrder=FbxEuler::eOrderXYZ);

	int		GetOrder();
	void	SetOrder(FbxEuler::EOrder pOrder);
	void	V2M(FbxAMatrix& pRM, const FbxVector4& pV);
	void	M2V(FbxVector4& pV, FbxAMatrix& pRM);
	bool	V2VRef(FbxVector4& pVOut, FbxVector4& pVIn, FbxVector4& pVRef);
};

class FbxLimits
{
public:
	//! Constructor
	FbxLimits();

	/** Retrieve the active state of this limit.
	  * \return True if the limit is active.
	  */
	bool GetActive() const;

	/** Set the active state of this limit.
	  * \param pActive If true, this limit will become globally active.
	  */
	void SetActive(const bool& pActive);

	/** Get the active state of the minimum X component.
	  * \return True if the X component minimum limit is active.
	  */
	bool GetMinXActive() const;

	/** Get the active state of the minimum Y component.
	  * \return True if the Y component minimum limit is active.
	  */
	bool GetMinYActive() const;

	/** Get the active state of the minimum Z component.
	  * \return True if the Z component minimum limit is active.
	  */
	bool GetMinZActive() const;

	/** Get the active states of the three components of the minimum limit.
	  * \param pXActive \c True if the X component minimum limit is active.
	  * \param pYActive \c True if the Y component minimum limit is active.
	  * \param pZActive \c True if the Z component minimum limit is active.
	  */
	void GetMinActive(bool& pXActive, bool& pYActive, bool& pZActive) const;

	/** Get the minimum limits.
	  * \return The current X, Y and Z values for the minimum limits.
	  */
	FbxDouble3 GetMin() const;

	/** Set the active state of the minimum X component.
	  * \param pActive If true, the X component minimum limit will be active.
	  */
	void SetMinXActive(const bool& pActive);

	/** Set the active state of the minimum Y component.
	  * \param pActive If true, the Y component minimum limit will be active.
	  */
	void SetMinYActive(const bool& pActive);

	/** Set the active state of the minimum Z component.
	  * \param pActive If true, the Z component minimum limit will be active.
	  */
	void SetMinZActive(const bool& pActive);

	/** Set the active states of the three components of the minimum limits.
	  * \param pXActive If true, the X component minimum limit will be active.
	  * \param pYActive If true, the Y component minimum limit will be active.
	  * \param pZActive If true, the Z component minimum limit will be active.
	  */
	void SetMinActive(const bool& pXActive, const bool& pYActive, const bool& pZActive);

	/** Set the minimum limits.
	  * \param pMin The X, Y and Z values for the minimum limits.
	  */
	void SetMin(const FbxDouble3& pMin);

	/** Get the active state of the maximum X component.
	  * \return True if the X component maximum limit is active.
	  */
	bool GetMaxXActive() const;

	/** Get the active state of the maximum Y component.
	  * \return True if the Y component maximum limit is active.
	  */
	bool GetMaxYActive() const;

	/** Get the active state of the maximum Z component.
	  * \return True if the Z component maximum limit is active.
	  */
	bool GetMaxZActive() const;

	/** Get the active states of the three components of the maximum limit.
	  * \param pXActive \c True if the X component maximum limit is active.
	  * \param pYActive \c True if the Y component maximum limit is active.
	  * \param pZActive \c True if the Z component maximum limit is active.
	  */
	void GetMaxActive(bool& pXActive, bool& pYActive, bool& pZActive) const;

	/** Get the maximum limits.
	  * \return The current X, Y and Z values for the maximum limits.
	  */
	FbxDouble3 GetMax() const;

	/** Set the active state of the maximum X component.
	  * \param pActive If true, the X component maximum limit will be active.
	  */
	void SetMaxXActive(const bool& pActive);

	/** Set the active state of the maximum Y component.
	  * \param pActive If true, the Y component maximum limit will be active.
	  */
	void SetMaxYActive(const bool& pActive);

	/** Set the active state of the maximum Z component.
	  * \param pActive If true, the Z component maximum limit will be active.
	  */
	void SetMaxZActive(const bool& pActive);

	/** Set the active states of the three components of the maximum limits.
	  * \param pXActive If true, the X component maximum limit will be active.
	  * \param pYActive If true, the Y component maximum limit will be active.
	  * \param pZActive If true, the Z component maximum limit will be active.
	  */
	void SetMaxActive(const bool& pXActive, const bool& pYActive, const bool& pZActive);

	/** Set the maximum limits.
	  * \param pMin The X, Y and Z values for the maximum limits.
	  */
	void SetMax(const FbxDouble3& pMax);

	/** Find if any of the minimum or maximum active state are set.
	  * \return If any component of the minimum or maximum active state are set, true is returned.
	  * \remarks The global active state will not count when resolving this.
	  */
	bool GetAnyMinMaxActive() const;
	
	/** Apply the active limits to the components of the vector provided.
	  * \return The new vector clamped by active limits.
	  */
	FbxDouble3 Apply(const FbxDouble3& pVector);
};

class FbxTransform
{
public:
	enum EInheritType
	{
		eInheritRrSs,
		eInheritRSrs,
		eInheritRrs
	};
    
	FbxTransform();    
    
	EInheritType		GetInheritType();
	void				SetInheritType(EInheritType pType);
	FbxLimits&			GetTranslationLimits();
	FbxLimits&			GetRotationLimits();
	FbxLimits&			GetScalingLimits();
	FbxRotationOrder&	GetRotationOrder();
	bool				HasROffset();
	bool				HasRPivot();
	bool				HasSOffset();
	bool				HasSPivot();
	bool				HasPreRM();
	bool				HasPostRM();
	void				SetROffset(FbxVector4& pROffset);
	void				SetRPivot(FbxVector4& pRPivot);
	void				SetSOffset(FbxVector4& pSOffset);
	void				SetSPivot(FbxVector4& pSPivot);
	void				SetPreRM(FbxVector4& pPreR);
	void				SetPostRM(FbxVector4& pPostR);
	bool				GetRotationSpaceForLimitOnly();
	void				SetRotationSpaceForLimitOnly(bool pRotationSpaceForLimitOnly);

	void				DoF2LT(FbxVector4& pLT, FbxVector4& pDoF, FbxAMatrix& pLRM, FbxAMatrix& pLSM);
	void				LT2DoF(FbxVector4& pDoF, FbxVector4 pLT, FbxAMatrix& pLRM, FbxAMatrix& pLSM);
	void				DoF2LRM(FbxAMatrix& pLRM, FbxVector4& pRDoF, bool pForLimit=false);
	void				LRM2DoF(FbxVector4& pRDoF, FbxAMatrix& pLRM, bool pForLimit=false);
	void				LSM2GSM(FbxAMatrix& pGSM, FbxAMatrix& pPGSM, FbxAMatrix& pLSM, FbxAMatrix& pLRM, FbxVector4& pPLS);
	void				GTRSM2GX(FbxAMatrix& pGX, FbxVector4& pGT, FbxAMatrix& pGRM, FbxAMatrix& pGSM);    
};

/** \enum EFbxQuatInterpMode  Quaternion interpolation modes.
  */
enum EFbxQuatInterpMode
{
    eQuatInterpOff,					//!< Do not evaluate using quaternion interpolation.
    eQuatInterpClassic,				//!< Legacy quaternion interpolation mode.
    eQuatInterpSlerp,				//!< Spherical linear interpolation.
    eQuatInterpCubic,				//!< Cubic interpolation.
    eQuatInterpTangentDependent,	//!< Mix between Slerp and cubic interpolation, depending on the specified tangents for each key.
    eQuatInterpCount				//!< Number of quaternion interpolation modes. Mark the end of this enum.
};
