class FbxConstraintRotation : FbxConstraint /NoDefaultCtors/
{
public:
    static FbxClassId ClassId;
    static FbxConstraintRotation* Create(FbxManager *pManager, const char *pName);
    virtual FbxClassId GetClassId() const;
    static FbxConstraintRotation* Create(FbxObject *pContainer,  const char *pName);

    bool operator==(const FbxConstraintRotation & pObj);

    FbxPropertyDouble1 Weight;
    FbxPropertyBool1 Active;
    FbxPropertyBool1 Lock;   

    FbxPropertyBool1		AffectX;
    FbxPropertyBool1		AffectY;
    FbxPropertyBool1		AffectZ;
    FbxPropertyDouble3	    Rotation;
    FbxPropertyFbxReference ConstraintSources;
    FbxPropertyFbxReference ConstrainedObject;
                
    /** Get the weight of a source.
      * \param pObject Source object
      */
    double GetSourceWeight(const FbxObject* pObject) const;

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
      * \param pIndex Index of the source object
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
    virtual ~FbxConstraintRotation();
};