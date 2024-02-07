class FbxConstraintSingleChainIK : FbxConstraint /NoDefaultCtors/
{
public:
    static FbxClassId ClassId;
    static FbxConstraintSingleChainIK* Create(FbxManager *pManager, const char *pName);
    virtual FbxClassId GetClassId() const;
    static FbxConstraintSingleChainIK* Create(FbxObject *pContainer,  const char *pName);

    bool operator==(const FbxConstraintSingleChainIK & pObj);

    FbxPropertyDouble1 Weight;
    FbxPropertyBool1 Active;
    FbxPropertyBool1 Lock;       
    
    FbxPropertyEnum            PoleVectorType;
    FbxPropertyEnum            SolverType;
    FbxPropertyEnum            EvaluateTSAnim;
    FbxPropertyFbxReference    PoleVectorObjects;
    FbxPropertyDouble3         PoleVector;
    FbxPropertyDouble1         Twist;
    FbxPropertyFbxReference    FirstJointObject;
    FbxPropertyFbxReference    EndJointObject;
    FbxPropertyFbxReference    EffectorObject;

public:
    /** \enum Solver pole vector mode.
      */
    enum ESolverMode
    {
        eRotatePlane,	//! Rotate plane solver.
        eSingleChain	//! Single chain solver.
    };

    /** \enum EPoleVectorMode Pole vector mode.
      */
    enum EPoleVectorMode
    {
        eVector,	//! Pole vector type is vector.
        eObject		//! Pole vector type is object.
    };

	/** \enum EEvaluationMode If the constraints read its animation on Translation and Scale for the nodes it constraints.
	  */
	enum EEvaluationMode
	{
		eNeverTS,		//! The constraints never read its animation on translation and scale for the nodes.
		eAutoDetect,	//! The constraints read its animation on translation and scale for the nodes according to automatic detection.
		eAlwaysTS		//! The constraints always read its animation on translation and scale for the nodes.
	};

    /** Get the weight of a source.
      * \param pObject     Source object that we want the weight.
      */
    double GetPoleVectorObjectWeight(const FbxObject* pObject) const;

    /** Add a source to the constraint.
      * \param pObject     New source object.
      * \param pWeight     Weight value of the source object expressed as a percentage.
      * \remarks           pWeight value is 100 percent by default.
      */
    void AddPoleVectorObject(FbxObject* pObject, double pWeight = 100);

    /** Retrieve the constraint source count.
      * \return     Current constraint source count.
      */
    int GetConstraintPoleVectorCount() const;

    /** Retrieve a constraint source object.
      * \param pIndex     Index of constraint source object.
      * \return           Current source at the specified index.
      */
    FbxObject* GetPoleVectorObject(int pIndex) const;

    /** Set the first joint object.
      * \param pObject     The first joint object.
      */
    void SetFirstJointObject(FbxObject* pObject);

    /** Retrieve the first joint object.
      * \return Current first joint object.
      */
    FbxObject* GetFirstJointObject() const;

    /** Set the end joint object.
      * \param pObject     The end joint object.
      */
    void SetEndJointObject(FbxObject* pObject);

    /** Retrieve the end joint object.
      * \return     Current end joint object.
      */
    FbxObject* GetEndJointObject() const;

    /** Set the effector object.
      * \param pObject     The effector object.
      */
    void SetEffectorObject(FbxObject* pObject);

    /** Retrieve the effector object.
      * \return     Current effector object.
      */
    FbxObject* GetEffectorObject() const;

protected:
    virtual ~FbxConstraintSingleChainIK();
};