class FbxNameHandler
{
public:
    /** Constructor.
    * \param pInitialName Name string used to initialize both members (initialName and currentName)
    * of this class.
    */
    FbxNameHandler(const char* pInitialName = "");

    /** Copy constructor.
      * \param pName FbxNameHandler copied to this one.
      */
    FbxNameHandler(const FbxNameHandler & pName);

    //!Destructor
    ~FbxNameHandler();

    /** Set initial name.
    * \param pInitialName New string for the initial name.
    *   \remarks The current name will also be changed to this value.
    */
    void SetInitialName(const char* pInitialName);

    /** Get initial name.
    * \return Pointer to the InitialName string buffer.
    */
    const char * GetInitialName() const;

    /** Set current name.
    * \param pNewName New string for the current name.
    * \remarks The initial name is not affected.
    */
    void SetCurrentName(const char * pNewName);

    /** Get current name.
    * \return Pointer to the CurrentName string buffer.
    */
    const char * GetCurrentName() const;

    /** Set the namespace.
    * \param pNameSpace New string for the namespace.
    * \remarks The initial name is not affected.
    */
    void SetNameSpace(const char* pNameSpace);

    /** Get the namespace.
    * \return Pointer to the CurrentName string buffer.
    */
    const char* GetNameSpace() const;

    /** Check if the current name and internal name match.
    * \return \c true if current name isn't identical to initial name.
    */
    bool IsRenamed() const;
};