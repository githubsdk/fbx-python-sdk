class FbxBlendShapeChannel : FbxSubDeformer /NoDefaultCtors/
{
public:
    static FbxClassId ClassId;
    static FbxBlendShapeChannel* Create(FbxManager *pManager, const char *pName);
    virtual FbxClassId GetClassId() const;
    static FbxBlendShapeChannel* Create(FbxObject *pContainer,  const char *pName);
    bool operator==(const FbxShape & pObj);

	/** This property stores deform percent on this channel.
	* The value range is from 0.0 to 100.0, default value is 0.0. 
	*/
	FbxPropertyDouble1        DeformPercent;

	/** Set the blend shape deformer that contains this blend shape channel.
	* \param pBlendShape             Pointer to the blend shape deformer to set.
	* \return                        \c true on success, \c false otherwise.
	*/
	bool SetBlendShapeDeformer(FbxBlendShape* pBlendShape);

	/** Get the blend shape deformer that contains this blend shape channel.
	* \return                        a pointer to the blend shape deformer if set or NULL.
	*/
	FbxBlendShape* GetBlendShapeDeformer();

	/** Add a target shape.
	* \param pShape                  Pointer to the target shape to add.
	* \param pFullDeformPercent      The full deform percentage for the target shape.
	* \return                        \c true on success, \c false otherwise.
	*/
	bool AddTargetShape(FbxShape* pShape, double pFullDeformPercent = 100);

	/** Remove the given target shape.
	* \param pShape                  Pointer to the target shape to remove from this blend shape channel.
	* \return                        Pointer to the target shape or \c NULL if pShape is not owned by this blend shape channel.
	*/
	FbxShape* RemoveTargetShape(FbxShape* pShape);

	/** Get the number of target shapes.
	* \return                        Number of target shapes that have been added to this blend shape channel.
	*/
	int GetTargetShapeCount() const;

	/** Get the target shape at given index.
	* \param pIndex                  Index of the target shape.
	* \return                        Pointer to the target shape or \c NULL if index is out of range.
	*/
	FbxShape* GetTargetShape(int pIndex);

	/** Get the index of the given target shape.
	* \param pShape                  The given target shape to find index.
	* \return                        The index of the target shape.
	*/
	int GetTargetShapeIndex( FbxShape* pShape);

	/** Get the full weight value of target shape at given index.
	* \param pIndex                  Index of the target shape.
	* \return                        The full weight value of target shape at given index.
	*/
    SIP_PYLIST GetTargetShapeFullWeights();
%MethodCode
    double * weights = sipCpp->GetTargetShapeFullWeights();
    int weightCount = sipCpp->GetTargetShapeCount();

    if ((sipRes = PyList_New(weightCount)) == NULL)
        return NULL;

    for (int i = 0; i < weightCount; ++i)
    {
        PyList_SET_ITEM(sipRes, i, PyFloat_FromDouble(*weights));
        weights++;
    }
%End
 
	/** Set the array size for the fully deform weights
	* \param pCount The new count.
	*/
	void SetFullWeightsCount(int pCount);

    /**
      * \name General Functions
      */
    //@{
    /** Get the type of the sub deformer.
      * \return SubDeformer type identifier: eBLENDSHAPECHANNEL.
      */
    EType GetSubDeformerType() const;

    /** Restore the blend shape channel to its initial state.
      * Calling this function will do the following:
      * \li Set the DeformPercent to 0.
      * \li Remove all target shapes.
      * \li Clear the array for fully deform weights.
      */
    void Reset();

protected:
    virtual ~FbxBlendShapeChannel();
};
