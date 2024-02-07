class FbxSceneReference : FbxObject /NoDefaultCtors/
{
public:
    static FbxClassId ClassId;
    static FbxSceneReference* Create(FbxManager *pManager, const char *pName);
    virtual FbxClassId GetClassId() const;
    static FbxSceneReference* Create(FbxObject *pContainer,  const char *pName);

    bool operator==(const FbxSceneReference & pObj);
 
    FbxPropertyString	 	  ReferenceFilePath;
    FbxPropertyString	 	  ReferenceNameSpace;
    FbxPropertyString	 	  ReferenceNodeName;
    FbxPropertyInteger1	 	  ReferenceDepth;
    FbxPropertyBool1	 	  IsLoaded;
    FbxPropertyBool1	 	  IsLocked;
    FbxPropertyBool1	 	  IsOriginalProxy;
    FbxPropertyBool1	      IsActiveProxy;
    FbxPropertyString	 	  ProxyManagerName;
    FbxPropertyString	 	  ProxyTag;

protected:
    virtual ~FbxSceneReference();
};
