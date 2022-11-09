#ifndef UE4SS_SDK_BP_VehicleCatcher_HPP
#define UE4SS_SDK_BP_VehicleCatcher_HPP

class ABP_VehicleCatcher_C : public AEHInteractiveActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UParticleSystemComponent* ParticleSystem;
    class USceneComponent* DropLocation;
    class UBoxComponent* Trigger;
    class UChildActorComponent* BP_CircleMovement2;
    class UChildActorComponent* BP_CircleMovement;
    class USceneComponent* DefaultSceneRoot;
    FVector DoorClosed;
    FVector DoorOpen;
    FVector DoorOpen_2;
    class ABP_SpacecraftVehicle_C* SpaceCraftDocked;

    void OnInteractionStarted();
    void BndEvt__Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_VehicleCatcher(int32 EntryPoint);
};

#endif
