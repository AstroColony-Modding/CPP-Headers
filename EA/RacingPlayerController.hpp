#ifndef UE4SS_SDK_RacingPlayerController_HPP
#define UE4SS_SDK_RacingPlayerController_HPP

class ARacingPlayerController_C : public AEHGamePlayerController
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBP_GridComponent_C* BP_GridComponent;
    float LapStartTime;
    float BestLapTime;
    class ABP_RacingHUD_C* RacingHUD;

    class APawn* GetRacingPawn();
    void UpdateBestLapTime();
    void CompleteLap();
    bool IsLapStarted();
    void InpActEvt_UIOption_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_UIOptionEditor_K2Node_InputActionEvent_0(FKey Key);
    void ReceiveBeginPlay();
    void CheckpointVisited(class ABP_Checkpoint_C* Checkpoint);
    void ExecuteUbergraph_RacingPlayerController(int32 EntryPoint);
};

#endif
