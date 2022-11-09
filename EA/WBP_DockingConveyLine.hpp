#ifndef UE4SS_SDK_WBP_DockingConveyLine_HPP
#define UE4SS_SDK_WBP_DockingConveyLine_HPP

class UWBP_DockingConveyLine_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* ArrowDown;
    class UImage* ArrowUp;
    class UButton* ConstructIN;
    class UImage* ConstructInImage;
    class UButton* ConstructOut;
    class UImage* ConstructOutImage;
    class UOverlay* ConstructOverlay;
    class UButton* DestructButton;
    class UOverlay* DestructOverlay;
    class UImage* HexBackground;
    class UTGConfigurableTextBlock* LineText;
    uint8 LineNumber;
    FWBP_DockingConveyLine_CLineAction LineAction;
    void LineAction(uint8 LineNumber, TEnumAsByte<DockingConveyLineActionType::Type> ActionType);

    void UpdateDirection(ELineDirection Direction);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void BndEvt__ConstructIN_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ConstructOut_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__DestructButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ConstructIN_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__ConstructIN_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__ConstructOut_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__ConstructOut_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_WBP_DockingConveyLine(int32 EntryPoint);
    void LineAction__DelegateSignature(uint8 LineNumber, TEnumAsByte<DockingConveyLineActionType::Type> ActionType);
};

#endif
