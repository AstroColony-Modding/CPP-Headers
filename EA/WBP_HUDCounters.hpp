#ifndef UE4SS_SDK_WBP_HUDCounters_HPP
#define UE4SS_SDK_WBP_HUDCounters_HPP

class UWBP_HUDCounters_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTGConfigurableTextBlock* FPSCounter;
    class UOverlay* FPSOverlay;
    class UOverlay* FreeConstructionOverlay;
    class UTGConfigurableTextBlock* SpeedCounter;
    class UOverlay* SpeedOverlay;
    TArray<class UTexture2D*> ModeIcons;

    FText GetGameSpeed();
    FText GetFPSCounter();
    void ToggleGameSpeed();
    void ToggleFPSCounter();
    void DelayedHideCounter();
    void Construct();
    void ExecuteUbergraph_WBP_HUDCounters(int32 EntryPoint);
};

#endif
