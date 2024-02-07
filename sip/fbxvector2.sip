class FbxVector2
{
public:
    FbxVector2();
    FbxVector2(const FbxVector2 & pV);
    FbxVector2(double pX, double pY);

    double operator [](int pIndex) const;
%MethodCode
        if (a0 < 0 || a0 >= 2)
        {
            PyErr_Format(PyExc_IndexError, "sequence index out of range");
            sipIsErr = 1;
        }
        else
        {
            sipRes = sipCpp->operator[](a0);
        }
%End

    void Set(double pX, double pY);

    FbxVector2 operator +(double pValue) const;
    FbxVector2 & operator +=(double pValue);
    FbxVector2 operator -(double pValue) const;
    FbxVector2 & operator -=(double pValue);
    FbxVector2 operator *(double pValue) const;
	FbxVector2 operator /(double pValue) const;
    FbxVector2 & operator *=(double pValue);
    FbxVector2 & operator /=(double pValue);
    bool operator==(const FbxVector2 & pVector) const;
    bool operator!=(const FbxVector2 & pVector) const;

    SIP_PYOBJECT __str__() const;
%MethodCode
        char buf[256];
        sprintf(buf, "fbx.FbxVector2(%f, %f)", (*sipCpp)[0], (*sipCpp)[1]);
        sipRes = Py_BuildValue((char *)"s", buf);
%End
    SIP_PYOBJECT __repr__() const;
%MethodCode
        char buf[256];
        sprintf(buf, "fbx.FbxVector2(%f, %f)", (*sipCpp)[0], (*sipCpp)[1]);
        sipRes = Py_BuildValue((char *)"s", buf);
%End 
};
