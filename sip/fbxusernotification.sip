class FbxUserNotification /NoDefaultCtors/
{

%TypeHeaderCode
#include <fbxsdk.h>
%End

public:
    static FbxUserNotification* Create(FbxManager* pManager, 
                                        const FbxString& pLogFileName, 
                                        const FbxString& pSessionDescription);

    static void Destroy(FbxManager* pManager);
    
    FbxUserNotification(FbxManager* pManager,
                         const FbxString& pLogFileName, 
                         const FbxString& pSessionDescription);
    virtual ~FbxUserNotification();
    
    void InitAccumulator();

    void ClearAccumulator();

    /** IDs for pre-defined message entries.
     */
    enum EEntryID
	{
        eBindPoseInvalidObject,
        eBindPoseInvalidRoot,
        eBindPoseNotAllAncestorsNodes,
        eBindPoseNotAllDeformingNodes,
        eBindPoseNotAllAncestorsDefinitionNodes,
        eBindPoseRelativeMatrix,
        eEmbedMediaNotify,
        eFileIONotify,						//!< this is generic for reader and writer to log notifications.
        eFileIONotifyMaterial,
        eFileIONotifyDXFNotSupportNurbs,
        eEntryStartID						//!< Starting ID for any Accumulator entry added by derived classes.
    };
    //int AddEntry(const int pID, const FbxString& pName, const FbxString& pDescr, AccumulatorEntry::EClass pClass=AccumulatorEntry::eWarning);
    int AddDetail(int pEntryId);
    int AddDetail(int pEntryId, FbxString pString);
    int AddDetail(int pEntryId, FbxNode* pNode);
    int  GetNbEntries() const;
};