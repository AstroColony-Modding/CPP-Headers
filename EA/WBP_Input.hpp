#ifndef UE4SS_SDK_WBP_Input_HPP
#define UE4SS_SDK_WBP_Input_HPP

class UWBP_Input_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USizeBox* SizeBox_0;
    class UTGEditableTextBox* TextBox;
    FWBP_Input_COnTextCommited OnTextCommited;
    void OnTextCommited(FText Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    FWBP_Input_COnTextChanged OnTextChanged;
    void OnTextChanged(FText Text);
    FText HintText;
    float Width;
    bool HasFocus;
    bool IsSmall;
    bool IsCentered;

    void SetInputText(FText Name);
    void GetInputValue(int32& Value);
    void GetInputText(FText& Name);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void BndEvt__TGEditableTextBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__TGEditableTextBox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_WBP_Input(int32 EntryPoint);
    void OnTextChanged__DelegateSignature(FText Text);
    void OnTextCommited__DelegateSignature(FText Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
};

#endif
