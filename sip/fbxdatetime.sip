
class FbxLocalTime
{
public:
	FbxLocalTime();

	int mYear;
	int mMonth;
	int mDay;
	int mHour;
	int mMinute;
	int mSecond;
	int mMillisecond;
};

void FbxGetCurrentLocalTime(FbxLocalTime& pLocalTime);
