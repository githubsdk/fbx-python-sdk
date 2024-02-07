class FbxAnimCurveNode : FbxObject /NoDefaultCtors/
{
public:
    static FbxClassId ClassId;
    static FbxAnimCurveNode* Create(FbxManager *pManager, const char *pName);
    virtual FbxClassId GetClassId() const;
    static FbxAnimCurveNode* Create(FbxObject *pContainer,  const char *pName);

    bool operator==(const FbxAnimCurveNode & pObj);

    /**
      * \name Utility functions.
      *
      */
    //@{
        /** Returns true if animation keys are found.
          * \param pRecurse When \c true and this AnimCurveNode is composite, descend to the children.
          * \return \c true if at least one AnimCurve is found and contains animation keys.
          */
        bool IsAnimated(bool pRecurse=false);

        /** Find out start and end time of the animation.
          * This function retrieves the including time span for all
          * the Curve's time span of this curve node.
          * \param pTimeInterval Reference to receive start time and end time.
          * \return \c true on success, \c false otherwise.
          * \remarks \c false is also returned if this curve node has no animation.
          */
        bool GetAnimationInterval(FbxTimeSpan& pTimeInterval);

        /** Test this object to see if it is a composite FbxAnimCurveNode or a "leaf".
          * A composite FbxAnimCurveNode is an object whose src connections are only FbxAnimCurveNode
          * and his channels property is totally empty.
          * \return \c true if this object is a composite, \c false otherwise.
          */
        bool IsComposite() const;

        /** Recursively look for the FbxAnimCurveNode matching the passed named argument.
          * \param pName Name of the FbxAnimCurveNode we are looking for.
          * \return The found anim curve node or NULL.
          * \remarks If pName is an empty string, this function automatically return NULL.
          */
        FbxAnimCurveNode* Find(const char* pName);

        /** Create a FbxAnimCurveNode compatible with the specified property data type.
          * \param pProperty Property to be compatible with.
          * \param pScene The scene the created FbxAnimCurveNode will belong to.
          * \return The pointer to the newly created FbxAnimCurveNode. Returns NULL if an error occurred. 
          * \remarks This function does not connect the newly created object to the property.
          * \remarks This function detects FbxDouble3, FbxDouble4 and FbxDouble4x4 properties DataTypes and
          *         automatically adds the required channels properties. Any other DataType is not 
          *         specifically processed and the channels properties are left empty and need to be filled
          *         using the AddChannel() function.
          */
        static FbxAnimCurveNode* CreateTypedCurveNode(FbxProperty& pProperty, FbxScene* pScene);

        /** Get the total number of channels properties defined in the composite member.
          * \return The number of channels properties.
          */
        unsigned int GetChannelsCount();

        /** Get the index of the named channel.
          * \param pChannelName Name of the channel for which we want the index.
          * \return the index of the named channel or -1 if the name does not exist.
          */
        int GetChannelIndex(const char* pChannelName);

        /** Get the name of the channel.
          * \param pChannelId Index of the channel for which we want the name.
          * \return the name of the indexed channel or "" if the index is invalid.
          */
        FbxString GetChannelName(int pChannelId);

        /** Empties the composite member.
          * \remarks This function will remove all the channels added with the AddChannel() method
          *         regardless of their use and/or connections.
          */
        void ResetChannels();
        
        // Template methods
        //bool AddChannel(const char* pChnlName, const T &pValue);
        //void SetChannelValue(const char* pChnlName, T pValue);
        //void SetChannelValue(unsigned int pChnlId, T pValue);
        //T GetChannelValue(const char* pChnlName, T pInitVal);
        //T GetChannelValue(unsigned int pChnlId, T pInitVal);
        
        //bool AddChannel(const char* pChnlName, int pValue);
        //void SetChannelValue(const char* pChnlName, int pValue);
        //void SetChannelValue(unsigned int pChnlId, int pValue);
        //int GetChannelValue(const char* pChnlName, int pInitVal);
        //int GetChannelValue(unsigned int pChnlId, int pInitVal);
        
        bool AddChannel(const char* pChnlName, double pValue);
        void SetChannelValue(const char* pChnlName, double pValue);
        void SetChannelValue(unsigned int pChnlId, double pValue);
        double GetChannelValue(const char* pChnlName, double pInitVal);
        double GetChannelValue(unsigned int pChnlId, double pInitVal);

        bool AddChannel(const char* pChnlName, FbxString pValue);
        void SetChannelValue(const char* pChnlName, FbxString pValue);
        void SetChannelValue(unsigned int pChnlId, FbxString pValue);
        FbxString GetChannelValue(const char* pChnlName, FbxString pInitVal);
        FbxString GetChannelValue(unsigned int pChnlId, FbxString pInitVal);
 
        
        /** Disconnect the AnimCurves from the channel.
          * \param pCurve       The curve to disconnect from the channel.
          * \param pChnlId      The channel index.
          * \return \c true if the disconnection was made, \c false if an error occurred.
          */
        bool DisconnectFromChannel(FbxAnimCurve* pCurve, unsigned int pChnlId);

        /** Connects the given animation curve to the specified channel.
          * \param pCurve   The curve to connect to the channel.
          * \param pChnl    The name of the channel the curve is to be connected to.
          * \param pInFront When \c true, all the current connections are moved after this one.
          *                 making this one the first. By default, the connection is the last one.
          * \return \c true if the connection was made, \c false if an error occurred.
          */
        bool ConnectToChannel(FbxAnimCurve* pCurve, const char* pChnl, bool pInFront = false);

        /** Connects the given animation curve to the specified channel.
          * \param pCurve   The curve to connect to the channel.
          * \param pChnlId  Index of the channel the curve is to be connected to.
          * \param pInFront When \c true, all the current connections are moved after this one.
          *                 making this one the first. By default, the connection is the last one.
          * \return \c true if the connection was made, \c false if an error occurred.
          * \remarks The index is 0 based.
          */
        bool ConnectToChannel(FbxAnimCurve* pCurve, unsigned int pChnlId, bool pInFront = false);

        /** Creates a new curve and connects it to this curve node.          
          * \param pCurveNodeName Name of the FbxAnimCurveNode we are looking for (if this one is a composite).
          * \param pChannel Channel identifier.
          * \return Pointer to the FbxAnimCurve or NULL if an error occurred.
          * \remarks pCurveNodeName cannot be empty.
          * \remarks If the pChannel identifier is left NULL, use the first valid channel.
          */
        FbxAnimCurve* CreateCurve(const char* pCurveNodeName, const char* pChannel);

        /** Creates a new curve and connects it to this curve node.         
          * \param pCurveNodeName Name of the FbxAnimCurveNode we are looking for (if this one is a composite).
          * \param pChannelId Channel index.
          * \return Pointer to the FbxAnimCurve or NULL if an error occurred.
          * \remarks pCurveNodeName cannot be empty.
          * \remarks If the pChannel identifier is left NULL, use the first valid channel.
          */
        FbxAnimCurve* CreateCurve(const char* pCurveNodeName, unsigned int pChannelId = 0);
        
        /** Get the number of FbxAnimCurve connected to the specified channel.
          * \param pChannelId Channel index.
          * \param pCurveNodeName Name of the FbxAnimCurveNode we are looking for.
          * \return The number of animation curves on the specified channel or 0 if an error occurred.
          * \remarks This method fails if the FbxAnimCurveNode does not exist.
          * \remarks It is an error if the specified channel cannot be found in this curve node.
          * \remarks If the pCurveNodeName is left NULL only look for the curves on this node even if it is a composite.
          */
        int GetCurveCount(unsigned int pChannelId, const char* pCurveNodeName = NULL);

        /** Get the FbxAnimCurve of the specified channel.
          * \param pChannelId Channel index.
          * \param pId The index of the desired anim curve (in case there is more than one)
          * \param pCurveNodeName Name of the FbxAnimCurveNode we are looking for (if this object is a composite).
          * \return Pointer to the FbxAnimCurve that matches the criteria.
          * \remarks This method fails if the FbxAnimCurveNode does not exist.
          * \remarks If the specified channel cannot be found in this curve node, 
          *         the function return NULL.
          * \remarks If the pCurveNodeName is left NULL only look for the curve on this node even if it is a composite.
          */
        FbxAnimCurve* GetCurve(unsigned int pChannelId, unsigned int pId = 0, const char* pCurveNodeName = NULL);
        
protected:
    virtual ~FbxAnimCurveNode();
};
