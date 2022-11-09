#ifndef UE4SS_SDK_WBP_DebugPrioritySpinBox_HPP
#define UE4SS_SDK_WBP_DebugPrioritySpinBox_HPP

class UWBP_DebugPrioritySpinBox_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USpinBox* SpinBox;

    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void BndEvt__WBP_DebugPrioritySpinBox_SpinBox_60_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void Init(class UEHItem* Item);
    void ExecuteUbergraph_WBP_DebugPrioritySpinBox(int32 EntryPoint);
};

#endif
