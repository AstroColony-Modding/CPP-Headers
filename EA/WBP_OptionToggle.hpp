#ifndef UE4SS_SDK_WBP_OptionToggle_HPP
#define UE4SS_SDK_WBP_OptionToggle_HPP

class UWBP_OptionToggle_C : public UEHOptionToggleWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image_2158;

    void OnContextChanged();
    void ExecuteUbergraph_WBP_OptionToggle(int32 EntryPoint);
};

#endif
