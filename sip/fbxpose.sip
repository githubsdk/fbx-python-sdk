class FbxPose : FbxObject /NoDefaultCtors/
{
public:
    static FbxClassId ClassId;
    static FbxPose* Create(FbxManager *pManager, const char *pName);
    virtual FbxClassId GetClassId() const;
    static FbxPose* Create(FbxObject *pContainer,  const char *pName);

    bool operator==(const FbxPose & pObj);
    
    /** Set the type of pose.
       * \param pIsBindPose If true, type will be bind pose, else rest pose.
      */
    void SetIsBindPose(bool pIsBindPose);

    /** Pose identifier flag.
      * \return \c true if this object holds BindPose data.
      */
    bool IsBindPose() const;

    /** Pose identifier flag.
      * \return \c true if this object holds RestPose data.
      */
    bool IsRestPose() const;

     /** Get number of stored items.
       * \return The number of items stored.
       */
    int GetCount() const;

     /** Stores the pose transformation for the given node.
       * \param pNode pointer to the node for which the pose is stored.
       * \param pMatrix Pose transform of the node.
       * \param pLocalMatrix Flag to indicate if pMatrix is defined in Local or Global space.
	  * \param pMultipleBindPose Flag to indicate if multiple bind pose exist. If this is false, all matrix for one node should be same in different bind pose.
       * \return -1 if the function failed or the index of the stored item.
       */
	int Add(FbxNode* pNode, const FbxMatrix& pMatrix, bool pLocalMatrix = false, bool pMultipleBindPose = true);

     /** Remove the pIndexth item from the Pose object.
       * \param pIndex Index of the item to be removed.
       */
    void Remove(int pIndex);

    /** Get the node name.
      * \param pIndex Index of the queried item.
      * \return The node initial and current names.
      * \remarks If the index is invalid an empty FbxNameHandler is returned.
      */
    FbxNameHandler GetNodeName(int pIndex) const;

    /** Get the node.
      * \param pIndex Index of the queried item.
      * \return A pointer to the node referenced.
      * \remarks If the index is invalid or no pointer to a node is set, returns NULL.
      *  The returned pointer will become undefined if the FbxPose object is destroyed.
      */
    FbxNode* GetNode(int pIndex) const;

    /** Get the transform matrix.
      * \param pIndex Index of the queried item.
      * \return A reference to the pose matrix.
      * \remarks If the index is invalid a reference to an identity matrix is returned.
      *  The reference will become undefined if the FbxPose object is destroyed.
      */
    const FbxMatrix& GetMatrix(int pIndex)       const;

    /** Get the type of the matrix.
      * \param pIndex Index of the queried item.
      * \return \c true if the matrix is defined in the Local coordinate space and false otherwise.
      * \remarks If the FbxPose object is configured to hold BindPose data, this method will always return \c false.
      */
    bool IsLocalMatrix(int pIndex) const;

	enum ENameComponent
	{
		eInitialNameComponent = 1,	//! use initial name when compare two nodes
		eCurrentNameComponent = 2,	//! use current name when compare two nodes
		eAllNameComponents = 3		//! use both initial and current name when compare two nodes, it's true if one or both matched
	};
	
    /** Look in the FbxPose object for the given node name.
      * \param pNodeName Name of the node we are looking for.
	  * \param pCompareWhat Bitwise or of the following flags: INTIALNAME_COMPONENT, eCurrentNameComponent
	  * \return -1 if the node is not in the list. Otherwise, the index of the corresponding FbxPoseInfo element.
      */
	int Find(const FbxNameHandler& pNodeName, char pCompareWhat = eAllNameComponents) const;

    /** Look in the FbxPose object for the given node.
      * \param pNode the node we are looking for.
	  * \return -1 if the node is not in the list. Otherwise, the index of the corresponding FbxPoseInfo element.
      */
	int Find(const FbxNode* pNode) const;

    /** Get the list of Poses objects that contain the node with name pNodeName.
      * This method will look in all the poses of all the scenes.
      * \param pManager    The manager owning the poses and scenes.
      * \param pNode       The node being explored.
      * \param pPoseList   List of BindPoses/RestPoses that have the node.
      * \param pIndex      List of indices of the nodes in the corresponding poses lists.
      * \return \c true if the node belongs to at least one Pose (either a BindPose or a RestPose).
      * \remarks The pPoseList and pIndex are filled by this method.
      *  The elements of the returned list must not be deleted since they still belong to the scene.
      */
    static bool GetPosesContaining(FbxManager& pManager, FbxNode* pNode,
                                   FbxPoseArray& pPoseList,
                                   IntArray& pIndex);

    /** Get the list of Poses objects that contain the node with name pNodeName.
      * \param pScene     Scene owning the poses.
      * \param pNode      The node being explored.
      * \param pPoseList  List of BindPoses/RestPoses that have the node.
      * \param pIndex     List of indices of the nodes in the corresponding poses lists.
      * \return \c true if the node belongs to at least one Pose (either a BindPose or a RestPose).
      * \remarks The pPoseList and pIndex are filled by this method.
      *  The elements of the returned list must not be deleted since they still belong to the scene.
      */
    static bool GetPosesContaining(FbxScene* pScene, FbxNode* pNode,
                                   FbxPoseArray& pPoseList,
                                   IntArray& pIndex);

    /** Get the list of BindPose objects that contain the node with name pNodeName.
      * This method will look in all the bind poses of all the scenes.
      * \param pManager     The manager owning the poses.
      * \param pNode        The node being explored.
      * \param pPoseList    List of BindPoses that have the node.
      * \param pIndex       List of indices of the nodes in the corresponding bind poses lists.
      * \return \c true if the node belongs to at least one BindPose.
      * \remarks The pPoseList and pIndex are filled by this method.
      *  The elements of the returned list must not be deleted since they still belong to the scene.
      */
    static bool GetBindPoseContaining(FbxManager& pManager, FbxNode* pNode,
                                      FbxPoseArray& pPoseList,
                                      IntArray& pIndex);

    /** Get the list of BindPose objects that contain the node with name pNodeName.
      * \param pScene       The scene owning the poses.
      * \param pNode        The node being explored.
      * \param pPoseList    List of BindPoses that have the node.
      * \param pIndex       List of indices of the nodes in the corresponding bind poses lists.
      * \return \c true if the node belongs to at least one BindPose.
      * \remarks The pPoseList and pIndex are filled by this method.
      *  The elements of the returned list must not be deleted since they still belong to the scene.
      */
    static bool GetBindPoseContaining(FbxScene* pScene, FbxNode* pNode,
                                      FbxPoseArray& pPoseList,
                                      IntArray& pIndex);

    /** Get the list of RestPose objects that contain the node with name pNodeName.
      * This method will look in all the bind poses of all the scenes.
      * \param pManager     The manager owning the poses.
      * \param pNode        The node being explored.
      * \param pPoseList    List of RestPoses that have the node.
      * \param pIndex       List of indices of the nodes in the corresponding rest poses lists.
      * \return \c true if the node belongs to at least one RestPose.
      * \remarks The pPoseList and pIndex are filled by this method.
      *  The elements of the returned list must not be deleted since they still belong to the scene.
      */
    static bool GetRestPoseContaining(FbxManager& pManager, FbxNode* pNode,
                                      FbxPoseArray& pPoseList,
                                      IntArray& pIndex);

    /** Get the list of RestPose objects that contain the node with name pNodeName.
      * \param pScene       The scene owning the poses.
      * \param pNode        The node being explored.
      * \param pPoseList    List of RestPoses that have the node.
      * \param pIndex       List of indices of the nodes in the corresponding rest poses lists.
      * \return \c true if the node belongs to at least one RestPose.
      * \remarks The pPoseList and pIndex are filled by this method.
      *  The elements of the returned list must not be deleted since they still belong to the scene.
      */
    static bool GetRestPoseContaining(FbxScene* pScene, FbxNode* pNode,
                                      FbxPoseArray& pPoseList,
                                      IntArray& pIndex);

    /** Check this BindPose and report an error if all the conditions to a valid bind pose are not
      * met. The conditions are:
      *
      * a) We are a BindPose.
      * b) For every node in the bind pose, all their parent node are part of the bind pose.
      * c) All the deforming nodes are part of the bind pose.
      * d) All the parents of the deforming nodes are part of the bind pose.
      * e) Each deformer relative matrix correspond to the deformer Inv(bindMatrix) * deformed Geometry bindMatrix.
      *
      * \param pRoot This node is used as the stop point when visiting the parents (cannot be NULL).
      * \param pMatrixCmpTolerance Tolerance value when comparing the matrices.
      * \param pStatus The FbxStatus object to hold error codes.
      * \return true if all the above conditions are met and false otherwise.
      * \remarks If the returned value is false, querying for the error will return the reason of the failure.
      *  As soon as one of the above conditions is not met, this method return ignoring any subsequent errors.
      * Run the IsBindPoseVerbose if more details are needed.
      */
	bool IsValidBindPose(FbxNode* pRoot, double pMatrixCmpTolerance=0.0001, FbxStatus* pStatus = NULL);

	/** Same as IsValidBindPose() but slower because it will not stop as soon as a failure occurs. Instead,
      * keeps running to accumulate the faulty nodes (stored in the appropriate array). It is then up to the
      * caller to fill the UserNotification if desired.
      *
      * \param pRoot This node is used as the stop point when visiting the parents (cannot be NULL).
      * \param pMissingAncestors Each ancestor missing from the BindPose is added to this list.
      * \param pMissingDeformers Each deformer missing from the BindPose is added to this list.
      * \param pMissingDeformersAncestors Each deformer ancestors missing from the BindPose is added to this list.
      * \param pWrongMatrices Nodes that yield to a wrong matrix comparisons are added to this list.
      * \param pMatrixCmpTolerance Tolerance value when comparing the matrices.
      * \param pStatus The FbxStatus object to hold error codes.
      */
    bool IsValidBindPoseVerbose(FbxNode* pRoot,
                                FbxNodeArray& pMissingAncestors,
                                FbxNodeArray& pMissingDeformers,
                                FbxNodeArray& pMissingDeformersAncestors,
                                FbxNodeArray& pWrongMatrices,
                                double pMatrixCmpTolerance=0.0001,
                                FbxStatus* pStatus = NULL);

	/** Same as IsValidBindPose() but slower because it will not stop as soon as a failure occurs. Instead,
      * keeps running to accumulate the faulty nodes and send them directly to the UserNotification.
      *
      * \param pRoot This node is used as the stop point when visiting the parents (cannot be NULL).
      * \param pUserNotification Pointer to the user notification where the messages will be accumulated.
      * \param pMatrixCmpTolerance Tolerance value when comparing the matrices.
      * \param pStatus The FbxStatus object to hold error codes.
	  * \remarks If the pUserNotification parameter is NULL, this method will call IsValidBindPose().
      */
    bool IsValidBindPoseVerbose(FbxNode* pRoot,
                                FbxUserNotification* pUserNotification,
                                double pMatrixCmpTolerance=0.0001,
                                FbxStatus* pStatus = NULL);

protected:
    virtual ~FbxPose();
};
