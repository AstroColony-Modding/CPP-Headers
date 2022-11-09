#ifndef UE4SS_SDK_WBP_InteractMenu_HPP
#define UE4SS_SDK_WBP_InteractMenu_HPP

class UWBP_InteractMenu_C : public UInteractMenuWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UOverlay* InteractOverlay;
    int32 Rows;
    int32 Columns;
    float SlotSize;
    FMargin InteractBasePadding;

    TSubclassOf<class UInteractBaseWidget> GetWidgetType();
    FText GetDeviceName();
    void Construct();
    void ExecuteUbergraph_WBP_InteractMenu(int32 EntryPoint);
};

#endif
