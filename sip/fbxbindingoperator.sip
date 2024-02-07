class FbxBindingOperator : FbxBindingTableBase /NoDefaultCtors/
{
public:
    static FbxClassId ClassId;
    static FbxBindingOperator* Create(FbxManager *pManager, const char *pName);
    virtual FbxClassId GetClassId() const;
    static FbxBindingOperator* Create(FbxObject *pContainer,  const char *pName);

    bool operator==(const FbxBindingOperator & pObj);
    
    //template <class FBXTYPE> bool Evaluate(FbxObject const* pObject, FBXTYPE* pResult) const;
    //template <class FBXTYPE> bool ReverseEvaluation(FbxObject const* pObject, FBXTYPE * pInOut, bool setObj=false, int index=0) const;
    //template <class FBXTYPE> bool EvaluateEntry(FbxObject const* pObject, char const* pEntryDestinationName, FBXTYPE* pResult) const;

    // Properties
    FbxPropertyString FunctionName;
    FbxPropertyString TargetName;
    
protected:
    virtual ~FbxBindingOperator();
};

