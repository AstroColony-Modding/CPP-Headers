#ifndef UE4SS_SDK_WBP_GrowItem_HPP
#define UE4SS_SDK_WBP_GrowItem_HPP

class UWBP_GrowItem_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Ico;
    class UTGConfigurableTextBlock* TimeText;
    bool IsWater;

    void SetTime(float Time);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WBP_GrowItem(int32 EntryPoint);
};

#endif
