class FbxStringList
{
public :
    FbxStringList(); 
    FbxStringList( const FbxStringList &pOriginal );

    void CopyFrom( const FbxStringList *pOriginal  );
};

class FbxObject /NoDefaultCtors/
{

// Add in the sequence of sub-classes firstly and parent-classes secondly, as class order in C++ exceptions handler
%ConvertToSubClassCode
    if (sipCpp->Is<FbxDocumentInfo>())
        sipType = sipType_FbxDocumentInfo;
    else if (sipCpp->Is<FbxGeometryWeightedMap>())
        sipType = sipType_FbxGeometryWeightedMap;
    else if (sipCpp->Is<FbxSceneReference>())
        sipType = sipType_FbxSceneReference;
    else if (sipCpp->Is<FbxAnimEvaluator>())
        sipType = sipType_FbxAnimEvaluator;
    else if (sipCpp->Is<FbxSelectionNode>())
        sipType = sipType_FbxSelectionNode;
    else if (sipCpp->Is<FbxAnimCurveNode>())
        sipType = sipType_FbxAnimCurveNode;
    else if (sipCpp->Is<FbxIOSettings>())
        sipType = sipType_FbxIOSettings;
    else if (sipCpp->Is<FbxCharacterPose>())
        sipType = sipType_FbxCharacterPose;
    else if (sipCpp->Is<FbxCache>())
        sipType = sipType_FbxCache;
    else if (sipCpp->Is<FbxThumbnail>())
        sipType = sipType_FbxThumbnail;
    else if (sipCpp->Is<FbxPose>())
        sipType = sipType_FbxPose;
    else if (sipCpp->Is<FbxNode>())
        sipType = sipType_FbxNode;
    else if (sipCpp->Is<FbxGlobalSettings>())
        sipType = sipType_FbxGlobalSettings;
    else if (sipCpp->Is<FbxImplementation>())
        sipType = sipType_FbxImplementation;

    else if (sipCpp->Is<FbxVideo>())
        sipType = sipType_FbxVideo;
    else if (sipCpp->Is<FbxAudio>())
        sipType = sipType_FbxAudio;
    else if (sipCpp->Is<FbxMediaClip>())
        sipType = sipType_FbxMediaClip;

    else if (sipCpp->Is<FbxScene>())
        sipType = sipType_FbxScene;
    else if (sipCpp->Is<FbxDocument>())
        sipType = sipType_FbxDocument;
    else if (sipCpp->Is<FbxAnimStack>())
        sipType = sipType_FbxAnimStack;
    else if (sipCpp->Is<FbxAnimLayer>())
        sipType = sipType_FbxAnimLayer;
    else if (sipCpp->Is<FbxAudioLayer>())
        sipType = sipType_FbxAudioLayer;
    else if (sipCpp->Is<FbxSelectionSet>())
        sipType = sipType_FbxSelectionSet;
    else if (sipCpp->Is<FbxCollectionExclusive>())
        sipType = sipType_FbxCollectionExclusive;
    else if (sipCpp->Is<FbxDisplayLayer>())
        sipType = sipType_FbxDisplayLayer;
    else if (sipCpp->Is<FbxCollection>())
        sipType = sipType_FbxCollection;


    else if (sipCpp->Is<FbxAnimCurve>())
        sipType = sipType_FbxAnimCurve;
    else if (sipCpp->Is<FbxAnimCurveBase>())
        sipType = sipType_FbxAnimCurveBase;


    else if (sipCpp->Is<FbxExporter>())
        sipType = sipType_FbxExporter;    
    else if (sipCpp->Is<FbxImporter>())
        sipType = sipType_FbxImporter;
    else if (sipCpp->Is<FbxIOBase>())
        sipType = sipType_FbxIOBase;


    else if (sipCpp->Is<FbxCharacter>())
        sipType = sipType_FbxCharacter;
    else if (sipCpp->Is<FbxConstraintAim>())
        sipType = sipType_FbxConstraintAim;
    else if (sipCpp->Is<FbxConstraintParent>())
        sipType = sipType_FbxConstraintParent;
    else if (sipCpp->Is<FbxConstraintPosition>())
        sipType = sipType_FbxConstraintPosition;
    else if (sipCpp->Is<FbxConstraintRotation>())
        sipType = sipType_FbxConstraintRotation;
    else if (sipCpp->Is<FbxConstraintScale>())
        sipType = sipType_FbxConstraintScale;
    else if (sipCpp->Is<FbxConstraintSingleChainIK>())
        sipType = sipType_FbxConstraintSingleChainIK;
    else if (sipCpp->Is<FbxConstraint>())
        sipType = sipType_FbxConstraint;


    else if (sipCpp->Is<FbxVertexCacheDeformer>())
        sipType = sipType_FbxVertexCacheDeformer;
    else if (sipCpp->Is<FbxSkin>())
        sipType = sipType_FbxSkin;
    else if (sipCpp->Is<FbxBlendShape>())
        sipType = sipType_FbxBlendShape;
    else if (sipCpp->Is<FbxDeformer>())
        sipType = sipType_FbxDeformer;


    else if (sipCpp->Is<FbxCluster>())
        sipType = sipType_FbxCluster;
    else if (sipCpp->Is<FbxBlendShapeChannel>())
        sipType = sipType_FbxBlendShapeChannel;
    else if (sipCpp->Is<FbxSubDeformer>())
        sipType = sipType_FbxSubDeformer;


    else if (sipCpp->Is<FbxLayeredTexture>())
        sipType = sipType_FbxLayeredTexture;
    else if (sipCpp->Is<FbxFileTexture>())
        sipType = sipType_FbxFileTexture;
    else if (sipCpp->Is<FbxProceduralTexture>())
        sipType = sipType_FbxProceduralTexture;
    else if (sipCpp->Is<FbxTexture>())
        sipType = sipType_FbxTexture;


    else if (sipCpp->Is<FbxSurfacePhong>())
        sipType = sipType_FbxSurfacePhong;
    else if (sipCpp->Is<FbxSurfaceLambert>())
        sipType = sipType_FbxSurfaceLambert;
    else if (sipCpp->Is<FbxSurfaceMaterial>())
        sipType = sipType_FbxSurfaceMaterial;
    
    
    else if (sipCpp->Is<FbxLine>())
        sipType = sipType_FbxLine;
    else if (sipCpp->Is<FbxMesh>())
        sipType = sipType_FbxMesh;
    else if (sipCpp->Is<FbxNurbs>())
        sipType = sipType_FbxNurbs;
    else if (sipCpp->Is<FbxNurbsCurve>())
        sipType = sipType_FbxNurbsCurve;
    else if (sipCpp->Is<FbxNurbsSurface>())
        sipType = sipType_FbxNurbsSurface;
    else if (sipCpp->Is<FbxPatch>())
        sipType = sipType_FbxPatch;
    else if (sipCpp->Is<FbxBoundary>())
        sipType = sipType_FbxBoundary;
    else if (sipCpp->Is<FbxTrimNurbsSurface>())
        sipType = sipType_FbxTrimNurbsSurface;
    else if (sipCpp->Is<FbxGeometry>())
        sipType = sipType_FbxGeometry;
    else if (sipCpp->Is<FbxGeometryBase>())
        sipType = sipType_FbxGeometryBase;
    else if (sipCpp->Is<FbxLayerContainer>())
        sipType = sipType_FbxLayerContainer;
    else if (sipCpp->Is<FbxSkeleton>())
        sipType = sipType_FbxSkeleton;
    else if (sipCpp->Is<FbxLODGroup>())
        sipType = sipType_FbxLODGroup;
    else if (sipCpp->Is<FbxNull>())
        sipType = sipType_FbxNull;
    else if (sipCpp->Is<FbxLight>())
        sipType = sipType_FbxLight;
    else if (sipCpp->Is<FbxMarker>())
        sipType = sipType_FbxMarker;
    else if (sipCpp->Is<FbxCamera>())
        sipType = sipType_FbxCamera;
    else if (sipCpp->Is<FbxShape>())
        sipType = sipType_FbxShape;
    else if (sipCpp->Is<FbxCameraStereo>())
        sipType = sipType_FbxCameraStereo;
    else if (sipCpp->Is<FbxCameraSwitcher>())
        sipType = sipType_FbxCameraSwitcher;
    else if (sipCpp->Is<FbxNodeAttribute>())
        sipType = sipType_FbxNodeAttribute;
    
    
    else if (sipCpp->Is<FbxBindingTable>())
        sipType = sipType_FbxBindingTable;
    else if (sipCpp->Is<FbxBindingOperator>())
        sipType = sipType_FbxBindingOperator;
    else if (sipCpp->Is<FbxBindingTableBase>())
        sipType = sipType_FbxBindingTableBase;


    else
        sipType = 0;
%End

public:    

    void Destroy(bool pRecursive=false);

    static FbxClassId ClassId;
    static FbxObject* Create(FbxManager *pManager, const char *pName);
    virtual FbxClassId GetClassId() const;
    static FbxObject* Create(FbxObject *pContainer,  const char *pName);

	enum ECloneType
	{
		eDeepClone,		//!< A deep copy of the object. Changes to either the original or clone do not propagate to each other.
		eReferenceClone	//!< Changes to original object propagate to clone. Changes to clone do not propagate to original.
	};
    
    /** Creates a clone of this object.
      * \param pContainer The object, typically a document or a scene, that contains the new clone(can be NULL).
      * \param pCloneType The type of clone to be created.
      * \return The new clone, or NULL (if the specified clone type is not supported).
      */
    virtual FbxObject* Clone(FbxObject::ECloneType pCloneType=eDeepClone, FbxObject* pContainer=NULL, void* pSet = NULL) const;

    /** Checks if this object is a reference clone of another object.
      * \return \c True if this object is a clone of another object, \c false otherwise
      */
    bool        IsAReferenceTo() const;

    /** If this object is a reference clone, returns the original object (from which the clone originates).
      * \return The original object, or NULL (if this object is not a reference clone).
      */
    FbxObject* GetReferenceTo() const;

    /** Checks if any objects are reference cloned from this object.
      * \return \c True if there are objects reference cloned from this object, \c false otherwise.
      */
    bool        IsReferencedBy() const;

    /** Returns the number of objects that are reference clones of this object.
      * \return The number of objects that are reference clones of this object.
      */
    int         GetReferencedByCount() const;

    /** Returns a reference clone of this object at the specified index.
      * \param pIndex The specified index, valid values are [0, GetReferencedByCount())
      * \return The reference clone, or NULL (if pIndex is out of range).
      */
    FbxObject* GetReferencedBy(int pIndex) const;
    
    /** Unloads this object's content using the offload peripheral that is currently set in the document
      * then flushes it from memory.
      * \return 2 if the object's content is already unloaded or 1 if
      *         this object's content has been successfully unloaded to the current
      *         peripheral.
      *
      * \remarks If the content is locked more than once, or the peripheral cannot handle
      *         this object's unloading, or if an error occurs, this method returns 0 and does not flush the content.         
      */
    int ContentUnload();

    /** Loads this object's content using the offload peripheral that is currently set in the document.
      * \return 1 if this object's content has been successfully loaded from the current
      *         peripheral, 2 if the content is already loaded, and 0 if an error occurs or
      *         the object's content is locked.
      * \remarks On a successful Load attempt, the object content is locked.
      */
    int ContentLoad();

    /** Judges if this object's content is loaded.
      * \return \c True if this object's content is loaded, \c false otherwise.
      * \remarks An object that has not been filled yet must be considered
      * unloaded.
      */
    bool ContentIsLoaded() const;

    /**  Decreases the content lock count of an object. If the content lock count of an object
      *  is greater than 0, the content of the object is considered locked.
      */
    void ContentDecrementLockCount();

    /** Increases the content lock count of an object. If the content lock count of an object
      * is greater than 0, the content of the object is considered locked.
    */
    void ContentIncrementLockCount();

    /** Judges if this object's content is locked. The content is considered locked if the content lock count
      * is greater than 0
      * \return \c True if this object's content is locked, \c false otherwise.
      * \remarks A locked state prevents the object content from being unloaded from memory but
      * does not block the loading.
      */
    bool ContentIsLocked() const;
    
    /** Sets the name of this object.
      * \param pName The object name as a \c NULL terminated string.
      */
    void SetName(const char * pName);

    /** Returns the full name of this object.
      * \return The full name as a \c NULL terminated string.
      */
    const char * GetName() const;

    /** Returns the name of the object without the namespace qualifier.
      * \return The object name without the namespace qualifier.
      */
    FbxString GetNameWithoutNameSpacePrefix() const;

    /** Returns the name of the object with the namespace qualifier.
      * \return The object name with the namespace qualifier.
      */
    FbxString GetNameWithNameSpacePrefix() const;

    /** Sets the initial name of the object.
      * \param pName The object's initial name as a \c NULL terminated string.
      */
    void SetInitialName(const char* pName);

    /** Returns the initial name of the object.
      * \return The object's initial name as a \c NULL terminated string.
      */
    const char* GetInitialName() const;

    /** Returns the namespace of the object.
      * \return The object's namespace as a \c NULL terminated string.
      */
    FbxString GetNameSpaceOnly( );

    /** Sets the namespace of the object.
      * \param pNameSpace The object's namespace as a \c NULL terminated string.
      */
    void SetNameSpace(FbxString pNameSpace);

    /** Returns an list of all the namespaces for this object
      * \param identifier The identifier of the namespaces.
      * \return The list of all namespaces.
      */
    SIP_PYLIST GetNameSpaceArray( char identifier );
%MethodCode
        FbxArray<FbxString*> result = sipCpp->GetNameSpaceArray(a0);
        if ((sipRes = PyList_New(result.GetCount())) == NULL)
            return NULL;
            
        for (int i = 0; i < result.GetCount(); ++i)
        {
            PyList_SET_ITEM(sipRes, i, PyUnicode_DecodeASCII(result[i]->Buffer(), result[i]->GetLen(), NULL));
        }
%End

    /** Returns only the name (no namespace or prefix) of the object.
      * \return The name only as a \c NULL terminated string.
      */
    FbxString GetNameOnly() const;

    /** Returns the namespace qualifier.
      * \return The namespace qualifier.
      */
    FbxString GetNameSpacePrefix() const;

    /** Removes the prefix of pName
      * \param pName Whose prefix is removed.
      * \return A temporary string without prefix.
      */
    static FbxString RemovePrefix(char* pName);

    /** Strips the prefix of pName
      * \param lName Whose prefix is stripped.
      * \return lName stripped of its prefix.
      */
    static FbxString StripPrefix(FbxString& lName);

    /** Strips the prefix of pName
      * \param pName Whose prefix is stripped.
      * \return A temporary string stripped of its prefix.
      */
    static FbxString StripPrefix(const char* pName);

	//!Returns the unique ID of this object.
	const FbxUInt64& GetUniqueID() const;
    
    virtual bool GetSelected();
    virtual void SetSelected(bool pSelected);
    
    FbxProperty GetFirstProperty() const;
    FbxProperty GetNextProperty(const FbxProperty &pProperty) const;
            
    FbxProperty FindProperty(const char *pName, bool pCaseSensitive = true) const;
    FbxProperty FindProperty(const char *pName, const FbxDataType &pDataType, bool pCaseSensitive = true) const;
    FbxProperty FindPropertyHierarchical(const char* pName, bool pCaseSensitive = true)const;
    FbxProperty FindPropertyHierarchical(const char* pName, const FbxDataType &pDataType, bool pCaseSensitive = true) const;
    
    FbxProperty GetClassRootProperty();
    
    bool ConnectSrcObject(FbxObject* pObject, FbxConnection::EType pType = FbxConnection::eNone);
    bool IsConnectedSrcObject(const FbxObject* pObject) const;
    bool DisconnectSrcObject(FbxObject* pObject);
    bool DisconnectAllSrcObject();
    bool DisconnectAllSrcObject(const FbxCriteria &pCriteria);
    int GetSrcObjectCount() const;
    int GetSrcObjectCount(const FbxCriteria &pCriteria) const;
    FbxObject* GetSrcObject(const int& pIndex=0) const;
    FbxObject* GetSrcObject(const FbxCriteria &pCriteria,const int& pIndex=0) const;
    FbxObject* FindSrcObject(const char *pName,const int& pStartIndex=0) const;
    FbxObject* FindSrcObject(const FbxCriteria &pCriteria,const char *pName,const int& pStartIndex=0) const;
    
    bool ConnectDstObject(FbxObject* pObject,FbxConnection::EType pType = FbxConnection::eNone);
    bool IsConnectedDstObject(const FbxObject* pObject) const;
    bool DisconnectDstObject(FbxObject* pObject);
    bool DisconnectAllDstObject();
    bool DisconnectAllDstObject(const FbxCriteria &pCriteria);
    int GetDstObjectCount() const;
    int GetDstObjectCount(const FbxCriteria &pCriteria) const;
    FbxObject* GetDstObject(const int& pIndex=0) const;
    FbxObject* GetDstObject(const FbxCriteria &pCriteria, const int& pIndex=0) const;
    FbxObject*  FindDstObject(const char *pName,const int& pStartIndex=0) const;
    FbxObject*  FindDstObject(const FbxCriteria &pCriteria, const char *pName,const int& pStartIndex=0) const;

    bool         ConnectSrcProperty      (const FbxProperty & pProperty);
    bool         IsConnectedSrcProperty  (const FbxProperty & pProperty);
    bool         DisconnectSrcProperty   (const FbxProperty & pProperty);
    int          GetSrcPropertyCount     () const;
    FbxProperty GetSrcProperty          (const int& pIndex=0) const;
    FbxProperty FindSrcProperty         (const char *pName,const int& pStartIndex=0) const;
    bool         ConnectDstProperty      (const FbxProperty & pProperty);
    bool         IsConnectedDstProperty  (const FbxProperty & pProperty);
    bool         DisconnectDstProperty   (const FbxProperty & pProperty);
    int          GetDstPropertyCount     () const;
    FbxProperty GetDstProperty          (const int& pIndex=0) const;
    FbxProperty FindDstProperty         (const char *pName,const int& pStartIndex=0) const;
    
    FbxDocument* GetDocument() const;
    void            SetDocument(FbxDocument* pDocument);
    FbxDocument* GetRootDocument() const;
    FbxScene* GetScene() const;
    
    virtual const char * Localize( const char * pID, const char * pDefault = NULL ) const;
    virtual FbxString GetUrl() const;
    virtual bool    SetUrl(const char *pUrl);

    enum EObjectFlag
    {
        eNone =					0x00000000,
        eInitialized =          0x00000001,
        eSystem =				0x00000002,
        eSavable =				0x00000004,
		eSelected =				0x00000008,
        eHidden =				0x00000010,
        eContentLoaded =		0x00000020,
        eDontLocalize =         0x00000040,
    };

    void SetObjectFlags(EObjectFlag pFlags, bool pValue);
    bool GetObjectFlags(EObjectFlag pFlags) const;

    void	SetAllObjectFlags(FbxUInt pFlags);	//All flags at once
    FbxUInt	GetAllObjectFlags() const;			//All flags at once

    //Basic copy operator implementation. It simply copy property values from the source to target.
    //FbxObject& operator=(FbxObject const& pObject);

    //Basic comparison operator implementation. It simply compare property values between source and target.
    //NOTE: If a property cannot be found on one of the object, the comparison fails (return false).
    //Different classid will fail comparison as well as different property count. Reference properties are not compared.
    bool        operator==(const FbxObject & pObject);
    bool        operator!=(const FbxObject & pObject);
    
    virtual const char *    GetTypeName() const;
    virtual FbxStringList     GetTypeFlags() const;
    
    FbxProperty RootProperty;

protected:
    virtual ~FbxObject();
};
