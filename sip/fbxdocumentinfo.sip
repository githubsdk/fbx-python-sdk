class FbxDocumentInfo : FbxObject /NoDefaultCtors/
{
public:
    static FbxClassId ClassId;
    static FbxDocumentInfo* Create(FbxManager *pManager, const char *pName);
    virtual FbxClassId GetClassId() const;
    static FbxDocumentInfo* Create(FbxObject *pContainer,  const char *pName);

    bool operator==(const FbxDocumentInfo & pObj);
    
    FbxPropertyString LastSavedUrl;
    FbxPropertyString Url;
    FbxPropertyString Original_ApplicationVendor;
    FbxPropertyString Original_ApplicationName;
    FbxPropertyString Original_ApplicationVersion;
    FbxPropertyString Original_FileName;
    FbxPropertyDateTime Original_DateTime_GMT;
    FbxProperty LastSaved;
    FbxPropertyString LastSaved_ApplicationVendor;
    FbxPropertyString LastSaved_ApplicationName;
    FbxPropertyString LastSaved_ApplicationVersion;
    FbxPropertyDateTime LastSaved_DateTime_GMT;
    FbxPropertyString EmbeddedUrl;
    
    
    FbxString mTitle;
    FbxString mSubject;
    FbxString mAuthor;
    FbxString mKeywords;
    FbxString mRevision;
    FbxString mComment;
    
    FbxThumbnail* GetSceneThumbnail();
    void SetSceneThumbnail(FbxThumbnail* pSceneThumbnail);
    
    void Clear();

protected:
    virtual ~FbxDocumentInfo();
};
