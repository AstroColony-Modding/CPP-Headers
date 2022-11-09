#ifndef UE4SS_SDK_BP_EHGameMode_HPP
#define UE4SS_SDK_BP_EHGameMode_HPP

class ABP_EHGameMode_C : public AEHGameModeBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    int32 PlayerStartLocationID;
    class APlayerController* New Player;

    void InitPlayerState(class APlayerController* PlayerController);
    class AActor* FindPlayerStart(class AController* Player, FString IncomingName);
    void K2_PostLogin(class APlayerController* NewPlayer);
    void ExecuteUbergraph_BP_EHGameMode(int32 EntryPoint);
};

#endif
