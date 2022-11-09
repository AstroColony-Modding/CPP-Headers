#ifndef UE4SS_SDK_WBP_TabNoContext_HPP
#define UE4SS_SDK_WBP_TabNoContext_HPP

class UWBP_TabNoContext_C : public UEHTabWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* TabSelected;
    class UImage* Line;
    class UTGConfigurableTextBlock* Text;
    FText SelectionName;
    int32 Index;
    FWBP_TabNoContext_CTabClicked TabClicked;
    void TabClicked(int32 Index);

    FEventReply OnFocusReceived(FGeometry MyGeometry, FFocusEvent InFocusEvent);
    void SetSelected(bool bIsSelected);
    void UpdateSelection(const bool IsSelected);
    void Construct();
    void BndEvt__WBP_Tab_ButtonTile_K2Node_ComponentBoundEvent_1_OnWidgetClickedEvent__DelegateSignature();
    void ExecuteUbergraph_WBP_TabNoContext(int32 EntryPoint);
    void TabClicked__DelegateSignature(int32 Index);
};

#endif
