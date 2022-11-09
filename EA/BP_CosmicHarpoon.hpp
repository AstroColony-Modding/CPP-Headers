#ifndef UE4SS_SDK_BP_CosmicHarpoon_HPP
#define UE4SS_SDK_BP_CosmicHarpoon_HPP

class ABP_CosmicHarpoon_C : public AEHInteractivePawn
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* SM_Geo_Sphere_low;
    class UStaticMeshComponent* AttracionBeam;
    class UCameraComponent* Camera;
    class UStaticMeshComponent* SM_Cannon;
    class USceneComponent* DefaultSceneRoot;
    float ActivateHarpoon_RotationInterp_CE6918C843F180D81DCF1797EDD0A24F;
    float ActivateHarpoon_InterpValue_CE6918C843F180D81DCF1797EDD0A24F;
    TEnumAsByte<ETimelineDirection::Type> ActivateHarpoon__Direction_CE6918C843F180D81DCF1797EDD0A24F;
    class UTimelineComponent* ActivateHarpoon;
    class UEHCosmicHarpoonObject* CosmicHarpoon;
    class ABP_AsteroidSpawner_C* AsteroidSpawner;
    float LineTraceLength;
    float AttractionSpeed;
    FEHAsteroidData AsteroidData;
    bool AutoCatchingActive;
    int32 PlanetFlags;
    FRotator DesiredCannonRotation;

    TMap<class EPlayerActionType, class FText> GetTraceActionNames();
    int32 GetTraceOverrideActions(class UObject* TracedObject);
    bool ShouldTraceObject(class UObject* TracedObject);
    void GetDistanceToPlanetoid(float& Distance);
    void GetAttractionDistance(float& Distance);
    void UpdateAttractState();
    void UpdateCannonRotation();
    void UpdateAttractionBeam();
    void UpdateAttractedPlanetoidPosition();
    void ActivateHarpoon__FinishedFunc();
    void ActivateHarpoon__UpdateFunc();
    void InpActEvt_ActionCancel_K2Node_InputActionEvent_2(FKey Key);
    void InpActEvt_ActionLeave_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_ActionSelect_K2Node_InputActionEvent_0(FKey Key);
    void ReceiveTick(float DeltaSeconds);
    void OnInteractionFinished();
    void OnInteractionStarted();
    void OnHarpoonStateChanged();
    void InpAxisEvt_LookUp_K2Node_InputAxisEvent_1(float AxisValue);
    void Server_CatchAsteroid(class AEHVoxelWorld* VoxelWorld);
    void Multi_CatchAsteroid(class AEHVoxelWorld* Target);
    void Init(class UEHInteractableObject* InInteractableObject);
    void InpAxisEvt_Turn_K2Node_InputAxisEvent_0(float AxisValue);
    void Server_CancelAttraction();
    void Multi_CancelAttraction();
    void ExecuteUbergraph_BP_CosmicHarpoon(int32 EntryPoint);
};

#endif
