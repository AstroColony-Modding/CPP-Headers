#ifndef UE4SS_SDK_WBP_ClickableSlot_HPP
#define UE4SS_SDK_WBP_ClickableSlot_HPP

class UWBP_ClickableSlot_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNamedSlot* ClickableSlot;
    class UTGWidget* TGWidget_0;
    TArray<class UImage*> ReactiveImages;
    FWBP_ClickableSlot_CClicked Clicked;
    void Clicked();
    TArray<FLinearColor> DefaultColors;
    TArray<class UTexture2D*> DefaultTextures;
    TArray<class UTexture2D*> HoverTextures;

    class UWidget* GetToolTipWidget();
    void UpdatePress(bool IsPressed);
    void UpdateHover(bool IsHovered);
    void InitImages(TArray<class UImage*>& ReactiveImages, TArray<class UTexture2D*>& HoverTextures);
    void BndEvt__WBP_ClickableSlot_TGWidget_0_K2Node_ComponentBoundEvent_0_OnWidgetClickedEvent__DelegateSignature();
    void BndEvt__WBP_ClickableSlot_TGWidget_0_K2Node_ComponentBoundEvent_1_OnWidgetPressedEvent__DelegateSignature();
    void BndEvt__WBP_ClickableSlot_TGWidget_0_K2Node_ComponentBoundEvent_2_OnWidgetReleasedEvent__DelegateSignature();
    void BndEvt__WBP_ClickableSlot_TGWidget_0_K2Node_ComponentBoundEvent_3_OnWidgetHoverEvent__DelegateSignature();
    void BndEvt__WBP_ClickableSlot_TGWidget_0_K2Node_ComponentBoundEvent_4_OnWidgetHoverEvent__DelegateSignature();
    void ExecuteUbergraph_WBP_ClickableSlot(int32 EntryPoint);
    void Clicked__DelegateSignature();
};

#endif
