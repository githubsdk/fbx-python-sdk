class FbxReader
{
public:
	/** Constructor.
      *	\param pManager        The FbxManager Object.
      * \param pID             Id for current reader.
      * \param pStatus         The FbxStatus object to hold error codes.
      */
    FbxReader(FbxManager& pManager, int pID, FbxStatus& pStatus);

	/** Destructor.
      */
    virtual ~FbxReader();
    
	/** Information type to request.
	  * \remarks Used internally to get reader file information.
      */
    enum EInfoRequest
    {
        eInfoExtension,     //!< To get the file ext for a reader ex: "FBX".		
        eInfoDescriptions,	//!< To get the file description for a reader ex: "Autodesk FBX (*.fbx)".
        eReserved1 = 0xFBFB,
    };

	/** Flags for reading parts of file.
     * \remarks Used internally when an importer is initialized to get some information very fast.
		      */
    enum EFileOpenSpecialFlags
	{
		eParseForGlobalSettings = 1, //!< Used for reading the Global settings section when an importer is initialized.
		eParseForStatistics = 2      //!< Used for reading a group of statistics when an importer is initialized.     
	};

	/** Returns the file version.
      *	\param pMajor       Major version.
      *	\param pMinor       Minor version.
      *	\param pRevision    Revision version.
      */
    virtual void                GetVersion(int& pMajor, int& pMinor, int& pRevision);

    /** Opens the file with default flag
      * \param pFileName     Name of the File to open
      * \return  If the file opens successfully return \c true, otherwise return \c false.
      */
    virtual bool                FileOpen(char* pFileName) = 0;

    /** Closes the file stream
      * \return  \c false
      */
    virtual bool                FileClose() = 0;

     /** Checks if the file stream is open.
      * \return  \c false.
      */
    virtual bool                IsFileOpen() = 0;

    /** Returns file stream options
      * \param pParseFileAsNeeded       Sets whether to parse file as read options
      * \return true on success, otherwise return false. 
      */
    virtual bool                GetReadOptions(bool pParseFileAsNeeded = true) = 0;

    /** Reads file with stream options
      * \param pDocument        FbxDocument to store the file data
      * \return \c false.
      */
    virtual bool                Read(FbxDocument* pDocument) = 0;

	/** Reads extension plug-ins name, version and parameters, so that we can remember if a plug-in was used during export.
	  * This is especially useful for extension plug-ins that modify the scene and also to warn users during import if an
	  * extension plug-in was used that could be missing.
      * \param pParams The parameters of the extension plug-in. The properties of the objects are used
	  * as the parameters of the extension plug-in.
	  * \remark This function has no implementation in this class. Only sub-class should implement it as needed. For example,
	  * FBX 6 and FBX 7 does implement it.
      */
	virtual void				PluginReadParameters(FbxObject& pParams);

    /** Opens the file with specific EFileOpenSpecialFlags
      * \param pFileName     Name of the File to open.
      * \param pFlags        The EFileOpenSpecialFlags to open with
      * \return If the file opens successfully return true, otherwise return false.
      */
    virtual bool                FileOpen(char* pFileName, EFileOpenSpecialFlags pFlags);

	/** Returns the system axis information and file system units from the file
      *	\param pAxisSystem      Axis system in file
      * \param pSystemUnits     System unit in file
      * \return \c false.
      */
    virtual bool                GetAxisInfo(FbxAxisSystem* pAxisSystem, FbxSystemUnit* pSystemUnits);

	/** Returns statistics from the file 
      *	\param pStats			Statistics in the file.
      *	\return \c false.
      */
    virtual bool                GetStatistics(FbxStatistics* pStats);

    /** Returns the scene info from the file.
      * \return NULL.
      */
    virtual FbxDocumentInfo*   GetSceneInfo();

	/** If default camera resolution is OK, returns information about the resolution of the render.
      *	\param pCamName			Default camera name.
	  *	\param pResolutionMode	Default resolution mode.
	  *	\param pW				Default resolution width.
	  *	\param pH				Default resolution height.
      *	\return \c true If default camera resolution is OK, \c false  Otherwise.
      */
	virtual bool	  		    GetDefaultRenderResolution(FbxString& pCamName, FbxString& pResolutionMode, double& pW, double& pH);

	/** Judges if the format of the file is was created by an Autodesk plug-in.
	  * An internal (genuine) plug-in is one created by the Autodesk FBX product team.
      *	\return \c true If the file format is internal plug-in , \c false Otherwise.
      */
	bool						IsGenuine();

    /** Access to a IOSettings object.
      * \return A pointer to IOSettings used for this reader or NULL if the object
      * has not been allocated.
    */
    virtual FbxIOSettings * GetIOSettings();

	/** Set the IOSettings pointer to be used for this reader instance.
      * \param pIOSettings  
      */
    virtual void SetIOSettings(FbxIOSettings * pIOSettings);

    /** Pass a progress handler to the reader.
      * \param pProgress     FbxProgress to store the progress information.
      */
    virtual void SetProgressHandler(FbxProgress *pProgress);
};