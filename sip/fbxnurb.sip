class FbxNurbs : FbxGeometry /NoDefaultCtors/
{
public:
    static FbxClassId ClassId;
    static FbxNurbs* Create(FbxManager *pManager, const char *pName);
    virtual FbxClassId GetClassId() const;
    static FbxNurbs* Create(FbxObject *pContainer,  const char *pName);

    bool operator==(const FbxNurbs & pObj);
    
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
        double* uknots;
        int ukonts_count;
    
        uknots = sipCpp->GetUKnotVector();
        ukonts_count = sipCpp->GetUKnotCount();
    
        // Create the Python list of the correct length.
        if ((sipRes = PyList_New(ukonts_count)) == NULL)
            return NULL;
    
        // Go through each element in the C++ instance and convert it to the
        // corresponding Python object.
        for (int i = 0; i < ukonts_count; ++i)
        {
            PyList_SET_ITEM(sipRes, i, PyFloat_FromDouble(*uknots));
            uknots++;
        }
%End
    void SetUKnotVector(SIP_PYLIST lList);
%MethodCode    
        double* uknots = sipCpp->GetUKnotVector();
        int ukonts_count = sipCpp->GetUKnotCount();
        
        for (int i = 0; i < ukonts_count; ++i)
        {
            *uknots = PyFloat_AsDouble(PyList_GET_ITEM(a0, i));
            uknots++;
        }
%End
    
    int GetVKnotCount() const;
    SIP_PYLIST GetVKnotVector() const;
%MethodCode
        double * vknots = sipCpp->GetVKnotVector();
        int vkonts_count = sipCpp->GetVKnotCount();
    
        // Create the Python list of the correct length.
        if ((sipRes = PyList_New(vkonts_count)) == NULL)
            return NULL;
    
        // Go through each element in the C++ instance and convert it to the
        // corresponding Python object.
        for (int i = 0; i < vkonts_count; ++i)
        {
            PyList_SET_ITEM(sipRes, i, PyFloat_FromDouble(*vknots));
            vknots++;
        }
%End
    void SetVKnotVector(SIP_PYLIST lList);
%MethodCode
        double* vknots;
        int vkonts_count;
    
        vknots = sipCpp->GetVKnotVector();
        vkonts_count = sipCpp->GetVKnotCount();
        
        for (int i = 0; i < vkonts_count; ++i)
        {
            *vknots = PyFloat_AsDouble(PyList_GET_ITEM(a0, i));
            vknots++;
        }
%End
    
    SIP_PYLIST GetUMultiplicityVector() const;
%MethodCode
    int * vector = sipCpp->GetUMultiplicityVector();
    int count = sipCpp->GetUCount();

    if ((sipRes = PyList_New(count)) == NULL)
        return NULL;

    for (int i = 0; i < count; ++i)
    {
        PyList_SET_ITEM(sipRes, i, PyFloat_FromDouble(*vector));
        vector++;
    }
%End
    SIP_PYLIST GetVMultiplicityVector() const;
%MethodCode
    int * vector = sipCpp->GetVMultiplicityVector();
    int count = sipCpp->GetVCount();

    if ((sipRes = PyList_New(count)) == NULL)
        return NULL;

    for (int i = 0; i < count; ++i)
    {
        PyList_SET_ITEM(sipRes, i, PyFloat_FromDouble(*vector));
        vector++;
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
    bool GetApplyFlip() const;

protected:
    virtual ~FbxNurbs();
};
