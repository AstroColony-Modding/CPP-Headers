#ifndef UE4SS_SDK_WBP_InteractableService_HPP
#define UE4SS_SDK_WBP_InteractableService_HPP

class UWBP_InteractableService_C : public UInteractBaseWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Background;
    class UImage* FilterTypeImage;
    class UWidgetSwitcher* HumanSwitcher;
    class UTGConfigurableTextBlock* NoResourcesTextBlock;
    class UHorizontalBox* SelectedReasources;
    class UOverlay* SelectResourcesOverlay;
    class UWBP_AIHuman_C* WBP_AIHuman;
    class UEHStudyPointObject* StudyPoint;

    void OnAIInsideChanged();
    void OnContextChanged();
    void ExecuteUbergraph_WBP_InteractableService(int32 EntryPoint);
};

#endif
