#ifndef UE4SS_SDK_WBP_LobbyPlayers_HPP
#define UE4SS_SDK_WBP_LobbyPlayers_HPP

class UWBP_LobbyPlayers_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVerticalBox* LobbyPlayerList;

    void UpdatePlayerChackedState(const class APlayerState*& PlayerState, const bool& IsReady);
    void RemovePlayer(const class APlayerState* PlayerState);
    void AddPlayer(class APlayerState* PlayerState);
    void InitPlayers(TArray<class APlayerState*>& PlayerState);
    void Construct();
    void ExecuteUbergraph_WBP_LobbyPlayers(int32 EntryPoint);
};

#endif
