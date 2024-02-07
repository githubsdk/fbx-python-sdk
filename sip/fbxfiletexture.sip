class FbxFileTexture : FbxTexture  /NoDefaultCtors/
{
public:
	static FbxClassId ClassId;
    static FbxFileTexture* Create(FbxManager *pManager, const char *pName);
    virtual FbxClassId GetClassId() const;
    static FbxFileTexture* Create(FbxObject *pContainer,  const char *pName);

    bool operator==(const FbxFileTexture & pObj);

	
    FbxPropertyBool1				UseMaterial;
    FbxPropertyBool1				UseMipMap;

	/** Resets the default texture values.
	  * \remarks            The texture file name is not reset.
	  */
	void Reset();

    /** Sets the associated texture file. 
      * \param pName        The absolute path of the texture file.   
      * \return             \c True if successful, returns \c false otherwise.
	  *	\remarks            The texture file name must be valid, you cannot leave the name empty.
      */
    bool SetFileName(const char * pName);

    /** Sets the associated texture file. 
      * \param pName        The relative path of the texture file.   
      * \return             \c True if successful, returns \c false otherwise.
	  *	\remarks            The texture file name must be valid.
      */
    bool SetRelativeFileName(const char * pName);

    /** Returns the absolute texture file path.
	  * \return             The absolute texture file path.
	  * \remarks            An empty string is returned if FbxFileTexture::SetFileName() has not been called before.
	  */
    const char * GetFileName () const;

    /** Returns the relative texture file path.
	  * \return             The relative texture file path.
	  * \remarks            An empty string is returned if FbxFileTexture::SetRelativeFileName() has not been called before.
	  */
    const char * GetRelativeFileName() const;

	/** \enum EMaterialUse      Specify if texture uses model material.
	  */
    enum EMaterialUse
    {
        eModelMaterial,		//! Texture uses model material.
        eDefaultMaterial	//! Texture does not use model material.
    };

    /** Sets the material use.
	  * \param pMaterialUse         Specify how texture uses model material.
	  */
    void SetMaterialUse(EMaterialUse pMaterialUse);

    /** Returns the material use.
	  * \return                     How the texture uses model material.
	  */
    EMaterialUse GetMaterialUse() const;

protected:
    virtual ~FbxFileTexture();
};
