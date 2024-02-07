class FbxQuaternion : FbxDouble4
{

public:
	FbxQuaternion();
	FbxQuaternion(const FbxQuaternion& pV);
	FbxQuaternion(double pX, double pY, double pZ, double pW = 1.0);
	~FbxQuaternion();
	
	double operator[](int pIndex);
%MethodCode
        if (a0 < 0 || a0 >= 4)
        {
            PyErr_Format(PyExc_IndexError, "sequence index out of range");
            sipIsErr = 1;
        }
        else
        {
            sipRes = (*sipCpp)[a0];
        }
%End
	
	double GetAt(int pIndex) const;
	void SetAt(int pIndex, double pValue);
	void Set(double pX, double pY, double pZ, double pW = 1.0);
	
	FbxQuaternion operator+(double pValue) const;
	FbxQuaternion operator-(double pValue) const;
	FbxQuaternion operator*(double pValue) const;
	FbxQuaternion operator/(double pValue) const;
	FbxQuaternion& operator+=(double pValue);
	FbxQuaternion& operator-=(double pValue);
	FbxQuaternion& operator*=(double pValue);
	FbxQuaternion& operator/=(double pValue);
	
	FbxQuaternion operator-() const;
	FbxQuaternion operator+(const FbxQuaternion& pQuaternion) const;
	FbxQuaternion operator-(const FbxQuaternion& pQuaternion) const;
	FbxQuaternion operator*(const FbxQuaternion& pQuaternion) const;
	FbxQuaternion operator/(const FbxQuaternion& pQuaternion) const;
	FbxQuaternion& operator+=(const FbxQuaternion& pQuaternion);
	FbxQuaternion& operator-=(const FbxQuaternion& pQuaternion);
	FbxQuaternion& operator*=(const FbxQuaternion& pQuaternion);
	FbxQuaternion& operator/=(const FbxQuaternion& pQuaternion);
	
	FbxQuaternion Product(const FbxQuaternion& pQuaternion) const;
	void           Normalize();
	void           Conjugate();
	void           ComposeSphericalXYZ(const FbxVector4 pEuler);
	FbxVector4    DecomposeSphericalXYZ() const;
	
	bool operator==(const FbxQuaternion & pV) const;
	bool operator!=(const FbxQuaternion & pV) const;
};
