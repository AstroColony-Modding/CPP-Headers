#ifndef UE4SS_SDK_DragWidget_HPP
#define UE4SS_SDK_DragWidget_HPP

class UDragWidget_C : public UDragDropOperation
{
    class UUserWidget* WidgetToDrag;
    FVector2D DragWindowOffset;
    class UPanelWidget* Parent;
    FVector2D ScreenPosition;

};

#endif
