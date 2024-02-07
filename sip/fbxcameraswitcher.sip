class FbxCameraSwitcher : FbxNodeAttribute /NoDefaultCtors/
{
public:
    static FbxClassId ClassId;
    static FbxCameraSwitcher* Create(FbxManager *pManager, const char *pName);
    virtual FbxClassId GetClassId() const;
    static FbxCameraSwitcher* Create(FbxObject *pContainer,  const char *pName);

    bool operator==(const FbxCameraSwitcher & pObj);
    
    virtual FbxNodeAttribute::EType GetAttributeType() const;

    FbxPropertyInteger1        CameraIndex;

    int GetDefaultCameraIndex();
    void SetDefaultCameraIndex(int pIndex);

protected:
    virtual ~FbxCameraSwitcher();
};