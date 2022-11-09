#ifndef UE4SS_SDK_WBP_TechToast_HPP
#define UE4SS_SDK_WBP_TechToast_HPP

class UWBP_TechToast_C : public UEHToastWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* HEX;
    class UImage* Image;
    class UImage* LongHex;
    class UTGConfigurableTextBlock* Title;
    class UHorizontalBox* UnlockedItems;
    class UWBP_UnlockItem_C* WBP_UnlockItem;
    class UEHTechnologyAsset* EHTechnologyAsset;

    void UpdateUnlockedItems();
    void OnContextChanged();
    void ExecuteUbergraph_WBP_TechToast(int32 EntryPoint);
};

#endif
