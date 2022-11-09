#ifndef UE4SS_SDK_WBP_MainMenu_HPP
#define UE4SS_SDK_WBP_MainMenu_HPP

class UWBP_MainMenu_C : public UEHMainMenuScreen
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USizeBox* AsyncLoadingSizebox;
    class UOverlay* BenchmarkPopupOverlay;
    class UTGConfigurableTextBlock* DividerName;
    class UTGConfigurableTextBlock* FPSCounter;
    class UOverlay* FPSOverlay;
    class UProgressBar* ProgressBar;
    class UTGWideScreenLayoutContainer* SDWideScreenLayoutContainer_0;
    int32 SeedIndex;
    bool CtrlPressed;

    FText GetFPSCounter();
    void ToggleFPSCounter();
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    ESlateVisibility GetLoadingVisibility();
    float GetLoadingPhaseProgress();
    FText GetLoadingPhaseName();
    void RemoveBenchmarkPopup();
    void CreateBenchmarkPopup();
    void SetBenchmarkResult(float CPU, float GPU);
    FEventReply OnFocusReceived(FGeometry MyGeometry, FFocusEvent InFocusEvent);
    void FocusMain();
    void ToggleVisibility();
    void ExecuteUbergraph_WBP_MainMenu(int32 EntryPoint);
};

#endif
