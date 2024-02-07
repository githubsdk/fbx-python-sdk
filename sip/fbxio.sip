class FbxIODefaultRenderResolution
{
public:
    /** If the resolution data is ready. */
    bool    mIsOK;
    /** camera name. */
    FbxString mCameraName;
    /** resolution mode. ex: "Fixed Resolution","Fixed Ratio","Fixed Width","Fixed Height","Window Size"*/
	FbxString mResolutionMode;
    /** resolution width. */
    double mResolutionW;
    /** resolution height. */
    double mResolutionH;

    /**
    * \name Constructors and Destructor
    */
    //@{
    //! Default constructor.
    FbxIODefaultRenderResolution();
    //@}

    /**
    * \name Member Access
    */
    //@{
    //! Reset values to default.
    void Reset();
    //@}
};

class FbxIOFileHeaderInfo
{
public:
    /**
    * \name Constructors and Destructor
    */
    //@{
    //! Default constructor.
    FbxIOFileHeaderInfo();

    //! Destructor.
    virtual ~FbxIOFileHeaderInfo();
    //@}

    /**
    * \name Public Member
    */
    //@{

	//! Reset values to default.
	virtual void				Reset();

    /** A derived class can override this function to read additional information from the file header.
    *   \return false in case of failure that should stop loading the file.
    */
    virtual bool				ReadExtendedHeaderInformation(FbxIO*);
    //@}

	//! FbxIODefaultRenderResolution to handle default resolution values
    FbxIODefaultRenderResolution    mDefaultRenderResolution;

	//!Read only properties (not used for file write)
	
	//@{
	/** File version ex; 5000, 6000, 6100, 7000, 7099, 7100 
	*   the major part is the first digit, the minor part, 3 other digits
	*   ex: 7100 means version 7.1
	*/
    int                         mFileVersion;

	/** Indicates whether a creation time stamp is preset */
    bool                        mCreationTimeStampPresent;

	/** Indicates whether the mCreationTimeStamp member variable contains the actual creation time of the file. */
    FbxLocalTime                  mCreationTimeStamp;

    /** Indicates who is the creator of the file
	*   Ex: "FBX SDK/FBX Plugins version 2011.2" 
	*/
    FbxString                     mCreator;				

	/** Indicates whether the file is created by a genuine Autodesk plug-in or not */
	bool						mIOPlugin;

	/** The flag indicates that the header was created by a personal learning edition (PLE) of FBX. */
    bool                        mPLE;
	//@}
};

class FbxIO /NoDefaultCtors/
{
public:
	enum BinaryType
	{
		BinaryNormal,	//<! Standard FBX file field alignment using 32bit values, used by all file format version 7.4.0 or lower
		BinaryLarge		//<! New FBX file field alignment using 64bit values, used by all file format version 7.5.0 or higher
	};
    
    /** Creation function for this FbxIO class
      * \param pStatus  The FbxStatus object to hold error codes.
	  * \return a new FbxIO object pointer
	  */
    static FbxIO* Create(BinaryType pBinaryType, FbxStatus& pStatus);
    
    FbxIO(BinaryType pBinaryType, FbxStatus& pStatus);
    virtual ~FbxIO();
};
