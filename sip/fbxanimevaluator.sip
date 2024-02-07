class FbxAnimEvaluator : FbxObject /NoDefaultCtors/
{
public:
    static FbxClassId ClassId;
    static FbxAnimEvaluator* Create(FbxManager *pManager, const char *pName);
    virtual FbxClassId GetClassId() const;

    /** Get a node's global transform matrix at the specified time.
      * \param pNode The node to evaluate.
      * \param pTime The time used for evaluate. If FBXSDK_TIME_INFINITE is used, this returns the default value, without animation curves evaluation.
	  * \param pPivotSet The pivot set to take into account
	  * \param pApplyTarget Applies the necessary transform to align into the target node
	  * \param pForceEval Force the evaluator to refresh the evaluation state cache even if its already up-to-date.
	  * \return The resulting global transform of the specified node for the specified time.
      */
	FbxAMatrix& GetNodeGlobalTransform(FbxNode* pNode, const FbxTime& pTime=FBXSDK_TIME_INFINITE, FbxNode::EPivotSet pPivotSet=FbxNode::eSourcePivot, bool pApplyTarget=false, bool pForceEval=false);

    /** Get a node's local transform matrix at the specified time.
      * \param pNode The node to evaluate.
      * \param pTime The time used for evaluate. If FBXSDK_TIME_INFINITE is used, this returns the default value, without animation curves evaluation.
	  * \param pPivotSet The pivot set to take into account
	  * \param pApplyTarget Applies the necessary transform to align into the target node
	  * \param pForceEval Force the evaluator to refresh the evaluation state cache even if its already up-to-date.
	  * \return The resulting local transform of the specified node for the specified time.
      */
    FbxAMatrix& GetNodeLocalTransform(FbxNode* pNode, const FbxTime& pTime=FBXSDK_TIME_INFINITE, FbxNode::EPivotSet pPivotSet=FbxNode::eSourcePivot, bool pApplyTarget=false, bool pForceEval=false);
    
    FbxVector4& GetNodeLocalTranslation(FbxNode* pNode, const FbxTime& pTime=FBXSDK_TIME_INFINITE, FbxNode::EPivotSet pPivotSet=FbxNode::eSourcePivot, bool pApplyTarget=false, bool pForceEval=false);
    FbxVector4& GetNodeLocalRotation(FbxNode* pNode, const FbxTime& pTime=FBXSDK_TIME_INFINITE, FbxNode::EPivotSet pPivotSet=FbxNode::eSourcePivot, bool pApplyTarget=false, bool pForceEval=false);
    FbxVector4& GetNodeLocalScaling(FbxNode* pNode, const FbxTime& pTime=FBXSDK_TIME_INFINITE, FbxNode::EPivotSet pPivotSet=FbxNode::eSourcePivot, bool pApplyTarget=false, bool pForceEval=false);

    /** Get a property's value at the specified time.
      * \param pProperty The property to evaluate.
      * \param pTime The time used for evaluate.
	  * \param pForceEval Force the evaluator to refresh the evaluation state cache even if its already up-to-date.
      * \return The property value at the specified time stored in a curve node structure for easier access of complex types.
      */
    FbxPropertyValue& GetPropertyValue(FbxProperty& pProperty, FbxTime pTime, bool pForceEval=false);

	/** Get a property curve node from the evaluation state for quick access.
	* \param pProperty The property to search for its animation curve node.
	* \param pAnimLayer The animation layer on which the animation curve node must be searched.
	* \remark This function uses a map to store animation curve node search results. If animation curve nodes are replaced, the evaluation state must be reset. */
	FbxAnimCurveNode* GetPropertyCurveNode(FbxProperty& pProperty, FbxAnimLayer* pAnimLayer);
    
    /** Validate if the given time value is within animation stack time span range.
      * \param pTime The time value to validate.
      * \return The new validated time, clamped by the animation stack time span range.
	  * \remarks If no animation stack are found, time zero is returned. This function is not used by the evaluator itself.
      */
    FbxTime ValidateTime(const FbxTime& pTime);

	/** Completely reset the evaluation state cache by deleting all entries. This reset automatically happens when changing the current context. */
	void Reset();
	
    /** Clears the specified node evaluation state cache, so the next time the evaluation is called for this node it get refreshed.
      * \param pNode The node that needs to be re-evaluated in next evaluation.
      */
	void Flush(FbxNode* pNode);

	/** Clears the specified property evaluation state cache, so the next time the evaluation is called for this property it get refreshed.
	* \param pProperty The property that needs to be re-evaluated in next evaluation. */
	void Flush(FbxProperty& pProperty);
	
	/** Compute node local TRS from global transform. Doesn't change cached state for current time.
	* \return pRetLT Computed local translation.
	* \return pRetLR Computed local rotation.
	* \return pRetLS Computed local scaling.
	* \param pNode The transform node to evaluate.
	* \param pGX Global transformation state.
	* \param pTime The time used for evaluate.If FBXSDK_TIME_INFINITE is used, this returns the default value, without animation curves evaluation.
	* \param pPivotSet The pivot set to take into account.
	* \param pApplyTarget Applies the necessary transform to align into the target node.
	* \param pForceEval Force the evaluator to refresh the evaluation state cache even if its already up-to-date. */
	void ComputeLocalTRSFromGlobal(FbxVector4& pRetLT, FbxVector4& pRetLR, FbxVector4& pRetLS, FbxNode* pNode, FbxAMatrix& pGX, const FbxTime& pTime=FBXSDK_TIME_INFINITE, FbxNode::EPivotSet pPivotSet=FbxNode::eSourcePivot, bool pApplyTarget=false, bool pForceEval=false);
	
protected:
    virtual ~FbxAnimEvaluator();
};
