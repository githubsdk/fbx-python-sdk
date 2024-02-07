class FbxGeometry : FbxGeometryBase /NoDefaultCtors/
{
public:
    static FbxClassId ClassId;
    static FbxGeometry* Create(FbxManager *pManager, const char *pName);
    virtual FbxClassId GetClassId() const;
    static FbxGeometry* Create(FbxObject *pContainer,  const char *pName);

    bool operator==(const FbxGeometry & pObj);
    
    virtual FbxNodeAttribute::EType GetAttributeType() const;
    
    /** Adds a deformer to this geometry (as mentioned in the description of this class, adding a deformer is a synonym
      * for "connect a deformer").
      * \param pDeformer     Pointer to the deformer to be added.
      * \return              Index of the added deformer.
      */
    int AddDeformer(FbxDeformer* pDeformer);

	/** Remove a deformer.
	* \param pIndex  Index of deformer to remove.
    * \param pStatus The FbxStatus object to hold error codes.
	* \return Pointer to the removed deformer (or \c NULL if pIndex is out of range).
	*/
	FbxDeformer* RemoveDeformer(int pIndex, FbxStatus* pStatus = NULL);

    /** Returns the number of deformers.
      * \return     The number of deformers that are connected to this geometry.
      */
    int GetDeformerCount() const;

    /** Returns the deformer at the specified index.
      * \param pIndex     The specified deformer index.
      * \param pStatus    The FbxStatus object to hold error codes.
      * \return           Pointer to the deformer (or \c NULL if pIndex is out of range).
      */
    FbxDeformer* GetDeformer(int pIndex, FbxStatus* pStatus = NULL) const;

    /** Returns the number of deformers of a specified type.
      * \param pType     The specified deformer type.
      * \return          The number of deformers of the specified type.
      */
    int GetDeformerCount(FbxDeformer::EDeformerType pType) const;

    /** Returns the deformer of a specified type at the specified index.
      * \param pIndex     The specified deformer index.
      * \param pType      The specified deformer type.
      * \param pStatus    The FbxStatus object to hold error codes.
      * \return           Pointer to the deformer (or \c NULL if pIndex is out of range).
      */
    FbxDeformer* GetDeformer(int pIndex, FbxDeformer::EDeformerType pType, FbxStatus* pStatus = NULL) const;

    /** Returns the source geometry weighted map that is connected to this geometry.
      * \return     Pointer to the source geometry weighted map that is connected to this geometry if any.
      */
    FbxGeometryWeightedMap* GetSourceGeometryWeightedMap();

    /** Returns the number of destination geometry weighted map(s) that are connected to this geometry.
      * \return     The number of destination geometry weighted map(s) that are connected to this geometry.
      */
    int GetDestinationGeometryWeightedMapCount() const;

    /** Returns the destination geometry weighted map at a specified index.
      * \param pIndex     The specified index.
      * \return           Pointer to the destination geometry weighted map at the specified index (if any).
      */
    FbxGeometryWeightedMap* GetDestinationGeometryWeightedMap(int pIndex);
    
	/** Add a shape to the specified blend shape deformer and blend shape channel of this geometry.
	* \param pBlendShapeIndex           The blend shape deformer index.
	* \param pBlendShapeChannelIndex    The blend shape channel index.
	* \param pShape                     Pointer to the shape object to be added.
	* \param pPercent                   The full deform percentage of this shape.
    * \param pStatus                    The FbxStatus object to hold error codes.
	* \return  \c true if success, \c false otherwise.
	*/
	bool AddShape(int pBlendShapeIndex, int pBlendShapeChannelIndex, FbxShape* pShape, double pPercent = 100, FbxStatus* pStatus = NULL);

	/** Removes all the shapes without destroying them.
	* If shapes aren't explicitly destroyed before calling this function, they will be
	* destroyed along with the SDK manager that created them.
	*/
    void ClearShape();

	/** Returns the number of shapes.
	* \return     The number of shapes that have been added to this geometry.
	*/
    int GetShapeCount() const;
    
	/** Returns the number of shapes.
	* \param pBlendShapeIndex              The blend shape deformer index.
	* \param pBlendShapeChannelIndex       The blend shape channel index.
    * \param pStatus                       The FbxStatus object to hold error codes.
	* \return     The number of shapes that have been added to this blend shape channel of this blend shape deformer.
	*/
	int GetShapeCount(int pBlendShapeIndex, int pBlendShapeChannelIndex, FbxStatus* pStatus = NULL) const;

	/** Returns the shape found at the specified index on a blend shape channel of a blend shape deformer.
	* \param pBlendShapeIndex              The blend shape deformer index.
	* \param pBlendShapeChannelIndex       The blend shape channel index.
	* \param pShapeIndex                   The specified shape index.
    * \param pStatus                       The FbxStatus object to hold error codes.
	* \return                              Pointer to the shape (or \c NULL if pIndex is out of range). 
	*/
	FbxShape* GetShape(int pBlendShapeIndex, int pBlendShapeChannelIndex, int pShapeIndex, FbxStatus* pStatus = NULL);

	/** Get the shape animation curve.
	* The shape channel is an animatable property with a value range from 0 to 100 (with 100 being full shape deformation).
	* The default value is 0.
	* \param pBlendShapeIndex              The blend shape deformer index.
	* \param pBlendShapeChannelIndex       The blend shape channel index.
	* \param pLayer                        The animation layer from which we want to get the requested animation curve.
	* \param pCreateAsNeeded               If \c true, creates the animation curve if it is not already present.
    * \param pStatus                       The FbxStatus object to hold error codes.
	* \return Animation curve (or NULL if an error occurred).
	* \remarks If pLayer is left at NULL, the method will use the first layer of the Animation stack.
	*/
	FbxAnimCurve* GetShapeChannel(int pBlendShapeIndex, int pBlendShapeChannelIndex, FbxAnimLayer* pLayer, bool pCreateAsNeeded = false, FbxStatus* pStatus = NULL);
	//@}

    /** NURBS and Patches surface modes.
      * This information is never directly used inside the FBX SDK. Applications can use these values if they wish to 
	  * carry the "rendering" details of the NURBS and Patches. The FBX SDK guarantee that the value (member of the FbxNurbs,
	  * FbxNurbsSurface and FbxPatch classes) is stored to FBX files and retrieved from them.
	  * \remarks The enum has been defined in this class to avoid symbols duplication.
      */
    enum ESurfaceMode
    {
        eRaw,			//! Raw.
        eLowNoNormals,	//! Low and no normals.
        eLow,			//! Low.
		eHighNoNormals,	//! High and no normals.
        eHigh			//! High.
    };
    
    FbxAMatrix& GetPivot(FbxAMatrix& pXMatrix) const;
    void SetPivot(FbxAMatrix& pXMatrix);
    void ApplyPivot();

    void SetDefaultShape(int pBlendShapeIndex, int pBlendShapeChannelIndex, double pPercent);
    void SetDefaultShape(FbxBlendShapeChannel* pBlendShapeChannel,  double pPercent);
    double GetDefaultShape(int pBlendShapeIndex, int pBlendShapeChannelIndex) const;
    double GetDefaultShape(FbxBlendShapeChannel* pBlendShapeChannel) const;
    
protected:
    virtual ~FbxGeometry();
};
