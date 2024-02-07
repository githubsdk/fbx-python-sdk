class FbxBindingTableEntry 
{
public:
    FbxBindingTableEntry();
    ~FbxBindingTableEntry();

    void SetSource( const char* pSource );
    const char* GetSource() const;
    void SetDestination( const char* pDestination );
    const char* GetDestination() const;
    void SetEntryType( const char* pType, bool pAsSource );
    const char* GetEntryType( bool pAsSource ) const;
    void* GetUserDataPtr();
    void SetUserDataPtr(void* pData );
};