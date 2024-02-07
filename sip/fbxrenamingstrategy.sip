class FbxRenamingStrategyInterface
{
public: 
    
    //! Constructor.
    FbxRenamingStrategyInterface();

    //! Destructor.
    virtual ~FbxRenamingStrategyInterface ();

    //! Empty all memories about given names
    virtual void Clear() = 0;

    /** Rename.
    *   \param pName
    *   \return how the operation went.
    */
    virtual bool Rename(FbxNameHandler& pName) = 0;

    /** Spawn mechanism.  
    *   Create a dynamic renaming strategy instance of the same type
    *   the child class.
    *   \return new FbxRenamingStrategyInterface;  
    */
    virtual FbxRenamingStrategyInterface* Clone() = 0;
};

class FbxRenamingStrategyNumber : FbxRenamingStrategyInterface
{
public:         
    //! Constructor.
    FbxRenamingStrategyNumber();

    //! Destructor.
    virtual ~FbxRenamingStrategyNumber ();

    //! Empty all memories about given names
    virtual void Clear();

    /** Rename.
    *   \param pName
    *   \return how the operation went.
    */
    virtual bool Rename(FbxNameHandler& pName);

    /** Spawn mechanism.  
    *   Create a dynamic renaming strategy instance of the same type
    *   the child class.
    *   \return new FbxRenamingStrategyNumber;    
    */
    virtual FbxRenamingStrategyInterface* Clone();
};

class FbxRenamingStrategy : FbxRenamingStrategyInterface
{
public:
    enum EDirection
    {
        eToFBX,
        eFromFBX
    };

    /** Constructor.
      * \param pMod
      * \param pOnCreationRun
      */
    FbxRenamingStrategy(EDirection pMod, bool pOnCreationRun = false);

    //! Destructor.
    virtual ~FbxRenamingStrategy ();
    
    /** Rename.
    * \param pName     New name.
    * \return          \c true if successful, \c false otherwise.
    */
    virtual bool Rename(FbxNameHandler& pName);

    //! Empty all memories about given names
    virtual void Clear();
    
    /** Spawn mechanism.  
     * Create a dynamic renaming strategy instance of the same type.
     * \return     new FbxRenamingStrategyInterface
     */
    virtual FbxRenamingStrategyInterface* Clone();
};

class FbxSceneRenamer
{
public:
    /** Create an object of type FbxSceneRenamer.
      * \param pScene     Scene to be renamed.
      */
    FbxSceneRenamer(FbxScene* pScene);

    /** Deletes this object. 
      * All the references will become invalid.
      */
    virtual ~FbxSceneRenamer();

    enum ERenamingMode
    { 
        eNone,
        eMAYA_TO_FBX5,
        eMAYA_TO_FBX_MB75,
        eMAYA_TO_FBX_MB70,
        eFBXMB75_TO_FBXMB70,
        eFBX_TO_FBX,
        eMAYA_TO_FBX,
        eFBX_TO_MAYA,
        eLW_TO_FBX,
        eFBX_TO_LW,
        eXSI_TO_FBX,
        eFBX_TO_XSI,
        eMAX_TO_FBX,
        eFBX_TO_MAX,
        eMB_TO_FBX,
        eFBX_TO_MB,
        eDAE_TO_FBX,
        eFBX_TO_DAE
    };

    void RenameFor(ERenamingMode pMode);
};
