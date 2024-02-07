class FbxAxisSystem /NoDefaultCtors/
{
public:
    enum EUpVector
	{
        eXAxis = 1,
        eYAxis = 2,
        eZAxis = 3
    };
    
    enum EFrontVector
	{
        eParityEven = 1,
        eParityOdd = 2
    };

    enum ECoordSystem
	{
        eRightHanded,
        eLeftHanded
    };

    enum EPreDefinedAxisSystem
	{
        eMayaZUp,			/*!< UpVector = ZAxis, FrontVector = -ParityOdd, CoordSystem = RightHanded */
        eMayaYUp,			/*!< UpVector = YAxis, FrontVector =  ParityOdd, CoordSystem = RightHanded */
        eMax,				/*!< UpVector = ZAxis, FrontVector = -ParityOdd, CoordSystem = RightHanded */
        eMotionBuilder,		/*!< UpVector = YAxis, FrontVector =  ParityOdd, CoordSystem = RightHanded */
        eOpenGL,			/*!< UpVector = YAxis, FrontVector =  ParityOdd, CoordSystem = RightHanded */
        eDirectX,			/*!< UpVector = YAxis, FrontVector =  ParityOdd, CoordSystem = LeftHanded */
        eLightwave			/*!< UpVector = YAxis, FrontVector =  ParityOdd, CoordSystem = LeftHanded */
    };
    
    FbxAxisSystem(EUpVector pUpVector, EFrontVector pFrontVector, ECoordSystem pCoorSystem);
    FbxAxisSystem(const FbxAxisSystem& pAxisSystem);
    FbxAxisSystem(const EPreDefinedAxisSystem pAxisSystem);
    virtual ~FbxAxisSystem();
    
    bool operator==(const FbxAxisSystem& pAxisSystem)const;
    bool operator!=(const FbxAxisSystem& pAxisSystem)const;
    //FbxAxisSystem& operator=(const FbxAxisSystem& pAxisSystem);

    static const FbxAxisSystem MayaZUp;
    static const FbxAxisSystem MayaYUp;
    static const FbxAxisSystem Max;
    static const FbxAxisSystem Motionbuilder;
    static const FbxAxisSystem OpenGL;
    static const FbxAxisSystem DirectX;
    static const FbxAxisSystem Lightwave;

    void ConvertScene(FbxScene* pScene) const;
    void ConvertScene(FbxScene* pScene, FbxNode* pFbxRoot) const;
    
    EUpVector    GetUpVector( int & pSign ) const;
    EFrontVector GetFrontVector( int & pSign ) const;
    ECoordSystem GetCoorSystem() const;
    
    void ConvertChildren(FbxNode* pRoot, const FbxAxisSystem& pSrcSystem) const;
};