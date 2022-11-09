#ifndef UE4SS_SDK_WBP_SpecialisticProductionModule_HPP
#define UE4SS_SDK_WBP_SpecialisticProductionModule_HPP

class UWBP_SpecialisticProductionModule_C : public UInteractMenuWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTGConfigurableTextBlock* AssignedNumber;
    class UImage* EfficiencyBG;
    class UImage* EfficiencyBG_1;
    class UOverlay* EfficiencyOverlay;
    class UOverlay* EfficiencyOverlay_1;
    class UWBP_IcoButton_C* MinusButton;
    class UWBP_IcoButton_C* PlusButton;
    class UTGConfigurableTextBlock* ProdRatio;
    class UTGConfigurableTextBlock* ProdRatio_1;
    class UWBP_SpecialistSlotRound_C* Specialist;
    class UImage* SpecialistBG;
    class UTGConfigurableTextBlock* SpecialistName;
    class UOverlay* TooltipOverlay;
    class UEHProductionObject* ProductionObject;
    uint8 AssignedAICached;

    void UpdateAssignedAICount(uint8 AICount);
    void UpdateButtonsVisibility(uint8 AICount);
    FLinearColor GetSpecialistColor();
    FText GetSpecialistRatio();
    FText Get_WorkingNumber();
    FText Get_DedicatedNumbers();
    void BndEvt__MinusButton_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature();
    void BndEvt__PlusButton_K2Node_ComponentBoundEvent_4_ButtonClicked__DelegateSignature();
    void OnContextChanged();
    void ExecuteUbergraph_WBP_SpecialisticProductionModule(int32 EntryPoint);
};

#endif
