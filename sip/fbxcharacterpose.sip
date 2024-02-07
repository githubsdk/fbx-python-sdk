class FbxCharacterPose : FbxObject /NoDefaultCtors/
{
public:
    static FbxClassId ClassId;
    static FbxCharacterPose* Create(FbxManager *pManager, const char *pName);
    virtual FbxClassId GetClassId() const;
    static FbxCharacterPose* Create(FbxObject *pContainer,  const char *pName);

    bool operator==(const FbxCharacterPose & pObj);
    
    //! Reset to an empty character pose.
    void Reset();

    /** Get the root node.
      * \return     Pointer to the root node.
      */
    FbxNode* GetRootNode() const;

    /** Get the character.
      * \return     Pointer to the character.
      */
    FbxCharacter* GetCharacter() const;

    /** Get offset matrix for a given character node.
      * \param pCharacterNodeId     Character Node ID.
      * \param pOffset              Receives offset matrix.
      * \return                     \c true if successful, \c false otherwise.
      */
    bool GetOffset(FbxCharacter::ENodeId pCharacterNodeId, FbxAMatrix& pOffset);

    /** Get local position for a given character node.
      * \param pCharacterNodeId     Character Node ID.
      * \param pLocalT              Receives local translation vector.
      * \param pLocalR              Receives local rotation vector.
      * \param pLocalS              Receives local scaling vector.
      * \return                     \c true if successful, \c false otherwise.
      */
    bool GetLocalPosition(FbxCharacter::ENodeId pCharacterNodeId, FbxVector4& pLocalT, FbxVector4& pLocalR, FbxVector4& pLocalS);
    
    /** Get global position for a given character node.
      * \param pCharacterNodeId     Character Node ID.
      * \param pGlobalPosition      Receives global position.
      * \return                     \c true if successful, \c false otherwise.
      */
    bool GetGlobalPosition(FbxCharacter::ENodeId pCharacterNodeId, FbxAMatrix& pGlobalPosition);

protected:
    virtual ~FbxCharacterPose();
};
