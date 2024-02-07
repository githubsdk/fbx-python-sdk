class FbxCache : FbxObject /NoDefaultCtors/
{
public:
    static FbxClassId ClassId;
    static FbxCache* Create(FbxManager *pManager, const char *pName);
    virtual FbxClassId GetClassId() const;
    static FbxCache* Create(FbxObject *pContainer,  const char *pName);

    bool operator==(const FbxCache & pObj);
    
	enum EFileFormat
	{
		eUnknownFileFormat,	//!< Unknown cache file format.
		eMaxPointCacheV2,	//!< 3ds Max Point Cache 2 file format.
		eMayaCache			//!< Maya Cache file format.
	};

    /** Set the cache file format.
      * \param pFileFormat     Valid values are \e eMaxPointCacheV2 or \e eMayaCache.
      * \param pStatus         The FbxStatus object to hold error codes.
      */
      void SetCacheFileFormat(EFileFormat pFileFormat, FbxStatus* pStatus = NULL);

    /** Get the cache file format.
          * \return     The current cache file format, or \e eUnknown if it is not set.
      */
    EFileFormat GetCacheFileFormat() const;

    /** Set the cache file name.
      * \param pRelativeFileName_UTF8  The point cache file, relative to the FBX file name.
      * \param pAbsoluteFileName_UTF8  The point cache file absolute path.
      * \param pStatus                 The FbxStatus object to hold error codes.
      */
      void SetCacheFileName(const char* pRelativeFileName_UTF8, const char* pAbsoluteFileName_UTF8, FbxStatus* pStatus = NULL);

    /** Get the cache file name.
      * \param pRelativeFileName_UTF8  Return the point cache file name, relative to the FBX File name.
      * \param pAbsoluteFileName_UTF8  Return the point cache file absolute path.
      */
      void GetCacheFileName(FbxString& pRelativeFileName_UTF8, FbxString& pAbsoluteFileName_UTF8) const;

    /** Open the cache file for reading.
      * \param pStatus      The FbxStatus object to hold error codes.
      * \return             \c true if the file is successfully opened, \c false otherwise.
      */
        bool OpenFileForRead(FbxStatus* pStatus=NULL);

    /** Get the open state of the cache file.
      * \param pStatus      The FbxStatus object to hold error codes.
      * \return             \c true if the cache file is currently open, \c false otherwise.
      */
      bool IsOpen(FbxStatus* pStatus = NULL) const;

    /** Close the cache file.
      * \param pStatus      The FbxStatus object to hold error codes.
      * \return             \c true if the cache file is closed successfully, \c false otherwise.
      */
      bool CloseFile(FbxStatus* pStatus = NULL);

    /** Get the sampling frame rate of the cache file.
      * \param pStatus  The FbxStatus object to hold error codes.
      * \return         The sampling frame rate of the cache file, in frames per second.
      */
      double GetSamplingFrameRate(FbxStatus* pStatus=NULL);

    /** Get the sampling frame rate of the cache file, as a FbxTime object.
      * \param pStatus  The FbxStatus object to hold error codes.
      * \return         The sampling frame rate of the cache file.
      */
      FbxTime GetCacheTimePerFrame(FbxStatus* pStatus = NULL);
    
	enum EMCFileCount
	{
		eMCOneFile,			//!< One file is used for all the frames of animation.
		eMCOneFilePerFrame	//!< For every frame of animation, a cache file is used. The number of the frames is the number of the cache files.
	};

	enum EMCDataType
	{
		eUnknownData,		//!< Unknown data.
		eDouble,			//!< No use but has to be defined for consistency reasons.
		eDoubleArray,		//!< double*
		eDoubleVectorArray,	//!< double* [3]
		eInt32Array,		//!< int*
		eFloatArray,		//!< float* 
		eFloatVectorArray	//!< float* [3]
	};

    /** Binary cache format.
      */
    enum EMCBinaryFormat
    {
        eMCC,
        eMCX
    };    
    
    /** Open a cache file for writing.
      * \param pFileCount             Create one file for each frame of animation, or one file for all the frames.
      * \param pSamplingFrameRate     Number of frames per second.
      * \param pChannelName           The name of the channel of animation to create.
      * \param pBinaryFormat          Binary format type (32 bit=eMCC or 64bit=eMCX)
      * \param pMCDataType            The data type of the MC cache file.
      * \param pInterpretation        A piece of meta data to help users of the cache understand how to interpret the data.
      * \param pStatus                The FbxStatus object to hold error codes.
      */
      bool OpenFileForWrite(EMCFileCount pFileCount, double pSamplingFrameRate, const char* pChannelName, EMCBinaryFormat pBinaryFormat, EMCDataType pMCDataType = eDoubleVectorArray, const char* pInterpretation = "Points", FbxStatus* pStatus = NULL);

    /** Creates a new channel in the cache.
      * \param pChannelName           The name of the channel of animation to create.
      * \param pMCDataType            The MC DataType of the cache.
      * \param pInterpretation        A piece of meta data to help users of the cache understand how to interpret the data.
      * \param pChannelIndex          The index of the new animation channel.
      * \param pStatus                The FbxStatus object to hold error codes.
      * \remarks                      \b pChannelName must be unique within the cache.
      * \remarks                      \b pChannelName and \b pInterpretation cannot be NULL pointers.
      * \remarks                      This method must be called before adding any data to the cache but after the OpenFileForWrite.
      */
      bool AddChannel(const char* pChannelName, EMCDataType pMCDataType, const char* pInterpretation, unsigned int& pChannelIndex, FbxStatus* pStatus = NULL);     

    /** Get the number of channels in the cache file.
      * \param pStatus  The FbxStatus object to hold error codes.
      * \return         The number of animation channels in the cache file.
      */
      int  GetChannelCount(FbxStatus* pStatus = NULL);

    /** Get the channel name for a specific channel index.
      * \param pChannelIndex     The index of the animation channel, between 0 and GetChannelCount().
      * \param pChannelName      Returns the name of the requested channel.
      * \param pStatus           The FbxStatus object to hold error codes.
      * \return                  \c true if successful, \c false otherwise.
      *                          functions for error details.
      */
      bool GetChannelName(int pChannelIndex, FbxString& pChannelName, FbxStatus* pStatus = NULL);

    /** Get the data type of the specified channel.
      * \param pChannelIndex    The index of the channel.
      * \param pChannelType     The channel's data type.
      * \param pStatus          The FbxStatus object to hold error codes.
      * \return                 \c true if successful, \c false otherwise.
      *                         functions for error details.
      */
      bool GetChannelDataType(int pChannelIndex, EMCDataType& pChannelType, FbxStatus* pStatus = NULL);

    /** Get the index of the specified channel.
      * \param pChannelName     The name of the channel.
      * \param pStatus          The FbxStatus object to hold error codes.
      * \return                 The index of the channel in the cache file, or -1 if an error occurred. 
      */
     int  GetChannelIndex(const char* pChannelName, FbxStatus* pStatus = NULL);

    /** Get the Animation Range of the specified channel.
      * \param pChannelIndex    The index of the channel.
      * \param pTimeStart       The start time of the channel's animation.
      * \param pTimeEnd         The end time of the channel's animation.
      * \param pStatus          The FbxStatus object to hold error codes.
      * \return                 \c true if successful, \c false otherwise.
      */
     bool GetAnimationRange(int pChannelIndex, FbxTime &pTimeStart /Out/, FbxTime &pTimeEnd /Out/, FbxStatus* pStatus = NULL);

    /** Get the cache type.
      * \param pFileCount       The cache type.
      * \param pStatus          The FbxStatus object to hold error codes.
      * \return                 \c true if successful, \c false otherwise.
      */
     bool GetCacheType(EMCFileCount& pFileCount, FbxStatus* pStatus = NULL);

    /** Get the cache channel interpretation.
      * \param pChannelIndex    The index of the animation channel, between 0 and GetChannelCount().
      * \param pInterpretation  The channel interpretation, user-defined.
      * \param pStatus          The FbxStatus object to hold error codes.
      * \return                 \c true if successful, \c false otherwise.
      */
     bool GetChannelInterpretation(int pChannelIndex, FbxString& pInterpretation /Out/, FbxStatus* pStatus = NULL);

	enum EMCSamplingType
	{
		eSamplingRegular,	//!< Regular sampling.
		eSamplingIrregular	//!< Irregular sampling.
	};

    /** Get the cache channel sampling type.
      * \param pChannelIndex    The index of the animation channel, between 0 and GetChannelCount().
      * \param pSamplingType    The sampling type of the channel.
      * \param pStatus          The FbxStatus object to hold error codes.
      * \return                 \c true if successful, \c false otherwise.
      */
     bool GetChannelSamplingType(int pChannelIndex, EMCSamplingType& pSamplingType /Out/, FbxStatus* pStatus = NULL);

    /** Get the cache channel sampling rate, in frames per second.
      * \param pChannelIndex   The index of the animation channel, between 0 and GetChannelCount().
      * \param pSamplingRate   The sampling rate of the channel.  The channel must have a regular
      *                        sampling type.
      * \param pStatus         The FbxStatus object to hold error codes.
      * \return                \c true if successful, \c false otherwise. 
      */
     bool GetChannelSamplingRate(int pChannelIndex, FbxTime& pSamplingRate /Out/, FbxStatus* pStatus = NULL);

    /** Get the number of data points for a channel.
      * \param pChannelIndex   The index of the animation channel, between 0 and GetChannelCount().
      * \param pSampleCount    Number of available samples.
      * \param pStatus         The FbxStatus object to hold error codes.
      * \return                \c true if successful, \c false otherwise.
      */
     bool GetChannelSampleCount(int pChannelIndex, unsigned int& pSampleCount /Out/, FbxStatus* pStatus = NULL);

    /** Get the number of points animated in the cache file, for a channel, for a given time.
      * \param pChannelIndex   The index of the animation channel, between 0 and GetChannelCount().
      * \param pTime           Reference time; must be within the boundaries of the animation.
      * \param pPointCount     Number of available points.
      * \param pStatus         The FbxStatus object to hold error codes.
      * \return                \c true if successful, \c false otherwise.
      */
      bool GetChannelPointCount(int pChannelIndex, FbxTime pTime, unsigned int& pPointCount /Out/, FbxStatus* pStatus = NULL);

    /** Returns the number of cache data files.
      * \param pStatus  The FbxStatus object to hold error codes.
      * \return     The count returned does not include the main cache file, and depends on the
      *             cache type.  Will return -1 if point cache support is not enabled.
      */
      int  GetCacheDataFileCount(FbxStatus* pStatus = NULL) const;

    /** Get the nth cache file name.
      * \param pIndex                Index of the cache file to return; index is zero-based, and must be
      *                              less than GetCacheDataFileCount().
      * \param pRelativeFileName     Return the point cache file name, relative to the FBX File name.
      * \param pAbsoluteFileName     Return the point cache file absolute path.
      * \param pStatus               The FbxStatus object to hold error codes.
      * \return                      \c true if successful, \c false otherwise. See the error management
      *                              functions for error details.
      */
    bool GetCacheDataFileName(int pIndex, FbxString& pRelativeFileName /Out/, FbxString& pAbsoluteFileName /Out/, FbxStatus* pStatus = NULL);

    /** Enable multi-channel fetching.
      * \param pMultiChannelFetching Enable/disable multi-channel fetching. When multi-channel is enabled,
      *                              any load of data on a channel at a specific time will pre-fetch data
      *                              from all channels, for that specific time.  This can reduce disk
      *                              access, and increase performance (but requires more memory).
      * \param pStatus               The FbxStatus object to hold error codes.
      * \return                      \c true if successful, \c false otherwise.
      */
      bool EnableMultiChannelFetching(bool pMultiChannelFetching, FbxStatus* pStatus = NULL);
    
    /** Get the next time where data is stored.
      * \param pCurTime        Current time; must be within the boundaries of the animation time.
      * \param pNextTime       Next time (filled if the function is successful).
      * \param pChannelIndex   The index of the animation channel, between 0 and GetChannelCount().
      *                        If pChannel is left at -1, get the next time for any channel.
      * \param pStatus         The FbxStatus object to hold error codes.
      * \return                \c true if successful, \c false otherwise.
      */
      bool GetNextTimeWithData(FbxTime pCurTime, FbxTime& pNextTime, int pChannelIndex = -1, FbxStatus* pStatus = NULL);
        
    /** Get the number of data points the channel contains.
      * \param pChannelIndex   The index of the animation channel, between 0 and GetChannelCount().
      * \param pStatus         The FbxStatus object to hold error codes.
      * \return                The number of the channel's data points.
      */
     int GetDataCount(int pChannelIndex, FbxStatus* pStatus = NULL);
        
    /** Get the time of the specified data point.
      * \param pChannelIndex   The index of the animation channel, between 0 and GetChannelCount().
      * \param pDataIndex      Index of the data point.
      * \param pTime           Time of the data point (filled if the function is successful).
      * \param pStatus         The FbxStatus object to hold error codes.
      * \return                \c true if successful, \c false otherwise.
      */
     bool GetDataTime(int pChannelIndex, unsigned int pDataIndex, FbxTime& pTime, FbxStatus* pStatus = NULL);

    bool Write(int pChannelIndex, FbxTime& pTime, SIP_PYLIST pBuffer, unsigned int pPointCount);
%MethodCode
        FbxCache::EMCDataType lDataType;
        if (sipCpp->GetChannelDataType(a0, lDataType))
        {
            if (lDataType == FbxCache::eDoubleVectorArray)
            {
                double * lBuffer = new double[a3 * 3];
                for (int i = 0; i < a3 * 3; ++i)
                {
                    lBuffer[i] = PyFloat_AsDouble(PyList_GET_ITEM(a2, i));
                }
                sipCpp->Write(a0, *a1, lBuffer, a3);
                delete [] lBuffer;
                Py_RETURN_TRUE;
            }
            else if (lDataType == FbxCache::eInt32Array)
            {
                int * lBuffer = new int[a3];
                for (int i = 0; i < a3; ++i)
                {
                    lBuffer[i] = PyLong_AsLong(PyList_GET_ITEM(a2, i));
                }
                sipCpp->Write(a0, *a1, lBuffer, a3);
                delete [] lBuffer;
                Py_RETURN_TRUE;
            }
            Py_RETURN_FALSE;
        }        
%End

    SIP_PYLIST Read(int pChannelIndex, FbxTime& pTime, unsigned int pPointCount);
%MethodCode
        FbxCache::EMCDataType lDataType;
        if (sipCpp->GetChannelDataType(a0, lDataType))
        {            
            if (lDataType == FbxCache::eDoubleVectorArray)
            {
                if ((sipRes = PyList_New(a2 * 3)) == NULL)
                    return NULL;

                double * lBuffer = new double[a2 * 3];
                sipCpp->Read(a0, *a1, lBuffer, a2);
                for (int i = 0; i < a2 * 3; ++i)
                {
                    PyList_SET_ITEM(sipRes, i, PyFloat_FromDouble(lBuffer[i]));
                }
                
                delete [] lBuffer;
            }
            else if (lDataType == FbxCache::eInt32Array)
            {
                if ((sipRes = PyList_New(a2)) == NULL)
                    return NULL;

                int * lBuffer = new int[a2];
                sipCpp->Read(a0, *a1, lBuffer, a2);
                for (int i = 0; i < a2; ++i)
                {
                    PyList_SET_ITEM(sipRes, i, PyLong_FromLong(lBuffer[i]));
                }
                
                delete [] lBuffer;
            }
            else
            {
                return NULL;
            }
        }
%End

protected:
    virtual ~FbxCache();
};
