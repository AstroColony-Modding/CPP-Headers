#ifndef UE4SS_SDK_WBP_AstronautCategory_HPP
#define UE4SS_SDK_WBP_AstronautCategory_HPP

class UWBP_AstronautCategory_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* ButtonImage;
    class UTGCheckBox* CategoryOption;
    class UTGConfigurableTextBlock* CategoryText;
    EAIProfession Profession;
    FWBP_AstronautCategory_CClick Click;
    void Click(EAIProfession Profession);
    int32 Count;

    void UpdateName();
    void SetCount(int32 Count);
    void SetSelected(bool IsSelected);
    void Construct();
    void BndEvt__CategoryOption_K2Node_ComponentBoundEvent_1_OnWidgetClickedEvent__DelegateSignature();
    void ExecuteUbergraph_WBP_AstronautCategory(int32 EntryPoint);
    void Click__DelegateSignature(EAIProfession Profession);
};

#endif
