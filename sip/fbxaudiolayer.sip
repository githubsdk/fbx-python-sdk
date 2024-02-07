class FbxAudioLayer : FbxCollection /NoDefaultCtors/
{
public:
    static FbxClassId ClassId;
    static FbxAudioLayer* Create(FbxManager *pManager, const char *pName);
    virtual FbxClassId GetClassId() const;

    bool operator==(const FbxAudioLayer & pObj);
    static FbxAudioLayer* Create(FbxObject *pContainer,  const char *pName);

   	FbxPropertyBool1         Mute;
	FbxPropertyBool1         Solo;
    FbxPropertyDouble1       Volume;
    FbxPropertyBool1         Lock;
    FbxPropertyDouble3       Color;
    
    //! Reset this object properties to their default value.
    void Reset();
    
protected:
    virtual ~FbxAudioLayer();
};