class FbxDeformer : FbxObject /NoDefaultCtors/
{

public:
    static FbxClassId ClassId;
    static FbxDeformer* Create(FbxManager *pManager, const char *pName);
    virtual FbxClassId GetClassId() const;
    static FbxDeformer* Create(FbxObject *pContainer,  const char *pName);

    bool operator==(const FbxDeformer & pObj);

	enum EDeformerType
	{
		eUnknown,		//!< Unknown deformer type
		eSkin,			//!< Type FbxSkin
		eBlendShape,	//!< Type FbxBlendShape
		eVertexCache	//!< Type FbxVertexCacheDeformer
	};


     /** Set multi-layer state flag.
       * \param pMultiLayer     Set to \c true to enable multi-layering.
       */
     void SetMultiLayer(bool pMultiLayer);

     /** Get multi-layer state.
       * \return     The current state of the multi-layer flag.
       */
     bool GetMultiLayer() const;

    /** Get the deformer type.
      * \return     Deformer type identifier. Default value is eUnknown.
      */
    virtual EDeformerType GetDeformerType() const;

protected:
    virtual ~FbxDeformer();
};
