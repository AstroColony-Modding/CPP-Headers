#ifndef UE4SS_SDK_WBP_CloseBox_HPP
#define UE4SS_SDK_WBP_CloseBox_HPP

class UWBP_CloseBox_C : public UEHCloseBox
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTGInputControllerWidgetSwitcher* TGInputControllerWidgetSwitcher;
    FWBP_CloseBox_CClicked Clicked;
    void Clicked();

    void BndEvt__CloseBox_K2Node_ComponentBoundEvent_0_OnWidgetClickedEvent__DelegateSignature();
    void ExecuteUbergraph_WBP_CloseBox(int32 EntryPoint);
    void Clicked__DelegateSignature();
};

#endif
