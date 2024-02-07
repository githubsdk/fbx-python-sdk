class FbxFolder
{
public:
	enum EEntryType {eRegularEntry, eFolderEntry};

    FbxFolder();
    ~FbxFolder();

    bool        Open(const char* pDirName);
    bool        Next();
    EEntryType  GetEntryType() const;
    FbxString   GetEntryName() const;
    char*       GetEntryExtension() const;
    void        Close();
    bool        IsOpen() const;
};
