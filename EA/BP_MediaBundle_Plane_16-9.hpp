#ifndef UE4SS_SDK_BP_MediaBundle_Plane_16-9_HPP
#define UE4SS_SDK_BP_MediaBundle_Plane_16-9_HPP

class ABP_MediaBundle_Plane_16-9_C : public AMediaBundleActorBase
{
    class UMediaSoundComponent* MediaSound;
    class UStaticMeshComponent* Plane;
    class USceneComponent* DefaultSceneRoot;

    void UserConstructionScript();
};

#endif
