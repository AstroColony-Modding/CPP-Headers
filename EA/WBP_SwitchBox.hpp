#ifndef UE4SS_SDK_WBP_SwitchBox_HPP
#define UE4SS_SDK_WBP_SwitchBox_HPP

class UWBP_SwitchBox_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTGTile* SWITCH;
    FWBP_SwitchBox_CClicked Clicked;
    void Clicked();

    void SetState(bool IsOn);
    void Construct();
    void BndEvt__WBP_SwitchBox_Switch_K2Node_ComponentBoundEvent_1_OnWidgetClickedEvent__DelegateSignature();
    void ExecuteUbergraph_WBP_SwitchBox(int32 EntryPoint);
    void Clicked__DelegateSignature();
};

#endif
