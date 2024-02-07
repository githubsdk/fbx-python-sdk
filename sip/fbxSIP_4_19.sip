%Feature SIZE_T_AS_ULONGLONG

%If (SIZE_T_AS_ULONGLONG)
    typedef unsigned long long size_t;
%End
%If (!SIZE_T_AS_ULONGLONG)
    typedef unsigned long size_t;
%End
