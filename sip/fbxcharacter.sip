class FbxCharacterLink
{
public:
    FbxCharacterLink();
    FbxCharacterLink(const FbxCharacterLink& pCharacterLink);
    void Reset();

    //! The character's node in hierarchy linked to this character link.
    FbxNode* mNode;

    //! A template name is a naming convention that is used to automatically map
    //! the nodes of other skeletons that use the same naming convention.
    FbxString mTemplateName;

    //! Get offset position of this character link.
    FbxVector4 mOffsetT;
    //! Get offset rotation of this character link.
    FbxVector4 mOffsetR;
    //! Get offset scale of this character link.
    FbxVector4 mOffsetS;
    //! Get the parent offset rotation of this character link
    FbxVector4 mParentROffset;

    //! \c true if this character link has a defined rotation space
    bool            mHasRotSpace;
    //! Get the rotation limits of this character link
    FbxLimits  mRLimits;
    //! Get the PreRotation of this character link
    FbxVector4 mPreRotation;
    //! Get the PostRotation of this character link
    FbxVector4 mPostRotation;
    //! Get the rotation order of this character link
    int                     mRotOrder;
    //! Get the axis length of this character link
    double          mAxisLen;
};

class FbxCharacter : FbxConstraint /NoDefaultCtors/
{
public:
	/** \enum EInputType Character input type.
	  * - \e eInputActor		Not supported.
	  * - \e eInputCharacter	The character's input is another character.
	  * - \e eInputMarkerSet	The character's input is a control rig.
	  * - \e eOutputMarkerSet	Not supported.
	  * - \e eInputStancePose	The character's input is the stance pose.
	  */
	enum EInputType
	{ 
		eInputActor, 
		eInputCharacter,
		eInputMarkerSet,
		eOutputMarkerSet,
		eInputStancePose
	};

	/** \enum EGroupId Define ID for character groups that contains multiple character nodes. */
	enum EGroupId
	{
		eGroupBase,
		eGroupAuxiliary,
		eGroupSpine,
		eGroupRoll,
		eGroupSpecial,
		eGroupLeftHand,
		eGroupRightHand,
		eGroupProps,
		eGroupGameModeParent,
		eGroupNeck,
		eGroupLeftFoot,
		eGroupRightFoot,
		eGroupFloorContact,
		eGroupIdCount
	};

	/** \enum ENodeId Define ID for each character node.
	 */
	enum ENodeId
	{       
		eHips,
		eLeftHip,
		eLeftKnee,
		eLeftAnkle,
		eLeftFoot,
		eRightHip,
		eRightKnee,
		eRightAnkle,
		eRightFoot,
		eWaist,
		eChest,
		eLeftCollar,
		eLeftShoulder,
		eLeftElbow,
		eLeftWrist,
		eRightCollar,
		eRightShoulder,
		eRightElbow,
		eRightWrist,
		eNeck,
		eHead,
		eLeftHipRoll,
		eLeftKneeRoll,
		eRightHipRoll,
		eRightKneeRoll,
		eLeftShoulderRoll,
		eLeftElbowRoll,
		eRightShoulderRoll,
		eRightElbowRoll,
		eSpine2,
		eSpine3,
		eSpine4,
		eSpine5,
		eSpine6,
		eSpine7,
		eSpine8,
		eSpine9,
		eLeftThumbA,
		eLeftThumbB,
		eLeftThumbC,
		eLeftIndexA,
		eLeftIndexB,
		eLeftIndexC,
		eLeftMiddleA,
		eLeftMiddleB,
		eLeftMiddleC,
		eLeftRingA,
		eLeftRingB,
		eLeftRingC,
		eLeftPinkyA,
		eLeftPinkyB,
		eLeftPinkyC,
		eRightThumbA,
		eRightThumbB,
		eRightThumbC,
		eRightIndexA,
		eRightIndexB,
		eRightIndexC,
		eRightMiddleA,
		eRightMiddleB,
		eRightMiddleC,
		eRightRingA,
		eRightRingB,
		eRightRingC,
		eRightPinkyA,
		eRightPinkyB,
		eRightPinkyC,
		eReference,
		eLeftFloor,
		eRightFloor,
		eHipsTranslation,
		eProps0,
		eProps1,
		eProps2,
		eProps3,
		eProps4,
		eGameModeParentLeftHipRoll,
		eGameModeParentLeftKnee,
		eGameModeParentLeftKneeRoll,
		eGameModeParentRightHipRoll,
		eGameModeParentRightKnee,
		eGameModeParentRightKneeRoll,
		eGameModeParentLeftShoulderRoll,       
		eGameModeParentLeftElbow,      
		eGameModeParentLeftElbowRoll,  
		eGameModeParentRightShoulderRoll,
		eGameModeParentRightElbow,             
		eGameModeParentRightElbowRoll, 
		eLeftUpLegRoll,
		eLeftLegRoll,
		eRightUpLegRoll,
		eRightLegRoll,
		eLeftArmRoll,
		eLeftForeArmRoll,
		eRightArmRoll,
		eRightForeArmRoll,
		eLeftHandFloor,
		eRightHandFloor,
		eLeftHand,
		eRightHand,
		eNeck1,
		eNeck2,
		eNeck3,
		eNeck4,
		eNeck5,
		eNeck6,
		eNeck7,
		eNeck8,
		eNeck9,
		eLeftInHandThumb,
		eLeftThumbD,
		eLeftInHandIndex,
		eLeftIndexD,
		eLeftInHandMiddle,
		eLeftMiddleD,
		eLeftInHandRing,
		eLeftRingD,
		eLeftInHandPinky,
		eLeftPinkyD,
		eLeftInHandExtraFinger,
		eLeftExtraFingerA,
		eLeftExtraFingerB,
		eLeftExtraFingerC,
		eLeftExtraFingerD,
		eRightInHandThumb,
		eRightThumbD,
		eRightInHandIndex,
		eRightIndexD,
		eRightInHandMiddle,
		eRightMiddleD,
		eRightInHandRing,
		eRightRingD,
		eRightInHandPinky,
		eRightPinkyD,
		eRightInHandExtraFinger,
		eRightExtraFingerA,
		eRightExtraFingerB,
		eRightExtraFingerC,
		eRightExtraFingerD,
		eLeftInFootThumb,
		eLeftFootThumbA,
		eLeftFootThumbB,
		eLeftFootThumbC,
		eLeftFootThumbD,
		eLeftInFootIndex,
		eLeftFootIndexA,
		eLeftFootIndexB,
		eLeftFootIndexC,
		eLeftFootIndexD,
		eLeftInFootMiddle,
		eLeftFootMiddleA,
		eLeftFootMiddleB,
		eLeftFootMiddleC,
		eLeftFootMiddleD,
		eLeftInFootRing,
		eLeftFootRingA,
		eLeftFootRingB,
		eLeftFootRingC,
		eLeftFootRingD,
		eLeftInFootPinky,
		eLeftFootPinkyA,
		eLeftFootPinkyB,
		eLeftFootPinkyC,
		eLeftFootPinkyD,
		eLeftInFootExtraFinger,
		eLeftFootExtraFingerA,
		eLeftFootExtraFingerB,
		eLeftFootExtraFingerC,
		eLeftFootExtraFingerD,
		eRightInFootThumb,
		eRightFootThumbA,
		eRightFootThumbB,
		eRightFootThumbC,
		eRightFootThumbD,
		eRightInFootIndex,
		eRightFootIndexA,
		eRightFootIndexB,
		eRightFootIndexC,
		eRightFootIndexD,
		eRightInFootMiddle,
		eRightFootMiddleA,
		eRightFootMiddleB,
		eRightFootMiddleC,
		eRightFootMiddleD,
		eRightInFootRing,
		eRightFootRingA,
		eRightFootRingB,
		eRightFootRingC,
		eRightFootRingD,
		eRightInFootPinky,
		eRightFootPinkyA,
		eRightFootPinkyB,
		eRightFootPinkyC,
		eRightFootPinkyD,
		eRightInFootExtraFinger,
		eRightFootExtraFingerA,
		eRightFootExtraFingerB,
		eRightFootExtraFingerC,
		eRightFootExtraFingerD,
		eLeftCollarExtra,
		eRightCollarExtra,
		eNodeIdCount
	};

	enum EOffAutoUser
	{
		eParamModeOff,
		eParamModeAuto,
		eParamModeUser
	};

	enum EAutoUser
	{
		eParamModeAuto2,
		eParamModeUser2
	};

	enum EPostureMode
	{
		ePostureBiped,
		ePostureQuadriped,
		ePostureCount
	};

	enum EFloorPivot
	{
		eFloorPivotAuto,
		eFloorPivotAnkle,
		eFloorPivotToes,
		eFloorPivotCount
	};

	enum ERollExtractionMode
	{
		eRelativeRollExtraction,
		eAbsoluteRollExtraction,
		eRollExtractionTypeCount
	};

	enum EHipsTranslationMode
	{
		eHipsTranslationWorldRigid,
		eHipsTranslationBodyRigid,
		eHipsTranslationTypeCount
	};

	enum EFootContactType
	{
		eFootTypeNormal,
		eFootTypeAnkle,
		eFootTypeToeBase,
		eFootTypeHoof,
		eFootContactModeCount
	};

	enum EHandContactType
	{
		eHandTypeNormal,
		eHandTypeWrist,
		eHandTypeFingerBase,
		eHandTypeHoof,
		eHandContactModeCount
	};

	enum EFingerContactMode
	{
		eFingerContactModeSticky,
		eFingerContactModeSpread,
		eFingerContactModeStickySpread,
		eFingerContactModeCount
	};

	enum EContactBehaviour
	{
		eContactNeverSync,
		eContactSyncOnKey,
		eContactAlwaysSync,
		eContactBehaviorCount
	};

	enum EPropertyUnit
	{
		ePropertyNoUnit,
		ePropertyPercent,
		ePropertySecond,
		ePropertyCentimeter,
		ePropertyDegree,
		ePropertyEnum,
		ePropertyReal
	};

	enum EErrorCode
	{
		eInternalError,
		eErrorCount
	}; 

    static FbxClassId ClassId;
    static FbxCharacter* Create(FbxManager *pManager, const char *pName);
    virtual FbxClassId GetClassId() const;
    static FbxCharacter* Create(FbxObject *pContainer,  const char *pName);

    bool operator==(const FbxCharacter & pObj);
    
    /** Reset to default values. 
	 *     - Input type will be set to eInputStancePose.
      *     - Input object will be set to NULL.
      *     - Each Character link will be reset.
      *     - The control set will be reset.
      */
    void Reset();

    /** Set input type and index.
      * \param pInputType       Input type.
	  * \param pInputObject     Pointer to input character if input type equals eInputCharacter, otherwise \c NULL.
      */
    void SetInput(EInputType pInputType, FbxObject* pInputObject = NULL);

    //! Get input type.
    FbxCharacter::EInputType GetInputType() const;

    /** Get input actor or character.
      * \return     Pointer or \c Null, depending on the input type.
	  *                  - If the input type is set to eInputCharacter. The returned pointer can be casted to a pointer of type FbxCharacter.
	  *                  - \c Null pointer if the input object has not been set, or if the input type is not set to eInputCharacter.
      */
    FbxObject* GetInputObject() const;

    /** Associate a character link to a given character node ID. If a character link already exists for this character node ID,
      * the character link will be removed.
      * \param pCharacterNodeId      Character node ID.
      * \param pCharacterLink        Character link.
      * \param pUpdateObjectList     Set to \c true to update the object list (default value).
      * \return                      \c true if successful, \c false otherwise.
      */
    bool SetCharacterLink(ENodeId pCharacterNodeId, const FbxCharacterLink& pCharacterLink, bool pUpdateObjectList = true);

    /** Get a character link associated with a given character node ID.
      * \param pCharacterNodeId     ID of character node requested.
      * \param pCharacterLink       Optional pointer to receive the character link if function succeeds.
      * \return                     \c true if successful, \c false otherwise.
      */
    bool GetCharacterLink(ENodeId pCharacterNodeId, FbxCharacterLink* pCharacterLink = NULL) const;

    /** Get control set associated with the character.
      * \return     Return the control set associated with the character.
      */
    FbxControlSet& GetControlSet() const;

    /** Get number of elements in a given character group.
      * \param pCharacterGroupId     Character group ID.
      * \return                      The number of elements in the pCharacterGroupId character group.
      */
    static int GetCharacterGroupCount(FbxCharacter::EGroupId pCharacterGroupId);

    /** Get character node ID of an element in a given character group.
      * \param pCharacterGroupId     Character group ID.
      * \param pIndex                Character index ID.
      * \return                      Character node ID.
      */
    static ENodeId GetCharacterGroupElementByIndex(EGroupId pCharacterGroupId, int pIndex);
    
    /** Get character node name of an element in a given character group.
      * \param pCharacterGroupId     Character group ID.
      * \param pIndex                Character index ID.
      * \return                      Character node name.
      */
    static char* GetCharacterGroupNameByIndex(FbxCharacter::EGroupId pCharacterGroupId, int pIndex);

    /** Get character node version of an element in a given character group.
      * \param pCharacterGroupId     Character group ID.
      * \param pIndex                Character index ID.
      * \return                      Character node version.
      */
    static int GetCharacterGroupVersionByIndex(FbxCharacter::EGroupId pCharacterGroupId, int pIndex);

    /** Find the character group index associated with a given character node name.
      * \param pName                 Character node name.
      * \param pForceGroupId         Set to \c true to force the character group ID.
      * \param pCharacterGroupId     Receives character group ID.
      * \param pIndex                Receives character index ID.
      * \return                      \c true if successful, otherwise \c false.
      */
    static bool FindCharacterGroupIndexByName(const char* pName, bool pForceGroupId, FbxCharacter::EGroupId& pCharacterGroupId, int& pIndex);

    /** Get character node group and index of a given character node ID.
      * \param pCharacterNodeId     Character node ID.
      * \param pCharacterGroupId    if the Character node ID is found, the method returns the group ID through this parameter
      * \param pIndex               if the Character node ID is found, the method returns the index through this parameter
      * \remarks                    Only works for a character node ID that is part of a group.
      * \return                     \c true if successful, \c false otherwise.
      */
    static bool GetCharacterGroupIndexByElement(ENodeId pCharacterNodeId, EGroupId& pCharacterGroupId, int& pIndex);

    /** Get character node version of a given character node ID.
      * \param pCharacterNodeId     Character node ID to get version.
      * \param pVersion             if the node ID is found, the method returns the version through this parameter
      * \remarks                    Only works for a character node ID is part of a group.
      * \return                     \c true if successful, \c false otherwise.
      */
    static bool GetCharacterGroupVersionByElement(FbxCharacter::ENodeId pCharacterNodeId, int& pVersion);

    /** Get character node name associated with a given character node ID.
      * \param pCharacterNodeId     Character node ID to get name.
      * \param pName                if the node ID is found, the method returns the node name through this parameter
      *                             Since the Pointer points to internal data, it is not necessary to allocate a string buffer 
      *                             before calling this function.
      * \return                     \c true if a name exists for the given node ID.
      */
    static bool GetCharacterNodeNameFromNodeId(FbxCharacter::ENodeId pCharacterNodeId, char*& pName);
%MethodCode
            sipRes = FbxCharacter::GetCharacterNodeNameFromNodeId(a0, a1);
            return sipBuildResult(0,"(bc)",sipRes,a1);
%End

    /** Get the character node ID associated with a given character node name.
      * \param pName                Character node name to get node ID.
      * \param pCharacterNodeId     if the node name is found, this method returns the node ID through this parameter
      * \return                     \c true if a node ID exists for the given node name.
      */
    static bool GetCharacterNodeIdFromNodeName(const char* pName, FbxCharacter::ENodeId& pCharacterNodeId);
    
    // FbxConstraint Properties                            
    FbxPropertyBool1                             Active;
    FbxPropertyBool1                             Lock;
    FbxPropertyDouble1                           Weight;

    // FbxCharacter Properties
    FbxPropertyInteger1				 PullIterationCount;
    FbxPropertyFbxCharacterEPostureMode			 Posture;
    FbxPropertyBool1				 ForceActorSpace;
    FbxPropertyDouble1				 ScaleCompensation;
    FbxPropertyFbxCharacterEOffAutoUser			 ScaleCompensationMode;
    FbxPropertyDouble1				 HipsHeightCompensation;
    FbxPropertyFbxCharacterEOffAutoUser			 HipsHeightCompensationMode;
    FbxPropertyDouble1				 AnkleHeightCompensation;
    FbxPropertyFbxCharacterEOffAutoUser			 AnkleHeightCompensationMode;
    FbxPropertyDouble1				 AnkleProximityCompensation;
    FbxPropertyFbxCharacterEOffAutoUser			 AnkleProximityCompensationMode;
    FbxPropertyDouble1				 MassCenterCompensation;
    FbxPropertyBool1				 ApplyLimits;
    FbxPropertyDouble1				 ChestReduction;
    FbxPropertyDouble1				 CollarReduction;
    FbxPropertyDouble1				 NeckReduction;
    FbxPropertyDouble1				 HeadReduction;
    FbxPropertyDouble1				 ReachActorLeftAnkle;
    FbxPropertyDouble1				 ReachActorRightAnkle;
    FbxPropertyDouble1				 ReachActorLeftKnee;
    FbxPropertyDouble1				 ReachActorRightKnee;
    FbxPropertyDouble1				 ReachActorChest;
    FbxPropertyDouble1				 ReachActorHead;
    FbxPropertyDouble1				 ReachActorLeftWrist;
    FbxPropertyDouble1				 ReachActorRightWrist;
    FbxPropertyDouble1				 ReachActorLeftElbow;
    FbxPropertyDouble1				 ReachActorRightElbow;
    FbxPropertyDouble1				 ReachActorLeftFingerBase;
    FbxPropertyDouble1				 ReachActorRightFingerBase;
    FbxPropertyDouble1				 ReachActorLeftToesBase;
    FbxPropertyDouble1				 ReachActorRightToesBase;
    FbxPropertyDouble1				 ReachActorLeftFingerBaseRotation;
    FbxPropertyDouble1				 ReachActorRightFingerBaseRotation;
    FbxPropertyDouble1				 ReachActorLeftToesBaseRotation;
    FbxPropertyDouble1				 ReachActorRightToesBaseRotation;
    FbxPropertyDouble1				 ReachActorLeftAnkleRotation;
    FbxPropertyDouble1				 ReachActorRightAnkleRotation;
    FbxPropertyDouble1				 ReachActorHeadRotation;
    FbxPropertyDouble1				 ReachActorLeftWristRotation;
    FbxPropertyDouble1				 ReachActorRightWristRotation;
    FbxPropertyDouble1				 ReachActorChestRotation;
    FbxPropertyDouble1				 ReachActorLowerChestRotation;
    FbxPropertyDouble3			     HipsTOffset;
    FbxPropertyDouble3			     ChestTOffset;
    FbxPropertyFbxCharacterERollExtractionMode	 RollExtractionMode;
    FbxPropertyDouble1				 LeftUpLegRoll;
    FbxPropertyBool1				 LeftUpLegRollMode;
    FbxPropertyDouble1				 LeftLegRoll;
    FbxPropertyBool1				 LeftLegRollMode;
    FbxPropertyDouble1				 RightUpLegRoll;
    FbxPropertyBool1				 RightUpLegRollMode;
    FbxPropertyDouble1				 RightLegRoll;
    FbxPropertyBool1				 RightLegRollMode;
    FbxPropertyDouble1				 LeftArmRoll;
    FbxPropertyBool1				 LeftArmRollMode;
    FbxPropertyDouble1				 LeftForeArmRoll;
    FbxPropertyBool1				 LeftForeArmRollMode;
    FbxPropertyDouble1				 RightArmRoll;
    FbxPropertyBool1				 RightArmRollMode;
    FbxPropertyDouble1				 RightForeArmRoll;
    FbxPropertyBool1				 RightForeArmRollMode;
    FbxPropertyDouble1				 LeftUpLegRollEx;
    FbxPropertyBool1				 LeftUpLegRollExMode;
    FbxPropertyDouble1				 LeftLegRollEx;
    FbxPropertyBool1				 LeftLegRollExMode;
    FbxPropertyDouble1				 RightUpLegRollEx;
    FbxPropertyBool1				 RightUpLegRollExMode;
    FbxPropertyDouble1				 RightLegRollEx;
    FbxPropertyBool1				 RightLegRollExMode;
    FbxPropertyDouble1				 LeftArmRollEx;
    FbxPropertyBool1				 LeftArmRollExMode;
    FbxPropertyDouble1				 LeftForeArmRollEx;
    FbxPropertyBool1				 LeftForeArmRollExMode;
    FbxPropertyDouble1				 RightArmRollEx;
    FbxPropertyBool1				 RightArmRollExMode;
    FbxPropertyDouble1				 RightForeArmExRoll;
    FbxPropertyBool1				 RightForeArmRollExMode;
    FbxPropertyFbxCharacterEContactBehaviour	 ContactBehaviour;
    FbxPropertyBool1				 FootFloorContact;
    FbxPropertyBool1				 FootAutomaticToes;
    FbxPropertyFbxCharacterEFloorPivot			 FootFloorPivot;
    FbxPropertyDouble1				 FootBottomToAnkle;
    FbxPropertyDouble1				 FootBackToAnkle;
    FbxPropertyDouble1				 FootMiddleToAnkle;
    FbxPropertyDouble1				 FootFrontToMiddle;
    FbxPropertyDouble1				 FootInToAnkle;
    FbxPropertyDouble1				 FootOutToAnkle;
    FbxPropertyDouble1				 FootContactSize;
    FbxPropertyBool1				 FootFingerContact;
    FbxPropertyFbxCharacterEFootContactType		 FootContactType;
    FbxPropertyFbxCharacterEFingerContactMode	 FootFingerContactMode;
    FbxPropertyDouble1				 FootContactStiffness;
    FbxPropertyDouble1				 FootFingerContactRollStiffness;
    FbxPropertyBool1				 HandFloorContact;
    FbxPropertyBool1				 HandAutomaticFingers;
    FbxPropertyFbxCharacterEFloorPivot			 HandFloorPivot;
    FbxPropertyDouble1				 HandBottomToWrist;
    FbxPropertyDouble1				 HandBackToWrist;
    FbxPropertyDouble1				 HandMiddleToWrist;
    FbxPropertyDouble1				 HandFrontToMiddle;
    FbxPropertyDouble1				 HandInToWrist;
    FbxPropertyDouble1				 HandOutToWrist;
    FbxPropertyDouble1				 HandContactSize;
    FbxPropertyBool1				 HandFingerContact;
    FbxPropertyFbxCharacterEHandContactType		 HandContactType;
    FbxPropertyFbxCharacterEFingerContactMode	 HandFingerContactMode;
    FbxPropertyDouble1				 HandContactStiffness;
    FbxPropertyDouble1				 HandFingerContactRollStiffness;
    FbxPropertyDouble1				 LeftHandThumbTip;
    FbxPropertyDouble1				 LeftHandIndexTip;
    FbxPropertyDouble1				 LeftHandMiddleTip;
    FbxPropertyDouble1				 LeftHandRingTip;
    FbxPropertyDouble1				 LeftHandPinkyTip;
    FbxPropertyDouble1				 LeftHandExtraFingerTip;
    FbxPropertyDouble1				 RightHandThumbTip;
    FbxPropertyDouble1				 RightHandIndexTip;
    FbxPropertyDouble1				 RightHandMiddleTip;
    FbxPropertyDouble1				 RightHandRingTip;
    FbxPropertyDouble1				 RightHandPinkyTip;
    FbxPropertyDouble1				 RightHandExtraFingerTip;
    FbxPropertyDouble1				 LeftFootThumbTip;
    FbxPropertyDouble1				 LeftFootIndexTip;
    FbxPropertyDouble1				 LeftFootMiddleTip;
    FbxPropertyDouble1				 LeftFootRingTip;
    FbxPropertyDouble1				 LeftFootPinkyTip;
    FbxPropertyDouble1				 LeftFootExtraFingerTip;
    FbxPropertyDouble1				 RightFootThumbTip;
    FbxPropertyDouble1				 RightFootIndexTip;
    FbxPropertyDouble1				 RightFootMiddleTip;
    FbxPropertyDouble1				 RightFootRingTip;
    FbxPropertyDouble1				 RightFootPinkyTip;
    FbxPropertyDouble1				 RightFootExtraFingerTip;
    FbxPropertyBool1				 FingerSolving;
    FbxPropertyDouble1				 CtrlPullLeftToeBase;
    FbxPropertyDouble1				 CtrlPullLeftFoot;
    FbxPropertyDouble1				 CtrlPullLeftKnee;
    FbxPropertyDouble1				 CtrlPullRightToeBase;
    FbxPropertyDouble1				 CtrlPullRightFoot;
    FbxPropertyDouble1				 CtrlPullRightKnee;
    FbxPropertyDouble1				 CtrlPullLeftFingerBase;
    FbxPropertyDouble1				 CtrlPullLeftHand;
    FbxPropertyDouble1				 CtrlPullLeftElbow;
    FbxPropertyDouble1				 CtrlPullRightFingerBase;
    FbxPropertyDouble1				 CtrlPullRightHand;
    FbxPropertyDouble1				 CtrlPullRightElbow;
    FbxPropertyDouble1				 CtrlChestPullLeftHand;
    FbxPropertyDouble1				 CtrlChestPullRightHand;
    FbxPropertyDouble1				 CtrlPullHead;
    FbxPropertyDouble1				 CtrlResistHipsPosition;
    FbxPropertyDouble1				 CtrlEnforceGravity;
    FbxPropertyDouble1				 CtrlResistHipsOrientation;
    FbxPropertyDouble1				 CtrlResistChestPosition;
    FbxPropertyDouble1				 CtrlResistChestOrientation;
    FbxPropertyDouble1				 CtrlResistLeftCollar;
    FbxPropertyDouble1				 CtrlResistRightCollar;
    FbxPropertyDouble1				 CtrlResistLeftKnee;
    FbxPropertyDouble1				 CtrlResistMaximumExtensionLeftKnee;
    FbxPropertyDouble1				 CtrlResistCompressionFactorLeftKnee;
    FbxPropertyDouble1				 CtrlResistRightKnee;
    FbxPropertyDouble1				 CtrlResistMaximumExtensionRightKnee;
    FbxPropertyDouble1				 CtrlResistCompressionFactorRightKnee;
    FbxPropertyDouble1				 CtrlResistLeftElbow;
    FbxPropertyDouble1				 CtrlResistMaximumExtensionLeftElbow;
    FbxPropertyDouble1				 CtrlResistCompressionFactorLeftElbow;
    FbxPropertyDouble1				 CtrlResistRightElbow;
    FbxPropertyDouble1				 CtrlResistMaximumExtensionRightElbow;
    FbxPropertyDouble1				 CtrlResistCompressionFactorRightElbow;
    FbxPropertyDouble1				 CtrlSpineStiffness;
    FbxPropertyDouble1				 CtrlNeckStiffness;
    FbxPropertyBool1				 MirrorMode;
    FbxPropertyDouble1				 ShoulderCorrection;
    FbxPropertyBool1				 LeftKneeKillPitch;
    FbxPropertyBool1				 RightKneeKillPitch;
    FbxPropertyBool1				 LeftElbowKillPitch;
    FbxPropertyBool1				 RightElbowKillPitch;
    FbxPropertyFbxCharacterEHipsTranslationMode	 HipsTranslationMode;
    FbxPropertyBool1				 WriteReference;
    FbxPropertyBool1				 SyncMode;
    FbxPropertyDouble1				 Damping;
    FbxPropertyDouble1				 OrientationDamping;
    FbxPropertyFbxCharacterEOffAutoUser			 OrientationDampingMode;
    FbxPropertyDouble1				 DisplacementDamping;
    FbxPropertyFbxCharacterEOffAutoUser			 DisplacementDampingMode;
    FbxPropertyDouble1				 DisplacementMemory;
    FbxPropertyFbxCharacterEAutoUser DisplacementMemoryMode;
    FbxPropertyDouble1				 HipsDisplacementDamping;
    FbxPropertyFbxCharacterEAutoUser HipsDisplacementDampingMode;
    FbxPropertyDouble1				 AnkleDisplacementDamping;
    FbxPropertyFbxCharacterEAutoUser AnkleDisplacementDampingMode;
    FbxPropertyDouble1				 WristDisplacementDamping;
    FbxPropertyFbxCharacterEAutoUser WristDisplacementDampingMode;
    FbxPropertyDouble1				 Stabilization;
    FbxPropertyDouble1				 AnkleStabilizationTime;
    FbxPropertyFbxCharacterEAutoUser AnkleStabilizationTimeMode;
    FbxPropertyDouble1				 AnkleStabilizationPerimeter;
    FbxPropertyFbxCharacterEAutoUser AnkleStabilizationPerimeterMode;
    FbxPropertyDouble1				 AnkleStabilizationAngularPerimeter;
    FbxPropertyFbxCharacterEOffAutoUser			 AnkleStabilizationAngularPerimeterMode;
    FbxPropertyDouble1				 AnkleStabilizationFloorProximity;
    FbxPropertyFbxCharacterEOffAutoUser			 AnkleStabilizationFloorProximityMode;
    FbxPropertyDouble1				 AnkleStabilizationDamping;
    FbxPropertyFbxCharacterEOffAutoUser			 AnkleStabilizationDampingMode;
    FbxPropertyDouble1				 AnkleStabilizationRecoveryTime;
    FbxPropertyFbxCharacterEOffAutoUser			 AnkleStabilizationRecoveryTimeMode;
    FbxPropertyFbxReference			 SourceObject;
    FbxPropertyFbxReference			 DestinationObject;
    FbxPropertyFbxReference			 Actor;
    FbxPropertyFbxReference			 Character;
    FbxPropertyFbxReference			 ControlSet;
    FbxPropertyDouble1				 HikVersion;
    FbxPropertyBool1				 Characterize;
    FbxPropertyBool1				 LockXForm;
    FbxPropertyBool1				 LockPick;
    FbxPropertyDouble1               RealisticShoulder;
    FbxPropertyDouble1               CollarStiffnessX;
    FbxPropertyDouble1               CollarStiffnessY;
    FbxPropertyDouble1               CollarStiffnessZ;
    FbxPropertyDouble1               ExtraCollarRatio;
    FbxPropertyDouble1               LeftLegMaxExtensionAngle;
    FbxPropertyDouble1               RightLegMaxExtensionAngle;
    FbxPropertyDouble1               LeftArmMaxExtensionAngle;
    FbxPropertyDouble1               RightArmMaxExtensionAngle;
    FbxPropertyDouble1               StretchStartArmsAndLegs;
    FbxPropertyDouble1               StretchStopArmsAndLegs;
    FbxPropertyDouble1               SnSScaleArmsAndLegs;
    FbxPropertyDouble1               SnSReachLeftWrist;
    FbxPropertyDouble1               SnSReachRightWrist;
    FbxPropertyDouble1               SnSReachLeftAnkle;
    FbxPropertyDouble1               SnSReachRightAnkle;
    FbxPropertyDouble1               SnSScaleSpine;
    FbxPropertyDouble1               SnSScaleSpineChildren;
    FbxPropertyDouble1               SnSSpineFreedom;
    FbxPropertyDouble1               SnSReachChestEnd;
    FbxPropertyDouble1               SnSScaleNeck;
    FbxPropertyDouble1               SnSNeckFreedom;
    FbxPropertyDouble1               SnSReachHead;

protected:
    virtual ~FbxCharacter();
};
