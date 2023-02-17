#ifndef UE4SS_SDK_BP_LobbyPlayerController_HPP
#define UE4SS_SDK_BP_LobbyPlayerController_HPP

class ABP_LobbyPlayerController_C : public AEHLobbyPlayerController
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_LobbyHostGame_C* LobbyHostWidget;
    class UWBP_LobbyPlayers_C* LobbyPlayersWidget;
    class UWBP_Chat_C* ChatWidget;
    TArray<class APlayerState*> PlayerStates;
    bool WasInitialized;
    FBP_LobbyPlayerController_COnPlayersChanged OnPlayersChanged;
    void OnPlayersChanged();
    FBP_LobbyPlayerController_COnLobbyDetailsChanged OnLobbyDetailsChanged;
    void OnLobbyDetailsChanged();
    TArray<FBPUniqueNetId> PlayerUniqueIDs;

    void LoadSavegame(FString inString);
    void GetLobbyGameMode(class ABP_LobbyGameMode_C*& AsBP Lobby Game Mode);
    void GetLobbyPlayerState(class AEHPlayerState*& EHPlayerState);
    void AreAllPlayersReady(bool& ArePlayersReady);
    void UpdateConnectedPlayers(TArray<class APlayerState*>& PlayerStates);
    void OnRep_PlayerStates();
    void UpdatePlayerStates();
    void InitPlayerStates();
    void Init();
    void TryInit();
    void OnFailure_B326C4CF41DF832EEE270B88D536FDB1();
    void OnSuccess_B326C4CF41DF832EEE270B88D536FDB1();
    void OnFailure_1794609C4AD060189B317CA1B0B5C1CC();
    void OnSuccess_1794609C4AD060189B317CA1B0B5C1CC();
    void AddPlayerLobby(class APlayerState* PlayerState);
    void RemovePlayerLobby(const class APlayerState* PlayerState);
    void Server_SendLobbyMsg(class APlayerState* PlayerState, const FString& Msg);
    void Clinet_SendLobbyMsg(class APlayerState* PlayerState, const FString& Msg);
    void Server_Ready();
    void Server_NotReady();
    void Client_PlayerChangedReadyState(const class APlayerState*& PlayerState, const bool IsReady);
    void Server_KickPlayer(const class APlayerState*& PlayerState);
    void ReceiveBeginPlay();
    void HandlePlayerStateInitialized();
    void Server_LaunchGame();
    void Client_InitServerParams(FEHServerParams ServerParams);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void Server_StartCounter();
    void Client_StartCounter(const FString& SaveGame, const FEHScenarioParams& ScenarioParams, uint8 UniquePlayerNetID, bool SharedTechnologies);
    void ExecuteUbergraph_BP_LobbyPlayerController(int32 EntryPoint);
    void OnLobbyDetailsChanged__DelegateSignature();
    void OnPlayersChanged__DelegateSignature();
};

#endif
