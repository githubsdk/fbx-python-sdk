class FbxCollectionExclusive : FbxCollection /NoDefaultCtors/
{
public:
    static FbxClassId ClassId;
    static FbxCollectionExclusive* Create(FbxManager *pManager, const char *pName);
    virtual FbxClassId GetClassId() const;
    static FbxCollectionExclusive* Create(FbxObject *pContainer,  const char *pName);

    bool operator==(const FbxCollectionExclusive & pObj);

    /** Add a member if it's not a member of any other FbxCollectionExclusive objects.
    * \param pMember Object to be added
    */
    bool AddMember(FbxObject* pMember);

protected:
    virtual ~FbxCollectionExclusive();
};