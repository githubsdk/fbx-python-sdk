class FbxSelectionSet : FbxCollection /NoDefaultCtors/
{
public:
    static FbxClassId ClassId;
    static FbxSelectionSet* Create(FbxManager *pManager, const char *pName);
    virtual FbxClassId GetClassId() const;
    static FbxSelectionSet* Create(FbxObject *pContainer,  const char *pName);

    bool operator==(const FbxSelectionSet & pObj);

    FbxPropertyString        SelectionSetAnnotation;

    /**
    * \name Utility functions
    */
    //@{

    /**  Get the faces selected for pObj. 
    *    \param pObj
    *    \param pPolygonIndexArray
    *    \remarks Put selected faces index in pPolygonIndexArray.
    */
    void GetFaceSelection( FbxObject* pObj, IntArray& pPolygonIndexArray ) ;

    /**  Get the edges selected for pObj. 
    *    \param pObj
    *    \param pEdgeIndexArray
    *    \remarks Put selected edges index in pEdgeIndexArray.
    */
    void GetEdgeSelection( FbxObject* pObj, IntArray& pEdgeIndexArray ) ; 

    /**  Get the vertices selected for pObj. 
    *    \param pObj
    *    \param pVertexIndexArray
    *    \remarks Put selected vertices index in pVertexIndexArray.
    */
    void GetVertexSelection( FbxObject* pObj, IntArray& pVertexIndexArray ) ; 

    /**  Get two types of member in selection set: SelectionNodes and Directly contained objects.
    *    \param pSelectionNodeList
    *    \param pDirectObjectList
    *    \remarks There might be two types members for a selection set. One is SelectionNode, the other is directly contained objects.
    *    They will be listed in pSelectionNodeList and pDirectObjectList separately.
    */
    void GetSelectionNodesAndDirectObjects(FbxSelectionNodeArray &pSelectionNodeList, FbxObjectArray &pDirectObjectList) ; 
protected:
    virtual ~FbxSelectionSet();
};

%ModuleHeaderCode
    typedef FbxSelectionNode*               FbxSelectionNodePtr;
    typedef FbxArray<FbxSelectionNodePtr>   FbxSelectionNodeArray;
%End
    typedef FbxSelectionNode*               FbxSelectionNodePtr;
    typedef FbxArray<FbxSelectionNodePtr>   FbxSelectionNodeArray;
