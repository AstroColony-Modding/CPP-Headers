#ifndef UE4SS_SDK_WBP_DebugInteractable_HPP
#define UE4SS_SDK_WBP_DebugInteractable_HPP

class UWBP_DebugInteractable_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* Coord;
    class UTextBlock* Name;
    class UEHInteractableObject* Interactable;

    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_WBP_DebugInteractable(int32 EntryPoint);
};

#endif
