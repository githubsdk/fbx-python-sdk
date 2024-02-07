class FbxMatrix : FbxDouble4x4
{
public:
	FbxMatrix ();
	FbxMatrix (const FbxMatrix& pM);
	FbxMatrix (const FbxVector4& pT,
		        const FbxVector4& pR,
				const FbxVector4& pS);
	FbxMatrix (const FbxVector4& pT,
		        const FbxQuaternion& pQ,
				const FbxVector4& pS);
	FbxMatrix (const FbxAMatrix& pM);
	~FbxMatrix ();

	double Get(int pY, int pX) const;
	FbxVector4 GetRow(int pY) const;
	FbxVector4 GetColumn(int pX) const;
	void Set(int pY, int pX, double pValue);
	void SetIdentity();
	void SetTRS(const FbxVector4& pT,
		        const FbxVector4& pR,
				const FbxVector4& pS);
	void SetTQS(const FbxVector4& pT,
		        const FbxQuaternion& pQ,
				const FbxVector4& pS);
	void SetRow(int pY, const FbxVector4& pRow);
	void SetColumn(int pX, const FbxVector4& pColumn);
    void GetElements(FbxVector4 & pTranslation, FbxQuaternion & pRotation,
        FbxVector4 & pShearing, FbxVector4 & pScaling, double & pSign) const;
	
	FbxMatrix operator-() const;
	FbxMatrix operator+(const FbxMatrix& pMatrix) const;
	FbxMatrix operator-(const FbxMatrix& pMatrix) const;
	FbxMatrix operator*(const FbxMatrix& pMatrix) const;
	FbxMatrix& operator+=(const FbxMatrix& pMatrix);
	FbxMatrix& operator-=(const FbxMatrix& pMatrix);
	FbxMatrix& operator*=(const FbxMatrix& pMatrix);

    FbxMatrix Inverse() const;
	FbxMatrix Transpose() const;
    FbxVector4 MultNormalize(const FbxVector4& pVector) const;

	bool operator==(const FbxMatrix & pM) const;
	bool operator==(const FbxAMatrix & pM) const;
	bool operator!=(const FbxMatrix & pM) const;
	bool operator!=(const FbxAMatrix & pM) const;

    //operator double* ();
    //typedef const double(kDouble44)[4][4] ;
	//kDouble44 & Double44() const;
};