#ifndef UE4SS_SDK_WBP_RadioButton_HPP
#define UE4SS_SDK_WBP_RadioButton_HPP

class UWBP_RadioButton_C : public UEHRadioButton
{
    FPointerToUberGraphFrame UberGraphFrame;
    FVector2D Size;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WBP_RadioButton(int32 EntryPoint);
};

#endif
