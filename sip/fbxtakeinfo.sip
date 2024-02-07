class FbxTakeInfo /NoDefaultCtors/
{
public:
    FbxTakeInfo();
    FbxTakeInfo(const FbxTakeInfo& pTakeInfo);
    virtual ~FbxTakeInfo();
    
    FbxString mName;
    FbxString mImportName;
	FbxString mDescription;
	bool mSelect;
	FbxTimeSpan mLocalTimeSpan;
    FbxTimeSpan mReferenceTimeSpan;
	FbxTime mImportOffset;
    
	enum EImportOffsetType
	{
		eAbsolute,
		eRelative
	};
    
    EImportOffsetType mImportOffsetType;
    
    void CopyLayers(const FbxTakeInfo& pTakeInfo);
    int mCurrentLayer;
};