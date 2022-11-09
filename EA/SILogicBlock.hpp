#ifndef UE4SS_SDK_SILogicBlock_HPP
#define UE4SS_SDK_SILogicBlock_HPP

class USILogicBlock_C : public UEHSSEInitializer
{
    FPointerToUberGraphFrame UberGraphFrame;
    TArray<class UEHResourceItem*> SelectedResources;

    void InitializerApllied(class UEHInteractableObject* Interactable, class AEHGrid* Grid);
    void ExecuteUbergraph_SILogicBlock(int32 EntryPoint);
};

#endif
