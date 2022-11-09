#ifndef UE4SS_SDK_BP_SceneInteractionISM_HPP
#define UE4SS_SDK_BP_SceneInteractionISM_HPP

class UBP_SceneInteractionISM_C : public UInstancedStaticMeshComponent
{
    bool SupportClickInteraction;
    EEHTrackableType TrackableType;

    class UPrimitiveComponent* GetPrimitiveComponent();
    class USceneComponent* GetSetupComponent();
    bool HasClickInteraction();
};

#endif
