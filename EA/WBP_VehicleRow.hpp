#ifndef UE4SS_SDK_WBP_VehicleRow_HPP
#define UE4SS_SDK_WBP_VehicleRow_HPP

class UWBP_VehicleRow_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTGConfigurableTextBlock* Distance;
    class UImage* Icon;
    class UWBP_IcoButton_C* PinButton;
    class UTGConfigurableTextBlock* VehicleName;
    class UTGConfigurableTextBlock* VehicleTypeName;
    class APawn* VehiclePawn;
    FEHVehicleDefinition VehicleDetails;
    FWBP_VehicleRow_CPinClicked PinClicked;
    void PinClicked(class UEHAIObject* AIObject);

    void UpdateDistance();
    void UpdatePinToggle();
    void UpdateName(FText Name);
    void Construct();
    void BndEvt__WBP_AstronautRow_PinButton_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature();
    void Destruct();
    void Update20ms();
    void ExecuteUbergraph_WBP_VehicleRow(int32 EntryPoint);
    void PinClicked__DelegateSignature(class UEHAIObject* AIObject);
};

#endif
