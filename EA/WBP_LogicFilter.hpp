#ifndef UE4SS_SDK_WBP_LogicFilter_HPP
#define UE4SS_SDK_WBP_LogicFilter_HPP

class UWBP_LogicFilter_C : public UInteractBaseWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_Logic_C* WBP_Logic;

    void OnContextChanged();
    void ExecuteUbergraph_WBP_LogicFilter(int32 EntryPoint);
};

#endif
