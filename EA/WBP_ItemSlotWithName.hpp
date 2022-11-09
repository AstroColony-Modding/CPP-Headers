#ifndef UE4SS_SDK_WBP_ItemSlotWithName_HPP
#define UE4SS_SDK_WBP_ItemSlotWithName_HPP

class UWBP_ItemSlotWithName_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* ItemImage;
    class UTGConfigurableTextBlock* ItemName;
    class UTGConfigurableTextBlock* Quantity;
    FEHItemInstance Item;

    void Construct();
    void ExecuteUbergraph_WBP_ItemSlotWithName(int32 EntryPoint);
};

#endif
