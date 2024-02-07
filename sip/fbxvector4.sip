class FbxVector4
{
public:
    FbxVector4();
    FbxVector4(const FbxVector4 & pV);
    FbxVector4(double pX, double pY, double pZ, double pW = 0.0);
    FbxVector4(const FbxDouble3& pValue);
    ~FbxVector4();
    
    bool operator==(const FbxVector4 & pVector) const;
    bool operator!=(const FbxVector4 & pVector) const;
    
    double operator [](int pIndex) const;
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
    
    /** Set vector.
      * \param pX The X component value.
      * \param pY The Y component value.
      * \param pZ The Z component value.
      * \param pW The W component value.
      */
    void Set(double pX, double pY, double pZ, double pW = 1.0);
    
    /** Add a value to all vector components.
      * \param pValue The value to add to each component of the vector.
      * \return New vector.
      * \remarks          The passed value is not checked.
      */
    FbxVector4 operator+(double pValue) const;

    /** Subtract a value from all vector components.
      * \param pValue The value to subtract from each component of the vector.
      * \return New vector.
      * \remarks          The passed value is not checked.
      */
    FbxVector4 operator-(double pValue) const;

    /** Multiply a value to all vector components.
      * \param pValue The value multiplying each component of the vector.
      * \return New vector.
      * \remarks          The passed value is not checked.
      */
    FbxVector4 operator*(double pValue) const;

    /** Divide all vector components by a value.
      * \param pValue The value dividing each component of the vector.
      * \return New vector.
      * \remarks          The passed value is not checked.
      */
    FbxVector4 operator/(double pValue) const;

    /** Add a value to all vector components.
      * \param pValue The value to add to each component of the vector.
      * \return \e this updated with the operation result.
      * \remarks          The passed value is not checked.
      */
    FbxVector4& operator+=(double pValue);

    /** Subtract a value from all vector components.
      * \param pValue The value to subtract from each component of the vector.
      * \return \e this updated with the operation result.
      * \remarks          The passed value is not checked.
      */
    FbxVector4& operator-=(double pValue);

    /** Multiply a value to all vector elements.
      * \param pValue The value multiplying each component of the vector.
      * \return \e this updated with the operation result.
      * \remarks          The passed value is not checked.
      */
    FbxVector4& operator*=(double pValue);

    /** Divide all vector elements by a value.
      * \param pValue The value dividing each component of the vector.
      * \return \e this updated with the operation result.
      * \remarks          The passed value is not checked.
      */
    FbxVector4& operator/=(double pValue);

    /** Unary minus operator.
      * \return The vector that is the negation of \c this.
      */
    FbxVector4 operator-() const;
    
    /** Add two vectors together.
      * \param pVector Vector to add.
      * \return The vector v' = this + pVector.
      * \remarks           The values in pVector are not checked.
      */
    FbxVector4 operator+(const FbxVector4& pVector) const;

    /** Subtract a vector from another vector.
      * \param pVector Vector to subtract.
      * \return The vector v' = this - pVector.
      * \remarks           The values in pVector are not checked.
      */
    FbxVector4 operator-(const FbxVector4& pVector) const;

    /** Memberwise multiplication of two vectors.
      * \param pVector Multiplying vector.
      * \return The vector v' = this * pVector.
      * \remarks           The values in pVector are not checked.
      */
    FbxVector4 operator*(const FbxVector4& pVector) const;

    /** Memberwise division of a vector with another vector.
      * \param pVector Dividing vector.
      * \return The vector v[i]' = this[i] / pVector[i].
      * \remarks           The values in pVector are not checked.
      */
    FbxVector4 operator/(const FbxVector4& pVector) const;

    /** Add two vectors together.
      * \param pVector Vector to add.
      * \return \e this updated with the operation result.
      * \remarks           The values in pVector are not checked.
      */
    FbxVector4& operator+=(const FbxVector4& pVector);

    /** Subtract a vector from another vector.
      * \param pVector Vector to subtract.
      * \return \e this updated with the operation result.
      * \remarks           The values in pVector are not checked.
      */
    FbxVector4& operator-=(const FbxVector4& pVector);

    /** Memberwise multiplication of two vectors.
      * \param pVector Multiplying vector.
      * \return \e this updated with the operation result.
      * \remarks           The values in pVector are not checked.
      */
    FbxVector4& operator*=(const FbxVector4& pVector);
    
    /** Memberwise division of a vector with another vector.
      * \param pVector Dividing vector.
      * \return \e this updated with the operation result.
      * \remarks           The values in pVector are not checked.
      */
    FbxVector4& operator/=(const FbxVector4& pVector);

    /** Calculate the dot product of two vectors.
      * \param pVector The second vector.
      * \return The dot product value.
      * \remarks           Being considered as a XYZ vector with a weight, only the 3 first elements are considered in this operation.
      */
    double DotProduct(const FbxVector4& pVector) const;

    /** Calculate the cross product of two vectors.
      * \param pVector The second vector.
      * \return The cross product vector.
      * \remarks           Being considered as a XYZ vector with a weight, only the first 3 elements are considered in this operation.
      */
    FbxVector4 CrossProduct(const FbxVector4& pVector) const;

    /** Calculate the Euler rotation required to align axis pAB-pA on pAB-pB.
      * \param pAB The intersection of the 2 axis.
      * \param pA A point on axis to be aligned.
      * \param pB A point on reference axis.
      * \param pAngles Resulting euler angles.
      * \return \c true on success.
      * \remarks           Being considered as a XYZ vector with a weight, only the first 3 elements are considered in this operation.
      */
    static bool AxisAlignmentInEulerAngle(const FbxVector4 & pAB, 
                                          const FbxVector4 & pA, 
                                          const FbxVector4 & pB, 
                                          FbxVector4& pAngles);
                                          
    /** Get the vector's length.
      * \return The mathematical length of the vector.
      * \remarks     Being considered as a XYZ vector with a weight, only the first 3 elements are considered in this operation.
      */
    double Length() const;

    /** Get the vector's length squared.
      * \return The mathematical square length of the vector.
      * \remarks     Being considered as a XYZ vector with a weight, only the first 3 elements are considered in this operation.
      */
    double SquareLength() const;

    /** Find the distance between 2 vectors.
      * \param pVector The second vector.
      * \return The mathematical distance between the two vectors.
      * \remarks           Being considered as a XYZ vector with a weight, only the 3 first elements are considered in this operation.
      */
    double Distance(const FbxVector4& pVector) const;

    /** Normalize the vector, length set to 1.
      * \remarks     Being considered as a XYZ vector with a weight, only the first 3 elements are considered in this operation.
      */
    void Normalize();

    /** Set the Euler XYZ from a Quaternion.
      *\param pQuat    Quaternion from which Euler XYZ information is got.
      */
    void SetXYZ(const FbxQuaternion pQuat);
    
    SIP_PYOBJECT __str__() const;
%MethodCode
        char buf[256];
        sprintf(buf, "fbx.FbxVector4(%f, %f, %f, %f)", (*sipCpp)[0], (*sipCpp)[1], (*sipCpp)[2], (*sipCpp)[3]);
        sipRes = Py_BuildValue((char *)"s", buf);
%End
    SIP_PYOBJECT __repr__() const;
%MethodCode
        char buf[256];
        sprintf(buf, "fbx.FbxVector4(%f, %f, %f, %f)", (*sipCpp)[0], (*sipCpp)[1], (*sipCpp)[2], (*sipCpp)[3]);
        sipRes = Py_BuildValue((char *)"s", buf);
%End 
};
