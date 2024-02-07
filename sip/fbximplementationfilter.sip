class FbxImplementationFilter : FbxObjectFilter
{

public:
    static const char * sCHR_ANY_SHADING_API;
    static const char * sCHR_ANY_SHADING_API_VERSION;
    static const char * sCHR_ANY_SHADING_LANGUAGE;
    static const char * sCHR_ANY_SHADING_LANGUAGE_VERSION;

    /** Constructor
      * \param pShadingAPI a string containing the implementation API name:
      *     MentalRay
      *     OpenGL
      *     DirectX
      *
      * \param pShadingAPIVersion a string containing the implementation API version:
      *     eg. 1.0
      *
      * \param pShadingLanguage a string identifying the implementation language name:
      *     GLSL    = GL Shading Language
      *     HLSL    = High Level Shading Language
      *     CGFX    = CG effect(NVidia)
      *     RIB     = RenderMan (RIB)
      *     etc...
      *
      * \param pShadingLanguageVersion a string identifying the implementation language version:
      *     eg. 1.0
      *
      * \remarks by default the created criteria correspond to any shader
      */
    FbxImplementationFilter(
        const char * pShadingAPI                = FbxImplementationFilter::sCHR_ANY_SHADING_API,
        const char * pShadingAPIVersion         = FbxImplementationFilter::sCHR_ANY_SHADING_API_VERSION,
        const char * pShadingLanguage           = FbxImplementationFilter::sCHR_ANY_SHADING_LANGUAGE,
        const char * pShadingLanguageVersion    = FbxImplementationFilter::sCHR_ANY_SHADING_LANGUAGE_VERSION
    );

    //! Destructor.
    virtual ~FbxImplementationFilter();

    /** Tells if this filter matches the given shading node implementation
      * \param pObjectPtr The given shading node implementation
      */
    virtual bool Match(const FbxObject * pObjectPtr) const;

    //! Stores the shading API
    FbxString mShadingAPI;

    //! Stores the shading API Version
    FbxString mShadingAPIVersion;

    //! Stores the shading language
    FbxString mShadingLanguage;

    //! Stores the shading language version
    FbxString mShadingLanguageVersion;
};