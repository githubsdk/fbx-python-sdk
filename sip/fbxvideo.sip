class FbxVideo : FbxMediaClip /NoDefaultCtors/
{
public:
    static FbxClassId ClassId;
    static FbxVideo* Create(FbxManager *pManager, const char *pName);
    virtual FbxClassId GetClassId() const;
    static FbxVideo* Create(FbxObject *pContainer,  const char *pName);

    FbxPropertyBool1   ImageSequence;
    FbxPropertyInteger1 ImageSequenceOffset;
    FbxPropertyDouble1 FrameRate;
    FbxPropertyInteger1 LastFrame;
    FbxPropertyInteger1 Width;
    FbxPropertyInteger1 Height;
    FbxPropertyInteger1 StartFrame;
    FbxPropertyInteger1 StopFrame;
    FbxPropertyFbxVideoEInterlaceMode InterlaceMode;

    bool operator==(const FbxVideo & pObj);
    
    //! Reset the video to default values.
    void Reset();
    
    /** Set the use of MipMap on the video.
      * \param pUseMipMap If \c true, use MipMap on the video.
      */
    void ImageTextureSetMipMap(bool pUseMipMap);

    /** Retrieve use MipMap state.
      * \return          MipMap flag state.
      */
    bool ImageTextureGetMipMap();

    /** Retrieve the Frame rate of the video clip.
      * \return        Frame rate.
      */
    double GetFrameRate();

    /** Retrieve the last frame of the video clip.
      * \return       Last frame number.
      */
    int GetLastFrame();

    /** Retrieve the clip width.
      * \return      Video image width.
      */
    int GetWidth();

    /** Retrieve the clip height.
      * \return      Video image height.
      */
    int GetHeight();

    /** Set the start frame of the video clip.
      * \param pStartFrame     Start frame number.
      * \remarks               The parameter value is not checked. It is the responsibility
      *                        of the caller to deal with bad frame numbers.
      */
    void SetStartFrame(int pStartFrame);

    /** Retrieve the start frame of the video clip.
      * \return     Start frame number.
      */
    int GetStartFrame();

    /** Set the stop frame of the video clip.
      * \param pStopFrame     Stop frame number.
      * \remarks              The parameter value is not checked. It is the responsibility
      *                       of the caller to deal with bad frame numbers.
      */
    void SetStopFrame(int pStopFrame);

    /** Retrieve the stop frame of the video clip.
      * \return     Stop frame number.
      */
    int GetStopFrame();

    /** \enum EInterlaceMode Video interlace modes.
      * - \e Node
      * - \e Fields
      * - \e HalfEven
      * - \e HalfOdd
      * - \e FullEven
      * - \e FullOdd
      * - \e FullEvenOdd
      * - \e FullOddEven
      */
	enum EInterlaceMode
	{
		eNone,           //!< Progressive frame (full frame).
		eFields,         //!< Alternate even/odd fields.
		eHalfEven,       //!< Half of a frame, even fields only.
		eHalfOdd,        //!< Half of a frame, odd fields only.
		eFullEven,       //!< Extract and use the even field of a full frame.
		eFullOdd,        //!< Extract and use the odd field of a full frame.
		eFullEvenOdd,    //!< Extract eFields and make full frame with each one beginning with Odd (60fps).
		eFullOddEven     //!< Extract eFields and make full frame with each one beginning with Even (60fps).
	};

    /** Set the Interlace mode.
      * \param pInterlaceMode     Interlace mode identifier.
      */
    void SetInterlaceMode(EInterlaceMode pInterlaceMode);

    /** Retrieve the Interlace mode
      * \return     Interlace mode identifier.
      */
    EInterlaceMode GetInterlaceMode();

protected:
    virtual ~FbxVideo();
};
