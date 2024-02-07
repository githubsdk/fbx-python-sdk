class FbxPatch : FbxGeometry /NoDefaultCtors/
{
public:
        enum EType
        {
            eBezier,
            eBezierQuadric,
            eCardinal,
            eBSpline,
            eLinear
        };

    static FbxClassId ClassId;
    static FbxPatch* Create(FbxManager *pManager, const char *pName);
    virtual FbxClassId GetClassId() const;
    static FbxPatch* Create(FbxObject *pContainer,  const char *pName);

    bool operator==(const FbxPatch & pObj);
    
    virtual FbxNodeAttribute::EType GetAttributeType() const;
    void Reset();

    void SetSurfaceMode(FbxGeometry::ESurfaceMode pMode);
    FbxGeometry::ESurfaceMode GetSurfaceMode() const;

    void InitControlPoints(int pUCount, EType pUType, int pVCount, EType pVType);

    int GetUCount() const;
    int GetVCount() const;

    EType GetPatchUType() const;
    EType GetPatchVType () const;

    void SetStep(int pUStep, int pVStep);
    int GetUStep() const;
    int GetVStep() const;

    void SetClosed(bool pU, bool pV);
    bool GetUClosed() const;
    bool GetVClosed() const;

    void SetUCapped(bool pUBottom, bool pUTop);
    bool GetUCappedBottom() const;
    bool GetUCappedTop() const;
    void SetVCapped(bool pVBottom, bool pVTop);
    bool GetVCappedBottom() const;
    bool GetVCappedTop() const;

    //virtual bool ContentWriteTo(FbxStream& pStream) const;
    //virtual bool ContentReadFrom(const FbxStream& pStream);

protected:
    virtual ~FbxPatch();
};