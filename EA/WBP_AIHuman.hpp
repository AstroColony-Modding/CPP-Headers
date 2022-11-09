#ifndef UE4SS_SDK_WBP_AIHuman_HPP
#define UE4SS_SDK_WBP_AIHuman_HPP

class UWBP_AIHuman_C : public UInteractBaseWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* Border;
    class UBorder* Border_1;
    class UWBP_IcoButton_C* ChangeRecipesButton;
    class UWBP_NameDivider_C* HumanName;
    class UImage* ItemImage;
    class UWBP_SpecialistSlotRound_C* Specialist;
    class UImage* SpecialistBG;
    class UTGConfigurableTextBlock* SpecialistName;
    class UOverlay* SpecialistOverlay;
    class UOverlay* SpecializationOverlay;
    class UWBP_HumanNeeds_C* WBP_HumanNeeds;
    int32 Rows;
    int32 Columns;
    float SlotSize;

    FSlateBrush GetAttachedResourceBrush();
    ESlateVisibility GetAttachedResourceVisibility();
    void UpdateProfession();
    void OnProfessionChanged();
    void OnContextChanged();
    void BndEvt__WBP_AIHuman_ChangeRecipesButton_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature();
    void ExecuteUbergraph_WBP_AIHuman(int32 EntryPoint);
};

#endif
