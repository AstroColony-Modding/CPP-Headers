#ifndef UE4SS_SDK_BP_LobbyGameState_HPP
#define UE4SS_SDK_BP_LobbyGameState_HPP

class ABP_LobbyGameState_C : public AEHLobbyGameState
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    FMPScenarioParamsOld MPScenarioParamsE;
    FBP_LobbyGameState_CMSScenarioParamsChangedOld MSScenarioParamsChangedOld;
    void MSScenarioParamsChangedOld();
    FBP_LobbyGameState_CMaxLobbyPlayersChangedOld MaxLobbyPlayersChangedOld;
    void MaxLobbyPlayersChangedOld();

    void ClientSavegameLoaded(int32 SavegameSize);
    void ExecuteUbergraph_BP_LobbyGameState(int32 EntryPoint);
    void MaxLobbyPlayersChangedOld__DelegateSignature();
    void MSScenarioParamsChangedOld__DelegateSignature();
};

#endif
