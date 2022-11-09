#ifndef UE4SS_SDK_SSE_Block_HPP
#define UE4SS_SDK_SSE_Block_HPP

class ASSE_Block_C : public ASSE_ItemBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UEHBlockItem* BlockItem;
    TArray<FEHItemInstance> Items;
    TArray<FName> InstanceTags;
    bool InvertPushDefinitions;

    void GetDebugTextHeight(float& Height);
    void GetDebugTextColor(FColor& Color);
    class UEHItem* GetItem();
    void ApplyCraftingOverrides(class UEHInteractableObject*& InteractableIn, class UEHInteractableObject*& InteractableOut);
    void UserConstructionScript();
    void UpdateItem(class UEHItem* Item);
    void ExecuteUbergraph_SSE_Block(int32 EntryPoint);
};

#endif
