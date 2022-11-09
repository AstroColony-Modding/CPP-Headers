#ifndef UE4SS_SDK_WBP_SPGameDetails_HPP
#define UE4SS_SDK_WBP_SPGameDetails_HPP

class UWBP_SPGameDetails_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTGCheckBox* BoosterToggle;
    class UTGCheckBox* EnableBotToggle;
    class UTGCheckBox* FreeConstructionToggle;
    class UTGCheckBox* OxygenToggle;
    class UTGEditableTextBox* SeedNumberText;
    class UTGCheckBox* UnlimitedTechToggle;
    class UVerticalBox* VerticalScenariosList;

    void UpdateFreeConstructionUnlockedTech(TArray<class UEHTechnologyAsset*>& UnlockedTech, TArray<class UEHTechnologyAsset*>& UnlockedTechOut);
    class UWidget* GetFreeConstructionTooltip();
    void SetTravelParams();
    void Construct();
    void ExecuteUbergraph_WBP_SPGameDetails(int32 EntryPoint);
};

#endif
