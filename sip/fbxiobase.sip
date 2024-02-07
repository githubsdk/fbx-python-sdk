class FbxIOBase : FbxObject /NoDefaultCtors/
{
public:
    static FbxClassId ClassId;
    static FbxIOBase* Create(FbxManager *pManager, const char *pName);
    virtual FbxClassId GetClassId() const;
    static FbxIOBase* Create(FbxObject *pContainer,  const char *pName);

    bool operator==(const FbxIOBase & pObj);
    
    virtual bool Initialize(const char *pFileName, int pFileFormat=-1, FbxIOSettings* pIOSettings=NULL);
    virtual FbxString GetFileName();
    
    FbxStatus& GetStatus();

protected:
    virtual ~FbxIOBase();
};

