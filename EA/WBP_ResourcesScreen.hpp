#ifndef UE4SS_SDK_WBP_ResourcesScreen_HPP
#define UE4SS_SDK_WBP_ResourcesScreen_HPP

class UWBP_ResourcesScreen_C : public UMenuWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTGConfigurableTextBlock* DividerName;
    class UWBP_ConstructionItemsContainer_C* WBP_AllResources;
    class UWBP_IcoMarker_C* WBP_IcoMarker;
    class UWBP_Spinner_C* WBP_Spinner;
    int32 CurrentCategoryID;

    void UpdateVisibleResourcesCount();
    void Construct();
    void OnVisibleResourcesCountChanged();
    void BndEvt__WBP_ResourcesScreen_WBP_Spinner_K2Node_ComponentBoundEvent_0_ValueCommited__DelegateSignature(float Value);
    void ExecuteUbergraph_WBP_ResourcesScreen(int32 EntryPoint);
};

#endif
