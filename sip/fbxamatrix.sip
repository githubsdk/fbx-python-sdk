class FbxAMatrix : FbxDouble4x4
{
public:
    FbxAMatrix();
    FbxAMatrix(const FbxAMatrix & pXMatrix);
    FbxAMatrix(const FbxVector4& pT, const FbxVector4& pR, const FbxVector4& pS);
    ~FbxAMatrix();

    double Get(int pY, int pX) const;
    
    FbxVector4 GetT() const;
    FbxVector4 GetR() const;
    FbxQuaternion GetQ() const;
    FbxVector4 GetS() const;

    FbxVector4 GetRow(int pY) const;
    FbxVector4 GetColumn(int pX) const;

    void SetIdentity();
    
    void SetT(const FbxVector4& pT);
    void SetR(const FbxVector4& pR);
    void SetQ(const FbxQuaternion &pQ);
    void SetS(const FbxVector4& pS);

    void SetTRS(const FbxVector4& pT, const FbxVector4& pR,
        const FbxVector4& pS);
    void SetTQS(const FbxVector4& pT, const FbxQuaternion& pQ,
        const FbxVector4& pS);

    FbxAMatrix operator*(double pValue) const;
    FbxAMatrix operator/(double pValue) const;
    FbxAMatrix& operator *=(double pValue);
    FbxAMatrix& operator /=(double pValue);

    FbxVector4 MultT(const FbxVector4& pVector4) const;
    FbxVector4 MultR(const FbxVector4& pVector4) const;
    FbxQuaternion MultQ(const FbxQuaternion& pQ) const;
    FbxVector4 MultS(const FbxVector4& pVector4) const;

    FbxAMatrix operator-() const;

    FbxAMatrix operator*(const FbxAMatrix& pXMatrix) const;
    FbxAMatrix& operator*=(const FbxAMatrix& pXMatrix);

    FbxAMatrix Inverse() const;
    FbxAMatrix Transpose() const;
    
    bool operator==(const FbxAMatrix & pXMatrix) const;
    bool operator!=(const FbxAMatrix & pXMatrix) const;
    
    bool IsIdentity(const double pThreshold=FBXSDK_TOLERANCE);
};
