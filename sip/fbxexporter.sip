class FbxExporter : FbxIOBase /NoDefaultCtors/
{
public:
    static FbxClassId ClassId;
    static FbxExporter* Create(FbxManager *pManager, const char *pName);
    virtual FbxClassId GetClassId() const;
    static FbxExporter* Create(FbxObject *pContainer,  const char *pName);

    bool operator==(const FbxExporter & pObj);

    /** Initialize object.
	  *	\param pFileName     Name of file to access.
	  * \param pFileFormat   file format identifier User does not need to specify it by default.
							 if not specified, plugin will detect the file format according to file suffix automatically.
	  * \param pIOSettings   client IOSettings, if not specified, a default IOSettings will be created
	  *	\return              \c true on success, \c false otherwise.
	  * \remarks             To identify the error that occurred, inspect the status object accessed 
      *                      using the GetStatus() function.
	  */
	virtual bool Initialize(const char* pFileName, int pFileFormat = -1, FbxIOSettings* pIOSettings = NULL);

    /** Setup file export options settings.
	  *	\return \c true on success, \c false otherwise.
	  */	
    bool GetExportOptions();

    /** Access to a IOSettings object.
      * \return The pointer to IOSettings or \c NULL \c if the object has not been allocated.
      */
		FbxIOSettings* GetIOSettings();

    /** Set the IOSettings pointer
	  * \param pIOSettings  Pointer on a FbxIOSettings object.  
      */
		void SetIOSettings(FbxIOSettings* pIOSettings);

    
    /** Export the document to the currently created file.
      * \param pDocument          Document to export.
      * \param pNonBlocking       If true, the export process will be executed in a new thread, allowing it to be non-blocking.
                                  To determine if the export finished, refer to the function IsExporting().
	  *	\return                   \c true on success, \c false otherwise.
	  * \remarks                  To identify the error that occurred, inspect the status object accessed 
      *                           using the GetStatus() function.
      */
    bool Export(FbxDocument* pDocument, bool pNonBlocking=false);

    /** Check if the exporter is currently exporting.
    * \param pExportResult  This parameter, after the export finished, will contain the result of the export success or failure.
    * \return               Return true if the exporter is currently exporting.
    * \remarks              This function will always return false if Export() was called with pNonBlocking set to false.
    *                       This function should be used only in the context of pNonBlocking set to true.
    *                       It is very important to periodically check if the export finished using this function,
    *                       since it will also free up the thread's allocations when its done.
    */
    bool IsExporting(bool& pExportResult);

    /** Get the progress status in non-blocking mode.
	  *	\param pStatus       FbxString reference to retrieve current status
	  *	\return              Percentage of the finished workload
      */
    float GetProgress(FbxString* pStatus=NULL);

    /** Get the format of the exported file.
	  *	\return     File format identifier.
      */
    int GetFileFormat();

	/** Return \c true if the file format is a recognized FBX format.
      */
    bool IsFBX();

    /** Set file version for a given file format.
	  * \param pVersion String description of the file format.
	  * \param pRenamingMode Renaming mode.
	  * \return \c true if mode is set correctly
      */
    bool SetFileExportVersion(FbxString pVersion, FbxSceneRenamer::ERenamingMode pRenamingMode);

	/** Set the resampling rate (only used when exporting to FBX 5.3 and lower)
	  * \param pResamplingRate resampling rate
      */
    void SetResamplingRate(double pResamplingRate);

    /** Set the default rendering resolution.
    * \param pCamName            name of the camera.
    * \param pResolutionMode     resolution mode.
    * \param pW                  width.
    * \param pH                  height.
    */
    void SetDefaultRenderResolution(FbxString pCamName, FbxString pResolutionMode, double pW, double pH);

	/**	Get the complete file header information.
	* \return		valid pointer to the complete header information
    */
    FbxIOFileHeaderInfo* GetFileHeaderInfo();

    void TCSetDefinition(int pType);
protected:
    virtual ~FbxExporter();
};
