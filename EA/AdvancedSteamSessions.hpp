#ifndef UE4SS_SDK_AdvancedSteamSessions_HPP
#define UE4SS_SDK_AdvancedSteamSessions_HPP

#include "AdvancedSteamSessions_enums.hpp"

struct FBPSteamGroupInfo
{
    FBPUniqueNetId GroupID;
    FString GroupName;
    FString GroupTag;
    int32 numOnline;
    int32 numInGame;
    int32 numChatting;

};

struct FBPSteamGroupOfficer
{
    FBPUniqueNetId OfficerUniqueNetID;
    bool bIsOwner;

};

struct FBPSteamWorkshopID
{
};

struct FBPSteamWorkshopItemDetails
{
    FBPSteamResult ResultOfRequest;
    FBPWorkshopFileType FileType;
    int32 CreatorAppID;
    int32 ConsumerAppID;
    FString Title;
    FString Description;
    FString ItemUrl;
    int32 VotesUp;
    int32 VotesDown;
    float CalculatedScore;
    bool bBanned;
    bool bAcceptedForUse;
    bool bTagsTruncated;
    FString CreatorSteamID;

};

class UAdvancedSteamFriendsLibrary : public UBlueprintFunctionLibrary
{

    bool RequestSteamFriendInfo(const FBPUniqueNetId UniqueNetId, bool bRequireNameOnly);
    bool OpenSteamUserOverlay(const FBPUniqueNetId UniqueNetId, ESteamUserOverlayType DialogType);
    bool IsSteamInBigPictureMode();
    bool IsOverlayEnabled();
    bool InitTextFiltering();
    FString GetSteamPersonaName(const FBPUniqueNetId UniqueNetId);
    void GetSteamGroups(TArray<FBPSteamGroupInfo>& SteamGroups);
    void GetSteamFriendGamePlayed(const FBPUniqueNetId UniqueNetId, EBlueprintResultSwitch& Result, int32& AppId);
    class UTexture2D* GetSteamFriendAvatar(const FBPUniqueNetId UniqueNetId, EBlueprintAsyncResultSwitch& Result, SteamAvatarSize AvatarSize);
    FBPUniqueNetId GetLocalSteamIDFromSteam();
    int32 GetFriendSteamLevel(const FBPUniqueNetId UniqueNetId);
    bool FilterText(FString TextToFilter, EBPTextFilteringContext Context, const FBPUniqueNetId TextSourceID, FString& FilteredText);
    FBPUniqueNetId CreateSteamIDFromString(const FString SteamID64);
};

class UAdvancedSteamWorkshopLibrary : public UBlueprintFunctionLibrary
{

    TArray<FBPSteamWorkshopID> GetSubscribedWorkshopItems(int32& NumberOfItems);
    void GetNumSubscribedWorkshopItems(int32& NumberOfItems);
};

class USteamRequestGroupOfficersCallbackProxy : public UOnlineBlueprintCallProxyBase
{
    FSteamRequestGroupOfficersCallbackProxyOnSuccess OnSuccess;
    void BlueprintGroupOfficerDetailsDelegate(const TArray<FBPSteamGroupOfficer>& OfficerList);
    FSteamRequestGroupOfficersCallbackProxyOnFailure OnFailure;
    void BlueprintGroupOfficerDetailsDelegate(const TArray<FBPSteamGroupOfficer>& OfficerList);

    class USteamRequestGroupOfficersCallbackProxy* GetSteamGroupOfficerList(class UObject* WorldContextObject, FBPUniqueNetId GroupUniqueNetID);
};

class USteamWSRequestUGCDetailsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
    FSteamWSRequestUGCDetailsCallbackProxyOnSuccess OnSuccess;
    void BlueprintWorkshopDetailsDelegate(const FBPSteamWorkshopItemDetails& WorkShopDetails);
    FSteamWSRequestUGCDetailsCallbackProxyOnFailure OnFailure;
    void BlueprintWorkshopDetailsDelegate(const FBPSteamWorkshopItemDetails& WorkShopDetails);

    class USteamWSRequestUGCDetailsCallbackProxy* GetWorkshopItemDetails(class UObject* WorldContextObject, FBPSteamWorkshopID WorkShopID);
};

#endif
