#ifndef UE4SS_SDK_WBP_Tooltip_HPP
#define UE4SS_SDK_WBP_Tooltip_HPP

class UWBP_Tooltip_C : public UEHTooltipWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimateIn;

    void OnContextChanged();
    void ExecuteUbergraph_WBP_Tooltip(int32 EntryPoint);
};

#endif
