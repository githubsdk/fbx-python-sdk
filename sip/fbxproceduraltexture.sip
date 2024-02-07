class FbxProceduralTexture : FbxTexture  /NoDefaultCtors/
{
public:
	static FbxClassId ClassId;
    static FbxProceduralTexture* Create(FbxManager *pManager, const char *pName);
    virtual FbxClassId GetClassId() const;
    static FbxProceduralTexture* Create(FbxObject *pContainer,  const char *pName);

    bool operator==(const FbxProceduralTexture & pObj);
    
	/**
	  * \name Procedural Texture Properties
	  */
	//@{

	FbxPropertyBlob			BlobProp;

	/** Resets the default procedural texture values.
	  */
	void Reset();

	//@}

	/**
	  * \name Property Access Methods
	  */
	//@{

	/** Sets the blob.
	  *	\param pBlob Blob containing information for the procedural texture
      */
	void SetBlob(FbxBlob& pBlob);

	/** Get the blob.
	  *	\return Blob containing information for the procedural texture
	  */
	FbxBlob GetBlob() const;

	//@}

protected:
    virtual ~FbxProceduralTexture();
};
