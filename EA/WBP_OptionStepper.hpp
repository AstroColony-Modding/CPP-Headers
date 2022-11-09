#ifndef UE4SS_SDK_WBP_OptionStepper_HPP
#define UE4SS_SDK_WBP_OptionStepper_HPP

class UWBP_OptionStepper_C : public UEHOptionStepperWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image_2158;

    FText Get_Text_AccessibleText_0();
    void OnContextChanged();
    void ExecuteUbergraph_WBP_OptionStepper(int32 EntryPoint);
};

#endif
