#ifndef UE4SS_SDK_WBP_PopRecipesTooltip_HPP
#define UE4SS_SDK_WBP_PopRecipesTooltip_HPP

class UWBP_PopRecipesTooltip_C : public UEHItemTooltipWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* Border;
    class UHorizontalBox* ResourcesInItems;

    void Init(const FEHItemInstance& ItemInstance);
    void ExecuteUbergraph_WBP_PopRecipesTooltip(int32 EntryPoint);
};

#endif
