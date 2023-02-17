#ifndef UE4SS_SDK_WBP_ModsHUBOption_HPP
#define UE4SS_SDK_WBP_ModsHUBOption_HPP

class UWBP_ModsHUBOption_C : public UEHModsOptionWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* ButtonImage;
    class UTGConfigurableTextBlock* OptionName;
    EAIProfession Profession;
    FWBP_ModsHUBOption_CClick Click;
    void Click(EAIProfession Profession);
    int32 Count;

    void UpdateName();
    void SetCount(int32 Count);
    void SetSelected(bool IsSelected);
    void BndEvt__CategoryOption_K2Node_ComponentBoundEvent_1_OnWidgetClickedEvent__DelegateSignature();
    void OnContextChanged();
    void UpdateSelection(const bool IsSelected);
    void ExecuteUbergraph_WBP_ModsHUBOption(int32 EntryPoint);
    void Click__DelegateSignature(EAIProfession Profession);
};

#endif
