#ifndef UE4SS_SDK_WBP_Laboratory_HPP
#define UE4SS_SDK_WBP_Laboratory_HPP

class UWBP_Laboratory_C : public UInteractBaseWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_NameDivider_C* WBP_Divider;
    class UWBP_ElectricityModule_C* WBP_ElectricityProduction;
    class UWBP_ItemsContainerModule_C* WBP_ItemsContainer;
    class UWBP_NamedLock_C* WBP_NamedLock;
    class UWBP_RecipesModule_C* WBP_RecipesModule;
    class UWBP_SpecialisticProductionModule_C* WBP_SpecialisticProduction;
    class UWBP_TechnologyPreview_C* WBP_TechnologyPreview;

    void OnContextChanged();
    void ExecuteUbergraph_WBP_Laboratory(int32 EntryPoint);
};

#endif
