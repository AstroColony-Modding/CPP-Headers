#ifndef UE4SS_SDK_WBP_CharacterFarAway_HPP
#define UE4SS_SDK_WBP_CharacterFarAway_HPP

class UWBP_CharacterFarAway_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* ShowObjective;
    class UBorder* Border;
    class UImage* Image;
    class UTGConfigurableTextBlock* MissionName;
    class UTGConfigurableTextBlock* ObjectiveText;
    class UVerticalBox* VerticalRoot;

    void Construct();
    void OnCharacterFarAwayChanged();
    void ExecuteUbergraph_WBP_CharacterFarAway(int32 EntryPoint);
};

#endif
