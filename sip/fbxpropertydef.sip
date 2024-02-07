class FbxConnection
{
public:
	enum EType
	{ 
		eNone = 0,
		
		// System or user
		eSystem = 0x00000001,
		eUser = 0x00000002,
		eSystemOrUser =   0x00000003,   //eUser | eSystem
		
		// Type of Link
		eReference = 0x00000004,
		eContains = 0x00000008,
		eData = 0x00000010,
		eLinkType =  0x0000001C,           //eReference | eContains | eData
		eDefault = 0x0000006,                 //eUser | eReference,
		eUnidirectional = 0x00000020
	};
};

class FbxConnectionPointFilter
{
    // CONSTRUCTOR/DESTRUCTOR
    /**
    * \name Constructor and Destructor
    */
    //@{
public: 
    
	//! Constructor
    FbxConnectionPointFilter();
    
	//! Destructor
    virtual ~FbxConnectionPointFilter();
    //@}
public:
    /**
    * \name ConnectFilter management
    */
    //@{

    //! Return reference ConnectionPoint filter.
    virtual FbxConnectionPointFilter*      Ref();
    //! Cancel reference
    virtual void                            Unref();

    //! Get unique filter ID
    virtual int                    GetUniqueId() const;

    /** Judge if the given Connection Point is valid
      * \param pConnect The given Connection Point.
      * \return \c True if valid, \c false if not valid.
      */
    //virtual bool                            IsValid             (FbxConnectionPoint*   pConnect) const;
    /** Judge if the given Connection Point is a valid connection
      * \param pConnect The given Connection Point.
      * \param pType Connection type.
      * \return \c True if valid, \c false if not valid.
      */
    //virtual bool                            IsValidConnection   (FbxConnectionPoint*   pConnect,FbxConnection::EType pType) const;
    /** Judge if it is equal with the given  ConnectionPoint filter.
      * \param pConnectFilter The given  ConnectionPoint filter.
      * \return \c True if equal, \c false if unequal.
      */
    virtual bool                            IsEqual             (FbxConnectionPointFilter* pConnectFilter) const;

    //@}
};

class FbxPropertyFlags
{
public:
	enum EInheritType
	{
		eOverride,
		eInherit,
		eDeleted
	};

	enum EFlags
	{
		eNone = 0,				//!< No flag.
		eStatic = 0x1,			//!< Property is defined in the class declaration, so it wasn't created dynamically.
		eAnimatable = 0x2,		//!< Property can be animated, thus is can have am animation curve node connected.
		eAnimated = 0x3,		//!< Property is animated, so it also has an animation curve node connected.
		eImported = 0x4,		//!< Property has been created during import process when reading FBX file.
		eUserDefined = 0x8,		//!< Property has been defined by user, not by the FBX SDK.
		eHidden = 0x10,			//!< Property should not be displayed on user interface.
		eNotSavable = 0x20,		//!< Property value must not be exported when writing FBX files.

        eLockedMember0 = 0x40,	//!< This property has its member #0 locked.
        eLockedMember1 = 0x80,	//!< This property has its member #1 locked.
        eLockedMember2 = 0x100,	//!< This property has its member #2 locked.
        eLockedMember3 = 0x200,	//!< This property has its member #3 locked.
        eLockedAll = 0x3C0,
        eMutedMember0 = 0x400,	//!< This property has its member #0 muted.
        eMutedMember1 = 0x800,	//!< This property has its member #1 muted.
        eMutedMember2 = 0x1000,	//!< This property has its member #2 muted.
        eMutedMember3 = 0x2000,	//!< This property has its member #3 muted.
        eMutedAll = 0x3C00,

		//Private flags
		eUIDisabled = 0x4000,		//!< Private flag for dynamic UI in FBX plug-ins.
		eUIGroup = 0x8000,			//!< Private flag for dynamic UI in FBX plug-ins.
		eUIBoolGroup = 0x10000,		//!< Private flag for dynamic UI in FBX plug-ins.
		eUIExpanded = 0x20000,		//!< Private flag for dynamic UI in FBX plug-ins.
		eUINoCaption = 0x40000,		//!< Private flag for dynamic UI in FBX plug-ins.
		eUIPanel = 0x80000,			//!< Private flag for dynamic UI in FBX plug-ins.
		eUILeftLabel = 0x100000,	//!< Private flag for dynamic UI in FBX plug-ins.
		eUIHidden = 0x200000,		//!< Private flag for dynamic UI in FBX plug-ins.

		eCtrlFlags = 0x7FFF,
		eUIFlags = 0x7F8000,
		eAllFlags = 0x7FFFFF,

		eFlagCount = 23,
	};
};

class FbxPropertyValue
{
public:

	static FbxPropertyValue*	Create(void* pData, EFbxType pType);
	void						Destroy();

	bool					Get(void* pValue, EFbxType pValueType);
	bool					Set(const void* pValue, EFbxType pValueType);
	size_t				    GetSizeOf() const;
    size_t				    GetComponentCount() const;

	void					IncRef();
	void					DecRef();
	int					    GetRef();
	
protected:
	~FbxPropertyValue();
};