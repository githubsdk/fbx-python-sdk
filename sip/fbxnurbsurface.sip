class FbxNurbsSurface : FbxGeometry /NoDefaultCtors/
{
public:
    static FbxClassId ClassId;
    static FbxNurbsSurface* Create(FbxManager *pManager, const char *pName);
    virtual FbxClassId GetClassId() const;
    static FbxNurbsSurface* Create(FbxObject *pContainer,  const char *pName);

    bool operator==(const FbxNurbsSurface & pObj);
    
    virtual FbxNodeAttribute::EType GetAttributeType() const;
    void Reset();

    void SetSurfaceMode(FbxGeometry::ESurfaceMode pMode);
    ESurfaceMode GetSurfaceMode() const;

    enum EType
    {
        ePeriodic,
        eClosed,
        eOpen
    };

    void InitControlPoints(int pUCount, EType pUType, int pVCount, EType pVType);
    
    int GetUCount() const;
    int GetVCount() const;
    EType GetNurbsUType() const;
    EType GetNurbsVType() const;

    int GetUKnotCount() const;
    SIP_PYLIST GetUKnotVector() const;
%MethodCode
    double * uknots = sipCpp->GetUKnotVector();
    int uknotcount = sipCpp->GetUKnotCount();

    if ((sipRes = PyList_New(uknotcount)) == NULL)
        return NULL;

    for (int i = 0; i < uknotcount; ++i)
    {
        PyList_SET_ITEM(sipRes, i, PyFloat_FromDouble(*uknots));
        uknots++;
    }
%End
    int GetVKnotCount() const;
    SIP_PYLIST GetVKnotVector() const;
%MethodCode
    double * vknots = sipCpp->GetVKnotVector();
    int vknotcount = sipCpp->GetVKnotCount();

    if ((sipRes = PyList_New(vknotcount)) == NULL)
        return NULL;

    for (int i = 0; i < vknotcount; ++i)
    {
        PyList_SET_ITEM(sipRes, i, PyFloat_FromDouble(*vknots));
        vknots++;
    }
%End

    void SetOrder(FbxUInt32 pUOrder, FbxUInt32 pVOrder);
    int GetUOrder() const;
    int GetVOrder() const;

    void SetStep(int pUStep, int pVStep);
    int GetUStep() const;
    int GetVStep() const;

    int GetUSpanCount() const;
    int GetVSpanCount() const;

    void SetApplyFlipUV(bool pFlag);
    bool GetApplyFlipUV() const;
    void SetApplyFlipLinks(bool pFlag);
    bool GetApplyFlipLinks() const;
    bool GetApplyFlip() const ;

    void AddCurveOnSurface( FbxNode* pCurve );
    FbxNode* GetCurveOnSurface( int pIndex );
    int GetCurveOnSurfaceCount() const;
    bool RemoveCurveOnSurface( FbxNode* pCurve );

    bool IsRational();

protected:
    virtual ~FbxNurbsSurface();
};