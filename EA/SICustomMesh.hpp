#ifndef UE4SS_SDK_SICustomMesh_HPP
#define UE4SS_SDK_SICustomMesh_HPP

class USICustomMesh_C : public UEHSSEInitializer
{
    FPointerToUberGraphFrame UberGraphFrame;
    FGeneratedCustomMesh CustomMesh;

    void InitializerApllied(class UEHInteractableObject* Interactable, class AEHGrid* Grid);
    void ExecuteUbergraph_SICustomMesh(int32 EntryPoint);
};

#endif
