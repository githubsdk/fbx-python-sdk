class FbxGlobalLightSettings
{

public:

    /** Sets the ambient color.
      * \param pAmbientColor            The ambient color to set.
      * \remarks                        The ambient color only use RGB channels.
      */
    void SetAmbientColor(FbxColor pAmbientColor);

    /** Returns the ambient color.
      * \return                         The ambient color.
      */
    FbxColor GetAmbientColor() const;

    /** Activates or disables the fog.
      * \param pEnable                  Set to \c true to activate the fog option or set to \c false to disable the fog option.
      */
    void SetFogEnable(bool pEnable);

    bool GetFogEnable() const;

    /** Sets the fog color.
      * \param pColor                   The fog color to be set.
      * \remarks                        The fog color only uses RGB channels.
      */
    void SetFogColor(FbxColor pColor);

    /** Returns the fog color.
      * \return                         The fog color.
      * \remarks                        The fog color only uses RGB channels.
      */
    FbxColor GetFogColor() const;

    enum EFogMode
    {
        eLinear,				//! Linear fog mode.
        eExponential,			//! Exponential fog mode.
        eExponentialSquareRoot	//! Exponential square root fog mode.
    };

    /** Sets the fog mode.
      * \param pMode                    The fog type to be set.
      */
    void SetFogMode(EFogMode pMode);

    /** Returns the fog mode.
      * \return                         The currently set fog mode.
      */
    EFogMode GetFogMode() const;

    /** Sets the fog density.
      * \param pDensity                 The fog density to be set. It can be any double value, however it can
      *                                 happen that other sections of FBX SDK may clamp values to reasonable values.
      * \remarks                        This function is only used when the fog mode is set to exponential or square root exponential.
      */
    void SetFogDensity(double pDensity);

    /** Returns the fog density.
      * \return                         The currently set fog density.
      * \remarks                        This function is only used when the fog mode is set to exponential or square root exponential.
      */
    double GetFogDensity() const;

    /** Sets the distance from the view where the fog begins.
      * \param pStart                   Distance where the fog begins.
      * \remarks                        This function is only used when the fog mode is set to linear. The new value is clamped to fit inside the interval [0, FogEnd()].
      */
    void SetFogStart(double pStart);

    /** Returns the distance from the view where the fog begins.
      * \return                         The distance from the view where the fog begins.
      * \remarks                        This function is only used when the fog mode is set to linear.
      */
    double GetFogStart() const;

    /** Sets the distance from the view where the fog ends.
      * \param pEnd                     Distance where the fog ends.
      * \remarks                        This function is only used when the fog mode is set to linear. The new value is adjusted to fit within the interval [FogStart(), inf).
      */
    void SetFogEnd(double pEnd);

    /** Returns the distance from the view where the fog ends.
      * \return                         The distance from the view where the fog ends.
      * \remarks                        This function is only used when the fog mode is set to linear.
      */
    double GetFogEnd() const;

    struct ShadowPlane
    {
        ShadowPlane();

        bool mEnable;

        FbxVector4 mOrigin;

        FbxVector4 mNormal; 
    };

    /** Activates or disables the display of shadow planes.
      * \param pShadowEnable        Set to \c true to display shadow planes in the scene.
      */
    void SetShadowEnable(bool pShadowEnable);

    /** Returns the current state of the shadow enable flag.
      * \return                     \c True if shadow planes are set to be displayed in the scene.
      */
    bool GetShadowEnable() const;

    /** Sets the shadow intensity that is applied to all shadow planes.
      * \param pShadowIntensity     Intensity applied to all the shadow planes.
      * \remarks                    Ranges from 0 to 300.
      */
    void SetShadowIntensity(double pShadowIntensity);

    /** Returns the shadow intensity applied to all shadow planes.
      * \return                     The intensity applied to all shadow planes in the scene.
      * \remarks                    Ranges from 0 to 300.
      */
    double GetShadowIntensity() const;

    /** Returns the number of shadow planes.
      * \return                     Number of shadow planes.
      */
    int GetShadowPlaneCount() const;

    /** Returns a shadow plane at the specified index.
      * \param pIndex               Shadow plane index.
      * \param pStatus              The FbxStatus object to hold error codes.
      * \return                     Pointer the shadow plane, or \c NULL if the index is out of range.
      */
    ShadowPlane* GetShadowPlane(int pIndex, FbxStatus* pStatus=NULL);

    /** Adds a shadow plane.
      * \param pShadowPlane         The shadow plane to be added.
      */
    void AddShadowPlane(ShadowPlane pShadowPlane);

    //! Removes all shadow planes.
    void RemoveAllShadowPlanes();


private:
    FbxGlobalLightSettings();
    ~FbxGlobalLightSettings();

};