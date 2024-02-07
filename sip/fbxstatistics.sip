class FbxStatistics
{
public:
    FbxStatistics();
    virtual ~FbxStatistics();

    void Reset();
    int GetNbItems() const;
    bool GetItemPair(int pNum, FbxString& pItemName, int& pItemCount) const;
};