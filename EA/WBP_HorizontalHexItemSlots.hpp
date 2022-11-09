#ifndef UE4SS_SDK_WBP_HorizontalHexItemSlots_HPP
#define UE4SS_SDK_WBP_HorizontalHexItemSlots_HPP

class UWBP_HorizontalHexItemSlots_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* BG;
    class UHorizontalBox* ItemsHorizontalBox;
    class UTGWidget* TGWidget_60;
    float LeftPadding;
    FLinearColor BGColor;
    FLinearColor BGColorH;
    FWBP_HorizontalHexItemSlots_CClicked Clicked;
    void Clicked();

    void UpdateItems(TArray<FEHItemInstance>& Items);
    class UWidget* GetToolTipWidget();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__TGWidget_60_K2Node_ComponentBoundEvent_0_OnWidgetHoverEvent__DelegateSignature();
    void BndEvt__TGWidget_60_K2Node_ComponentBoundEvent_1_OnWidgetHoverEvent__DelegateSignature();
    void BndEvt__TGWidget_60_K2Node_ComponentBoundEvent_2_OnWidgetPressedEvent__DelegateSignature();
    void BndEvt__TGWidget_60_K2Node_ComponentBoundEvent_3_OnWidgetReleasedEvent__DelegateSignature();
    void BndEvt__TGWidget_60_K2Node_ComponentBoundEvent_4_OnWidgetClickedEvent__DelegateSignature();
    void ExecuteUbergraph_WBP_HorizontalHexItemSlots(int32 EntryPoint);
    void Clicked__DelegateSignature();
};

#endif
