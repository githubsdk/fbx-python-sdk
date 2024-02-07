class FbxSubDeformer : FbxObject /NoDefaultCtors/
{

public:
    static FbxClassId ClassId;
    static FbxSubDeformer* Create(FbxManager *pManager, const char *pName);
    virtual FbxClassId GetClassId() const;
    static FbxSubDeformer* Create(FbxObject *pContainer,  const char *pName);

    bool operator==(const FbxSubDeformer & pObj);
    
	enum EType
	{
		eUnknown,			//!< Untyped sub-deformer            
		eCluster,			//!< Type FbxCluster            
		eBlendShapeChannel	//!< Type FbxBlendShapeChannel
	};

    virtual EType GetSubDeformerType();

protected:
    virtual ~FbxSubDeformer();
};
