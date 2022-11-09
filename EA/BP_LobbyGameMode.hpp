#ifndef UE4SS_SDK_BP_LobbyGameMode_HPP
#define UE4SS_SDK_BP_LobbyGameMode_HPP

class ABP_LobbyGameMode_C : public AEHGameModeBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    TArray<class ABP_LobbyPlayerController_C*> AllConnectedPlayers;

    void GetPlayerByState(class APlayerState* PlayerState, const class ABP_LobbyPlayerController_C*& Player);
    void GetAllPlayerStates(TArray<class APlayerState*>& PlayerStates);
    void InitPlayerState(class APlayerController* PlayerController);
    void PlayerLogout(const class ABP_LobbyPlayerController_C*& PlayerController);
    void K2_PostLogin(class APlayerController* NewPlayer);
    void K2_OnLogout(class AController* ExitingController);
    void ExecuteUbergraph_BP_LobbyGameMode(int32 EntryPoint);
};

#endif
