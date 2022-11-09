#ifndef UE4SS_SDK_WBP_ItemSlotMovingInfo_HPP
#define UE4SS_SDK_WBP_ItemSlotMovingInfo_HPP

class UWBP_ItemSlotMovingInfo_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* FadeOut;
    class UTGConfigurableTextBlock* Count;
    class UTGConfigurableTextBlock* CraftText;
    class UImage* Icon;
    class UTGConfigurableTextBlock* Name;
    class UTGConfigurableTextBlock* Xtext;
    FEHItemInstance Item;
    bool IsCrafted;

    void Construct();
    void AnimFinished();
    void ExecuteUbergraph_WBP_ItemSlotMovingInfo(int32 EntryPoint);
};

#endif
