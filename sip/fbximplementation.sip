class FbxImplementation : FbxObject /NoDefaultCtors/
{
public:
    static FbxClassId ClassId;
    static FbxImplementation* Create(FbxManager *pManager, const char *pName);
    virtual FbxClassId GetClassId() const;
    static FbxImplementation* Create(FbxObject *pContainer,  const char *pName);

    bool operator==(const FbxImplementation & pObj);

    FbxString RenderName;
    
    FbxPropertyString  Language;
    FbxPropertyString    LanguageVersion;
    FbxPropertyString    RenderAPI;
    FbxPropertyString    RenderAPIVersion;
    FbxPropertyString    RootBindingName;
    
    FbxProperty GetConstants() const;
    FbxBindingTable* AddNewTable( const char* pTargetName, const char* pTargetType );
    FbxBindingTable* GetRootTable();
    int GetTableCount() const;
    FbxBindingTable* GetTable( int pIndex );
    FbxBindingTable* GetTableByTargetName( const char* pName );
    FbxBindingTable* GetTableByTargetType( const char* pTargetName );
    FbxBindingOperator* AddNewBindingOperator( const char* pTargetName, const char* pFunctionName );
    int GetBindingOperatorCount() const;
    const FbxBindingOperator* GetOperatorByTargetName( const char* pTargetName ) const;
   
    static const char* sLanguage;
    static const char* sLanguageVersion;
    static const char* sRenderAPI;
    static const char* sRenderAPIVersion;
    static const char* sRootBindingName;
    static const char* sConstants;

    // property default values
    //static const char* sDefaultType;
    static const char* sDefaultLanguage;
    static const char* sDefaultLanguageVersion;
    static const char* sDefaultRenderAPI;
    static const char* sDefaultRenderAPIVersion;
    static const char* sDefaultRootBindingName;

protected:
    virtual ~FbxImplementation();
};