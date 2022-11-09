#ifndef UE4SS_SDK_WBP_HumanNeed_HPP
#define UE4SS_SDK_WBP_HumanNeed_HPP

class UWBP_HumanNeed_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Background;
    class UImage* CriticalIndicator;
    class UImage* EfficiencyBG;
    class UOverlay* EfficiencyOverlay;
    class UTGConfigurableTextBlock* Name;
    class UImage* NeedImage;
    class UOverlay* Overlay_1;
    class UHorizontalBox* ProductionHorizontal;
    class UProgressBar* ProgressBar;
    class UEHInteractableObject* InteractableObject;
    FEHRecipe Row;
    int32 ID;
    FEHHumanNeedData NeedRow;
    bool IsRecoveringNeed;

    FText GetText();
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_WBP_HumanNeed(int32 EntryPoint);
};

#endif
