class FbxConstraintAim : FbxConstraint /NoDefaultCtors/
{
public:
    static FbxClassId ClassId;
    static FbxConstraintAim* Create(FbxManager *pManager, const char *pName);
    virtual FbxClassId GetClassId() const;
    static FbxConstraintAim* Create(FbxObject *pContainer,  const char *pName);

    bool operator==(const FbxConstraintAim & pObj);
    
    FbxPropertyDouble1 Weight;
    FbxPropertyBool1 Active;
    FbxPropertyBool1 Lock;    
    
    FbxPropertyDouble3 RotationOffset;
    FbxPropertyFbxReference AimAtObjects;
    FbxPropertyFbxReference ConstrainedObject;
    FbxPropertyEnum WorldUpType;
    FbxPropertyFbxReference WorldUpObject;
    FbxPropertyDouble3 WorldUpVector;
    FbxPropertyDouble3 UpVector;
    FbxPropertyDouble3 AimVector;
    FbxPropertyBool1 AffectX;
    FbxPropertyBool1 AffectY;
    FbxPropertyBool1 AffectZ;
        
    /** \enum EWorldUp Constraint world up type, which has the same meaning with Maya.
      */
    enum EWorldUp
    {
        eAimAtSceneUp,			//! Constraint scene up type.
        eAimAtObjectUp,			//! Constraint object up type.
        eAimAtObjectRotationUp,	//! Constraint object rotation up type.
        eAimAtVector,			//! Constraint vector type.
        eAimAtNone,				//! None constraint type.
        eAimAtCount				//! Constraint world up type count.
    };

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
      * \param pIndex The specified index.
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

    /** Set the world up object.
      * \param pObject The world up object.
      */
    void SetWorldUpObject(FbxObject* pObject);

    /** Retrieve the world up object.
      * \return Current world up object.
      */
    FbxObject* GetWorldUpObject() const;

protected:
    virtual ~FbxConstraintAim();
};
