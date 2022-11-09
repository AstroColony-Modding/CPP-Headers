#ifndef UE4SS_SDK_WBP_OptionRadioButtons_HPP
#define UE4SS_SDK_WBP_OptionRadioButtons_HPP

class UWBP_OptionRadioButtons_C : public UEHOptionRadioButtonsWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image_2158;
    class UWBP_RadioButton_C* WBP_RadioButton;

    void OnContextChanged();
    void ExecuteUbergraph_WBP_OptionRadioButtons(int32 EntryPoint);
};

#endif
