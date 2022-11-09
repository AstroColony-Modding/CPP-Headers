#ifndef UE4SS_SDK_WBP_PlayerActionSlot_HPP
#define UE4SS_SDK_WBP_PlayerActionSlot_HPP

class UWBP_PlayerActionSlot_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Ping;
    class UTGConfigurableTextBlock* ActionKey;
    class UTGConfigurableTextBlock* ActionText;
    EPlayerActionType PlayerActionType;
    FText DefaultActionText;

    void UpdateActionTextOverrides(TMap<class EPlayerActionType, class FText>& Names, TMap<class EPlayerActionType, class FText>& Names2);
    void UpdatePlayerAction();
    void UpdateColor();
    void UpdateActionText(FText Text);
    void Activated();
    void Construct();
    void ExecuteUbergraph_WBP_PlayerActionSlot(int32 EntryPoint);
};

#endif
