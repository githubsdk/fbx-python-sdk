class FbxObjectFilter
{
public:
%ConvertToSubClassCode
    if (dynamic_cast<FbxNameFilter*>(sipCpp))
        sipType = sipType_FbxNameFilter;
    else
        sipType = 0;
%End

    //! Destructor.
    virtual ~FbxObjectFilter();

    /** Tells if this filter match the given object
      * \param pObjectPtr The given object.
      */
    virtual bool Match(const FbxObject * pObjectPtr) const = 0;

    /** Tells if this filter does NOT match the given object
      * \param pObjectPtr The given object.
      */
    virtual bool NotMatch(const FbxObject * pObjectPtr) const;
};

class FbxNameFilter : FbxObjectFilter
{
public:
    /**
      * \name Constructor and Destructor
      */
    //@{
    /** Constructor
      * \param pTargetName The target name.
      */
    FbxNameFilter( const char* pTargetName );

    //! Destructor.
    virtual ~FbxNameFilter();
    //@}

    /** Tells if this filter match the given object
      * \param pObjectPtr The given object.
      */
    virtual bool Match(const FbxObject * pObjectPtr) const;
};
