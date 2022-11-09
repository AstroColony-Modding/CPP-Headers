#ifndef UE4SS_SDK_WBP_GlobalPointSlotMini_HPP
#define UE4SS_SDK_WBP_GlobalPointSlotMini_HPP

class UWBP_GlobalPointSlotMini_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image;
    EGlobalPointType GlobalPointType;
    int32 Points;
    bool IsSmall;

    void Construct();
    void ExecuteUbergraph_WBP_GlobalPointSlotMini(int32 EntryPoint);
};

#endif
