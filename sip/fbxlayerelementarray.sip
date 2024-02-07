class LockAccessStatus
{
public:
    /** \enum ELockAccessStatus         Identifies what error occurs when the data arrays are manipulated.
      * - \e eSuccess                   Operation Successful.
      * - \e eUnsupportedDTConversion   Attempts to convert to an unsupported DataType.
      * - \e eCorruptedCopyback         The Release of a converted buffer fails and corrupts the main data.
      * - \e eBadValue                  Invalid value.
      * - \e eLockMismatch              Attempts to change to an incompatible lock.
      * - \e eNoWriteLock               A write operation is attempted but no WriteLock is available.
      * - \e eNoReadLock                A read operation is attempted but the WriteLock is active.
      * - \e eNotOwner                  Attempts to release a lock on an invalid data buffer pointer.
      * - \e eDirectLockExist           A direct access lock is still active.
      */
    enum ELockAccessStatus
    {
        eSuccess,
        eUnsupportedDTConversion,
        eCorruptedCopyback,
        eBadValue,
        eLockMismatch,
        eNoWriteLock,
        eNoReadLock,
        eNotOwner,
        eDirectLockExist
    };
};

class FbxLayerElementArray
{
public:
    FbxLayerElementArray(EFbxType pDataType);
    virtual ~FbxLayerElementArray();
    
    //!Clears the access state and sets it to eSuccess.
    void ClearStatus();

    //!Retrieves the access state.
    LockAccessStatus::ELockAccessStatus GetStatus() const;
    
    /** Returns whether write is locked.
      * \return        \c True if write is locked, \c false otherwise.
      */
    bool IsWriteLocked() const;

    /** Retrieves the read lock count.
      * \return           The read lock count.
      */
    int  GetReadLockCount() const;

    /** Returns whether this Array is accessed in any way.
      * \return           \c True if it is in use, \c false otherwise.
      */
    bool    IsInUse() const;

    /** Increments the number of read locks on this array.
      * \return           The current number of read locks (including the one just grabbed) or 0 if a write lock is active.
      */
    int     ReadLock() const;

    /** Releases a read lock on this array.
      * \return           The remaining read locks or -1 if a write lock is active.
      */
    int     ReadUnlock() const;

    /** Locks this array for writing. The data in the array is wiped out.
      * \return           \c True if a write lock has been successfully granted, \c false if one or more read locks
      *                   are active.
      */
    bool    WriteLock() const;

    /** Releases the write lock on this array.
      */
    void    WriteUnlock() const;

    /** Locks this array for writing. The data that already exists in the array is kept and is valid.
      * \return           \c True if a write lock has been successfully granted, \c false if one or more read locks
      *                   are active.
      */
    bool    ReadWriteLock() const;

    /** Releases the write lock on this array.
      */
    void    ReadWriteUnlock() const;

    /** \enum ELockMode	           Identifies the access mode to the data buffer.
    * - \e eReadLock			   Read mode.
    * - \e eWriteLock             Write mode.
    * - \e eReadWriteLock         Read-write mode.
    */
	enum ELockMode
	{
		eReadLock = 1,
		eWriteLock = 2,
		eReadWriteLock = 3
	};

    /** Grants a locked access to the data buffer. 
      * \param pLockMode                 Access mode to the data buffer.
      * \param pDataType                 If defined, tries to return the data as this type.
      * \return                          A pointer to the data buffer or NULL if a failure occurs.
      * \remarks                         In the case of a failure, the Status is updated with the
      *                                  reason for the failure. Also, when a type conversion occurs, a second buffer 
      *                                  of the new type is allocated. In this case, the LockMode does not apply to the
      *                                  returned buffer since it is a copy but it does apply to the internal data of this
      *                                  object. The returned buffer still remains a property of this object and is
      *                                  deleted when the pointer is released or the object is destroyed. At the moment of 
      *                                  release or destruction, the values in this buffer are copied back into this object.
      */
    virtual void*   GetLocked(ELockMode pLockMode, EFbxType pDataType);

    /** Grants a locked access to the data buffer. 
      * \param pLockMode                 Access mode to the data buffer.
      * \return                          A pointer to the data buffer or NULL if a failure occurs.
      * \remarks                         In the case of a failure, the Status is updated with the
      *                                  reason for the failure. Also, when a type conversion occurs, a second buffer 
      *                                  of the new type is allocated. In this case, the LockMode does not apply to the
      *                                  returned buffer since it is a copy but it does apply to the internal data of this
      *                                  object. The returned buffer still remains a property of this object and is
      *                                  deleted when the pointer is released or the object is destroyed. At the moment of 
      *                                  release or destruction, the values in this buffer are copied back into this object.
      */
    void*   GetLocked(ELockMode pLockMode=eReadWriteLock);

    /** Grants a locked access to the data buffer. 
      * \param dummy                     The data type of dummy is used to specialize this function.
      * \param pLockMode                 Access mode to the data buffer.
      * \return                          A pointer to the data buffer or NULL if a failure occurs.
      * \remarks                         In the case of a failure, the Status is updated with the
      *                                  reason for the failure. Also, when a type conversion occurs, a second buffer 
      *                                  of the new type is allocated. In this case, the LockMode does not apply to the
      *                                  returned buffer since it is a copy but it does apply to the internal data of this
      *                                  object. The returned buffer still remains a property of this object and is
      *                                  deleted when the pointer is released or the object is destroyed. At the moment of 
      *                                  release or destruction, the values in this buffer are copied back into this object.
      */
    //template <class T> inline T* GetLocked(T* dummy=NULL, ELockMode pLockMode=eReadWriteLock) {T v; return (T*)GetLocked(pLockMode, _FbxTypeOf(v)); }

    /** Unlock the data buffer.
      * \param pDataPtr                  The buffer to be released.
      * \param pDataType                 The data type of the data buffer.
      * \remarks                         The passed pointer must be the one obtained by the call to GetLocked().
      *                                  Any other pointer causes this method to fail and the Status is updated with
      *                                  the reason for the failure. If the passed pointer refers a converted data
      *                                  buffer (see comment of GetLocked), this method copies the GetCount() items 
      *                                  of the received buffer back into this object. Any other items that may have been added
      *                                  using a realloc call are ignored.
      */    
    virtual void   Release(void** pDataPtr, EFbxType pDataType);

    /** Unlock the data buffer.
      * \param pDataPtr                  The buffer to be released.
      * \remarks                         The passed pointer must be the one obtained by the call to GetLocked().
      *                                  Any other pointer causes this method to fail and the Status is updated with
      *                                  the reason for the failure. If the passed pointer refers a converted data
      *                                  buffer (see comment of GetLocked), this method copies the GetCount() items 
      *                                  of the received buffer back into this object. Any other items that may have been added
      *                                  using a realloc call are ignored.
      */    
    void   Release(void** pDataPtr);

    /** Unlock the data buffer.
      * \param pDataPtr                  The buffer to be released.
      * \param dummy                     The data type of dummy is used to specialize this function.
      * \remarks                         The passed pointer must be the one obtained by the call to GetLocked().
      *                                  Any other pointer causes this method to fail and the Status is updated with
      *                                  the reason for the failure. If the passed pointer refers a converted data
      *                                  buffer (see comment of GetLocked), this method copies the GetCount() items 
      *                                  of the received buffer back into this object. Any other items that may have been added
      *                                  using a realloc call are ignored.
      */    
    //template <class T> inline void Release(T** pDataPtr, T* dummy) { Release((void**)pDataPtr, _FbxTypeOf(*dummy)); }
    
    /** Returns the Stride size which equals the size of the data type of the data buffer.
      */
    virtual size_t GetStride() const;
    
    int     GetCount() const;
    void    SetCount(int pCount);
    void    Clear();
    void    Resize(int pItemCount);
    
    /** Appends a new item to the end of the data buffer.
      * \param pItem                Pointer of the new item to be added
      * \param pValueType           Data type of the new item 
      * \return                     The index of the new item
      */
    int     Add(const void * pItem, EFbxType pValueType);

    /** Inserts a new item at the specified position of the data buffer.
      * \param pIndex               The specified position
      * \param pItem                Pointer of the new item to be inserted
      * \param pValueType           Data type of the new item 
      * \return                     The index of the inserted item
      */
    int     InsertAt(int pIndex, const void * pItem, EFbxType pValueType);

    /** Sets the value for the specified item.
      * \param pIndex               The index of the item to be updated.
      * \param pItem                Pointer of the item whose value is copied to pIndex'th item
      * \param pValueType           Data type of the item 
      */
    void    SetAt(int pIndex, const void * pItem, EFbxType pValueType);

    /** Sets the value of the last item.
      * \param pItem                Pointer of the item whose value is copied to the last item
      * \param pValueType           Data type of the item 
      */
    void    SetLast(const void * pItem, EFbxType pValueType);

    /** Removes the specified item from the data buffer.
      * \param pIndex               The index of the item to be removed               
      * \param pItem                Place to hold the value of the removed item.
      * \param pValueType           Data type of the item 
      */
    void    RemoveAt(int pIndex, void** pItem, EFbxType pValueType);

    /** Removes the last item from the data buffer.    
      * \param pItem                Place to hold the value of the removed item.
      * \param pValueType           Data type of the item 
      */
    void    RemoveLast(void** pItem, EFbxType pValueType);

    /** Removes one item from the data buffer.    
      * \param pItem                The first item who equals pItem is to be removed
      * \param pValueType           Data type of the item 
      * \return                     \c True if the item is removed successfully, \c false otherwise                     
      */
    bool    RemoveIt(void** pItem, EFbxType pValueType);

    /** Returns the specified item's value.  
      * \param pIndex               Index of the item
      * \param pItem                Place to hold the item's value
      * \param pValueType           Data type of the item 
      * \return                     \c True if the item's value is returned successfully, \c false otherwise 
      * \remarks                    If the index is invalid, pItem is set to zero.
      */
    bool    GetAt(int pIndex, void** pItem, EFbxType pValueType) const;

    /** Returns the first item's value.  
      * \param pItem                Place to hold the item's value
      * \param pValueType           Data type of the item 
      * \return                     \c True if the item's value is returned successfully, \c false otherwise 
      */
    bool    GetFirst(void** pItem, EFbxType pValueType) const;

    /** Returns the last item's value.  
      * \param pItem                Place to hold the item's value
      * \param pValueType           Data type of the item 
      * \return                     \c True if the item's value is returned successfully, \c false otherwise 
      */
    bool    GetLast(void** pItem, EFbxType pValueType) const;

    /** Searches for an item in the data buffer.  
      * \param pItem                The value of the item for which to search.
      * \param pValueType           Data type of the item 
      * \return                     The index of the item found, -1 if not found.
      * \remarks                    The index of the first item whose value equals pItem is returned.
      */
    int     Find(const void * pItem, EFbxType pValueType) const;

    /** Equivalence operator
      * \param pArray               Array compared to this one
      * \return                     \c True if equal. \c false otherwise.
      */
    bool    IsEqual(const FbxLayerElementArray& pArray);
};

template <T>
class FbxLayerElementArrayTemplate : FbxLayerElementArray
{
public:
    FbxLayerElementArrayTemplate(EFbxType pDataType);
    
    int  Add(T &pItem /In/);
    int  InsertAt(int pIndex, T &pItem /In/);
    void SetAt(int pIndex, T &pItem /In/);
    void SetLast(T &pItem /In/);
    T RemoveAt(int pIndex);
    T RemoveLast();
    bool RemoveIt(T &pItem /In/);
    T  GetAt(int pIndex) const;
    T  GetFirst() const;
    T  GetLast() const;
    int Find(T &pItem);
    int FindAfter(int pAfterIndex, T &pItem /In/);
    int FindBefore(int pBeforeIndex, T &pItem /In/);
    T  operator[](int pIndex) const;
%MethodCode
        if (a0 < 0 || a0 >= sipCpp->GetCount())
        {
            PyErr_Format(PyExc_IndexError, "sequence index out of range");
            sipIsErr = 1;
        }
        else
        {
            fbxArrayElementCopy(&sipRes, (T*)NULL, sipCpp, a0);
        }
%End
};

%ModuleHeaderCode
typedef FbxLayerElementArrayTemplate<FbxVector4> FbxLayerElementArrayTemplate_FbxVector4;
typedef FbxLayerElementArrayTemplate<FbxVector2> FbxLayerElementArrayTemplate_FbxVector2;
typedef FbxLayerElementArrayTemplate<FbxColor> FbxLayerElementArrayTemplate_FbxColor;
typedef FbxLayerElementArrayTemplate<int> FbxLayerElementArrayTemplate_int;
typedef FbxLayerElementArrayTemplate<bool> FbxLayerElementArrayTemplate_bool;
typedef FbxLayerElementArrayTemplate<double> FbxLayerElementArrayTemplate_double;
typedef FbxLayerElementArrayTemplate<FbxSurfaceMaterialPtr> FbxLayerElementArrayTemplate_HFbxSurfaceMaterial;
typedef FbxLayerElementArrayTemplate<FbxTexturePtr> FbxLayerElementArrayTemplate_HFbxTexture;
%End

typedef FbxLayerElementArrayTemplate<FbxVector4> FbxLayerElementArrayTemplate_FbxVector4;
typedef FbxLayerElementArrayTemplate<FbxVector2> FbxLayerElementArrayTemplate_FbxVector2;
typedef FbxLayerElementArrayTemplate<FbxColor> FbxLayerElementArrayTemplate_FbxColor;
typedef FbxLayerElementArrayTemplate<int> FbxLayerElementArrayTemplate_int;
typedef FbxLayerElementArrayTemplate<bool> FbxLayerElementArrayTemplate_bool;
typedef FbxLayerElementArrayTemplate<double> FbxLayerElementArrayTemplate_double;
typedef FbxLayerElementArrayTemplate<FbxSurfaceMaterialPtr> FbxLayerElementArrayTemplate_HFbxSurfaceMaterial;
typedef FbxLayerElementArrayTemplate<FbxTexturePtr> FbxLayerElementArrayTemplate_HFbxTexture;
