#ifndef UE4SS_SDK_WBP_LogicBlocker_HPP
#define UE4SS_SDK_WBP_LogicBlocker_HPP

class UWBP_LogicBlocker_C : public UInteractBaseWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_Logic_C* WBP_Logic;

    void OnContextChanged();
    void ExecuteUbergraph_WBP_LogicBlocker(int32 EntryPoint);
};

#endif
