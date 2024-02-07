class FbxAudio : FbxMediaClip /NoDefaultCtors/
{
public:
    static FbxClassId ClassId;
    static FbxAudio* Create(FbxManager *pManager, const char *pName);
    virtual FbxClassId GetClassId() const;
    static FbxAudio* Create(FbxObject *pContainer,  const char *pName);

	FbxPropertyInteger1		BitRate;
	FbxPropertyInteger1 	SampleRate;
	FbxPropertyUChar1		Channels;
	FbxPropertyFbxTime		Duration;
	FbxProperty				AnimFX;
        
    bool operator==(const FbxAudio & pObj);
    
    //! Reset the audio to default values.
    void Reset();
    
    FbxProperty Volume();

protected:
    virtual ~FbxAudio();
};
