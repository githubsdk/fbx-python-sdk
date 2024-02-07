class FbxBlendShape : FbxDeformer /NoDefaultCtors/
{
public:
    static FbxClassId ClassId;
    static FbxBlendShape* Create(FbxManager *pManager, const char *pName);
    virtual FbxClassId GetClassId() const;
    static FbxBlendShape* Create(FbxObject *pContainer,  const char *pName);
    bool operator==(const FbxShape & pObj);

    /** Set the geometry affected by this blend shape deformer.
      * \param pGeometry               Pointer to the geometry object to set.
      * \return                        \c true on success, \c false otherwise.
	  * \remarks                       One blend shape deformer can only be used
	  * on one base geometry. So when SetGeometry is called, pGeometry will replace
	  * the last one. 
      */
    bool SetGeometry(FbxGeometry* pGeometry);

    /** Get the geometry affected by this blend shape deformer.
      * \return                        a pointer to the geometry if set or NULL.
      */
    FbxGeometry* GetGeometry();

    /** Add a blend shape channel.
      * \param pBlendShapeChannel      Pointer to the blend shape channel object to add.
      * \return                        \c true on success, \c false otherwise.
      */
    bool AddBlendShapeChannel(FbxBlendShapeChannel* pBlendShapeChannel);

    /** Remove the given blend shape.
      * \param pBlendShapeChannel      Pointer to the blend shape channel to remove from this blend shape deformer.
      * \return                        Pointer to the blend shape channel or \c NULL if pBlendShapeChannel is not owned by this blend shape deformer.
      */
    FbxBlendShapeChannel* RemoveBlendShapeChannel(FbxBlendShapeChannel* pBlendShapeChannel);

    /** Get the number of blend shape channels.
      * \return                        Number of blend shape channels that have been added to this object.
      */
    int GetBlendShapeChannelCount() const;

    /** Get blend shape channel at given index.
      * \param pIndex                  Index of the blend shape channel.
      * \return                        Pointer to the blend shape channel or \c NULL if index is out of range.
      */
    FbxBlendShapeChannel* GetBlendShapeChannel(int pIndex);

    /** Get the type of the deformer.
      * \return                        Deformer type identifier.
      */
    EDeformerType GetDeformerType()  const;

	/** Restore the blend shape deformer to its initial state.
	* Calling this function will do the following:
	* \li Clear the pointer to base geometry.
	* \li Remove all the blend shape channels.
	*/
	void Reset();
	
protected:
    virtual ~FbxBlendShape();
};
