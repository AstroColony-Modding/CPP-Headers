#ifndef UE4SS_SDK_WBP_SciencePointTooltip_HPP
#define UE4SS_SDK_WBP_SciencePointTooltip_HPP

class UWBP_SciencePointTooltip_C : public UEHItemTooltipWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* Border;
    class URichTextBlock* DescriptionRich;
    class UImage* ItemImage;
    class UTGConfigurableTextBlock* ItemName;
    class UImage* Padlock;
    EGlobalPointType GlobalPointType;

    void Construct();
    void ExecuteUbergraph_WBP_SciencePointTooltip(int32 EntryPoint);
};

#endif
