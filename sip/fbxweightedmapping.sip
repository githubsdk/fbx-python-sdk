class FbxWeightedMapping
{

public:
	/** Object set type in the mapping relation.   
     */
    enum ESet
	{
		eSource,        //!< Object is as source.
		eDestination    //!< Object is as destination. 
	};

	struct Element
	{
		int mIndex;
		double mWeight;
	};

	/** 
	  * \name Constructor and Destructor
	  */
	//@{

	/** Constructor
	  * \param pSourceSize       Source set size
	  * \param pDestinationSize  Destination set size
	  */
	FbxWeightedMapping(int pSourceSize, int pDestinationSize);

	//! Destructor
	~FbxWeightedMapping();
    //@}


	/** Remove all weighted relations and give new source and destination sets sizes.
	  * \param pSourceSize       New source set size
	  * \param pDestinationSize  New destination set size
	  */
	void Reset(int pSourceSize, int pDestinationSize);

	/** Add a weighted relation.
	  * \param pSourceIndex      
	  * \param pDestinationIndex 
	  * \param pWeight           
	  */
	void Add(int pSourceIndex, int pDestinationIndex, double pWeight);

	/** Get the number of elements of a set.
	  * \param pSet              
	  */
	int GetElementCount(ESet pSet) const;

	/** Get the number of relations an element of a set is linked to.
	  * \param pSet               
	  * \param pElement          
	  */
	int GetRelationCount(ESet pSet, int pElement) const;

	/** Get one of the relations an element of a set is linked to.
	  * \param pSet              
	  * \param pElement          
	  * \param pIndex            
	  * \return                  Element gives the index of an element in the other set and the assigned weight.
	  */
	Element& GetRelation(ESet pSet, int pElement, int pIndex);

	/** Given the index of an element in the other set, get the index of one of the relations 
	  *  an element of a set is linked to. Returns -1 if there is not relation between these elements.
	  * \param pSet
	  * \param pElementInSet
	  * \param pElementInOtherSet
	  * \return                  the index of one of the relations, -1 if there is not relation between these elements.         
	  */
	int GetRelationIndex(ESet pSet, int pElementInSet, int pElementInOtherSet) const;

	/** Get the sum of the weights from the relations an element of a set is linked to.
	  * \param pSet
	  * \param pElement
	  * \param pAbsoluteValue
	  * \return                 the sum of the weights  from the relations.
	  */
	double GetRelationSum(ESet pSet, int pElement, bool pAbsoluteValue) const;
	

	/** Normalize the weights of the relations of all the elements of a set.
	  * \param pSet
	  * \param pAbsoluteValue
	  */
	void Normalize(ESet pSet, bool pAbsoluteValue);
};
