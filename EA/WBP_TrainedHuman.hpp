#ifndef UE4SS_SDK_WBP_TrainedHuman_HPP
#define UE4SS_SDK_WBP_TrainedHuman_HPP

class UWBP_TrainedHuman_C : public UInteractBaseWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* HumanFrom;
    class UImage* HumanTo;
    class UImage* ProfessionIco;
    class UProgressBar* ProgressBar_1;
    class UTGConfigurableTextBlock* RecipeNameText_1;
    class UTGConfigurableTextBlock* TimeSeconds;
    class UBorder* TooltipBorder;
    EAIProfession Profession;
    bool IsPrimaryTraining;

    void UpdateProfession(EAIProfession Profession);
    float GetTrainedPercent();
    void PreConstruct(bool IsDesignTime);
    void OnContextChanged();
    void ExecuteUbergraph_WBP_TrainedHuman(int32 EntryPoint);
};

#endif
