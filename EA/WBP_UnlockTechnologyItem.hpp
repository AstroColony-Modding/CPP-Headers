#ifndef UE4SS_SDK_WBP_UnlockTechnologyItem_HPP
#define UE4SS_SDK_WBP_UnlockTechnologyItem_HPP

class UWBP_UnlockTechnologyItem_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_UnlockItem_C* WBP_UnlockItem;
    FEHGameplayAspectUnlock ItemGameplayAspect;
    FEHGameplayAspectUnlock AdditionalRecipeGameplayAspect;

    FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void Construct();
    void InitTooltip();
    void ExecuteUbergraph_WBP_UnlockTechnologyItem(int32 EntryPoint);
};

#endif
