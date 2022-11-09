#ifndef UE4SS_SDK_WBP_LongNamedSlot_HPP
#define UE4SS_SDK_WBP_LongNamedSlot_HPP

class UWBP_LongNamedSlot_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* BG;
    class UImage* CircleBG;
    class UImage* Ico;
    class UNamedSlot* ResourcesOverlay;
    class UWBP_ClickableSlot_C* WBP_ClickableSlot;
    class UTexture2D* DefaultIco;
    FWBP_LongNamedSlot_CSlotClick SlotClick;
    void SlotClick();
    FText ToolTip;
    bool SupportHover;

    void DisableHover();
    void UpdateIco(TSoftObjectPtr<UTexture2D> Texture);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__WBP_LongNamedSlot_WBP_ClickableSlot_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature();
    void Construct();
    void ExecuteUbergraph_WBP_LongNamedSlot(int32 EntryPoint);
    void SlotClick__DelegateSignature();
};

#endif
