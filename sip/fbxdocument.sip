class FbxDocument : FbxCollection /NoDefaultCtors/
{
public:
    static FbxClassId ClassId;
    static FbxDocument* Create(FbxManager *pManager, const char *pName);
    virtual FbxClassId GetClassId() const;
    static FbxDocument* Create(FbxObject *pContainer,  const char *pName);

    bool operator==(const FbxDocument & pObj);

    FbxPropertyFbxReference  Roots;
    FbxPropertyString        ActiveAnimStackName;
    
        //! Remove document members and restore default settings.
        virtual void  Clear();

        /** Add a member object and connect it to Roots.
		  * \param pMember Object to add to the document.
      */
    void AddRootMember   (FbxObject *pMember);
    
        /** Remove a member object from the document.
		  * \param pMember Object to remove from the document.
      */
    void    RootRootRemoveMember(FbxObject *pMember);
    
    /** Find a member object in the document.
      * \param pfbxType Type information.
      * \param pName Member name.  
      */
    //template <class T> inline T *       FindRootMember(T const *pfbxType, char *pName) { return Roots.FindSrcObject(pfbxType, pName); }
    FbxObject * FindRootMember(FbxClassId pClassId, const char * pName);
%MethodCode
        sipRes = sipCpp->Roots.FindSrcObject(FbxCriteria::ObjectType(*a0), a1);
%End

    //! Return the number of objects in the document.
    int GetRootMemberCount () const;
    
    /** Return the number of objects of class T in the collection.
      * \param pFBX_TYPE Type information.
      * \return The number of objects of class T in the collection.
      */
    //template < class T > inline int     GetRootMemberCount (T const *pFBX_TYPE) const { return Roots.GetSrcObjectCount(T::ClassId); }
    int GetRootMemberCount(FbxClassId pClassId) const;
%MethodCode
        sipRes = sipCpp->Roots.GetSrcObjectCount(FbxCriteria::ObjectType(*a0));
%End
            
    /** Return the number of objects satisfying given criteria in the document.
      * \param pCriteria Criteria for selecting objects.
      * \return The number of objects satisfying given criteria
      */
    int GetRootMemberCount( FbxCriteria pCriteria ) const;

        /** Return the member of the document at given index.
		  * \param pIndex Selection index.
      */
    FbxObject*                  GetRootMember (int pIndex=0) const;
    
    /** Return the member of class T of the document at given index.
      * \param pFBX_TYPE Type information.
		  * \param pIndex Selection index.
      */
    //template < class T > inline T*      GetRootMember (T const *pFBX_TYPE, int pIndex=0) const  { return (T *)Roots.GetSrcObject(T::ClassId,pIndex); }
    FbxObject * GetRootMember(FbxClassId pClassId, int pIndex = 0) const;
%MethodCode
        sipRes = sipCpp->Roots.GetSrcObject(FbxCriteria::ObjectType(*a0), a1);
%End
    
		/** Return the document member which satisfies given criteria, for given index.
          * \param pCriteria Criteria for selecting objects.
		  * \param pIndex Selection index.
      */
    FbxObject*                         GetRootMember (FbxCriteria pCriteria, int pIndex=0) const;
 
		/** Is an object part of the document.
		  * \param pMember Queried object.
		  * \return \c true if pMember is an object part of the document, \c false otherwise.
      */
    virtual bool    IsRootMember(FbxObject *pMember) const;
    
    /** Get the document information.
      * \return Pointer to the document information object.
      */
    FbxDocumentInfo* GetDocumentInfo() const;

        /** Set the document information.
          * \param pSceneInfo Pointer to the document information object.
      */
    void SetDocumentInfo(FbxDocumentInfo* pSceneInfo);
    
    /** Set the current peripheral to be used to load or unload objects from this document.
      * \param pPeripheral The peripheral to be set.
      */
    void SetPeripheral(FbxPeripheral* pPeripheral);

        /** Retrieve the current peripheral of the document.
        * \return Current peripheral.
    */
    virtual FbxPeripheral* GetPeripheral();

        /** Unload all the unloadable objects contained in the document using the currently set peripheral. 
          * \param pStatus The FbxStatus object to hold error codes.
          * \return The number of objects that the document has been able to unload.
      */
        int UnloadContent(FbxStatus* pStatus = NULL);

        /** Load all the objects contained in the document with the data from the currently set peripheral.
          * \param pStatus The FbxStatus object to hold error codes.
          * \return The number of loaded objects.
          */
        int LoadContent(FbxStatus* pStatus = NULL);

    /**
      * Fills an array of pointers to documents that reference objects in this document.
      *
          * \param pReferencingDocuments Array of pointers to documents.
          * \returns Number of documents that reference objects in this document.
      */
    int GetReferencingDocuments(FbxDocumentArray & pReferencingDocuments) const;

    /**
      * Fills an array of pointers to objects in a given document (pFromDoc)
      * that reference objects in this document.
      *
          * \param pFromDoc Pointer to the document containing referencing objects.
          * \param pReferencingObjects Array of pointers to referencing objects.
          * \returns Number of objects that reference objects in this document.
      */
    int GetReferencingObjects(const FbxDocument * pFromDoc, FbxObjectArray & pReferencingObjects) const;

    /**
      * Fills an array of pointers to documents that are referenced by objects in this document.
      *
          * \param pReferencedDocuments Array of pointers to documents.
          * \returns Number of documents that are referenced by objects in this document.
      */
    int GetReferencedDocuments(FbxDocumentArray & pReferencedDocuments) const;

    /**
      * Fills an array of pointers to objects in a given document (pToDoc)
      * that are referenced by objects in this document.
      *
          * \param pToDoc Pointer to the document containing referenced objects.
          * \param pReferencedObjects Array of pointers to referenced objects.
          * \returns Number of objects that are referenced by objects in this document.
      */
    int GetReferencedObjects(const FbxDocument * pToDoc, FbxObjectArray & pReferencedObjects) const;

    /**
          * Gets the path string to the root document, if the current document is contained in another document.
		  \returns Path to the root document.
      */
    FbxString GetPathToRootDocument() const;
    
    /**
          * Gets the document path to the root document as an array of documents, if the current document is contained in another document.
		  * \param pDocumentPath Array of FbxDocument to store the document path.
		  * \param pFirstCall Recursive flag: always use pFirstCall = \c true.
      */
    void GetDocumentPathToRootDocument(FbxDocumentArray & pDocumentPath, bool pFirstCall = true) const;

    /**
      * Tells if this document is a root document.
		  \return \c false if the current document is contained in another document, \c true otherwise.
      */
    bool IsARootDocument();
    
    /** Adds a new animation stack object to this document.
          * In case of error, FbxDocument::GetLastErrorID() will return
          * \c eTakeError.
          * \param pName Animation stack name.
          * \param pStatus The FbxStatus object to hold error codes.
          * \return \c true if a new FbxAnimStack has been successfully created,
          * \c false if an error occurred or if the specified name defines
          * a FbxAnimStack that already exists in the document.
          */
        bool CreateAnimStack(const char* pName, FbxStatus* pStatus = NULL);

        /** Destroy the animation stack object identified by pName from this document.
          * \param pName Name of the animation stack to be deleted.
      * \return \c true if the FbxAnimStack has been destroyed and \c false otherwise.
      */
    bool RemoveAnimStack(const char* pName);

    /** Fill a string array with all existing animation stack names.
      * The array of string is cleared before it is used
      * \param pNameArray An array of string objects.
      */
    void FillAnimStackNameArray(FbxStringArray pNameArray);

    
    void ConnectVideos();

protected:
    virtual ~FbxDocument();
};
