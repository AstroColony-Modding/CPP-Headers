#ifndef UE4SS_SDK_AdvancedSessions_HPP
#define UE4SS_SDK_AdvancedSessions_HPP

#include "AdvancedSessions_enums.hpp"

struct FBPFriendInfo
{
    FString DisplayName;
    FString RealName;
    EBPOnlinePresenceState OnlineState;
    FBPUniqueNetId UniqueNetId;
    bool bIsPlayingSameGame;
    FBPFriendPresenceInfo PresenceInfo;

};

struct FBPFriendPresenceInfo
{
    bool bIsOnline;
    bool bIsPlaying;
    bool bIsPlayingThisGame;
    bool bIsJoinable;
    bool bHasVoiceSupport;
    EBPOnlinePresenceState PresenceState;
    FString StatusString;

};

struct FBPOnlineRecentPlayer : public FBPOnlineUser
{
    FString LastSeen;

};

struct FBPOnlineUser
{
    FBPUniqueNetId UniqueNetId;
    FString DisplayName;
    FString RealName;

};

struct FBPUniqueNetId
{
};

struct FBPUserOnlineAccount
{
};

struct FSessionPropertyKeyPair
{
};

struct FSessionsSearchSetting
{
};

class AAdvancedGameSession : public AGameSession
{
    TMap<class FUniqueNetIdRepl, class FText> BanList;

};

class IAdvancedFriendsInterface : public IInterface
{

    void OnSessionInviteReceived(FBPUniqueNetId PersonInviting, const FBlueprintSessionResult& SearchResult);
    void OnSessionInviteAccepted(FBPUniqueNetId PersonInvited, const FBlueprintSessionResult& SearchResult);
    void OnPlayerVoiceStateChanged(FBPUniqueNetId PlayerId, bool bIsTalking);
    void OnPlayerLoginStatusChanged(EBPLoginStatus PreviousStatus, EBPLoginStatus NewStatus, FBPUniqueNetId PlayerUniqueNetID);
    void OnPlayerLoginChanged(int32 PlayerNum);
};

class UAdvancedExternalUILibrary : public UBlueprintFunctionLibrary
{

    void ShowWebURLUI(FString URLToShow, EBlueprintResultSwitch& Result, TArray<FString>& AllowedDomains, bool bEmbedded, bool bShowBackground, bool bShowCloseButton, int32 OffsetX, int32 OffsetY, int32 SizeX, int32 SizeY);
    void ShowProfileUI(const FBPUniqueNetId PlayerViewingProfile, const FBPUniqueNetId PlayerToViewProfileOf, EBlueprintResultSwitch& Result);
    void ShowLeaderBoardUI(FString LeaderboardName, EBlueprintResultSwitch& Result);
    void ShowInviteUI(class APlayerController* PlayerController, EBlueprintResultSwitch& Result);
    void ShowFriendsUI(class APlayerController* PlayerController, EBlueprintResultSwitch& Result);
    void ShowAccountUpgradeUI(const FBPUniqueNetId PlayerRequestingAccountUpgradeUI, EBlueprintResultSwitch& Result);
    void CloseWebURLUI();
};

class UAdvancedFriendsGameInstance : public UGameInstance
{
    bool bCallFriendInterfaceEventsOnPlayerControllers;
    bool bCallIdentityInterfaceEventsOnPlayerControllers;
    bool bCallVoiceInterfaceEventsOnPlayerControllers;
    bool bEnableTalkingStatusDelegate;

    void OnSessionInviteReceived(int32 LocalPlayerNum, FBPUniqueNetId PersonInviting, FString AppId, const FBlueprintSessionResult& SessionToJoin);
    void OnSessionInviteAccepted(int32 LocalPlayerNum, FBPUniqueNetId PersonInvited, const FBlueprintSessionResult& SessionToJoin);
    void OnPlayerTalkingStateChanged(FBPUniqueNetId PlayerId, bool bIsTalking);
    void OnPlayerLoginStatusChanged(int32 PlayerNum, EBPLoginStatus PreviousStatus, EBPLoginStatus NewStatus, FBPUniqueNetId NewPlayerUniqueNetID);
    void OnPlayerLoginChanged(int32 PlayerNum);
};

class UAdvancedFriendsLibrary : public UBlueprintFunctionLibrary
{

    void SendSessionInviteToFriends(class APlayerController* PlayerController, const TArray<FBPUniqueNetId>& Friends, EBlueprintResultSwitch& Result);
    void SendSessionInviteToFriend(class APlayerController* PlayerController, const FBPUniqueNetId& FriendUniqueNetId, EBlueprintResultSwitch& Result);
    void IsAFriend(class APlayerController* PlayerController, const FBPUniqueNetId UniqueNetId, bool& IsFriend);
    void GetStoredRecentPlayersList(FBPUniqueNetId UniqueNetId, TArray<FBPOnlineRecentPlayer>& PlayersList);
    void GetStoredFriendsList(class APlayerController* PlayerController, TArray<FBPFriendInfo>& FriendsList);
    void GetFriend(class APlayerController* PlayerController, const FBPUniqueNetId FriendUniqueNetId, FBPFriendInfo& Friend);
};

class UAdvancedIdentityLibrary : public UBlueprintFunctionLibrary
{

    void SetUserAccountAttribute(const FBPUserOnlineAccount& AccountInfo, FString AttributeName, FString NewAttributeValue, EBlueprintResultSwitch& Result);
    void GetUserID(const FBPUserOnlineAccount& AccountInfo, FBPUniqueNetId& UniqueNetId);
    void GetUserAccountRealName(const FBPUserOnlineAccount& AccountInfo, FString& username);
    void GetUserAccountDisplayName(const FBPUserOnlineAccount& AccountInfo, FString& DisplayName);
    void GetUserAccountAuthAttribute(const FBPUserOnlineAccount& AccountInfo, FString AttributeName, FString& AuthAttribute, EBlueprintResultSwitch& Result);
    void GetUserAccountAttribute(const FBPUserOnlineAccount& AccountInfo, FString AttributeName, FString& AttributeValue, EBlueprintResultSwitch& Result);
    void GetUserAccountAccessToken(const FBPUserOnlineAccount& AccountInfo, FString& AccessToken);
    void GetUserAccount(const FBPUniqueNetId& UniqueNetId, FBPUserOnlineAccount& AccountInfo, EBlueprintResultSwitch& Result);
    void GetPlayerNickname(const FBPUniqueNetId& UniqueNetId, FString& PlayerNickname);
    void GetPlayerAuthToken(class APlayerController* PlayerController, FString& AuthToken, EBlueprintResultSwitch& Result);
    void GetLoginStatus(const FBPUniqueNetId& UniqueNetId, EBPLoginStatus& LoginStatus, EBlueprintResultSwitch& Result);
    void GetAllUserAccounts(TArray<FBPUserOnlineAccount>& AccountInfos, EBlueprintResultSwitch& Result);
};

class UAdvancedSessionsLibrary : public UBlueprintFunctionLibrary
{

    void UniqueNetIdToString(const FBPUniqueNetId& UniqueNetId, FString& String);
    void SetPlayerName(class APlayerController* PlayerController, FString PlayerName);
    FSessionsSearchSetting MakeLiteralSessionSearchProperty(FSessionPropertyKeyPair SessionSearchProperty, EOnlineComparisonOpRedux ComparisonOp);
    FSessionPropertyKeyPair MakeLiteralSessionPropertyString(FName Key, FString Value);
    FSessionPropertyKeyPair MakeLiteralSessionPropertyInt(FName Key, int32 Value);
    FSessionPropertyKeyPair MakeLiteralSessionPropertyFloat(FName Key, float Value);
    FSessionPropertyKeyPair MakeLiteralSessionPropertyByte(FName Key, uint8 Value);
    FSessionPropertyKeyPair MakeLiteralSessionPropertyBool(FName Key, bool Value);
    bool KickPlayer(class UObject* WorldContextObject, class APlayerController* PlayerToKick, FText KickReason);
    bool IsValidUniqueNetID(const FBPUniqueNetId& UniqueNetId);
    bool IsValidSession(const FBlueprintSessionResult& SessionResult);
    void IsPlayerInSession(class UObject* WorldContextObject, const FBPUniqueNetId& PlayerToCheck, bool& bIsInSession);
    bool HasOnlineSubsystem(FName SubSystemName);
    void GetUniqueNetIDFromPlayerState(class APlayerState* PlayerState, FBPUniqueNetId& UniqueNetId);
    void GetUniqueNetID(class APlayerController* PlayerController, FBPUniqueNetId& UniqueNetId);
    void GetUniqueBuildID(FBlueprintSessionResult SessionResult, int32& UniqueBuildId);
    void GetSessionState(class UObject* WorldContextObject, EBPOnlineSessionState& SessionState);
    void GetSessionSettings(class UObject* WorldContextObject, int32& NumConnections, int32& NumPrivateConnections, bool& bIsLAN, bool& bIsDedicated, bool& bAllowInvites, bool& bAllowJoinInProgress, bool& bIsAnticheatEnabled, int32& BuildUniqueID, TArray<FSessionPropertyKeyPair>& ExtraSettings, EBlueprintResultSwitch& Result);
    void GetSessionPropertyString(const TArray<FSessionPropertyKeyPair>& ExtraSettings, FName SettingName, ESessionSettingSearchResult& SearchResult, FString& SettingValue);
    FName GetSessionPropertyKey(const FSessionPropertyKeyPair& SessionProperty);
    void GetSessionPropertyInt(const TArray<FSessionPropertyKeyPair>& ExtraSettings, FName SettingName, ESessionSettingSearchResult& SearchResult, int32& SettingValue);
    void GetSessionPropertyFloat(const TArray<FSessionPropertyKeyPair>& ExtraSettings, FName SettingName, ESessionSettingSearchResult& SearchResult, float& SettingValue);
    void GetSessionPropertyByte(const TArray<FSessionPropertyKeyPair>& ExtraSettings, FName SettingName, ESessionSettingSearchResult& SearchResult, uint8& SettingValue);
    void GetSessionPropertyBool(const TArray<FSessionPropertyKeyPair>& ExtraSettings, FName SettingName, ESessionSettingSearchResult& SearchResult, bool& SettingValue);
    void GetSessionID_AsString(const FBlueprintSessionResult& SessionResult, FString& SessionId);
    void GetPlayerName(class APlayerController* PlayerController, FString& PlayerName);
    void GetNumberOfNetworkPlayers(class UObject* WorldContextObject, int32& NumNetPlayers);
    void GetNetPlayerIndex(class APlayerController* PlayerController, int32& NetPlayerIndex);
    void GetExtraSettings(FBlueprintSessionResult SessionResult, TArray<FSessionPropertyKeyPair>& ExtraSettings);
    void GetCurrentUniqueBuildID(int32& UniqueBuildId);
    void GetCurrentSessionID_AsString(class UObject* WorldContextObject, FString& SessionId);
    void FindSessionPropertyIndexByName(const TArray<FSessionPropertyKeyPair>& ExtraSettings, FName SettingName, EBlueprintResultSwitch& Result, int32& OutIndex);
    void FindSessionPropertyByName(const TArray<FSessionPropertyKeyPair>& ExtraSettings, FName SettingsName, EBlueprintResultSwitch& Result, FSessionPropertyKeyPair& OutProperty);
    bool EqualEqual_UNetIDUnetID(const FBPUniqueNetId& A, const FBPUniqueNetId& B);
    bool BanPlayer(class UObject* WorldContextObject, class APlayerController* PlayerToBan, FText BanReason);
    void AddOrModifyExtraSettings(TArray<FSessionPropertyKeyPair>& SettingsArray, TArray<FSessionPropertyKeyPair>& NewOrChangedSettings, TArray<FSessionPropertyKeyPair>& ModifiedSettingsArray);
};

class UAdvancedVoiceLibrary : public UBlueprintFunctionLibrary
{

    bool UnRegisterRemoteTalker(const FBPUniqueNetId& UniqueNetId);
    void UnRegisterLocalTalker(uint8 LocalPlayerNum);
    void UnRegisterAllLocalTalkers();
    bool UnMuteRemoteTalker(uint8 LocalUserNum, const FBPUniqueNetId& UniqueNetId, bool bIsSystemWide);
    void StopNetworkedVoice(uint8 LocalPlayerNum);
    void StartNetworkedVoice(uint8 LocalPlayerNum);
    void RemoveAllRemoteTalkers();
    bool RegisterRemoteTalker(const FBPUniqueNetId& UniqueNetId);
    bool RegisterLocalTalker(uint8 LocalPlayerNum);
    void RegisterAllLocalTalkers();
    bool MuteRemoteTalker(uint8 LocalUserNum, const FBPUniqueNetId& UniqueNetId, bool bIsSystemWide);
    bool IsRemotePlayerTalking(const FBPUniqueNetId& UniqueNetId);
    bool IsPlayerMuted(uint8 LocalUserNumChecking, const FBPUniqueNetId& UniqueNetId);
    bool IsLocalPlayerTalking(uint8 LocalPlayerNum);
    void IsHeadsetPresent(bool& bHasHeadset, uint8 LocalPlayerNum);
    void GetNumLocalTalkers(int32& NumLocalTalkers);
};

class UCancelFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
    FCancelFindSessionsCallbackProxyOnSuccess OnSuccess;
    void EmptyOnlineDelegate();
    FCancelFindSessionsCallbackProxyOnFailure OnFailure;
    void EmptyOnlineDelegate();

    class UCancelFindSessionsCallbackProxy* CancelFindSessions(class UObject* WorldContextObject, class APlayerController* PlayerController);
};

class UCreateSessionCallbackProxyAdvanced : public UOnlineBlueprintCallProxyBase
{
    FCreateSessionCallbackProxyAdvancedOnSuccess OnSuccess;
    void EmptyOnlineDelegate();
    FCreateSessionCallbackProxyAdvancedOnFailure OnFailure;
    void EmptyOnlineDelegate();

    class UCreateSessionCallbackProxyAdvanced* CreateAdvancedSession(class UObject* WorldContextObject, const TArray<FSessionPropertyKeyPair>& ExtraSettings, class APlayerController* PlayerController, int32 PublicConnections, int32 PrivateConnections, bool bUseLAN, bool bAllowInvites, bool bIsDedicatedServer, bool bUsePresence, bool bUseLobbiesIfAvailable, bool bAllowJoinViaPresence, bool bAllowJoinViaPresenceFriendsOnly, bool bAntiCheatProtected, bool bUsesStats, bool bShouldAdvertise);
};

class UEndSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
    FEndSessionCallbackProxyOnSuccess OnSuccess;
    void EmptyOnlineDelegate();
    FEndSessionCallbackProxyOnFailure OnFailure;
    void EmptyOnlineDelegate();

    class UEndSessionCallbackProxy* EndSession(class UObject* WorldContextObject, class APlayerController* PlayerController);
};

class UFindFriendSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
    FFindFriendSessionCallbackProxyOnSuccess OnSuccess;
    void BlueprintFindFriendSessionDelegate(const TArray<FBlueprintSessionResult>& SessionInfo);
    FFindFriendSessionCallbackProxyOnFailure OnFailure;
    void BlueprintFindFriendSessionDelegate(const TArray<FBlueprintSessionResult>& SessionInfo);

    class UFindFriendSessionCallbackProxy* FindFriendSession(class UObject* WorldContextObject, class APlayerController* PlayerController, const FBPUniqueNetId& FriendUniqueNetId);
};

class UFindSessionsCallbackProxyAdvanced : public UOnlineBlueprintCallProxyBase
{
    FFindSessionsCallbackProxyAdvancedOnSuccess OnSuccess;
    void BlueprintFindSessionsResultDelegate(const TArray<FBlueprintSessionResult>& Results);
    FFindSessionsCallbackProxyAdvancedOnFailure OnFailure;
    void BlueprintFindSessionsResultDelegate(const TArray<FBlueprintSessionResult>& Results);

    class UFindSessionsCallbackProxyAdvanced* FindSessionsAdvanced(class UObject* WorldContextObject, class APlayerController* PlayerController, int32 MaxResults, bool bUseLAN, EBPServerPresenceSearchType ServerTypeToSearch, const TArray<FSessionsSearchSetting>& Filters, bool bEmptyServersOnly, bool bNonEmptyServersOnly, bool bSecureServersOnly, bool bSearchLobbies, int32 MinSlotsAvailable);
    void FilterSessionResults(const TArray<FBlueprintSessionResult>& SessionResults, const TArray<FSessionsSearchSetting>& Filters, TArray<FBlueprintSessionResult>& FilteredResults);
};

class UGetFriendsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
    FGetFriendsCallbackProxyOnSuccess OnSuccess;
    void BlueprintGetFriendsListDelegate(const TArray<FBPFriendInfo>& Results);
    FGetFriendsCallbackProxyOnFailure OnFailure;
    void BlueprintGetFriendsListDelegate(const TArray<FBPFriendInfo>& Results);

    class UGetFriendsCallbackProxy* GetAndStoreFriendsList(class UObject* WorldContextObject, class APlayerController* PlayerController);
};

class UGetRecentPlayersCallbackProxy : public UOnlineBlueprintCallProxyBase
{
    FGetRecentPlayersCallbackProxyOnSuccess OnSuccess;
    void BlueprintGetRecentPlayersDelegate(const TArray<FBPOnlineRecentPlayer>& Results);
    FGetRecentPlayersCallbackProxyOnFailure OnFailure;
    void BlueprintGetRecentPlayersDelegate(const TArray<FBPOnlineRecentPlayer>& Results);

    class UGetRecentPlayersCallbackProxy* GetAndStoreRecentPlayersList(class UObject* WorldContextObject, const FBPUniqueNetId& UniqueNetId);
};

class UGetUserPrivilegeCallbackProxy : public UOnlineBlueprintCallProxyBase
{
    FGetUserPrivilegeCallbackProxyOnSuccess OnSuccess;
    void BlueprintGetUserPrivilegeDelegate(EBPUserPrivileges QueriedPrivilege, bool HadPrivilege);
    FGetUserPrivilegeCallbackProxyOnFailure OnFailure;
    void EmptyOnlineDelegate();

    class UGetUserPrivilegeCallbackProxy* GetUserPrivilege(class UObject* WorldContextObject, const EBPUserPrivileges& PrivilegeToCheck, const FBPUniqueNetId& PlayerUniqueNetID);
};

class ULoginUserCallbackProxy : public UOnlineBlueprintCallProxyBase
{
    FLoginUserCallbackProxyOnSuccess OnSuccess;
    void EmptyOnlineDelegate();
    FLoginUserCallbackProxyOnFailure OnFailure;
    void EmptyOnlineDelegate();

    class ULoginUserCallbackProxy* LoginUser(class UObject* WorldContextObject, class APlayerController* PlayerController, FString UserID, FString UserToken);
};

class ULogoutUserCallbackProxy : public UOnlineBlueprintCallProxyBase
{
    FLogoutUserCallbackProxyOnSuccess OnSuccess;
    void EmptyOnlineDelegate();
    FLogoutUserCallbackProxyOnFailure OnFailure;
    void EmptyOnlineDelegate();

    class ULogoutUserCallbackProxy* LogoutUser(class UObject* WorldContextObject, class APlayerController* PlayerController);
};

class USendFriendInviteCallbackProxy : public UOnlineBlueprintCallProxyBase
{
    FSendFriendInviteCallbackProxyOnSuccess OnSuccess;
    void BlueprintSendFriendInviteDelegate();
    FSendFriendInviteCallbackProxyOnFailure OnFailure;
    void BlueprintSendFriendInviteDelegate();

    class USendFriendInviteCallbackProxy* SendFriendInvite(class UObject* WorldContextObject, class APlayerController* PlayerController, const FBPUniqueNetId& UniqueNetIDInvited);
};

class UUpdateSessionCallbackProxyAdvanced : public UOnlineBlueprintCallProxyBase
{
    FUpdateSessionCallbackProxyAdvancedOnSuccess OnSuccess;
    void EmptyOnlineDelegate();
    FUpdateSessionCallbackProxyAdvancedOnFailure OnFailure;
    void EmptyOnlineDelegate();

    class UUpdateSessionCallbackProxyAdvanced* UpdateSession(class UObject* WorldContextObject, const TArray<FSessionPropertyKeyPair>& ExtraSettings, int32 PublicConnections, int32 PrivateConnections, bool bUseLAN, bool bAllowInvites, bool bAllowJoinInProgress, bool bRefreshOnlineData, bool bIsDedicatedServer);
};

#endif
