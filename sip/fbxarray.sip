template<Type>
class FbxArray
{
public:
    FbxArray();
    FbxArray(const FbxArray& pArrayTemplate);
    ~FbxArray();
    
    int GetCount() const;

    int InsertAt(int pIndex, Type pItem);
    int Add(Type pItem);
    int AddUnique(Type pItem);
    void AddArray(FbxArray<Type> &pArray);
    void AddArrayNoDuplicate(FbxArray<Type> &pArray);
    
    void SetAt(int pIndex, Type pItem);
    void SetLast(Type pItem);
    
    Type GetAt(int pIndex) const;
    Type GetFirst() const;
    Type GetLast() const;
    
    Type RemoveAt(int pIndex);
    Type RemoveLast();
    bool RemoveIt(Type pItem);
    void RemoveArray(FbxArray<Type> &pArray);
    
    int Find(Type pItem) const;
    
    Type operator[](int pIndex) const;
%MethodCode
        if (a0 < 0 || a0 >= sipCpp->GetCount())
        {
            PyErr_Format(PyExc_IndexError, "sequence index out of range");
            sipIsErr = 1;
        }
        else
        {
            fbxArrayElementCopy(&sipRes, (Type*)NULL, sipCpp, a0);
        }
%End
};

%ModuleHeaderCode
    typedef FbxArray<bool>                                  BoolArray;
    typedef FbxArray<int>                                   IntArray;
    typedef FbxArray<double>                                DoubleArray;    
    typedef FbxArray<FbxStringPtr>                          FbxStringArray;
    typedef FbxArray<FbxObjectPtr>                          FbxObjectArray;
    typedef FbxArray<FbxPosePtr>                            FbxPoseArray;
    typedef FbxArray<FbxNodePtr>                            FbxNodeArray;
    typedef FbxArray<FbxTexturePtr>                         FbxTextureArray;
    typedef FbxArray<FbxDocumentPtr>                        FbxDocumentArray;
    typedef FbxArray<FbxSurfaceMaterialPtr>                 FbxSurfaceMaterialArray;
    typedef FbxArray<FbxLayerElement::EType>                FbxLayerElementTypeArray;
    typedef FbxArray<FbxVector2>                            FbxVector2Array;
    typedef FbxArray<FbxVector4>                            FbxVector4Array;
%End

    typedef FbxArray<bool>                                  BoolArray;
    typedef FbxArray<int>                                   IntArray;
    typedef FbxArray<double>                                DoubleArray;        
    typedef FbxArray<FbxStringPtr>                          FbxStringArray;
    typedef FbxArray<FbxObjectPtr>                          FbxObjectArray;
    typedef FbxArray<FbxPosePtr>                            FbxPoseArray;
    typedef FbxArray<FbxNodePtr>                            FbxNodeArray;
    typedef FbxArray<FbxTexturePtr>                         FbxTextureArray;
    typedef FbxArray<FbxDocumentPtr>                        FbxDocumentArray;
    typedef FbxArray<FbxSurfaceMaterialPtr>                 FbxSurfaceMaterialArray;
    typedef FbxArray<FbxLayerElement::EType>                FbxLayerElementTypeArray;
    typedef FbxArray<FbxVector2>                            FbxVector2Array;    
    typedef FbxArray<FbxVector4>                            FbxVector4Array;    

