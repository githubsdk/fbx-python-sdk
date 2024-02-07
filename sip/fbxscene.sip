class FbxScene : FbxDocument /NoDefaultCtors/
{
public:
    static FbxClassId ClassId;
    static FbxScene* Create(FbxManager *pManager, const char *pName);
    virtual FbxClassId GetClassId() const;
    static FbxScene* Create(FbxObject *pContainer,  const char *pName);

    bool operator==(const FbxScene & pObj);
    
    void Clear();
    FbxNode* GetRootNode() const;

    void FillTextureArray(FbxTextureArray & pTextureArray);

    void FillMaterialArray(FbxSurfaceMaterialArray & pMaterialArray);

    int GetCharacterCount();

    FbxCharacter* GetCharacter(int pIndex);

    int CreateCharacter(char* pName);

    void DestroyCharacter(int pIndex);

    int GetControlSetPlugCount();

    //FbxControlSetPlug* GetControlSetPlug(int pIndex);

    int CreateControlSetPlug(char* pName);

    void DestroyControlSetPlug(int pIndex);

    int GetCharacterPoseCount();

    FbxCharacterPose* GetCharacterPose(int pIndex);

    int CreateCharacterPose(char* pName);

    void DestroyCharacterPose(int pIndex);

    int GetPoseCount();

    FbxPose* GetPose(int pIndex);

    bool AddPose(FbxPose* pPose);

    bool RemovePose(FbxPose* pPose);

    bool RemovePose(int pIndex);

    FbxDocumentInfo* GetSceneInfo();

    void SetSceneInfo(FbxDocumentInfo* pSceneInfo);

    FbxGlobalSettings& GetGlobalSettings();

    int GetMaterialCount();

    FbxSurfaceMaterial* GetMaterial(int pIndex);

    FbxSurfaceMaterial* GetMaterial(char* pName);

    bool AddMaterial(FbxSurfaceMaterial* pMaterial);

    bool RemoveMaterial(FbxSurfaceMaterial* pMaterial);

    int GetTextureCount();

    FbxTexture* GetTexture(int pIndex);

    FbxTexture* GetTexture(char* pName);

    bool AddTexture(FbxTexture* pTexture);

    bool RemoveTexture(FbxTexture* pTexture);

    int GetNodeCount();

    FbxNode* GetNode(int pIndex);

    bool AddNode(FbxNode* pNode);

    bool RemoveNode(FbxNode* pNode);

    int GetCurveOnSurfaceCount();

    FbxNode* FindNodeByName( const FbxString& pName );

    int GetGeometryCount();

    FbxGeometry* GetGeometry(int pIndex);

    bool AddGeometry(FbxGeometry* pGeometry);

    bool RemoveGeometry(FbxGeometry* pGeometry);

    int GetVideoCount();

    FbxVideo* GetVideo(int pIndex);

    bool AddVideo(FbxVideo* pVideo);

    bool RemoveVideo(FbxVideo* pVideo);

	void				SetCurrentAnimationStack(FbxAnimStack* pAnimStack);
	FbxAnimStack*		GetCurrentAnimationStack();
	void				SetAnimationEvaluator(FbxAnimEvaluator* pEvaluator);
	FbxAnimEvaluator*	GetAnimationEvaluator();
    
    bool ComputeBoundingBoxMinMaxCenter(FbxVector4& pBBoxMin, FbxVector4& pBBoxMax, FbxVector4& pBBoxCenter, bool pSelected=false, const FbxTime& pTime=FBXSDK_TIME_INFINITE);
    void SyncShowPropertyForInstance();  

    FbxGlobalLightSettings&  GlobalLightSettings();
    FbxGlobalCameraSettings& GlobalCameraSettings();

protected:
    virtual ~FbxScene();
};
