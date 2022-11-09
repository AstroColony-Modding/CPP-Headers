#ifndef UE4SS_SDK_WBP_Chat_HPP
#define UE4SS_SDK_WBP_Chat_HPP

class UWBP_Chat_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVerticalBox* MessagesVertical;
    class UTGEditableTextBox* MessageText;
    class UTGScrollBox* ScrollBox;

    void AddMessage(class APlayerState* PlayerState, FString Message);
    void BndEvt__WBP_Chat_MessageText_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void ExecuteUbergraph_WBP_Chat(int32 EntryPoint);
};

#endif
