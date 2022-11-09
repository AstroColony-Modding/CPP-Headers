#ifndef UE4SS_SDK_WBP_TechnologyPreview_HPP
#define UE4SS_SDK_WBP_TechnologyPreview_HPP

class UWBP_TechnologyPreview_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* CostHorizontalBox;
    class UWBP_IcoButton_C* DockSciencePoinsButton;
    class UHorizontalBox* PreviewInfoBox;
    class UWBP_TechnologyPoints_C* SciencePoints;
    class UWBP_IcoButton_C* SearchButton;
    class UWBP_HorizontalTechSlot_C* WBP_PreviewSlot;
    bool HideGlobalPoints;
    bool HideSearchButton;
    class UEHTechnologyAsset* EHTechnologyAsset;
    FWBP_TechnologyPreview_CSearchTechnology SearchTechnology;
    void SearchTechnology(class UEHTechnologyAsset* Technology);

    void UpdateDockedTechPoints();
    void UpdateTechCost();
    void UpdateTechnology();
    FText GetPreviewText();
    FSlateBrush GetPreviewImage();
    void Construct();
    void OnTechnologyChanged(class UEHTechnologyAsset* PreviousTechnology, class UEHTechnologyAsset* CurrentTechnology);
    void OnTechnologyUnlockStateChanged(class UTechnologyTree* TechTree, class UTTTechNode* TechNode, bool IsUnlocked);
    void BndEvt__DepositButton_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature();
    void BndEvt__WBP_TechnologyPreview_DockScienceButton_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature();
    void OnTechnologyPointsDockChanged();
    void ExecuteUbergraph_WBP_TechnologyPreview(int32 EntryPoint);
    void SearchTechnology__DelegateSignature(class UEHTechnologyAsset* Technology);
};

#endif
