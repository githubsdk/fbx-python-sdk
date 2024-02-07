class FbxNurbsCurve : FbxGeometry /NoDefaultCtors/
{
public:
    static FbxClassId ClassId;
    static FbxNurbsCurve* Create(FbxManager *pManager, const char *pName);
    virtual FbxClassId GetClassId() const;
    static FbxNurbsCurve* Create(FbxObject *pContainer,  const char *pName);

    bool operator==(const FbxNurbsCurve & pObj);
    
    virtual FbxNodeAttribute::EType GetAttributeType() const;

	enum EDimension
	{
		e2D = 2,
		e3D
	};

	enum EType
	{
		eOpen,
		eClosed,
		ePeriodic
	};

    void InitControlPoints( int pCount, EType pVType );
    
    SIP_PYLIST GetKnotVector() const;
%MethodCode
    double * knots = sipCpp->GetKnotVector();
    int knotcount = sipCpp->GetKnotCount();

    if ((sipRes = PyList_New(knotcount)) == NULL)
        return NULL;

    for (int i = 0; i < knotcount; ++i)
    {
        PyList_SET_ITEM(sipRes, i, PyFloat_FromDouble(*knots));
        knots++;
    }
%End
    int GetKnotCount() const;
    void SetOrder( int pOrder );
    int GetOrder() const;

    void SetDimension( EDimension pDimension );
    EDimension GetDimension() const;

    bool IsRational(); 

    int GetSpanCount();

    EType GetType() const;
    bool IsPolyline() const;

    bool IsBezier();

protected:
    virtual ~FbxNurbsCurve();
};