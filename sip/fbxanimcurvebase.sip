/** This is the base class for implementing animation key objects.
  * \nosubgrouping
  *
  * See FbxAnimCurveKey and FbxAnimCurveKFCurveKey for the implemented class.
  */
class FbxAnimCurveKeyBase
{
public:
    /** Data member representing time value.
    */
    FbxTime mTime;

    /** Constructor.
    */
    FbxAnimCurveKeyBase();

    /** Destructor.
    */
    virtual ~FbxAnimCurveKeyBase();

    /** Get time value.
    * \return Time value.
    */
    virtual FbxTime GetTime() const;

    /** Set time value.
    * \param pTime Time value to set.
    */
    virtual void  SetTime(const FbxTime& pTime);
};

/** This is the base class for implementing animation curves.
  * \nosubgrouping
  * It is a pure virtual class that defines the general interface to animation
  * key management and manipulation.
  *
  * See FbxAnimCurve and FbxAnimCurveKFCurve for full implemented class.
  */
class FbxAnimCurveBase : FbxObject /NoDefaultCtors/
{
public:
    static FbxClassId ClassId;
    static FbxAnimCurveBase* Create(FbxManager *pManager, const char *pName);
    virtual FbxClassId GetClassId() const;
    bool operator==(const FbxAnimCurveBase & pObj);

    /**
      * \name Key management.
      *
      */
    //@{
        //! Remove all the keys and free buffer memory.
        virtual void KeyClear () = 0;
        
        //! Get the number of keys.
        virtual int KeyGetCount () const = 0;

        /** Add a key at given time.
          * \param pTime Time to add the key.
          * \param pKey Key to add.
          * \param pLast Function curve index to speed up search. If this 
          *              function is called in a loop, initialize this value to 0 and let it 
          *              be updated by each call.
          * \return Index of the key at given time, no matter if it was added 
          *         or already present.
          */
        virtual int KeyAdd (FbxTime pTime, FbxAnimCurveKeyBase& pKey, int* pLast = NULL) = 0;

        /** Set key at given index.
          * \param pIndex Index of where the key should be set
          * \param pKey the key to set
          * \return true if key time is superior to previous key and inferior 
          *         to next key.
          * \remarks Result is undetermined if function curve has no key or index 
          *          is out of bounds.
          */
        virtual bool KeySet(int pIndex, FbxAnimCurveKeyBase& pKey) = 0;

        /** Remove key at given index.
          * \param pIndex Index of key to remove.
          * \return true on success.
          */
        virtual bool KeyRemove(int pIndex) = 0;

        /** Remove all the keys in the given range.
          * \param pStartIndex Index of the first key to remove (inclusive).
          * \param pEndIndex Index of the last key to remove (inclusive).
          * \return true on success.
          */
        virtual bool KeyRemove(int pStartIndex, int pEndIndex) = 0;

    //@}

    /**
    * \name Key Time Manipulation
    */
    //@{
        /** Get key time
          * \param pKeyIndex Key index
          * \return Key time (time at which this key is occurring).
          */
        virtual FbxTime KeyGetTime(int pKeyIndex) const;

        /** Set key time.
          * \param pKeyIndex Key index
          * \param pTime Key time (time at which this key is occurring).
          */
        virtual void KeySetTime(int pKeyIndex, FbxTime pTime) = 0;

    //@}

    /**
    * \name Extrapolation 
    * Extrapolation defines the function curve value before and after the keys.
    * Pre-extrapolation defines the function curve value before first key.
    * Post-extrapolation defines the function curve value after last key.
    * <ul><li>CONSTANT means a constant value matching the first/last key.
    *     <li>REPETITION means the entire function curve is looped.
    *     <li>MIRROR_REPETITION means the entire function curve is looped once backward, once forward and so on. 
    *     <li>KEEP_SLOPE means a linear function with a slope matching the first/last key.</ul>
    */
    //@{
        enum EExtrapolationType
		{
            eConstant = 1,
            eRepetition = 2,
            eMirrorRepetition = 3,
            eKeepSlope = 4
        };


        /** Set pre-extrapolation mode.
          * \param pExtrapolation The pre-extrapolation mode to set.
          */
        void SetPreExtrapolation(EExtrapolationType pExtrapolation);
            
        /** Get pre-extrapolation mode.
          * \return The current pre-extrapolation mode.
          */
        EExtrapolationType GetPreExtrapolation() const;
        
        /** Set pre-extrapolation count.
          * \param pCount Number of repetitions if pre-extrapolation mode is
          *       REPETITION or MIRROR_REPETITION.
          */
        void SetPreExtrapolationCount(unsigned long pCount);
        
        /** Get pre-extrapolation count.
          * \return Number of repetitions if pre-extrapolation mode is
          *         REPETITION or MIRROR_REPETITION.
          */
        unsigned long GetPreExtrapolationCount() const;
        
        /** Set post-extrapolation mode.
          * \param pExtrapolation The post-extrapolation mode to set.
          */
        void SetPostExtrapolation(EExtrapolationType pExtrapolation);
        
        /** Get post-extrapolation mode.
          * \return The current post-extrapolation mode.
          */
        EExtrapolationType GetPostExtrapolation() const;
        
        /** Set post-extrapolation count.
          * \param pCount Number of repetitions if post-extrapolation mode is
          *               REPETITION or MIRROR_REPETITION.
          */
        void SetPostExtrapolationCount(unsigned long pCount);
            
        /** Get post-extrapolation count.
          * \return Number of repetitions if post-extrapolation mode is
          *         REPETITION or MIRROR_REPETITION.
          */
        unsigned long GetPostExtrapolationCount() const;
    //@}

    /**
      * \name Evaluation and Analysis
      */
    //@{
        /** Evaluate curve value at a given time.
          * \param pTime Time of evaluation.
          * \param pLast Index of the last processed key. If this 
          *              function is called in a loop, initialize this value to 0 and let it 
          *              be updated by each call.
          * \return Evaluated curve value.
          * \remarks This function should take extrapolation into account.
          */
          virtual float Evaluate (FbxTime pTime, int* pLast = NULL) = 0;

        /** Evaluate curve value at the given key index.
          * \param pIndex Any value between 0 and KFCurve::KeyGetCount() - 1.
          *               If this index falls between keys, the curve value must
          *               should be interpolated based on the surrounding keys
          * \return Evaluated curve value.
          */
        virtual float EvaluateIndex( double pIndex) = 0;
    //@}

    /**
      * \name Utility functions.
      *
      */
    //@{
        /** Find out start and end time of the animation curve.
          * This function retrieves the Curve's time span.
          * \param pTimeInterval Reference to receive start time and end time.
          * \return \c true on success, \c false otherwise.
          */
        virtual bool GetTimeInterval(FbxTimeSpan& pTimeInterval);
    //@}
    
protected:
	virtual ~FbxAnimCurveBase();    
};
