class FbxCollection : FbxObject /NoDefaultCtors/
{
public:
    static FbxClassId ClassId;
    static FbxCollection* Create(FbxManager *pManager, const char *pName);
    virtual FbxClassId GetClassId() const;
    static FbxCollection* Create(FbxObject *pContainer,  const char *pName);

    bool operator==(const FbxCollection & pObj);
    
    //! Delete all contained objects.
    virtual void    Clear();
    
    /** Add a member.
      * \param pMember Object to be added.
      */
    virtual bool    AddMember(FbxObject *pMember);
    
    /** Remove a member.
      * \param pMember Object to be removed.
      */
    virtual bool    RemoveMember(FbxObject *pMember);
    
    /** Find a member.
      * \param pClassId Member type.
      * \param pName Member name.
      */
    FbxObject * FindMember(FbxClassId pClassId, const char *pName);
%MethodCode
        sipRes = sipCpp->FindSrcObject(FbxCriteria::ObjectType(*a0), a1);
%End
    
    /** Return the number of objects in the collection.
      * \return The number of objects in the collection.
      */
    int                          GetMemberCount () const;
    
    int GetMemberCount(FbxClassId pClassId) const;
%MethodCode
        sipRes = sipCpp->GetSrcObjectCount(FbxCriteria::ObjectType(*a0));
%End
    
    /** Return the number of objects satisfying given criteria in the collection.
      * \param pCriteria The given criteria
      * \return The number of objects satisfying given criteria in the collection.
      */
    int GetMemberCount( FbxCriteria pCriteria ) const;
    
    /** Return the index'th member of the collection.
      * \param pIndex The member index.
      * \return The index'th member of the collection.
      */
    FbxObject* GetMember(int pIndex=0) const;
    
    FbxObject* GetMember(FbxClassId pClassId, int pIndex=0) const;
%MethodCode
        sipRes = sipCpp->GetSrcObject(FbxCriteria::ObjectType(*a0), a1);
%End
    
    /** Return the index'th member of the collection which satisfies given criteria.
      * \param pCriteria The given criteria.
      * \param pIndex The member index.
      * \return The index'th member of the collection.
      */
    FbxObject* GetMember(FbxCriteria pCriteria, int pIndex=0) const;
    
    /** Is an object part of the collection.
      * \param pMember Whether pMember is part of the collection.
      * \return \c True if is, \c false otherwise.
      */
    virtual bool    IsMember(const FbxObject *pMember) const;
    
    /** Select/Deselect all contained objects.
      * \param pSelection If \c true, all object are selected, otherwise all objects are unselected.
      */
    virtual void    SetSelectedAll(bool pSelection);
    
protected:
    virtual ~FbxCollection();
};
