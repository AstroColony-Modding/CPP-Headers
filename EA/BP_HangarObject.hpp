#ifndef UE4SS_SDK_BP_HangarObject_HPP
#define UE4SS_SDK_BP_HangarObject_HPP

class UBP_HangarObject_C : public UEHHangar
{
    FPointerToUberGraphFrame UberGraphFrame;

    void OnHangarDesignerOpen();
    void ExecuteUbergraph_BP_HangarObject(int32 EntryPoint);
};

#endif
