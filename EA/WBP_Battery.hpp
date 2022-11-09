#ifndef UE4SS_SDK_WBP_Battery_HPP
#define UE4SS_SDK_WBP_Battery_HPP

class UWBP_Battery_C : public UInteractBaseWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* BG;
    class UWBP_RadiobuttonLine_C* ChargeRadiobutton;
    class UImage* CircleBG;
    class UWBP_ClickableSlot_C* CircleSlot;
    class UTGConfigurableTextBlock* Name;
    class UProgressBar* ProgressBar;
    class UImage* ReceiverIco;
    class UOverlay* RemoteConstructionOverlay;
    class UWBP_ElectricityModule_C* WBP_ElectricityProduction;
    class UEHBatteryObject* BatteryObject;

    void UpdateChargeStateColor();
    float GetChargeProgress();
    FText GetChargeRatio();
    void OnContextChanged();
    void BndEvt__WBP_Battery_WBP_RadiobuttonLine_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature(int32 ToggleID);
    void OnCraftingElectricityChanged();
    void ExecuteUbergraph_WBP_Battery(int32 EntryPoint);
};

#endif
