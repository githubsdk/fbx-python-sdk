class FbxBindingTableBase : FbxObject /NoDefaultCtors/
{
public:
    static FbxClassId ClassId;
    static FbxBindingTableBase* Create(FbxManager *pManager, const char *pName);
    virtual FbxClassId GetClassId() const;
    
    FbxBindingTableEntry& AddNewEntry();

    size_t GetEntryCount() const;
    FbxBindingTableEntry GetEntry( size_t pIndex );
    const FbxBindingTableEntry* GetEntryForSource(const char* pSrcName) const;
    const FbxBindingTableEntry * GetEntryForDestination(const char* pDestName) const;
    
protected:
	FbxBindingTableBase(FbxManager& pManager, const char* pName);
    virtual ~FbxBindingTableBase() = 0; // make this class abstract
};