#ifndef UE4SS_SDK_BP_DestructibleComponent_HPP
#define UE4SS_SDK_BP_DestructibleComponent_HPP

class UBP_DestructibleComponent_C : public UEHDestructibleComponent
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_DestructibleComponent(int32 EntryPoint);
};

#endif
