#ifndef UE4SS_SDK_WBP_UnlockItem_HPP
#define UE4SS_SDK_WBP_UnlockItem_HPP

class UWBP_UnlockItem_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* Border;
    class UImage* Image;
    FEHBasicUnlockData BasicUnlockData;
    bool HasBiggerPadding;

    void Init(FEHBasicUnlockData BasicUnlockData);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WBP_UnlockItem(int32 EntryPoint);
};

#endif
