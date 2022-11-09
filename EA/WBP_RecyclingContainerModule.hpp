#ifndef UE4SS_SDK_WBP_RecyclingContainerModule_HPP
#define UE4SS_SDK_WBP_RecyclingContainerModule_HPP

class UWBP_RecyclingContainerModule_C : public UEHContainerWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USizeBox* ContainerSizeBox;
    class UWBP_IcoButton_C* RecyclingButton;
    class USizeBox* ScrollSizeBox;
    bool HideDepositeButton;

    void InitContainerSize();
    void BndEvt__WBP_IcoButton_C_0_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void PopMenuClosed(TSubclassOf<class UInteractBaseWidget> IndicatedObject);
    void PopMenuOpened(EEHPopMenuType Type);
    void ExecuteUbergraph_WBP_RecyclingContainerModule(int32 EntryPoint);
};

#endif
