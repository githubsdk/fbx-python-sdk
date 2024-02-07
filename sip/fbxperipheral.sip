class FbxPeripheral 
{
public:
    //!Constructor.
    FbxPeripheral();

    //!Destructor.
    virtual ~FbxPeripheral();

    /** Reset the peripheral to its initial state.
      */
    virtual void Reset() = 0;

    /** Unload the content of pObject.
      * \param pObject                 Object whose content is to be offloaded into 
      * the peripheral storage area.
      * \return                        \c true if the object content has been successfully transferred.
      */
    virtual bool UnloadContentOf(FbxObject* pObject) = 0;

    /** Load the content of pObject.
      * \param pObject                 Object whose content is to be loaded from
      * the peripheral storage area.
      * \return                        \c true if the object content has been successfully transferred.
      */
    virtual bool LoadContentOf(FbxObject* pObject) = 0;

    /** Check if this peripheral can unload the given object content.
      * \param pObject                 Object whose content has to be transferred.
      * \return                        \c true if the peripheral can handle this object content AND/OR
      * has enough space in its storage area.
      */
    virtual bool CanUnloadContentOf(FbxObject* pObject) = 0;

    /** Check if this peripheral can load the given object content.
    * \param pObject                  Object whose content has to be transferred.
    * \return                         \c true if the peripheral can handle this object content
    */
    virtual bool CanLoadContentOf(FbxObject* pObject) = 0;

    /** Initialize the connections of an object
    * \param pObject                  Object on which the request for connection is done
    */
    virtual void InitializeConnectionsOf(FbxObject* pObject) = 0;

    /** Uninitialize the connections of an object
    * \param pObject                 Object on which the request for disconnection is done
    */
    virtual void UninitializeConnectionsOf(FbxObject* pObject) = 0;
};

// predefined offload peripherals
FbxPeripheral* TMPFILE_PERIPHERAL;
FbxPeripheral* NULL_PERIPHERAL;