class FbxCameraStereo : FbxCamera /NoDefaultCtors/
{
public:
    static FbxClassId ClassId;
    static FbxCameraStereo* Create(FbxManager *pManager, const char *pName);
    virtual FbxClassId GetClassId() const;
    static FbxCameraStereo* Create(FbxObject *pContainer,  const char *pName);

    bool operator==(const FbxCameraStereo & pObj);
    
    virtual FbxNodeAttribute::EType GetAttributeType() const;
    void Reset();

    enum EStereoType
    {
        eNone,		//!< Disable the stereo effect.(Default value)
        eConverged,	//!< Computes the zero parallax plane by toeing in the cameras.
        eOffAxis,	//!< Computes the convergence plane by shifting the frustum using camera film back.
        eParallel	//!< A parallel camera setup where there is effectively no convergence plane.
    };

    FbxCamera* GetLeftCamera();
    FbxCamera* GetRightCamera();
    bool SetLeftCamera(FbxCamera* pCamera);
    bool SetRightCamera(FbxCamera* pCamera);
    FbxAMatrix GetLeftCameraLocalMatrix();
    FbxAMatrix GetLeftCameraGlobalMatrix();
    FbxAMatrix GetRightCameraLocalMatrix();
    FbxAMatrix GetRightCameraGlobalMatrix();
    double ReevaluateLeftCameraFilmOffsetX();
    double ReevaluateRightCameraFilmOffsetX();
    
    FbxPropertyFbxCameraStereoEStereoType    Stereo;
    FbxPropertyDouble1                       InteraxialSeparation;
    FbxPropertyDouble1                       ZeroParallax;
    FbxPropertyDouble1                       ToeInAdjust;
    FbxPropertyDouble1                       FilmOffsetRightCam;
    FbxPropertyDouble1                       FilmOffsetLeftCam;
    FbxPropertyFbxReference                  RightCamera;
    FbxPropertyFbxReference                  LeftCamera;
    FbxPropertyString                        PrecompFileName;
    FbxPropertyString                        RelativePrecompFileName;    

protected:
    virtual ~FbxCameraStereo();
};