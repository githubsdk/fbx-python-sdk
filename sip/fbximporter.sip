class FbxImporter : FbxIOBase /NoDefaultCtors/
{
public:
    static FbxClassId ClassId;
    static FbxImporter* Create(FbxManager *pManager, const char *pName);
    virtual FbxClassId GetClassId() const;
    static FbxImporter* Create(FbxObject *pContainer,  const char *pName);

    bool operator==(const FbxImporter & pObj);

	/** Initialize object.
	  * \param pFileName          Name of file to access.
      * \param pFileFormat        file format identifier User does not need to specify it by default.
                                  if not specified, plugin will detect the file format according to file suffix automatically.
	  * \param pIOSettings        client IOSettings, if not specified, a default IOSettings will be created
	  * \return                   \c true on success, \c false otherwise.
      * \remarks                  To identify the error that occurred, inspect the status object accessed 
      *                           using the GetStatus() function.
      * \remarks                  You do not need to give the pFileFormat if the suffix of pFileName is recognized
	  */
    virtual bool Initialize(const char* pFileName, int pFileFormat=-1, FbxIOSettings * pIOSettings=NULL);
    
	/** Get the FBX version number of the FBX file.
	  * FBX version numbers start at 5.0.0.
	  * \param pMajor        Version major number.
	  * \param pMinor        Version minor number.
	  * \param pRevision     Version revision number.
	  *	\remarks             This function must be called after FbxImporter::Initialize().	  
	  */
    void GetFileVersion(int& pMajor, int& pMinor, int& pRevision);

	/**	Get the default rendering resolution if present in the file header.
	  * \param pCamName            Returned name of the camera.
	  * \param pResolutionMode     Returned resolution mode.
	  * \param pW                  Returned width.
	  * \param pH                  Returned height.
	  * \return                    \c true if the default rendering settings are defined in the file, otherwise
	  *                            returns \c false with empty parameters.
	  */
    bool GetDefaultRenderResolution(FbxString& pCamName, FbxString& pResolutionMode, double& pW, double& pH);

	/**	Get the complete file header information.
	  * \return		valid pointer to the complete header information
	  */
    FbxIOFileHeaderInfo* GetFileHeaderInfo();
    
	/** \enum EStreamOptionsGeneration Stream options identifiers.
	  * - \e eParseFile			Parse the file
	  * - \e eDoNotParseFile	Do not parse the file.
	  */
	enum EStreamOptionsGeneration
	{
		eParseFile,		// Parse the file
		eDoNotParseFile	// Do not parse the file (fast)
	};
    
    /** Read the currently opened file header to retrieve information related to takes.
	  * \param pStreamOptionsGeneration     Stream options identifier.
	  *	\return                \c true on success, \c false otherwise.
	  * \remarks                            Caller gets ownership of the returned structure.
      */
    bool GetImportOptions(EStreamOptionsGeneration pStreamOptionsGeneration = eParseFile);	

    /** Read the currently opened file header to retrieve information related to takes.
	  * \param pFbxObject     Target FBX file.
	  *	\return                \c true on success, \c false otherwise.
	  * \remarks              Caller gets ownership of the returned structure.
      */
    bool GetImportOptions(FbxIO* pFbxObject);
    
    /** Import the currently opened file into a scene. 
      * \param pDocument          Document to fill with file content.
	  * \param pNonBlocking       If true, the import process will be executed in a new thread, allowing it to be non-blocking.
	                              To determine if the import finished, refer to the function IsImporting().
	  *	\return                   \c true on success, \c false otherwise.
      * \remarks                  To identify the error that occurred, inspect the status object accessed 
      *                           using the GetStatus() function.
	  *                           If the imported file is password protected and the password is not
	  *                           set or wrong, the FbxStatus object access with GetStatus() will be set with
	  *                           FbxStatus::ePasswordError.
      */
    bool Import(FbxDocument* pDocument, bool pNonBlocking=false);
    
    /** Check if the importer is currently importing.
	  * \param pImportResult  This parameter, after the import finished, will contain the result of the import success or failure.
      * \return               Return true if the importer is currently importing.
	  * \remarks              This function will always return false if Import() was called with pNonBlocking set to false.
	  *                       This function should be used only in the context of pNonBlocking set to true.
	  *                       It is very important to periodically check if the import finished using this function,
      *                       since it will also free up the thread's allocations when its done.
      */
    bool IsImporting(bool& pImportResult);

    /** Access to a IOSettings object.
      * \return The pointer to IOSettings or \c NULL \c if the object has not been allocated.
      */
    FbxIOSettings* GetIOSettings();

	/** Set the IOSettings pointer
	  * \param pIOSettings Point to a FbxIOSettings object.
	  */
    void SetIOSettings(FbxIOSettings* pIOSettings);

    /** Get the number of available animation stacks in the file.
      * \return      Number of animation stacks.
      *	\remarks     This function must be called after FbxImporter::Initialize().
      */
    int GetAnimStackCount();

	/** Get the take information about an available take.
	  * Use the returned reference to a FbxTakeInfo object to set whether the indexed take is imported.
	  *	\param pIndex     Index of the requested take.
	  *	\return           Take information or \c NULL if function failed.
	  *	\remarks          This function must be called after FbxImporter::Initialize().
	  */
    FbxTakeInfo* GetTakeInfo(int pIndex);

    /** Return the active animation stack name.
      * \return     Active animation stack name if there is one, otherwise returns an empty string.
      * \remarks    This function must be called after FbxImporter::Initialize().
      */
    FbxString GetActiveAnimStackName();
    
    /** Get the scene info.
	  * \return     Pointer to the scene info or \c NULL if no scene information
	  *             is available in the file.
	  */
    FbxDocumentInfo* GetSceneInfo();

    /** Returns the index of the reader (FbxReader) associated with the file format. 
	    This index is considered the identifier of the file format. 
		The array of registered readers can't be retrieved. 
		\return Index of the registered FbxReader associated with the file format. 
		        If no reader found return -1.
		\remarks According to the number of readers registered this value can change 
		         for the same reader between SDK Manager instantiations.
 	 */
	int GetFileFormat();

	/** \return     \c true if the file format is a recognized FBX format.
	  */
    bool IsFBX();
    
protected:
    FbxImporter(FbxManager& pManager,const char* pName);
    virtual ~FbxImporter();
};
