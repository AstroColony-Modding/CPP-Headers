#ifndef UE4SS_SDK_WBP_HorizontalTechSlot_HPP
#define UE4SS_SDK_WBP_HorizontalTechSlot_HPP

class UWBP_HorizontalTechSlot_C : public UTechNodeWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* PingAnimation;
    class UImage* HEX;
    class UImage* LongHex;
    class UTGConfigurableTextBlock* NotAssignedName;
    class UImage* Padlock;
    class UUniformGridPanel* ScienceCostGrid;
    class UBorder* TechCostBorder;
    class UImage* TechIcon;
    class UTGConfigurableTextBlock* TechName;
    class UHorizontalBox* UnlockedItems;
    class UButton* UnlockTechnologyButton;
    class UWBP_UnlockTechnologyItem_C* WBP_UnlockTechnologyItem;
    class UEHTechnologyAsset* EHTechnologyAsset;
    bool SlotHovered;
    bool IsPreviewSlot;

    void ColorTest();
    class UWidget* Get_UnlockTechnologyTooltip();
    void SetPreviewAsset(class UEHTechnologyAsset* EHTechnologyAsset);
    void PingWidget();
    void ContainsItem(FName RowName, const TArray<FEHGameplayAspectUnlock>& ItemRows, bool& ContainsItem, class UEHAsset*& Item);
    void UpdateUnlockedItems();
    void UpdateNodeVisualState(bool IsHovered);
    void UpdateTechnologyCost();
    void UpdateNodeColor();
    void BndEvt__UnlockTechnologyButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void OnTechnologyUnlockStateChanged(class UTTTechNode* TechNode, bool IsUnlocked);
    void BndEvt__UnlockTechnologyButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UnlockTechnologyButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void OnTechnologyChanged(class UEHTechnologyAsset* PreviousTechnology, class UEHTechnologyAsset* CurrentTechnology);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnTechNodeInitialized();
    void PreConstruct(bool IsDesignTime);
    void AnimationEnd();
    void ExecuteUbergraph_WBP_HorizontalTechSlot(int32 EntryPoint);
};

#endif
