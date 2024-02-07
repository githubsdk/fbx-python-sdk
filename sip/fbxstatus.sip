class FbxStatus
{
%TypeHeaderCode
#include <fbxsdk.h>
%End
    public:
    enum EStatusCode {        
        eSuccess = 0,                           //!< Operation was successful
        eFailure,                               //!< Operation failed
        eInsufficientMemory,                    //!< Operation failed due to insufficient memory
        eInvalidParameter,                      //!< An invalid parameter was provided
        eIndexOutOfRange,                       //!< Index value outside the valid range
        ePasswordError,                         //!< Operation on FBX file password failed
        eInvalidFileVersion,                    //!< File version not supported (anymore or yet)
        eInvalidFile                            //!< Operation on the file access failed
    };

    FbxStatus();

    FbxStatus(EStatusCode pCode);
    FbxStatus(const FbxStatus& rhs);

    /** Equivalence operator.
      * \param rhs Status object to compare.
      * \return \c True if all the members of \e rhs are equal to this instance members and \c False otherwise.
      */
    bool            operator==(const FbxStatus& rhs)    const;
    
    /** Equivalence operator.
      * \param pCode Status code to compare.
      * \return \c True if the code member of this instance equals \e pCode and \c False otherwise.
      */
    bool            operator==(const EStatusCode pCode) const;
    
    /** Non-Equivalence operator.
      * \param rhs Status object to compare.
      * \return \c True if at least one member of \e rhs is not equal to this instance member and \c True otherwise.
      */
    bool            operator!=(const FbxStatus& rhs)    const;
    
    /** Non-Equivalence operator.
      * \param pCode Status code to compare.
      * \return \c True if the code member of this instance equals \e pCode and \c False otherwise.
      */
    bool            operator!=(const EStatusCode rhs)   const;

    /** The conversion operator that converts a FbxStatus object to bool.
      *	The result it returns will be \c True if the FbxStatus does not contain
      * an error, and \c False if it does.
      */
    operator        bool() const;
    
    /** Determines whether there is an error.
      * \return \c True if an error occured and \c False if the operation was sucessful.
      */
    bool            Error() const;

    //! Clear error code and message from the instance. After this call, it will behave as if it contained eSuccess.
    void            Clear();

    //! Retrieve the type of error that occurred, as specified in the enumeration.
    EStatusCode     GetCode() const;

    /** Change the current code of the instance.
      * \param pCode New code value.
      */
    void            SetCode(const EStatusCode rhs);

    /** Change the current code of the instance.
      * \param pCode New code value.
      * \param pErrorMsg Optional error description string. This string can have formatting characters
      *                  The function will use the vsprintf function to assemble the final string
      *                  using an internal buffer of 2048 characters.
      */
    void            SetCode(const EStatusCode rhs, const char* pErrorMsg, ...);

    //! Get the error message string corresponding to the current code.
    const char*     GetErrorString() const;
};
