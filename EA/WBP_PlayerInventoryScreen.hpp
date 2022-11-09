#ifndef UE4SS_SDK_WBP_PlayerInventoryScreen_HPP
#define UE4SS_SDK_WBP_PlayerInventoryScreen_HPP

class UWBP_PlayerInventoryScreen_C : public UMenuWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_ItemsContainerModule_C* GarbageContainerWidget;
    class UImage* Image_227;
    class UWBP_ItemsContainerModule_C* PlayerContainerWidget;
    class UWBP_IcoButton_C* ResourceButton;
    class UWBP_NameDivider_C* WBP_DividerItems;
    class UWBP_NameDivider_C* WBP_DividerItems_1;
    class UWBP_RecipesModule_C* WBP_RecipesModule;
    int32 CurrentCategoryID;

    void Construct();
    void OnGameplayEffectUnlocked();
    void BndEvt__WBP_PlayerInventoryScreen_ChangeRecipesButton_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature();
    void ExecuteUbergraph_WBP_PlayerInventoryScreen(int32 EntryPoint);
};

#endif
