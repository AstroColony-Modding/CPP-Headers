#ifndef UE4SS_SDK_WBP_AI_HPP
#define UE4SS_SDK_WBP_AI_HPP

class UWBP_AI_C : public UInteractBaseWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_IcoButton_C* AIButton;
    class UWBP_NameDivider_C* Name;
    class UOverlay* SpecializationOverlay;
    int32 Rows;
    int32 Columns;
    float SlotSize;

    void OnContextChanged();
    void BndEvt__WBP_AIHuman_ChangeRecipesButton_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature();
    void ExecuteUbergraph_WBP_AI(int32 EntryPoint);
};

#endif
