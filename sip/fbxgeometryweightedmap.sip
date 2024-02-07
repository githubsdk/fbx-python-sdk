class FbxGeometryWeightedMap : FbxObject /NoDefaultCtors/
{
public:
    static FbxClassId ClassId;
    static FbxGeometryWeightedMap* Create(FbxManager *pManager, const char *pName);
    virtual FbxClassId GetClassId() const;
    static FbxGeometryWeightedMap* Create(FbxObject *pContainer,  const char *pName);

    /** Set correspondence values.
      * \param pWeightedMappingTable     Pointer to the table containing values
      * \remark                          \e pWeightedMappingTable becomes owned by this object and will be destroyed by it
      *                                  when the object goes out of scope or on the next call to SetValues(). The deletion
      *                                  uses FbxDelete() so the content of the pointer must have been allocated with FbxNew<>()
      */
    void SetValues(const FbxWeightedMapping* pWeightedMappingTable);

    /** Return correspondence values.
      * \return     Pointer to the correspondence values table.
      */
    FbxWeightedMapping* GetValues() const;

    /** Return source geometry.
      * \return     Pointer to the source geometry, or \c NULL if there is no connected source geometry
      */
    FbxGeometry* GetSourceGeometry();

    /** Return destination geometry.
      * \return     Pointer to the destination geometry, or \c NULL if there is no connected destination geometry
      */
    FbxGeometry* GetDestinationGeometry();

protected:
    virtual ~FbxGeometryWeightedMap();
};
