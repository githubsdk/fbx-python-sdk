class FbxCluster : FbxSubDeformer /NoDefaultCtors/
{
public:
    static FbxClassId ClassId;
    static FbxCluster* Create(FbxManager *pManager, const char *pName);
    virtual FbxClassId GetClassId() const;
    static FbxCluster* Create(FbxObject *pContainer,  const char *pName);

    bool operator==(const FbxCluster & pObj);
    
    EType GetSubDeformerType() const;

    void Reset();

    enum ELinkMode
    {
		eNormalize,       /*!<	  In mode eNormalize, the sum of the weights assigned to a control point
		                          is normalized to 1.0. Setting the associate model in this mode is not
		                          relevant. The influence of the link is a function of the displacement of the
		                          link node relative to the node containing the control points.*/
        eAdditive,
		                  /*!<    In mode eAdditive, the sum of the weights assigned to a control point
		                          is kept as is. It is the only mode where setting the associate model is
		                          relevant. The influence of the link is a function of the displacement of
		                          the link node relative to the node containing the control points or,
		                          if set, the associate model. The weight gives the proportional displacement
		                          of a control point. For example, if the weight of a link over a control
		                          point is set to 2.0, a displacement of the link node of 1 unit in the X
		                          direction relative to the node containing the control points or, if set,
		                          the associate model, triggers a displacement of the control point of 2
		                          units in the same direction.*/
        eTotalOne   
		                  /*!<    Mode eTotalOne is identical to mode eNormalize except that the sum of the
		                          weights assigned to a control point is not normalized and must equal 1.0.*/
    };

    void SetLinkMode(ELinkMode pMode);
    ELinkMode GetLinkMode() const;

    void SetLink(const FbxNode* pNode);
    FbxNode* GetLink();

    void SetAssociateModel(FbxNode *pNode);
    FbxNode* GetAssociateModel() const;

    void AddControlPointIndex(int pIndex, double pWeight);
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

    SIP_PYLIST GetControlPointWeights() const;
%MethodCode
    double* weights;
    int indicesCount;

    weights = sipCpp->GetControlPointWeights();
    indicesCount = sipCpp->GetControlPointIndicesCount();

    if ((sipRes = PyList_New(indicesCount)) == NULL)
        return NULL;

    for (int i = 0; i < indicesCount; ++i)
    {
        PyList_SET_ITEM(sipRes, i, PyFloat_FromDouble(*weights));
        weights++;
    }
%End

    void SetControlPointIWCount(int pCount);

    void SetTransformMatrix(const FbxAMatrix& pMatrix);
    FbxAMatrix& GetTransformMatrix(FbxAMatrix& pMatrix) const;
    void SetTransformLinkMatrix(const FbxAMatrix& pMatrix);
    FbxAMatrix& GetTransformLinkMatrix(FbxAMatrix& pMatrix) const;
    void SetTransformAssociateModelMatrix(const FbxAMatrix& pMatrix);
    FbxAMatrix& GetTransformAssociateModelMatrix(FbxAMatrix& pMatrix) const;
    void SetTransformParentMatrix(const FbxAMatrix& pMatrix);
    FbxAMatrix& GetTransformParentMatrix(FbxAMatrix& pMatrix) const;
    bool IsTransformParentSet() const;

protected:
    virtual ~FbxCluster();
};