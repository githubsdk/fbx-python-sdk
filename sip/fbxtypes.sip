enum EFbxType
{
	eFbxUndefined,	//!< Unidentified.
	eFbxChar,		//!< 8 bit signed integer.
	eFbxUChar,		//!< 8 bit unsigned integer.
	eFbxShort,		//!< 16 bit signed integer.
	eFbxUShort,		//!< 16 bit unsigned integer.
	eFbxUInt,		//!< 32 bit unsigned integer.
	eFbxLongLong,	//!< 64 bit signed integer.
	eFbxULongLong,	//!< 64 bit unsigned integer.
	eFbxHalfFloat,	//!< 16 bit floating point.
	eFbxBool,		//!< Boolean.
	eFbxInt,		//!< 32 bit signed integer.
	eFbxFloat,		//!< Floating point value.
	eFbxDouble,		//!< Double width floating point value.
	eFbxDouble2,	//!< Vector of two double values.
	eFbxDouble3,	//!< Vector of three double values.
	eFbxDouble4,	//!< Vector of four double values.
	eFbxDouble4x4,	//!< Four vectors of four double values.
	eFbxEnum,		//!< Enumeration.
	eFbxString,		//!< String.
	eFbxTime,		//!< Time value.
	eFbxReference,	//!< Reference to object or property.
	eFbxBlob,		//!< Binary data block type.
	eFbxDistance,	//!< Distance.
	eFbxDateTime,	//!< Date and time.
	eFbxTypeCount	//!< Indicates the number of type identifiers constants.
};

%If ( - SIP_4_20_0)
    %Include fbxSIP_4_19.sip
%End

    class FbxBlob
    {
        public:
			/**
			  * \name Constructors and Destructor
			  */
			//@{

			//! Constructor.  Set attributes to 0.
            FbxBlob();

			/** Constructor.  Construct a buffer with uninitialized data of a specified size, to be filled by the user.
			  * \param pSize                Buffer size.
			  */
                   FbxBlob(int pSize);

		    /** Copy constructor.
			  * \param pRHS                 The blob to be copied to this blob.
			  */
            FbxBlob(const FbxBlob & pRHS);

			/** Constructor.
			  * \param pData                The data to be filled in the buffer.
			  * \param pSize                Buffer size.
			  */
            //inline FbxBlob(const void * pData, int pSize) { mData = 0; mSize = 0; mRefCount = 0; Assign(pData,pSize); }

			//! Destructor
            ~FbxBlob();

			//@}
        public:
			/**
			  * \name Assignment.
			  */
			//@{

			/** Share the buffer of the specified blob with this blob. 
			  * \param pValue               The blob whose buffer is shared with this blob.
			  * \return                     This blob.
			  */
                   //FbxBlob &operator=(const FbxBlob &pValue);

		   /** Copy the data in the buffer.
		     * \param pData                 The buffer to be copied data from.
			 * \param pSize                 Buffer size.
		     */
                   void Assign(const void * , int );  // Always makes a copy.
			//@}

            /**
			  * \name Boolean operation
			  */
		    //@{

		    /** Equivalence operator
             * \param pRHS                  The blob to be compared with this blob.
			 * \return                      \c True, if the two blobs are equal, \c false otherwise.
		     */
                   bool operator==(const FbxBlob & pRHS) const; // Compare the contents.

            /** Non-equivalence operator
              * \param pRHS                  The blob to be compared with this blob.
			  * \return                      \c True, if the two blobs are unequal, otherwise false.
		      */
            bool operator!=(const FbxBlob & pRHS) const;
			//@}

			 //!Make a copy if the reference count > 1 (i.e. if the buffer is shared).
                   //void * Modify(); 

		     /**
			   * \name Access
			   */
			 //@{
		    
		     /** Retrieve the buffer pointer.
			   * \return                      The buffer pointer.
			   */
                   const void * Access() const;

		    /** Retrieve the buffer size
			  * \return                       The buffer size.
			  */
                   int Size();
			 //@}

		    //! Free the memory if this blob is the last one to hold it.
                   void Clear();
    };

    template<T>
    class FbxVectorTemplate2
    {
    public:
        FbxVectorTemplate2();
        FbxVectorTemplate2(T pData0,T pData1);
        ~FbxVectorTemplate2();
        T operator[](int pIndex);
%MethodCode
            if (a0 < 0 || a0 >= 2)
            {
                PyErr_Format(PyExc_IndexError, "sequence index out of range");
                sipIsErr = 1;
            }
            else
            {
                fbxArrayElementCopy(&sipRes, (T*)NULL, sipCpp, a0);
            }
%End

        bool operator ==(const FbxVectorTemplate2<T> & pRHS) const;
        bool operator !=(const FbxVectorTemplate2<T> & pRHS) const;
    };

    template<T>
    class FbxVectorTemplate3
    {
    public:
        FbxVectorTemplate3();
        FbxVectorTemplate3(T pData0,T pData1, T pData2);
        ~FbxVectorTemplate3();
        T operator[](int pIndex);
%MethodCode
        if (a0 < 0 || a0 >= 3)
        {
            PyErr_Format(PyExc_IndexError, "sequence index out of range");
            sipIsErr = 1;
        }
        else
        {
            fbxArrayElementCopy(&sipRes, (T*)NULL, sipCpp, a0);
        }
%End

        bool operator ==(const FbxVectorTemplate3<T> & pRHS) const;
        bool operator !=(const FbxVectorTemplate3<T> & pRHS) const;
    };

    template<T>
    class FbxVectorTemplate4
    {
    public:
        FbxVectorTemplate4();
        FbxVectorTemplate4(T pData0,T pData1, T pData2, T pData3);
        ~FbxVectorTemplate4();
        T operator[](int pIndex);
%MethodCode
        if (a0 < 0 || a0 >= 4)
        {
            PyErr_Format(PyExc_IndexError, "sequence index out of range");
            sipIsErr = 1;
        }
        else
        {
            fbxArrayElementCopy(&sipRes, (T*)NULL, sipCpp, a0);
        }
%End

        bool operator ==(const FbxVectorTemplate4<T> & pRHS) const;
        bool operator !=(const FbxVectorTemplate4<T> & pRHS) const;
    };

    class FbxDistance 
    {
    public:
        
        FbxDistance();
        FbxDistance(float pValue, FbxSystemUnit pUnit);
        FbxDistance(float pValue, const char* pUnit);
        ~FbxDistance();
        
        /*
        FbxDistance &operator=(FbxDistance const& pValue) {
                    mValue = pValue.mValue;
                    mUnit = pValue.mUnit;
                    return *this;
        }
        */
        
        bool operator==(const FbxDistance& pRHS) const;
        bool operator!=(const FbxDistance& pRHS) const;

        const FbxString unitName() const;

        const FbxSystemUnit unit() const;
        const float value() const;
        const float internalValue() const ;
        const float valueAs(const FbxSystemUnit& pUnit ) const;
    };

    class FbxDateTime
    {
    public:
		FbxDateTime();
		FbxDateTime(int pDay, int pMonth, int pYear, int pHour, int pMin, int pSec, int pMillisecond=0);

		bool operator==(const FbxDateTime& pRHS) const;
		bool operator!=(const FbxDateTime& pRHS) const;
	    
        void Clear();
	    bool isValid() const;
		void setTime(int pHour, int pMin, int pSec, int pMillisecond = 0);
        FbxString toString() const;
		bool fromString(const char*);
   
        static FbxDateTime currentDateTimeGMT();
    };

    typedef bool                                FbxBool;
    typedef signed char                         FbxChar;
    typedef unsigned char                       FbxUChar;
    typedef int                                 FbxInt;
    typedef float                               FbxFloat;
    typedef double                              FbxDouble;
    typedef FbxVectorTemplate2<double>          FbxDouble2;
    typedef FbxVectorTemplate3<double>          FbxDouble3;
    typedef FbxVectorTemplate4<double>          FbxDouble4;
    typedef FbxVectorTemplate4<FbxDouble4>      FbxDouble4x4;
    typedef int                                 FbxEnum;

    typedef signed char                         FbxInt8;
    typedef unsigned char                       FbxUInt8;
    typedef short                               FbxInt16;
    typedef unsigned short                      FbxUInt16;
    typedef unsigned int                        FbxUInt32;
	typedef unsigned int						FbxUInt;
    typedef long long                           FbxInt64;
    typedef unsigned long long                  FbxUInt64;
    typedef FbxInt64                            FbxLongLong;
    typedef FbxUInt64                           FbxULongLong;

    class FbxReference {public:};

%ModuleHeaderCode
    typedef FbxString *             FbxStringPtr;
    typedef FbxObject *             FbxObjectPtr;
    typedef FbxPose *               FbxPosePtr;
    typedef FbxNode *               FbxNodePtr;
    typedef FbxTexture *            FbxTexturePtr;
    typedef FbxDocument *           FbxDocumentPtr;
    typedef FbxSurfaceMaterial *    FbxSurfaceMaterialPtr;
%End

    typedef FbxString *             FbxStringPtr;
    typedef FbxObject *             FbxObjectPtr;
    typedef FbxPose *               FbxPosePtr;
    typedef FbxNode *               FbxNodePtr;
    typedef FbxTexture *            FbxTexturePtr;
    typedef FbxDocument *           FbxDocumentPtr;
    typedef FbxSurfaceMaterial *    FbxSurfaceMaterialPtr;

%ModuleHeaderCode
//
// type traits to determine if operator[] return the same type as sipRes
// SIP Reference 6.16 %MethodCode:
//   the type of sipRes is the same as the type defined in the Python signature with the following exception:
//   if the argument is a structure or a class, then type will always be a pointer to the structure or class
//
template<class S, class T, class U>
void fbxArrayElementCopy(S* pSIPRes, T* pNULL, U* pSIPCpp, int pIndex)
{
    *pSIPRes = new T((*pSIPCpp)[pIndex]);
}

template<class T, class U>
void fbxArrayElementCopy(T* pSIPRes, T* pNULL, U* pSIPCpp, int pIndex)
{
    *pSIPRes = (*pSIPCpp)[pIndex];
}
%End

