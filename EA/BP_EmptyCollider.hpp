#ifndef UE4SS_SDK_BP_EmptyCollider_HPP
#define UE4SS_SDK_BP_EmptyCollider_HPP

class ABP_EmptyCollider_C : public AEHColliderWorld
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_EmptyCollider(int32 EntryPoint);
};

#endif
