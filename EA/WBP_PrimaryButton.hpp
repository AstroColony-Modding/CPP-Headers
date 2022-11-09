#ifndef UE4SS_SDK_WBP_PrimaryButton_HPP
#define UE4SS_SDK_WBP_PrimaryButton_HPP

class UWBP_PrimaryButton_C : public UEHBaseButtonWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTGInputActionWidget* InputAction;
    FText DefaultText;

    void SetText(FText Text);
    void SetToggled(bool Toggled);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WBP_PrimaryButton(int32 EntryPoint);
};

#endif
