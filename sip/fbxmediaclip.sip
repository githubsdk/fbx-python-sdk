/** This is the base class for implementing media clip objects. Should not be used directly
  * \nosubgrouping
  *
  * See FbxAudio and FbxVideo for the implemented classes.
  */
class FbxMediaClip : FbxObject /NoDefaultCtors/
{
public:
    static FbxClassId ClassId;
    static FbxMediaClip* Create(FbxManager *pManager, const char *pName);
    virtual FbxClassId GetClassId() const;

    FbxPropertyDouble3 Color;
    FbxPropertyFbxTime ClipIn;
    FbxPropertyFbxTime ClipOut;
    FbxPropertyFbxTime Offset;
    FbxPropertyDouble1 PlaySpeed;
    FbxPropertyBool1 FreeRunning;
    FbxPropertyBool1 Loop;
    FbxPropertyBool1 Mute;
    FbxPropertyFbxMediaClipEAccessMode AccessMode;    

    bool operator==(const FbxMediaClip & pObj);
    
    //! Reset the media clip to default values.
    void Reset();
    
    /** Specify the media full filename.
      * \param pName     media full filename.
      * \return          \c True,if update successfully, \c false otherwise.
      */
    bool SetFileName(const char * pName);

    /** Retrieve the media full filename.
      * \return          Media full filename.
      */
    FbxString GetFileName ();

    /** Specify the media relative filename.
      * \param pName     Media relative filename.
      * \return          \c True, if update successfully, \c false otherwise.
      */
    bool SetRelativeFileName(const char * pName);

    /** Retrieve the media relative filename.
      * \return         Media relative filename.
      */
    const char* GetRelativeFileName();

	/** Set the clip color.
	  * The color property can be used to display media clips on the user interface. It has no
	  * impact on the data itself and only uses the RGB components.
	  * \param pColor	New color of the clip.
	  */
	void SetColor(FbxColor pColor);    

    /** Retrieve the clip color.
      * return Clip color.
      */
    FbxColor GetColor() const;    

    /** Set the play speed of the media clip.
      * \param pPlaySpeed     Playback speed of the clip.
      * \remarks             The parameter value is not checked. It is the responsibility
      *                      of the caller to deal with bad playback speed values.
      */
    void SetPlaySpeed(double pPlaySpeed);

    /** Retrieve the play speed of the media clip.
      * \return Playback     speed.
      */
    double GetPlaySpeed();

    /** Set the clip start time.
      * \param pTime	Start time of the media file.
      */
    void SetClipIn(FbxTime pTime);

    /** Retrieve the clip start time.
      * \return		The current clip start time.
      */
    FbxTime GetClipIn() const;

    /** Set the clip end time.
      * \param pTime	End time of the media file.
      */
    void SetClipOut(FbxTime pTime);

    /** Retrieve the clip start time.
      * \return		The current clip start time.
      */
    FbxTime GetClipOut() const;
    
    /** Set the time offset.
      * The offset can be used to shift the playback start time of the clip.
      * \param pTime     Time offset of the clip.
      */
    void SetOffset(FbxTime pTime);

    /* Retrieve the time offset.
     * \return     The current time shift.
     */
    FbxTime GetOffset();

    /** Set the Free Running state of the media clip.
      * The Free Running flag can be used by a client application to implement a
      * playback scheme that is independent of the main timeline.
      * \param pState     State of the Free running flag.
      */
    void SetFreeRunning(bool pState);

    /** Retrieve the Free Running state.
      * \return     Current free running flag.
      */
    bool GetFreeRunning();

    /** Set the Loop state of the media clip.
      * The Loop flag can be used by a client application to implement the loop
      * playback of the media clip.
      * \param pLoop     State of the loop flag.
      */
    void SetLoop(bool pLoop);

    /** Retrieve the Loop state.
      * \return     Current loop flag.
      */
    bool GetLoop();

    /** Set the Mute state of the media clip.
      * The Mute flag can be used by a client application to implement the muting
      * of the media clip.
      * \param pMute     State of the mute flag.
      */
    void SetMute(bool pMute);

    /** Retrieve the Mute state.
      * \return     Current mute flag.
      */
    bool GetMute() const;
    
	enum EAccessMode
	{
		eDisk,
		eMemory,
		eDiskAsync
	};

    /** Set the clip Access Mode.
      * \param pAccessMode     Clip access mode identifier.
      */
    void SetAccessMode(EAccessMode pAccessMode);

    /** Retrieve the clip Access Mode.
      * \return     Clip access mode identifier.
      */
    EAccessMode GetAccessMode();

protected:
    virtual ~FbxMediaClip();
};
