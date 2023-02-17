#ifndef UE4SS_SDK_WBP_TechnologiesScreen_HPP
#define UE4SS_SDK_WBP_TechnologiesScreen_HPP

class UWBP_TechnologiesScreen_C : public UMenuWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTechTreeWidget* HorizontalTechTree;
    class UScrollBox* ScrollBox;
    class UVerticalBox* VerticalBox;
    class UWBP_TechnologyPreview_C* WBP_TechnologyPreview;

    void JumpToTechnologyOld(class UTechnologyAsset* TechnologyAsset);
    void Construct();
    void BndEvt__WBP_TechnologyPreview_K2Node_ComponentBoundEvent_0_SearchTechnology__DelegateSignature(class UEHTechnologyAsset* Technology);
    void JumpToTechnology(class UTechnologyAsset* TechnologyAsset);
    void BndEvt__WBP_TechnologiesScreen_ScrollBox_K2Node_ComponentBoundEvent_1_OnUserScrolledEvent__DelegateSignature(float CurrentOffset);
    void ExecuteUbergraph_WBP_TechnologiesScreen(int32 EntryPoint);
};

#endif
