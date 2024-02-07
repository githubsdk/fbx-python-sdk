class FbxAnimStack : FbxCollection /NoDefaultCtors/
{
public:
    static FbxClassId ClassId;
    static FbxAnimStack* Create(FbxManager *pManager, const char *pName);
    virtual FbxClassId GetClassId() const;

    bool operator==(const FbxAnimStack & pObj);
    static FbxAnimStack* Create(FbxObject *pContainer,  const char *pName);
    
	FbxPropertyString Description;
	FbxPropertyFbxTime LocalStart;
	FbxPropertyFbxTime LocalStop;
	FbxPropertyFbxTime ReferenceStart;
	FbxPropertyFbxTime ReferenceStop;
  
    /** Reset the object time spans either to their default values or from the pTakeInfo structure if provided.
      * \param pTakeInfo The take info to be used during reset.
      */
    void Reset(const FbxTakeInfo* pTakeInfo = NULL);
    
    /** Get the LocalStart and LocalStop time properties as a FbxTimeSpan.
      * \return The current local time span.
      */
    FbxTimeSpan GetLocalTimeSpan() const;

    /** Set the LocalStart and LocalStop time properties from a FbxTimeSpan.
      * \param pTimeSpan The new local time span.
      */
    void SetLocalTimeSpan(FbxTimeSpan& pTimeSpan);

    /** Get the ReferenceStart and ReferenceStop time properties as a FbxTimeSpan.
      * \return The current reference time span.
      */
    FbxTimeSpan GetReferenceTimeSpan() const;

    /** Set the ReferenceStart and ReferenceStop time properties from a FbxTimeSpan.
      * \param pTimeSpan The new reference time span.
      */
    void SetReferenceTimeSpan(FbxTimeSpan& pTimeSpan);
   
    /** Bake all the animation layers on the base layer.
      * This function will process all the properties on every animation layer and will generate a resampled set of
      * animation keys (representing the layers's evaluated result) on the base layer. Once this operation is completed
      * successfully, all the layers (except the base one) are destroyed. Properties that are only defined on the base 
      * layer will remain unaffected by the resampling. The stack local timespan is updated with the overall animation range.
      * 
      * \param pEvaluator The layer evaluator. This is the engine that evaluates the overall result of any given
      *                   property according to the layers flags.
      * \param pStart   The start time of the resampling range.
      * \param pStop    The stop time of the resampling range.
      * \param pPeriod  The time increment for the resampling.
      * \return \c True if the operation was successful and \c false in case of errors.
      * \remarks If this AnimStack contains only one AnimLayer, the function will return false and do nothing.
      */
    bool BakeLayers(FbxAnimEvaluator* pEvaluator, FbxTime pStart, FbxTime pStop, FbxTime pPeriod);

protected:
    virtual ~FbxAnimStack();
};
