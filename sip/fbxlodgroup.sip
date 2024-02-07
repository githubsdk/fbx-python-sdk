class FbxLODGroup : FbxNodeAttribute /NoDefaultCtors/
{
public:
    static FbxClassId ClassId;
    static FbxLODGroup* Create(FbxManager *pManager, const char *pName);
    virtual FbxClassId GetClassId() const;
    static FbxLODGroup* Create(FbxObject *pContainer,  const char *pName);

    bool operator==(const FbxLODGroup & pObj);
    
    virtual FbxNodeAttribute::EType GetAttributeType() const;

    enum EDisplayLevel
    {
        eUseLOD,
        eShow,
        eHide
    };

	FbxPropertyBool1       ThresholdsUsedAsPercentage;
    FbxPropertyBool1       MinMaxDistance;
    FbxPropertyDouble1     MinDistance;
    FbxPropertyDouble1     MaxDistance;
    FbxPropertyBool1       WorldSpace;

    int GetNumThresholds() const;
    bool AddThreshold(FbxDistance pThreshValue);
	bool AddThreshold(double pThreshValue);
    bool SetThreshold(int pEl, FbxDistance pThreshValue);
	bool SetThreshold(int pEl, double pThreshValue);
    bool GetThreshold(int pEl, FbxDistance& pThreshValue);
	bool GetThreshold(int pEl, double& pThreshValue);

    int GetNumDisplayLevels() const;
    bool AddDisplayLevel(FbxLODGroup::EDisplayLevel pValue);
    bool SetDisplayLevel(int pEl, FbxLODGroup::EDisplayLevel pValue);
    bool GetDisplayLevel(int pEl, FbxLODGroup::EDisplayLevel& pValue);

protected:
    virtual ~FbxLODGroup();
};