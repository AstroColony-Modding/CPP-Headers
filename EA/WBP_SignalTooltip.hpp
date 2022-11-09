#ifndef UE4SS_SDK_WBP_SignalTooltip_HPP
#define UE4SS_SDK_WBP_SignalTooltip_HPP

class UWBP_SignalTooltip_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* Border;
    class UTGConfigurableTextBlock* ElectricNetworkName;
    class UTGConfigurableTextBlock* ElectricNetworkName_1;
    class UHorizontalBox* HorizontalBox;
    class UObject* SignalObject;

    FText GetSignalOut();
    FText GetSignalIn();
    void UpdateElectricNetwork();
    void Construct();
    void OnElectricNetworkChanged();
    void ExecuteUbergraph_WBP_SignalTooltip(int32 EntryPoint);
};

#endif
