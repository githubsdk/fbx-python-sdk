const char * IOSROOT;

const char * EXP_FBX_TEMPLATE;
const char * EXP_FBX_PIVOT;
const char * EXP_FBX_GLOBAL_SETTINGS;
const char * EXP_FBX_CHARACTER;
const char * EXP_FBX_CONSTRAINT;
const char * EXP_FBX_GOBO;   
const char * EXP_FBX_SHAPE;
const char * EXP_FBX_MATERIAL;
const char * EXP_FBX_TEXTURE;
const char * EXP_FBX_MODEL;
const char * EXP_FBX_ANIMATION;
const char * EXP_FBX_EMBEDDED;
const char * EXP_FBX_PASSWORD;
const char * EXP_FBX_PASSWORD_ENABLE;
const char * EXP_FBX_COLLAPSE_EXTERNALS;
const char * EXP_FBX_COMPRESS_ARRAYS;  
const char * EXP_FBX_COMPRESS_LEVEL;
const char * EXP_FBX_COMPRESS_MINSIZE;
const char * EXP_FBX_EMBEDDED_PROPERTIES_SKIP;
const char * EXP_FBX_EXPORT_FILE_VERSION;    

class FbxIOSettings : FbxObject /NoDefaultCtors/
{
public:
    static FbxClassId ClassId;
    static FbxIOSettings* Create(FbxManager *pManager, const char *pName);
    virtual FbxClassId GetClassId() const;
    static FbxIOSettings* Create(FbxObject *pContainer,  const char *pName);

    bool operator==(const FbxIOSettings & pObj);
    
    /** Add a property group under the root prop
          * \param pName
          * \param pDataType
          * \param pLabel
          */
    FbxProperty AddPropertyGroup(const char* pName, const FbxDataType &pDataType=FbxDataType(), const char* pLabel="");
    
    /** Add a property group under another parent prop
          * \param pParentProperty
          * \param pName
          * \param pDataType
          * \param pLabel
          * \param pVisible
          * \param pSavable
          * \param pEnabled
          */
    FbxProperty AddPropertyGroup(const FbxProperty &pParentProperty, 
                                        const char*         pName, 
                                        const FbxDataType &pDataType      = FbxDataType(), 
                                        const char*         pLabel         = "",
                                        bool                pVisible       = true,
                                        bool                pSavable       = true,
                                        bool                pEnabled       = true
                                     );
                                     
    /** Add a property under another parent prop with a value to set
          * \param pParentProperty
          * \param pName
          * \param pDataType
          * \param pLabel
          * \param pValue
          * \param pVisible
          * \param pSavable
          * \param pEnabled
          */          
    FbxProperty AddProperty(const FbxProperty &pParentProperty, 
                                     const char*            pName, 
                                     const FbxDataType &pDataType      = FbxDataType(), 
                                     const char*            pLabel          = "",
                                     const void *            pValue          = NULL,
                                     bool                   pVisible        = true,
                                     bool                   pSavable        = true,
                                     bool                   pEnabled        = true
                                   );

    /** Add a property under another parent prop with a value to set and a min max values
      * \param pParentProperty
      * \param pName
      * \param pDataType
      * \param pLabel
      * \param pValue
      * \param pMinValue
      * \param pMaxValue
      * \param pVisible
      * \param pSavable
      * \param pEnabled
      */                  
    FbxProperty AddPropertyMinMax(const FbxProperty &pParentProperty, 
                                     const char*            pName, 
                                     const FbxDataType &pDataType      = FbxDataType(), 
                                     const char*            pLabel          = "",
                                     const void *            pValue          = NULL,
                                     const double *          pMinValue       = NULL,
                                     const double *          pMaxValue       = NULL,
                                     bool                   pVisible        = true,
                                     bool                   pSavable        = true,
                                     bool                   pEnabled        = true
                                   );

    /** get a prop by description ex: "Export|Animation|Bake"
          * \param pName
          */
    FbxProperty GetProperty(const char* pName);

    /** get prop by description from a parent property
      * \param pParentProperty
      * \param pName
      */
    FbxProperty GetProperty(const FbxProperty &pParentProperty, const char* pName);

    /** get a bool prop by prop path
      * \param pName
      * \param pDefValue
      */
    bool GetBoolProp(const char* pName, bool pDefValue);

    /** set a bool prop by prop path
      * \param pName
      * \param pValue
      */
    void SetBoolProp(const char* pName, bool pValue);

    /** get a double prop by prop path
      * \param pName
      * \param pDefValue
      */
    double GetDoubleProp(const char* pName, double pDefValue);

    /** set a double prop by prop path
      * \param pName
      * \param pValue
      */
    void   SetDoubleProp(const char* pName, double pValue);

    /** get a int prop by prop path
      * \param pName
      * \param pDefValue
      */
    int    GetIntProp(const char* pName, int pDefValue);

    /** set a int prop by prop path
      * \param pName
      * \param pValue
      */
    void   SetIntProp(const char* pName, int pValue);
    
    /** get a FbxTime prop by prop path
      * \param pName 
      * \param pDefValue
      */
    FbxTime  GetTimeProp(const char* pName, FbxTime pDefValue);

    /** set a FbxTime prop by prop path
      * \param pName 
      * \param pValue
      */
    void   SetTimeProp(const char* pName, FbxTime pValue);

    /** get an enum prop by prop path
      * \param pName
      * \param pDefValue
      */
    FbxString GetEnumProp(const char* pName, FbxString pDefValue);

    /** get an enum prop by prop path
      * \param pName
      * \param pDefValue
      */
    int     GetEnumProp(const char* pName, int pDefValue);

    /** get an enum prop by prop path
      * \param pName
      * \param pValue
      */
    int     GetEnumIndex(const char* pName, FbxString pValue);

    /** set an enum prop by prop path
      * \param pName
      * \param pValue
      */
    void    SetEnumProp(const char* pName, FbxString pValue);

    /** set an enum prop by prop path
      * \param pName
      * \param pValue
      */
    void    SetEnumProp(const char* pName, int pValue);

    /** remove an enum prop by enum value
      * \param pName
      * \param pValue
      */
    void    RemoveEnumPropValue(const char* pName, FbxString pValue);

    /** empty all the values of the enum prop
                    * \param pName
      */
    void    EmptyEnumProp(const char* pName);

    /** check enum value if present
      * \param &pProp a ref to an enum prop
      * \param &enumString s ref to string
      */
    bool    IsEnumExist(FbxProperty& pProp, FbxString& enumString);

    /** get enum index
      * \param &pProp a ref to an enum prop
      * \param &enumString s ref to string
      * \param pNoCase 
      */
    int     GetEnumIndex(FbxProperty& pProp, FbxString& enumString, bool pNoCase = false);

    /** set a specific flag value on a specific property.
      * \param pName
      * \param propFlag
      * \param pValue
      */
    bool    SetFlag(const char* pName, FbxPropertyFlags::EFlags propFlag, bool pValue);

    /** get a string prop by prop path
      * \param pName
      * \param pDefValue
      */
    FbxString GetStringProp(const char* pName, FbxString pDefValue);

    /** set a string prop by prop path
      * \param pName
      * \param pValue
      */
    void    SetStringProp(const char* pName, FbxString pValue);

    /** Load the settings hierarchy from an XML file
      * \param path The path of the XML file.
      * \return \c True on success, \c false otherwise.
      */
    virtual bool ReadXMLFile(FbxString& path);

    /** Write the settings hierarchy to an XML file
      * \param path The path of the XML file.
      * \return \c True on success, \c false otherwise.
      */
    virtual bool WriteXMLFile(FbxString& path);

    /** Write the settings hierarchy to an XML file
      * \param pFullPath The path of the XML file.
      * \param propPath a prop Path
      * \return \c True on success, \c false otherwise.
      */
    bool WriteXmlPropToFile(FbxString& pFullPath, FbxString& propPath);

protected:
    virtual ~FbxIOSettings();
};
