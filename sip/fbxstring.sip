class FbxString
{
%ConvertToTypeCode
    if (sipIsErr == NULL)
        return (PyUnicode_Check(sipPy) ||
    #if PY_MAJOR_VERSION < 3
                PyString_Check(sipPy) ||
    #endif
                sipCanConvertToType(sipPy, sipType_FbxString, SIP_NO_CONVERTORS));

    if (PyUnicode_Check(sipPy))
    {
        *sipCppPtr = new FbxString(sipString_AsASCIIString(&sipPy));
    
        return sipGetState(sipTransferObj);
    }
    
    #if PY_MAJOR_VERSION < 3
    if (PyString_Check(sipPy))
    {
        *sipCppPtr = new FbxString(PyString_AS_STRING(sipPy));
    
        return sipGetState(sipTransferObj);
    }
    #endif
    
    *sipCppPtr = reinterpret_cast<FbxString *>(sipConvertToType(sipPy,
            sipType_FbxString, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));
    
    return 0;
%End

public:
    FbxString();
    FbxString(const FbxString& pStr);
    FbxString(const char* pStr);    
    FbxString(float pFloat);

    size_t GetLen() const;
    size_t Size() const;
    bool IsEmpty() const;
    FbxString& Clear();
    
    const char* Buffer() const;

    void Swap(FbxString& pStr);
    const FbxString& Append(const char* pStr, size_t pLength);
    int Compare(const char* pStr) const;
    int CompareNoCase(const char* pStr) const;
    const FbxString& Copy(const char* pStr, size_t pLength);

    int Find(char pChar, size_t pStartPosition=0) const;
    int Find(const char* pStrSub, size_t pStartPosition=0) const;
    int ReverseFind(char pChar) const;
    int FindOneOf(const char * pStrCharSet, size_t pStartPosition=0) const;
    bool FindAndReplace(const char* pFind, const char* pReplaceBy, size_t pStartPosition=0);
    bool ReplaceAll(const char* pFind, const char* pReplaceBy);
    bool ReplaceAll(char pFind, char pReplaceBy);
    
	/** \enum EPaddingType      Padding types.
	* - \e eRight
	* - \e eLeft
	* - \e eBoth */
	enum EPaddingType {eRight, eLeft, eBoth};
		
    FbxString Pad(EPaddingType pPadding, size_t pLen, char pCar=' ') const;
    FbxString UnPad(EPaddingType pPadding) const;
    
    int GetTokenCount(const char* pSpans) const;
    FbxString GetToken(int pTokenIndex, const char* pSpans) const;
    
    FbxString Upper() const;
    FbxString Lower() const;
    FbxString Mid(size_t pFirst, size_t pCount) const;
    FbxString Mid(size_t pFirst) const;
    FbxString Left(size_t pCount) const;
    FbxString Right(size_t pCount) const;
    
    char operator[](int pIndex) const;
%MethodCode
        if (a0 < 0 || size_t(a0) >= sipCpp->GetLen())
        {
            PyErr_Format(PyExc_IndexError, "sequence index out of range");
            sipIsErr = 1;
        }
        else
        {
            sipRes = (*sipCpp)[a0];
        }
%End

    bool operator== (const FbxString &pStr) const;
    bool operator== (const char *pStr) const;
    bool operator!= (const FbxString &pStr) const;
    bool operator!= (const char *pStr) const;
    FbxString &operator+=(const FbxString &s);
   
    SIP_PYOBJECT __str__() const;
%MethodCode
        sipRes = Py_BuildValue((char *)"s", sipCpp->Buffer());
%End
    SIP_PYOBJECT __repr__() const;
%MethodCode
        sipRes = Py_BuildValue((char *)"s", sipCpp->Buffer());
%End 
};

FbxString operator+(const FbxString& pKStr1, const FbxString& pKStr2);
