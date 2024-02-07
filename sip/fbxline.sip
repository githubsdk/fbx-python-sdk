/** A line is a geometry made of points. To be different from curves(nurbs, etc), line is linear.
* The class can define a line with as many points as needed. The line can also represent line segments, which means there will be gaps among points.
* To denote line segments and these gaps, certain points could be marked as end points. That's why we supply an index array(mPointArray) and an end point array(mEndPointArray).
* To mark a point as end point, we add its index(of mPointArray) to mEndPointArray.
* \nosubgrouping
* Methods to initialize, set and access control points are provided in the FbxGeometryBase class.
* To initialize control point count, please use FbxLine::InitControlPoints(int pCount).
* To set a control point, please use FbxLine::SetControlPointAt(const FbxVector4 &pCtrlPoint , int pIndex).
* To get control point count, please use FbxLine::GetControlPointsCount().
* To get a control point, please use FbxLine::GetControlPointAt(int pIndex). The pIndex could be returned by GetPointIndexAt(i).
*/
class FbxLine : FbxGeometry /NoDefaultCtors/
{
public:
    static FbxClassId ClassId;
    static FbxLine* Create(FbxManager *pManager, const char *pName);
    virtual FbxClassId GetClassId() const;
    static FbxLine* Create(FbxObject *pContainer,  const char *pName);

    bool operator==(const FbxLine & pObj);
 
    /** Return the type of node attribute.
      * \return Return the type of this node attribute which is \e EType::eLINE.
      */
    virtual FbxNodeAttribute::EType GetAttributeType() const;

    /** Reset the line to default values.
      * Frees and set to \c NULL all layers and clear the control point array, the index array and end points array.
      */
    void Reset();

    /** Sets the size of index array(mPointArray).
    * \param pCount Specify the size of mPointArray.
    */
    void SetIndexArraySize(int pCount);

    /** Return the size of index array(mPointArray).
    * \return The number of points defined for this line.
    */
    int GetIndexArraySize() const;

    /** Get the pointer to the index array.
    * \return the pointer to the index array(mPointArray).
    */
    IntArray * GetIndexArray(); 

    /** Sets index array(mPointArray) at a specified index.
    * \param pValue     An index to a control point. Its range is from 0 to count of control point.
    * \param pIndex     The specified index to mPointArray. Its range is from 0 to size of mPointArray.
    * \param pAsEndPoint Mark current point as end point or not. If pAsEndPoint is true, pIndex will be automatically added to mEndPointArray.
    * \return True on success, false on failure if pIndex is out of range.
    */
    bool SetPointIndexAt(int pValue, int pIndex, bool pAsEndPoint = false);

    /** Gets the point index(i.e: an index to a control point) at the specified index.
    * \param pIndex         The specified index to the point index array(mPointArray). Its range is from 0 to size of mPointArray.
    * \return               Return the index to the table of the control points. If pIndex is out of range, it will return -1.
    */
    int GetPointIndexAt(int pIndex) const;

    /** Adds a point to the index array (mPointArray).
    * \param pValue The index to a control point. Its range is from 0 to count of control point.
    * \param pAsEndPoint Mark current point as end point or not. If pAsEndPoint is true, current point index will be automatically added to mEndPointArray.
    * \return True on success, false on failure if pValue is out of range.
    */
    bool AddPointIndex(int pValue, bool pAsEndPoint = false);

    /** Get the pointer to the end point array.
    * \return the pointer to the end points array(mEndPointArray).
    */
    IntArray * GetEndPointArray(); 

    /** Adds a point index to the end point array (mEndPointArray).
    *   To mark it as end point, its index to mPointArray will be added to mEndPointArray.
    * \param pPointIndex The specified index to the point index array(mPointArray). Its range is from 0 to size of mPointArray.
    * \return True on success, false on failure if pPointIndex is out of range.
    * \remarks The point index in mEndPointArray should be incremental, otherwise, it will return false.
    * To add pPointIndex, mEndPointArray will be automatically appended and resized. You never have to set count or resize for mEndPointArray.
    * Below is the code sample:
    * \code
    * int lIndexCount = lLine->GetIndexArraySize();
    * for(int i = 0; i < lIndexCount; i++)
    * {
    *     if(i%2 == 1)
    *     {
    *         lLine->AddEndPoint(i);
    *     }
    * }
    * \endcode
    */
    bool AddEndPoint(int pPointIndex);

    /** Gets the point index(an index to the point index array) at the specified index.
    * \param pIndex The specified index to the end points array(mEndPointArray). Its range is from 0 to size of mEndPointArray.
    * \return Return the index to the point index array(mPointArray). If pIndex is out of range, it will return -1.
    * \remarks Below is the code sample:
    * \code
    * int lEndPointsCount = lLine->GetEndPointCount();
    * for (int j = 0; j < lEndPointsCount; j++)
    * {
    *     //Get the index to the index array. 
    *     int lEndIndex = lLine->GetEndPointAt(j);
    *     // to get the control point index of the end point
    *     int lControlPointIndex = lLine->GetPointIndexAt(lEndIndex);
    * }
    * \endcode
    */
    int GetEndPointAt(int pEndPointIndex) const;

    /** Query the number of end points. 
    * \return Return the size of end point array(mEndPointArray).
    */
    int GetEndPointCount() const;

    /** This property decide whether this line is renderable in 3DSMax.
      * Lines from Maya are not renderable by default.
      */
    FbxPropertyBool1 Renderable;

protected:
    virtual ~FbxLine();
};
