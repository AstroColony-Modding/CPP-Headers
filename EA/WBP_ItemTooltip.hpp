#ifndef UE4SS_SDK_WBP_ItemTooltip_HPP
#define UE4SS_SDK_WBP_ItemTooltip_HPP

class UWBP_ItemTooltip_C : public UEHItemTooltipWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* Border;
    class URichTextBlock* DescriptionRich;
    class UImage* ItemImage;
    class UTGConfigurableTextBlock* ItemName;
    class UImage* MiddleClickImage;
    class UImage* Padlock;
    class UImage* RightClickImage;
    class UImage* RightClickImage_1;
    class UHorizontalBox* ShiftLeftClickHorizontal;
    class UWBP_ItemConstructionCost_C* WBP_ItemConstructionCost;
    bool HideRightClickImage;

    void Init(const FEHItemInstance& ItemInstance);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WBP_ItemTooltip(int32 EntryPoint);
};

#endif
