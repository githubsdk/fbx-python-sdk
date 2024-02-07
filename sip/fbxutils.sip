
FbxString FbxGetSystemTempPath();
void FbxSetSystemTempPath(const char* pPath);

FbxString FbxGetApplicationDirectory();

void FbxSetCurrentWorkPath(const char* pPath);
FbxString FbxGetCurrentWorkPath();

class FbxPathUtils
{
public:
	static FbxString    Bind(const char* pRootPath, const char* pFilePath, bool pCleanPath=true);
	static FbxString    GetFolderName(const char* pFilePath);
	static FbxString    GetFileName(const char* pFilePath, bool pWithExtension=true);
	static FbxString    GetExtensionName(const char* pFilePath);
	static FbxString    ChangeExtension(const char* pFilePath, const char* pExtension);
	static bool         IsRelative(const char* pPath);
	static FbxString    GetRelativePath(const char* pRootPath, const char* pNewPath);
	static FbxString    GetRelativeFilePath(const char* pRootPath, const char* pNewFilePath);
	static FbxString    Resolve(const char* pRelPath);
	static FbxString    Clean(const char* pPath);
	static FbxString    GenerateFileName(const char* pFolder, const char* pPrefix);
    static bool         Exist(const char* pFolderPathUTF8);
    static bool         Create(const char* pFolderPathUTF8);
    static bool         Delete(const char* pFolderPathUTF8);
    static bool         IsEmpty(const char* pFolderPathUTF8);
};
