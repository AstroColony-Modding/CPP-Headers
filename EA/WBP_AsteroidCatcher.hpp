#ifndef UE4SS_SDK_WBP_AsteroidCatcher_HPP
#define UE4SS_SDK_WBP_AsteroidCatcher_HPP

class UWBP_AsteroidCatcher_C : public UInteractBaseWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_IcoButton_C* AsteroidCatchingButton;
    class UOverlay* AsteroidOverlay;
    class UWBP_HorizontalHexItemSlots_C* AttractedAsteroidButton;
    class UImage* Background;
    class UWBP_HorizontalHexItemSlots_C* ProcessedAsteroidButton;
    class UWBP_ElectricityModule_C* WBP_ElectricityProduction;
    class UWBP_ItemsContainerModule_C* WBP_ItemsContainer;
    class UWBP_RecipesModule_C* WBP_RecipesModule;
    class UWBP_WaterModule_C* WBP_WaterProduction;
    class UEHAsteroidsCatcher* AsteroidCatcher;

    void UpdateAsteroids();
    void OnContextChanged();
    void BndEvt__WBP_HorizontalHexItemSlots_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature();
    void BndEvt__WBP_HorizontalHexItemSlots_1_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature();
    void OnAsteroidCatchStateChanged(EAsteroidCatchStateChanged CatchStateChange);
    void BndEvt__WBP_AsteroidCatcher_DesignVehicles_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature();
    void ExecuteUbergraph_WBP_AsteroidCatcher(int32 EntryPoint);
};

#endif
