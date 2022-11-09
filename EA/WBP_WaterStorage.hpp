#ifndef UE4SS_SDK_WBP_WaterStorage_HPP
#define UE4SS_SDK_WBP_WaterStorage_HPP

class UWBP_WaterStorage_C : public UInteractBaseWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_WaterModule_C* WBP_WaterProduction;

    void OnContextChanged();
    void ExecuteUbergraph_WBP_WaterStorage(int32 EntryPoint);
};

#endif
