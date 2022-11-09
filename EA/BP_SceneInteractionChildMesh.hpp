#ifndef UE4SS_SDK_BP_SceneInteractionChildMesh_HPP
#define UE4SS_SDK_BP_SceneInteractionChildMesh_HPP

class UBP_SceneInteractionChildMesh_C : public UStaticMeshComponent
{
    TArray<class UMaterialInterface*> MaterialsCached;

    class UPrimitiveComponent* GetPrimitiveComponent();
    class USceneComponent* GetSetupComponent();
    bool HasClickInteraction();
};

#endif
