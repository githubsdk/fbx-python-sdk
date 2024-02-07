class FbxConstraintParent : FbxConstraint /NoDefaultCtors/
{
public:
    static FbxClassId ClassId;
    static FbxConstraintParent* Create(FbxManager *pManager, const char *pName);
    virtual FbxClassId GetClassId() const;
    static FbxConstraintParent* Create(FbxObject *pContainer,  const char *pName);

    bool operator==(const FbxConstraintParent & pObj);
    
    FbxPropertyDouble1 Weight;
    FbxPropertyBool1 Active;
    FbxPropertyBool1 Lock;     
    
    FbxPropertyBool1 AffectTranslationX;
    FbxPropertyBool1 AffectTranslationY;
    FbxPropertyBool1 AffectTranslationZ;
    FbxPropertyBool1 AffectRotationX;
    FbxPropertyBool1 AffectRotationY;
    FbxPropertyBool1 AffectRotationZ;
    FbxPropertyBool1 AffectScalingX;
    FbxPropertyBool1 AffectScalingY;
    FbxPropertyBool1 AffectScalingZ;
    FbxPropertyFbxReference ConstraintSources;
    FbxPropertyFbxReference ConstrainedObject;

    /** Set the translation offset.
      * \param pObject Source object.
      * \param pTranslation New offset vector.
      */
    void SetTranslationOffset(FbxObject* pObject, FbxVector4 pTranslation);

    /** Retrieve the constraint translation offset.
      * \param pObject Object that we want the offset.
      * \return Current translation offset.
      */
    FbxVector4 GetTranslationOffset(const FbxObject* pObject) const;

    /** Set the rotation offset.
      * \param pObject Source object.
      * \param pRotation New offset vector.
      */
    virtual void SetRotationOffset(const FbxObject* pObject, FbxVector4 pRotation);

    /** Retrieve the constraint rotation offset.
      * \param pObject Object that we want the offset.
      * \return Current translation offset.
      */
    FbxVector4 GetRotationOffset(const FbxObject* pObject) const;

    /** Add a source to the constraint.
      * \param pObject New source object.
      * \param pWeight Weight of the source object.
      */
    void AddConstraintSource(FbxObject* pObject, double pWeight = 100);

    /** Retrieve the constraint source count.
      * \return Current constraint source count.
      */
    int GetConstraintSourceCount() const;

    /** Retrieve a constraint source object.
      * \param pIndex Index of the source
      * \return Current source at the specified index.
      */
    FbxObject* GetConstraintSource(int pIndex) const;

    /** Set the constrained object.
      * \param pObject The constrained object.
      */
    void SetConstrainedObject(FbxObject* pObject);

    /** Retrieve the constrained object.
      * \return Current constrained object.
      */
    FbxObject* GetConstrainedObject() const;

protected:
    virtual ~FbxConstraintParent();
};
