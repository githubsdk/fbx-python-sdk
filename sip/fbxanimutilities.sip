
class FbxAnimUtilities
{
public:
    static bool IsAnimated(FbxObject* pObj);
    static bool IsChannelAnimated(FbxObject* pObj, char* pPropertyName, char* pChannelName = NULL);

};

