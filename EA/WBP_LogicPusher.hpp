#ifndef UE4SS_SDK_WBP_LogicPusher_HPP
#define UE4SS_SDK_WBP_LogicPusher_HPP

class UWBP_LogicPusher_C : public UInteractBaseWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_Logic_C* WBP_Logic;

    void OnContextChanged();
    void ExecuteUbergraph_WBP_LogicPusher(int32 EntryPoint);
};

#endif
