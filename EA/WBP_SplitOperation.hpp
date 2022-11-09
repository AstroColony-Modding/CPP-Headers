#ifndef UE4SS_SDK_WBP_SplitOperation_HPP
#define UE4SS_SDK_WBP_SplitOperation_HPP

class UWBP_SplitOperation_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UOverlay* Overlay_0;
    class UTGConfigurableTextBlock* ResourceName;
    class UWBP_IcoTextButton_C* SplitButton;
    class UImage* SplitIco;
    class UWBP_Slider_C* SplitSlider;
    class UWBP_CloseBox_C* WBP_CloseBox;
    FEHItemInstance ItemInstance;
    class UEHItemsContainer* ContainerFrom;
    uint8 IndexFrom;

    FEventReply OnFocusReceived(FGeometry MyGeometry, FFocusEvent InFocusEvent);
    void Construct();
    void OnRemovedFromFocusPath(FFocusEvent InFocusEvent);
    void BndEvt__WBP_CloseBox_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature();
    void BndEvt__WBP_IcoTextButton_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature();
    void ExecuteUbergraph_WBP_SplitOperation(int32 EntryPoint);
};

#endif
