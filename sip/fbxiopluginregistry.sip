class FbxIOPluginRegistry
{
public:

    FbxIOPluginRegistry();

	virtual ~FbxIOPluginRegistry();

	void RegisterReader(const char* pPluginPath, int& pFirstPluginID, int& pRegisteredCount, bool pOverride = false);
	void RegisterWriter(const char* pPluginPath, int& pFirstPluginID, int& pRegisteredCount, bool pOverride = false);

	int FindReaderIDByExtension(const char* pExt) const;

	int FindWriterIDByExtension(const char* pExt) const;

	int FindReaderIDByDescription(const char* pDesc) const;

	int FindWriterIDByDescription(const char* pDesc) const;

	bool ReaderIsFBX(int pFileFormat) const;

	bool WriterIsFBX(int pFileFormat) const;

	bool ReaderIsGenuine(int pFileFormat) const;

	bool WriterIsGenuine(int pFileFormat) const;

	int GetReaderFormatCount() const;

	int GetWriterFormatCount() const;

	const char* GetReaderFormatDescription(int pFileFormat) const;

	const char* GetWriterFormatDescription(int pFileFormat) const;

	const char* GetReaderFormatExtension(int pFileFormat) const;

	const char* GetWriterFormatExtension(int pFileFormat) const;

	bool DetectReaderFileFormat(const char* pFileName, int& pFileFormat) const;

	bool DetectWriterFileFormat(const char* pFileName, int& pFileFormat) const;
	
	int GetNativeReaderFormat();
	int GetNativeWriterFormat();
	void FillIOSettingsForReadersRegistered(FbxIOSettings & pIOS);
	void FillIOSettingsForWritersRegistered(FbxIOSettings & pIOS);
};
