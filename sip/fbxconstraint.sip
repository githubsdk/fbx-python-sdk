class FbxConstraint : FbxObject /NoDefaultCtors/
{
public:
    static FbxClassId ClassId;
    static FbxConstraint* Create(FbxManager *pManager, const char *pName);
    virtual FbxClassId GetClassId() const;
    static FbxConstraint* Create(FbxObject *pContainer,  const char *pName);

    bool operator==(const FbxConstraint & pObj);
    
    /** \enum EType Constraint attribute types.
      */
    enum EType
    {
        eUnknown,			//! Invalid constraint.
        ePosition,			//! Position constraint (referred to as a point constraint in Maya).
        eRotation,			//! Rotation constraint (referred to as an orient constraint in Maya).
        eScale,				//! Scale constraint.
        eParent,			//! Parent constraint.
        eSingleChainIK,		//! Single chain IK constraint.
        eAim,				//! Aim constraint.
        eCharacter,			//! Character constraint.
        eCustom				//! User defined constraints.
    };
    
    /** Access the type of the constraint.
      * \return This type of the constraint.
    */
    virtual EType GetConstraintType();
    
    /** Retrieve the constrained object.
      * \return The constrained object.
    */
    virtual FbxObject* GetConstrainedObject() const;
    
    /** Retrieve the count of constraint source.
      * \return The count of constraint source.
    */
    virtual int GetConstraintSourceCount() const;
    
    /** Retrieve a constraint source with the specified index.
    * \param pIndex The specified index.
      * \return The constraint source at the specified index.
    */
    virtual FbxObject* GetConstraintSource(int pIndex) const;

    FbxPropertyDouble1 Weight;
    FbxPropertyBool1 Active;
    FbxPropertyBool1 Lock;    

protected:
    virtual ~FbxConstraint();
};
