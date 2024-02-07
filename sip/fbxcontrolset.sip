class FbxControlSetLink
{
public:
    //! Default constructor.
    FbxControlSetLink();

    /** Copy constructor.
    * \param pControlSetLink Given object.
    */
    FbxControlSetLink(const FbxControlSetLink& pControlSetLink);

    /** Reset to default values.
      *
      * Member mNode is set to \c NULL and member mTemplateName is cleared.
      */
    void Reset();

    //! The character's node in a hierarchy linked to this control set link.
    FbxNode* mNode;

    //! A template name is a naming convention that is used to automatically map
    //! the nodes of other skeletons that use the same naming convention for automatic characterization.
    FbxString mTemplateName;
};

class FbxEffector
{
public:
	enum ESetId
	{
		eDefaultSet,
		eAux1Set,
		eAux2Set,
		eAux3Set,
		eAux4Set,
		eAux5Set,
		eAux6Set,
		eAux7Set,
		eAux8Set,
		eAux9Set,
		eAux10Set,
		eAux11Set,
		eAux12Set,
		eAux13Set,
		eAux14Set,
		eSetIdCount
	};

	enum ENodeId
	{
		eHips,
		eLeftAnkle,
		eRightAnkle,
		eLeftWrist,
		eRightWrist,
		eLeftKnee,
		eRightKnee,
		eLeftElbow,
		eRightElbow,
		eChestOrigin,
		eChestEnd,
		eLeftFoot,
		eRightFoot,
		eLeftShoulder,
		eRightShoulder,
		eHead,
		eLeftHip,
		eRightHip,
		eLeftHand,
		eRightHand,
		eLeftHandThumb,
		eLeftHandIndex,
		eLeftHandMiddle,
		eLeftHandRing,
		eLeftHandPinky,
		eLeftHandExtraFinger,
		eRightHandThumb,
		eRightHandIndex,
		eRightHandMiddle,
		eRightHandRing,
		eRightHandPinky,
		eRightHandExtraFinger,
		eLeftFootThumb,
		eLeftFootIndex,
		eLeftFootMiddle,
		eLeftFootRing,
		eLeftFootPinky,
		eLeftFootExtraFinger,
		eRightFootThumb,
		eRightFootIndex,
		eRightFootMiddle,
		eRightFootRing,
		eRightFootPinky,
		eRightFootExtraFinger,
		eNodeIdCount
	};

	//! Default constructor with uninitialized character node.
    FbxEffector();

    /** Reset to default values.
      *     - mNode is set to NULL.
      *     - mShow is set to true.
      */
    void Reset();

    //! The character's node in a hierarchy linked to this effector.
    FbxNode* mNode;

    //! \c true if the effector is visible, \c false if hidden
    bool mShow;
};

class FbxControlSet /NoDefaultCtors/
{
public:
    /** Reset to default values.
      * Reset all effector and control set links.
      */
    void Reset();

    /** \enum EType      Control rig type.
      * - \e eNone       No Control rig.
      * - \e eFkIk       Both an FK rig and IK rig.
      * - \e eIkOnly     Only an IK rig.
      */
    enum EType
    {
        eNone,
        eFkIk,
        eIkOnly
    };

    /** Set type as given.
    * \param pType The given type.
    */
    void SetType(EType pType);

    /** Get type.
    * \return The gotten type.
    */
    EType GetType() const;

    /** Set use axis flag as given.
    * \param pUseAxis The given use axis flag.
    */
    void SetUseAxis(bool pUseAxis);

    /** Get use axis flag.
    * \return The gotten use axis flag.
    */
    bool GetUseAxis() const;

    /** Set lock transform flag as given.
    * \param pLockTransform The given lock transform flag.
    */
    void SetLockTransform(bool pLockTransform);

    /** Get lock transform flag.
    * \return The gotten lock transform flag.
    */
    bool GetLockTransform()const;

   /** Set lock 3D pick flag as given.
    * \param pLock3DPick The given lock 3D pick flag.
    */
    void SetLock3DPick(bool pLock3DPick);

    /** Get lock 3D pick flag.
    * \return The gotten lock 3D pick flag.
    */
    bool GetLock3DPick() const;

    /** Set a control set link for a character node ID.
      * \param pCharacterNodeId     Character node ID.
      * \param pControlSetLink      Control set link to be associated with the Character node ID.
      * \return                     \c true if successful, \c false otherwise.
      * \remarks                    You should avoid setting a control set link for
      *                             eCharacterLeftFloor, eCharacterRightFloor, eCharacterLeftHandFloor, eCharacterRightHandFloor,
      *                             eCharacterProps0, eCharacterProps1, eCharacterProps2, eCharacterProps3 or eCharacterProps4.
      *                             None of these nodes are part of a control set.
      */
    bool SetControlSetLink(FbxCharacter::ENodeId pCharacterNodeId, const FbxControlSetLink& pControlSetLink);

    /** Get the control set link associated with a character node ID.
      * \param pCharacterNodeId     Requested character node ID.
      * \param pControlSetLink      Optional pointer that returns the control set link if the function succeeds.
      * \return                     \c true if successful, \c false otherwise.
      * \remarks                    You should avoid getting a control set link for
      *                             eCharacterLeftFloor, eCharacterRightFloor, eCharacterLeftHandFloor, eCharacterRightHandFloor,
      *                             eCharacterProps0, eCharacterProps1, eCharacterProps2, eCharacterProps3 or eCharacterProps4.
      *                             None of these nodes are part of a control set.
      */
    bool GetControlSetLink(FbxCharacter::ENodeId pCharacterNodeId, FbxControlSetLink* pControlSetLink = NULL) const;

    /** Set an effector node for an effector node ID.
      * \param pEffectorNodeId     Effector node ID.
      * \param pEffector           Effector to be associated with the effector node ID.
      * \return                    \c true if successful, \c false otherwise.
      */
    bool SetEffector(FbxEffector::ENodeId pEffectorNodeId, FbxEffector pEffector);

    /** Get the effector associated with an effector node ID.
      * \param pEffectorNodeId     ID of requested effector node.
      * \param pEffector           Optional pointer that returns the effector if the function succeeds.
      * \return                    \c true if successful, \c false otherwise.
      */
    bool GetEffector(FbxEffector::ENodeId pEffectorNodeId, FbxEffector* pEffector = NULL);

    /** Set an auxiliary effector node for an effector node ID.
      * \param pEffectorNodeId     Effector node ID.
      * \param pNode               Auxiliary effector node to be associated with the effector node ID.
      * \param pEffectorSetId      Effector set ID. Set to eAux1Set by default.
      * \return                    \c true if successful, \c false otherwise.
      */
    bool SetEffectorAux(FbxEffector::ENodeId pEffectorNodeId, FbxNode* pNode, FbxEffector::ESetId pEffectorSetId = FbxEffector::eAux1Set);

    /** Get the auxiliary effector associated with an effector node ID.
      * \param pEffectorNodeId     ID of requested auxiliary effector node.
      * \param pNode               Optional pointer that returns the auxiliary effector node if the function succeeds.
      * \param pEffectorSetId      Effector set ID. Set to eAux1Set by default.
      * \return                    \c true if successful, \c false otherwise.
      */
    bool GetEffectorAux(FbxEffector::ENodeId pEffectorNodeId, FbxNode** pNode=NULL, FbxEffector::ESetId pEffectorSetId=FbxEffector::eAux1Set) const;

    /** Get the name associated with an effector node ID.
      * \param pEffectorNodeId     Effector node ID.
      * \return                    Name associated with the effector node ID.
      */
    static char* GetEffectorNodeName(FbxEffector::ENodeId pEffectorNodeId);

    /** Get ID associated with an effector node name.
      * \param pEffectorNodeName     Effector node name.
      * \return                      Effector node ID associated with the given effector node name, or -1 if
      *                              no effector node with pEffectorNodeName exists.
      */
    static FbxEffector::ENodeId GetEffectorNodeId(char* pEffectorNodeName);
    
private:
    FbxControlSet();
    ~FbxControlSet();
};

class FbxControlSetPlug : FbxObject /NoDefaultCtors/
{
public:
    static FbxClassId ClassId;
    static FbxControlSetPlug* Create(FbxManager *pManager, const char *pName);
    virtual FbxClassId GetClassId() const;
    static FbxControlSetPlug* Create(FbxObject *pContainer,  const char *pName);

    bool operator==(const FbxControlSetPlug & pObj);

    //! Type property of control set.
    
    FbxPropertyFbxControlSetEType ControlSetType;
    FbxPropertyBool1              UseAxis;
    FbxPropertyFbxReference       Character;


protected:
    virtual ~FbxControlSetPlug();
};
