class FbxBindingTable : FbxBindingTableBase /NoDefaultCtors/
{
public:
    static FbxClassId ClassId;
    static FbxBindingTable* Create(FbxManager *pManager, const char *pName);
    virtual FbxClassId GetClassId() const;
    static FbxBindingTable* Create(FbxObject *pContainer,  const char *pName);

    bool operator==(const FbxBindingTable & pObj);
    
    FbxPropertyString            TargetName;
    FbxPropertyString            TargetType;
    FbxPropertyString            DescRelativeURL;
    FbxPropertyString            DescAbsoluteURL;
    FbxPropertyString            DescTAG; 
    FbxPropertyString            CodeRelativeURL;
    FbxPropertyString            CodeAbsoluteURL;
    FbxPropertyString            CodeTAG;

    //////////////////////////////////////////////////////////////////////////
    // Static values
    //////////////////////////////////////////////////////////////////////////

    // property names
    static const char* sTargetName;
    static const char* sTargetType;
    static const char* sDescRelativeURL;
    static const char* sDescAbsoluteURL;
    static const char* sDescTAG;
    static const char* sCodeRelativeURL;
    static const char* sCodeAbsoluteURL;
    static const char* sCodeTAG;

    // property default values
    static const char* sDefaultTargetName;
    static const char* sDefaultTargetType;
    static const char* sDefaultDescRelativeURL;
    static const char* sDefaultDescAbsoluteURL;
    static const char* sDefaultDescTAG;
    static const char* sDefaultCodeRelativeURL;
    static const char* sDefaultCodeAbsoluteURL;
    static const char* sDefaultCodeTAG;

protected:
    FbxBindingTable(FbxManager& pManager, const char* pName);
    virtual ~FbxBindingTable();
    
private:
    FbxBindingTable(const FbxBindingTable& pTableToCopyFrom);
};