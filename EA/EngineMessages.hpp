#ifndef UE4SS_SDK_EngineMessages_HPP
#define UE4SS_SDK_EngineMessages_HPP

struct FEngineServiceAuthDeny
{
    FString username;
    FString UserToDeny;

};

struct FEngineServiceAuthGrant
{
    FString username;
    FString UserToGrant;

};

struct FEngineServiceExecuteCommand
{
    FString Command;
    FString username;

};

struct FEngineServiceNotification
{
    FString Text;
    double TimeSeconds;

};

struct FEngineServicePing
{
};

struct FEngineServicePong
{
    FString CurrentLevel;
    int32 EngineVersion;
    bool HasBegunPlay;
    FGuid InstanceId;
    FString InstanceType;
    FGuid SessionId;
    float WorldTimeSeconds;

};

struct FEngineServiceTerminate
{
    FString username;

};

#endif
