#ifndef UE4SS_SDK_BP_CheatComponent_HPP
#define UE4SS_SDK_BP_CheatComponent_HPP

class UBP_CheatComponent_C : public UEHCheatComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    TArray<FEHGlobalPointInstance> GlobalPoints;

    void CheatTechPts();
    void CheatUnlockAll();
    void CheatKillPlayer();
    void CheatCompleteScenario();
    void UIShowHUD();
    void UIHideHUD();
    void ReceiveBeginPlay();
    void OnDebugModeChanged();
    void CheatResources();
    void CheatHandle(FString NewParam);
    void ExecuteUbergraph_BP_CheatComponent(int32 EntryPoint);
};

#endif
