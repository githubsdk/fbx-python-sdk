class FbxClassId
{
public:
    FbxClassId();
    void Destroy();
    
    const char* GetName() const;
    FbxClassId GetParent() const;
    FbxObject* Create(FbxManager& pManager, const char* pName, const FbxObject* pFrom);
    bool Is(const FbxClassId pId) const;
    bool operator==(const FbxClassId& pClassId) const;
    bool operator!=(const FbxClassId& pClassId) const;
    
    const char* GetFbxFileTypeName(bool pAskParent=false) const;
    const char* GetFbxFileSubTypeName() const;
    bool IsValid() const;
    void SetObjectTypePrefix(const char* pObjectTypePrefix);
    const char* GetObjectTypePrefix();
    int ClassInstanceIncRef();
    int ClassInstanceDecRef();
    int GetInstanceRef();
};
