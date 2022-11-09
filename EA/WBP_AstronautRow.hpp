#ifndef UE4SS_SDK_WBP_AstronautRow_HPP
#define UE4SS_SDK_WBP_AstronautRow_HPP

class UWBP_AstronautRow_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTGConfigurableTextBlock* AstronautName;
    class UOverlay* DebugInteractableOverlay;
    class UTGConfigurableTextBlock* Distance;
    class UImage* Icon;
    class UImage* ItemImage;
    class UHorizontalBox* Needs;
    class UWBP_IcoButton_C* PinButton;
    class UTGConfigurableTextBlock* ProfessionName;
    class UTGConfigurableTextBlock* StationName;
    class UTGConfigurableTextBlock* status;
    class UWBP_IcoButton_C* TransferButton;
    class UWBP_HumanNeedMini_C* WBP_HumanNeedMini;
    class UWBP_HumanNeedMini_C* WBP_HumanNeedMini_1;
    class UEHAIObject* AIObject;
    TMap<class TSubclassOf<UEHInteractableObject>, class FText> StatusText;
    FWBP_AstronautRow_CPinClicked PinClicked;
    void PinClicked(class UEHAIObject* AIObject);

    FText Get_DebugCoord();
    void UpdateDistance();
    void UpdatePinToggle();
    void UpdateHoldingItem();
    void UpdateStatus();
    void UpdateHumanNeeds();
    void UpdateName();
    void Construct();
    void BndEvt__WBP_AstronautRow_PinButton_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature();
    void Destruct();
    void Update20ms();
    void BndEvt__WBP_AstronautRow_PinButton_1_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature();
    void PopMenuClosed(TSubclassOf<class UInteractBaseWidget> IndicatedObject);
    void ExecuteUbergraph_WBP_AstronautRow(int32 EntryPoint);
    void PinClicked__DelegateSignature(class UEHAIObject* AIObject);
};

#endif
