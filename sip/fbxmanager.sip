class FbxManager /NoDefaultCtors/
{
public:
    static FbxManager* Create();
    virtual void Destroy();
    
    static void GetFileFormatVersion(int& pMajor, int& pMinor, int& pRevision);
       
    FbxObject* CreateNewObjectFromClassId(FbxClassId pClassId, const char * pName, FbxObject* pContainer=NULL, const FbxObject* pCloneFrom=NULL);
    FbxClassId     FindClass(const char* pClassName) const;
    FbxClassId     FindFbxFileClass(const char* pFbxFileTypeName, const char* pFbxFileSubTypeName) const;
    
    FbxDataType CreateDataType(const char *pName, EFbxType pType);
    const FbxDataType &GetDataTypeFromName(const char *pDataType);
    int GetDataTypeCount();
    FbxDataType &GetDataType(int pIndex);
    
    FbxUserNotification* GetUserNotification() const;
    void SetUserNotification(FbxUserNotification* pUN);
    
    virtual FbxIOSettings * GetIOSettings() const;
    virtual void SetIOSettings(FbxIOSettings * pIOSettings);

    FbxIOPluginRegistry* GetIOPluginRegistry() const;
    
    bool LoadPluginsDirectory (char *pFilename,char *pExtensions);
    bool LoadPlugin (char *pFilename);
    bool UnloadPlugins();
    
protected:
    FbxManager();
    virtual ~FbxManager();
};
