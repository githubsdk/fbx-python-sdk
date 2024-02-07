class FbxThumbnail : FbxObject /NoDefaultCtors/
{
public:
    static FbxClassId ClassId;
    static FbxThumbnail* Create(FbxManager *pManager, const char *pName);
    virtual FbxClassId GetClassId() const;
    static FbxThumbnail* Create(FbxObject *pContainer,  const char *pName);

    bool operator==(const FbxThumbnail & pObj);
    
    FbxPropertyInteger1 CustomHeight;
    FbxPropertyInteger1 CustomWidth;
    
    enum EDataFormat
	{
		eRGB_24, // 3 components
		eRGBA_32 // 4 components
	} ;
    
    void SetDataFormat(EDataFormat pDataFormat);
    EDataFormat GetDataFormat() const;
    
	enum EImageSize
	{
		eNotSet = 0,
		e64x64 = 64,
		e128x128 = 128,
		eCustomSize = -1
	};
    
    void SetSize(EImageSize pImageSize);
    EImageSize GetSize() const;
    unsigned long GetSizeInBytes() const;
    
    //bool SetThumbnailImage(SIP_PYLIST pImage);
    //unsigned char* GetThumbnailImage() const;

protected:
    virtual ~FbxThumbnail();
};