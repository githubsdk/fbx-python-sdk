class FbxBoundary : FbxGeometry /NoDefaultCtors/
{
public:
    static FbxClassId ClassId;
    static FbxBoundary* Create(FbxManager *pManager, const char *pName);
    virtual FbxClassId GetClassId() const;
    static FbxBoundary* Create(FbxObject *pContainer,  const char *pName);

    bool operator==(const FbxBoundary & pObj);

    static const char* sOuterFlag;
    FbxPropertyBool1 OuterFlag;    

    void AddCurve( FbxNurbsCurve* pCurve );
    int GetCurveCount() const;
    FbxNurbsCurve* GetCurve( int pIndex );

    virtual FbxNodeAttribute::EType GetAttributeType() const;

    bool IsPointInControlHull(const FbxVector4& pPoint );

    FbxVector4 ComputePointInBoundary();

protected:
    virtual ~FbxBoundary();
};

class FbxTrimNurbsSurface : FbxGeometry /NoDefaultCtors/
{
public:
    static FbxClassId ClassId;
    static FbxTrimNurbsSurface* Create(FbxManager *pManager, const char *pName);
    virtual FbxClassId GetClassId() const;
    static FbxTrimNurbsSurface* Create(FbxObject *pContainer,  const char *pName);

    bool operator==(const FbxTrimNurbsSurface & pObj);
    
    virtual FbxNodeAttribute::EType GetAttributeType() const;

    int GetTrimRegionCount() const;
    void BeginTrimRegion();
    void EndTrimRegion();

    bool AddBoundary( FbxBoundary* pBoundary );
    FbxBoundary* GetBoundary( int pIndex, int pRegionIndex = 0 );
    int GetBoundaryCount(int pRegionIndex = 0) const;

    void SetNurbsSurface(const FbxNurbsSurface* pNurbs );
    FbxNurbsSurface* GetNurbsSurface();

    void SetFlipNormals( bool pFlip );
    bool GetFlipNormals() const;

    virtual int GetControlPointsCount() const;
    virtual void SetControlPointAt(FbxVector4 &pCtrlPoint, FbxVector4 &pNormal , int pIndex, bool pI2DSearch = false);
    virtual void SetControlPointAt(const FbxVector4 &pCtrlPoint, int pIndex);
    
     /** Returns the NURBS surface's control points.
       * \param pStatus         The FbxStatus object to hold error codes.
       */
    virtual FbxVector4* GetControlPoints(FbxStatus* pStatus = NULL) const;
    
protected:
    virtual ~FbxTrimNurbsSurface();
};
