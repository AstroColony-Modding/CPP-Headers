#ifndef UE4SS_SDK_WBP_Window_HPP
#define UE4SS_SDK_WBP_Window_HPP

class UWBP_Window_C : public UMenuWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UOverlay* DebugInteractableOverlay;
    class UTextBlock* DebugWidget;
    class USpacer* DragAreaBottom;
    class USpacer* DragAreaBottomPop;
    class USpacer* DragAreaLeft;
    class USpacer* DragAreaLeftPop;
    class USpacer* DragAreaRight;
    class USpacer* DragAreaRightPop;
    class USpacer* DragAreaTop;
    class USpacer* DragAreaTopPop;
    class UImage* HexHighlight;
    class UImage* HexPop;
    class UImage* PopWindowImage;
    class UOverlay* PopWindowOverlay;
    class UTGNamedSlot* PopWindowSlot;
    class UTGConfigurableTextBlock* PopWindowTitle;
    class USizeBox* SizeBox;
    class UImage* TopBG;
    class UWBP_CloseBox_C* WBP_PopClose;
    class UWBP_SwitchBox_C* WBP_SwitchBox;
    class UWBP_CloseBox_C* WBP_WindowClose;
    class UImage* WindowImage;
    class UTGNamedSlot* WindowSlot;
    class UTGConfigurableTextBlock* WindowTitle;
    int32 RowSlots;
    FVector2D DragWindowOffset;
    TArray<class USpacer*> DragAreas;
    class UEHInteractableObject* Interactable;

    void UpdateDeviceSwitchState();
    void InitDebug();
    class UWidget* GetPopHexTooltip();
    FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    class UWidget* GetHexTooltip();
    void ShowPopWindow(bool IsVisible);
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnDragDetected(FGeometry MyGeometry, const FPointerEvent& PointerEvent, class UDragDropOperation*& Operation);
    void Construct();
    void BndEvt__PopWindowSlot_K2Node_ComponentBoundEvent_2_OnNamedSlotAdded__DelegateSignature(class UWidget* SlotWidget);
    void BndEvt__WindowSlot_K2Node_ComponentBoundEvent_0_OnNamedSlotAdded__DelegateSignature(class UWidget* SlotWidget);
    void BndEvt__WBP_Window_WBP_CloseBox_1_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature();
    void BndEvt__WBP_MCCCloseBox_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature();
    void BndEvt__WBP_Window_WBP_WindowBox_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature();
    void ExecuteUbergraph_WBP_Window(int32 EntryPoint);
};

#endif
