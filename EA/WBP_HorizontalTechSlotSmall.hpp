#ifndef UE4SS_SDK_WBP_HorizontalTechSlotSmall_HPP
#define UE4SS_SDK_WBP_HorizontalTechSlotSmall_HPP

class UWBP_HorizontalTechSlotSmall_C : public UTechNodeWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* PingAnimation;
    class UImage* HEX;
    class UImage* TechIcon;
    class UTGConfigurableTextBlock* TechName;
    class UButton* UnlockTechnologyButton;
    class UEHTechnologyAsset* EHTechnologyAsset;
    bool SlotHovered;
    bool IsPreviewSlot;
    FWBP_HorizontalTechSlotSmall_CClick Click;
    void Click();

    void SetPreviewAsset(class UEHTechnologyAsset* EHTechnologyAsset);
    void PingWidget();
    void UpdateNodeVisualState(bool IsHovered);
    void UpdateNodeColor();
    void BndEvt__UnlockTechnologyButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UnlockTechnologyButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void OnTechnologyChanged(class UEHTechnologyAsset* PreviousTechnology, class UEHTechnologyAsset* CurrentTechnology);
    void BndEvt__UnlockTechnologyButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnTechnologyUnlockStateChanged(class UTTTechNode* TechNode, bool IsUnlocked);
    void PreConstruct(bool IsDesignTime);
    void OnTechNodeInitialized();
    void ExecuteUbergraph_WBP_HorizontalTechSlotSmall(int32 EntryPoint);
    void Click__DelegateSignature();
};

#endif
