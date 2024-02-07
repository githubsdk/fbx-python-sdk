class FbxSkin : FbxDeformer /NoDefaultCtors/
{
public:
    static FbxClassId ClassId;
    static FbxSkin* Create(FbxManager *pManager, const char *pName);
    virtual FbxClassId GetClassId() const;
    static FbxSkin* Create(FbxObject *pContainer,  const char *pName);

    bool operator==(const FbxSkin & pObj);
    
    void SetDeformAccuracy(double pDeformAccuracy);
    double GetDeformAccuracy() const;
    bool SetGeometry(FbxGeometry* pGeometry);
    FbxGeometry* GetGeometry();
    bool AddCluster(FbxCluster* pCluster);
    FbxCluster* RemoveCluster(FbxCluster* pCluster);
    int GetClusterCount() const;
    FbxCluster* GetCluster(int pIndex);
    EDeformerType GetDeformerType()  const;
	
	enum EType
	{
		eRigid,
		eLinear,
		eDualQuaternion,
		eBlend
	};
	
	void SetSkinningType(EType pType);
	EType GetSkinningType() const;
	
	void AddControlPointIndex(int pIndex,  double pBlendWeight = 0);
    int GetControlPointIndicesCount() const;
    SIP_PYLIST GetControlPointIndices() const;
%MethodCode
    int* indices;
    int indicesCount;

    indices = sipCpp->GetControlPointIndices();
    indicesCount = sipCpp->GetControlPointIndicesCount();

    if ((sipRes = PyList_New(indicesCount)) == NULL)
        return NULL;

    for (int i = 0; i < indicesCount; ++i)
    {
        PyList_SET_ITEM(sipRes, i, PyLong_FromLong(*indices));
        indices++;
    }
%End

    SIP_PYLIST GetControlPointBlendWeights() const;
%MethodCode
    double* blendWeights;
    int indicesCount;

    blendWeights = sipCpp->GetControlPointBlendWeights();
    indicesCount = sipCpp->GetControlPointIndicesCount();

    if ((sipRes = PyList_New(indicesCount)) == NULL)
        return NULL;

    for (int i = 0; i < indicesCount; ++i)
    {
        PyList_SET_ITEM(sipRes, i, PyFloat_FromDouble(*blendWeights));
        blendWeights++;
    }
%End

    void SetControlPointIWCount(int pCount);

protected:
    virtual ~FbxSkin();
};
