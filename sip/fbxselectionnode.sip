class FbxSelectionNode : FbxObject /NoDefaultCtors/
{
public:
    static FbxClassId ClassId;
    static FbxSelectionNode* Create(FbxManager *pManager, const char *pName);
    virtual FbxClassId GetClassId() const;
    static FbxSelectionNode* Create(FbxObject *pContainer,  const char *pName);

    bool operator==(const FbxSelectionNode & pObj);

    /** \enum ESelectType               SelectionNode type identifier.
    * - \e eVertexLevel                Vertex level selection.
    * - \e eEdgeLevel                  Edge level selection.
    * - \e eFaceLevel                  Face level selection.
    * - \e eObjectLevel                Object level selection.
    * - \e eSelectTypeCount             Number of Select Types.
    */
    enum ESelectType
    {
        eVertexLevel,
        eEdgeLevel,
        eFaceLevel,
        eObjectLevel,
        eSelectTypeCount
    };

    /** Set an object whose components or itself is contained in the SelectionNode.
    * \param pObject      The object whose components or itself is contained in the SelectionNode. 
    * \return \c true if the object is set successfully. \c false otherwise.
    * \remarks It is possible a SDK user will set multiple objects to one SelectionNode, but only the last one will be kept.
    */
    bool SetSelectionObject(FbxObject* pObject);

    /** Get the object whose components or itself is contained in the SelectionNode.
    * \return The object whose components or itself is contained in the SelectionNode. 
    */
    FbxObject* GetSelectionObject();

    /** To detect if the SelectionNode is valid.
    *  \return \c true if this is a valid SelectionNode. \c false otherwise.
    *  \remarks SelectionNode is valid if selection object is set.
    *   SelectionNode is not valid if no selection object is set.
    */
    bool IsValid();

    /** true means the object itself is also in the selection set; 
    *   false means only the object's components are in the selection set, the object is not.
    */
    bool mIsTheNodeInSet;

    /** Index array for selected vertices.
    */
    IntArray mVertexIndexArray;  

    /** Index array for selected edges.
    */
    IntArray mEdgeIndexArray; 

    /** Index array for selected faces.
    */
    IntArray mPolygonIndexArray;

protected:
    virtual ~FbxSelectionNode();
};
