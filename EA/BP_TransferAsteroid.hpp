#ifndef UE4SS_SDK_BP_TransferAsteroid_HPP
#define UE4SS_SDK_BP_TransferAsteroid_HPP

class ABP_TransferAsteroid_C : public AEHAsteroidDebris
{
    class UStaticMeshComponent* StaticMesh;
    FEHAsteroidData AsteroidData;
    uint8 HitCounter;
    uint8 HitsNumberToExtract;

    TSubclassOf<class UWorldInteractiveInfoWidget> GetWorldInteractiveInfoWidgetClass();
    uint8 GetInteractionCircleStep();
    uint8 GetInteractionCircleStepsNumber();
    void UserConstructionScript();
};

#endif
