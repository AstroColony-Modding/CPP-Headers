#ifndef UE4SS_SDK_SessionMessages_HPP
#define UE4SS_SDK_SessionMessages_HPP

struct FSessionServiceLog
{
    FName Category;
    FString Data;
    FGuid InstanceId;
    double TimeSeconds;
    uint8 Verbosity;

};

struct FSessionServiceLogSubscribe
{
};

struct FSessionServiceLogUnsubscribe
{
};

struct FSessionServicePing
{
    FString username;

};

struct FSessionServicePong
{
    bool Authorized;
    FString BuildDate;
    FString DeviceName;
    FGuid InstanceId;
    FString InstanceName;
    FString PlatformName;
    FGuid SessionId;
    FString SessionName;
    FString SessionOwner;
    bool Standalone;

};

#endif
