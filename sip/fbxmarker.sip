class FbxMarker : FbxNodeAttribute /NoDefaultCtors/
{
public:
    static FbxClassId ClassId;
    static FbxMarker* Create(FbxManager *pManager, const char *pName);
    virtual FbxClassId GetClassId() const;
    static FbxMarker* Create(FbxObject *pContainer,  const char *pName);

    bool operator==(const FbxMarker & pObj);
    
    virtual FbxNodeAttribute::EType GetAttributeType() const;
    void Reset();
    
	enum EType
	{
		eStandard, 
		eOptical, 
		eEffectorFK,
		eEffectorIK
	};

    void SetType(EType pType);
    EType GetType() const;

	enum ELook
	{ 
		eCube, 
		eHardCross, 
		eLightCross, 
        eSphere,
        eCapsule,
        eBox,
        eBone,
        eCircle,
        eSquare,
        eStick,
		eNone
	};
    
    double				GetDefaultOcclusion() const;
    void				SetDefaultOcclusion(double pOcclusion);
    double				GetDefaultIKReachTranslation() const;
    void				SetDefaultIKReachTranslation(double pIKReachTranslation);
    double				GetDefaultIKReachRotation() const;
    void				SetDefaultIKReachRotation(double pIKReachRotation);

    FbxColor&			GetDefaultColor(FbxColor& pColor) const;
    void				SetDefaultColor(FbxColor& pColor);
    
    FbxPropertyELook	Look;
    FbxPropertyBool1	DrawLink;
    FbxPropertyDouble1	Size;
    FbxPropertyBool1	ShowLabel;
    FbxPropertyDouble3	IKPivot;

    FbxProperty			GetOcclusion();
    FbxProperty			GetIKReachTranslation();
    FbxProperty			GetIKReachRotation();

protected:
    virtual ~FbxMarker();
};
