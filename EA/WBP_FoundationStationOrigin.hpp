#ifndef UE4SS_SDK_WBP_FoundationStationOrigin_HPP
#define UE4SS_SDK_WBP_FoundationStationOrigin_HPP

class UWBP_FoundationStationOrigin_C : public UInteractBaseWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_IcoTextButton_C* CreateColonyButton;
    class UWBP_IcoTextButton_C* DestroyColonyButton;
    class UWBP_Input_C* NewStationNameInput;
    class UWidgetSwitcher* OriginActionSwitcher;
    class UWBP_IcoTextButton_C* RenameColonyButton;
    class UWBP_Input_C* RenameStationNameInput;
    class UWBP_NamedLock_C* WBP_NamedLock;

    void Construct();
    void BndEvt__CreateColonyButton_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature();
    void BndEvt__RenameColonyButton_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature();
    void BndEvt__WBP_FoundationStationOrigin_RenameColonyButton_1_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature();
    void ExecuteUbergraph_WBP_FoundationStationOrigin(int32 EntryPoint);
};

#endif
