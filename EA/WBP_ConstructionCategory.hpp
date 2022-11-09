#ifndef UE4SS_SDK_WBP_ConstructionCategory_HPP
#define UE4SS_SDK_WBP_ConstructionCategory_HPP

class UWBP_ConstructionCategory_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* ButtonImage;
    class UTGCheckBox* CategoryOption;
    class UTGConfigurableTextBlock* CategoryText;
    FEHConstructCategory ConstructionCategory;
    int32 ID;
    FWBP_ConstructionCategory_CClick Click;
    void Click(int32 ID);

    void Set Selected(bool IsSelected);
    void Construct();
    void BndEvt__CategoryOption_K2Node_ComponentBoundEvent_1_OnWidgetClickedEvent__DelegateSignature();
    void ExecuteUbergraph_WBP_ConstructionCategory(int32 EntryPoint);
    void Click__DelegateSignature(int32 ID);
};

#endif
