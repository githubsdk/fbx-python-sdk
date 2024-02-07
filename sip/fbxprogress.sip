class FbxProgress
{
public:
    //void SetProgressCallback(FbxProgressCallback pCallback);
    void SetTotal(float pTotal);
    void SetThreshold(float pSetThreshold);
    void Update(float pDelta, const char* pStatus=NULL);
    void Reset();
    float GetProgress(FbxString* pStatus=NULL);
    void Complete(const char* pStatus=NULL);
    void Cancel();

    FbxProgress();
    ~FbxProgress();
};