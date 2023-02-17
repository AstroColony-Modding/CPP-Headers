#ifndef UE4SS_SDK_WBP_SelectionSlot_HPP
#define UE4SS_SDK_WBP_SelectionSlot_HPP

class UWBP_SelectionSlot_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBackgroundBlur* BackgroundBlur_0;
    class UTGTile* Button;
    class UImage* DisabledBackground;
    class UImage* Image;
    class UTGConfigurableTextBlock* Number;
    class USizeBox* SizeBox_3;
    FWBP_SelectionSlot_CSlotClicked SlotClicked;
    void SlotClicked();
    bool IsCurrentlySelectedSlot;

    void Toggle(bool IsToggled);
    void Init(bool IsCurrentlySelectedSlot, bool IsBiggerSize, int32 Number);
    void SetUnlocked(bool IsUnlocked);
    void SetBrush(TSoftObjectPtr<UTexture2D> Texture);
    void BndEvt__InteractiveAreaSettings_K2Node_ComponentBoundEvent_1_OnWidgetClickedEvent__DelegateSignature();
    void Construct();
    void ExecuteUbergraph_WBP_SelectionSlot(int32 EntryPoint);
    void SlotClicked__DelegateSignature();
};

#endif
