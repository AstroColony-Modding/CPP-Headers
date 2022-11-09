#ifndef UE4SS_SDK_WBP_RemoteFabricator_HPP
#define UE4SS_SDK_WBP_RemoteFabricator_HPP

class UWBP_RemoteFabricator_C : public UInteractBaseWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Background;
    class UImage* BG;
    class UImage* ConstructionIco;
    class UWBP_IcoButton_C* DesignVehicles;
    class UWBP_HorizontalHexItemSlots_C* ExpeditionCost;
    class UTGConfigurableTextBlock* ExpeditionsRatio;
    class UTGConfigurableTextBlock* Name;
    class UProgressBar* ProgressBar;
    class UOverlay* RemoteConstructionOverlay;
    class UTGConfigurableTextBlock* Text1;
    class UTGWidget* TGWidget_60;
    class UWBP_ElectricityModule_C* WBP_ElectricityProduction;
    class UWBP_ItemsContainerModule_C* WBP_ItemsContainer;
    class UWBP_SpecialisticProductionModule_C* WBP_SpecialisticProduction;
    class UEHRemoteFabricatorObject* RemoteFabricator;
    FLinearColor BGColor;

    float GetProgress();
    FText GetExpeditionsRatio();
    void UpdateRemoteConstruction();
    void OnContextChanged();
    void BndEvt__WBP_HorizontalHexItemSlots_1_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature();
    void BndEvt__WBP_RemoteFabricator_DesignVehicles_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature();
    void ExecuteUbergraph_WBP_RemoteFabricator(int32 EntryPoint);
};

#endif
