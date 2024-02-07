class FbxTime /NoDefaultCtors/
{
public:
    FbxTime(FbxLongLong pTime=0);
    
	enum EMode
	{
		eDefaultMode,
		eFrames120,
		eFrames100,
		eFrames60,
		eFrames50,
		eFrames48,
		eFrames30,
		eFrames30Drop,
		eNTSCDropFrame,
		eNTSCFullFrame,
		ePAL,
		eFrames24,
		eFrames1000,
		eFilmFullFrame,
		eCustom,
		eFrames96,
		eFrames72,
		eFrames59dot94,
		eFrames119dot88,
		eModesCount
	};

	/** Time protocols enumaration
	  * - \e eSMPTE				SMPTE EProtocol
	  * - \e eFrameCount		Frame count
	  * - \e eDefaultProtocol	Default protocol (initialized to eFRAMES)
	  */
	enum EProtocol {eSMPTE, eFrameCount, eDefaultProtocol};
    
    static void SetGlobalTimeMode(EMode pTimeMode, double pFrameRate=0.0);
    static EMode GetGlobalTimeMode();
    static void SetGlobalTimeProtocol(EProtocol pTimeProtocol);
    static EProtocol GetGlobalTimeProtocol();
    static double GetFrameRate(EMode pTimeMode);
    static EMode ConvertFrameRateToTimeMode(double pFrameRate, double lPrecision = 0.00000001);

    void Set(FbxLongLong pTime);
    const FbxLongLong Get() const;
    void SetMilliSeconds(FbxLongLong pMilliSeconds);
    FbxLongLong GetMilliSeconds() const;

    void SetSecondDouble(double pTime);
    double GetSecondDouble() const;
    void SetTime(
        int pHour, 
        int pMinute, 
        int pSecond, 
        int pFrame = 0, 
        int pField = 0, 
        EMode pTimeMode = eDefaultMode
    );
    void SetTime 
    (
        int pHour, 
        int pMinute, 
        int pSecond, 
        int pFrame, 
        int pField, 
        int pResidual, 
        EMode pTimeMode
    );
    bool GetTime 
    (
        int& pHour /Out/,  
        int& pMinute /Out/,
        int& pSecond /Out/,
        int& pFrame /Out/,
        int& pField /Out/,
        int& pResidual /Out/,
        EMode pTimeMode=eDefaultMode
    ) const;
    FbxTime    GetFramedTime(bool pRound = true) const;
	void SetFrame(FbxLongLong pFrames, EMode pTimeMode=eDefaultMode);
    void SetFramePrecise(FbxDouble pFrames, EMode pTimeMode=eDefaultMode);
    
	int GetHourCount() const;
	int GetMinuteCount() const;
	int GetSecondCount() const;
	FbxLongLong GetFrameCount(EMode pTimeMode=eDefaultMode) const;
    FbxDouble GetFrameCountPrecise(EMode pTimeMode=eDefaultMode) const;
	FbxLongLong GetFieldCount(EMode pTimeMode=eDefaultMode) const;
	int GetResidual(EMode pTimeMode=eDefaultMode) const;
	static bool IsDropFrame(EMode pTimeMode=eDefaultMode);
	char GetFrameSeparator(EMode pTimeMode=eDefaultMode) const;

    char* GetTimeString 
    (
        char* pTimeString /In/,
        short pTimeStringSize=50,
        int pInfo = 5,
        EMode pTimeMode=eDefaultMode, 
        EProtocol pTimeFormat=eDefaultProtocol
    ) const;
    
    enum EElement {eHours, eMinutes, eSeconds, eFrames, eField, eResidual};
    FbxString GetTimeString
    (
        EElement pStart=eHours, 
        EElement pEnd=eResidual, 
        EMode pTimeMode=eDefaultMode, 
        EProtocol pTimeFormat=eDefaultProtocol
    ) const;

    void SetTimeString
    (
        const char* pTime,
        EMode pTimeMode=eDefaultMode,
        EProtocol pTimeFormat=eDefaultProtocol
    );

    bool operator==(const FbxTime& pTime) const;
    bool operator!=(const FbxTime& pTime) const;
    bool operator>=(const FbxTime& pTime) const;
    bool operator<=(const FbxTime& pTime) const;
    bool operator>(const FbxTime& pTime) const;
    bool operator<(const FbxTime& pTime) const;
    //inline FbxTime& operator=(const FbxTime& pTime);
    FbxTime& operator+=(const FbxTime& pTime);
    FbxTime& operator-=(const FbxTime& pTime);
    FbxTime operator+(const FbxTime& pTime) const;
    FbxTime operator-(const FbxTime& pTime) const;
    FbxTime operator*(const int Mult) const;
    FbxTime operator/(const FbxTime &pTime) const;
    FbxTime operator*(const FbxTime &pTime) const;
};

class FbxTimeSpan /NoDefaultCtors/
{
public:
    FbxTimeSpan();
    FbxTimeSpan(FbxTime pStart, FbxTime pStop);

    void Set(FbxTime pStart, FbxTime pStop);
    void SetStart(FbxTime pStart);
    void SetStop(FbxTime pStop);
    FbxTime GetStart() ;
    FbxTime GetStop();
    FbxTime GetDuration() const;
    FbxTime GetSignedDuration() const;
    int GetDirection() const;

    bool IsInside(FbxTime pTime) const;
    FbxTimeSpan Intersect(const FbxTimeSpan &pTime) const;
    bool operator!=(const FbxTimeSpan &pTime) const;
    bool operator==(const FbxTimeSpan &pTime) const;
    void UnionAssignment(const FbxTimeSpan &pSpan);
};
