#ifndef UE4SS_SDK_WBP_AsteroidCatcher_HPP
#define UE4SS_SDK_WBP_AsteroidCatcher_HPP

class UWBP_AsteroidCatcher_C : public UInteractBaseWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* ArrowImage;
    class UWBP_IcoButton_C* AsteroidCatchingButton;
    class UOverlay* AsteroidOverlay;
    class UWBP_HorizontalHexItemSlots_C* AttractedAsteroidButton;
    class UImage* Background;
    class UWBP_HorizontalHexItemSlots_C* ProcessedAsteroidButton;
    class UHorizontalBox* ResourceHorizontalSelection;
    class UWBP_ResourceSlot_C* ResourceSlot;
    class UHorizontalBox* ResourceSlots;
    class UWBP_ElectricityModule_C* WBP_ElectricityProduction;
    class UWBP_ItemsContainerModule_C* WBP_ItemsContainer;
    class UWBP_RecipesModule_C* WBP_RecipesModule;
    class UWBP_ResourceSlot_C* WBP_ResourceSlot;
    class UWBP_ResourceSlot_C* WBP_ResourceSlot_158;
    class UWBP_WaterModule_C* WBP_WaterProduction;
    class UEHAsteroidsCatcher* AsteroidCatcher;

    void UpdateUnlockState();
    void UpdateCatchedResource();
    void PickResource(int32 ID);
    void InitializeResources();
    void UpdateAsteroids();
    void OnContextChanged();
    void BndEvt__WBP_HorizontalHexItemSlots_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature();
    void BndEvt__WBP_HorizontalHexItemSlots_1_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature();
    void OnAsteroidCatchStateChanged(EAsteroidCatchStateChanged CatchStateChange);
    void BndEvt__WBP_AsteroidCatcher_DesignVehicles_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature();
    void BndEvt__WBP_AsteroidCatcher_ResourceSlot_K2Node_ComponentBoundEvent_3_ButtonClick__DelegateSignature(int32 ID);
    void ExecuteUbergraph_WBP_AsteroidCatcher(int32 EntryPoint);
};

#endif
