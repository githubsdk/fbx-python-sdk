class FbxColor
{
public:
    FbxColor();
    FbxColor(double pRed, double pGreen, double pBlue, double pAlpha = 1.0);
    ~FbxColor();
    
    void Set(double pRed, double pGreen, double pBlue, double pAlpha = 1.0);
    bool IsValid() const;

    bool operator==(const FbxColor& pColor) const;
    bool operator!=(const FbxColor& pColor) const;
    
    double mRed;
    double mGreen;
    double mBlue;
    double mAlpha;
};