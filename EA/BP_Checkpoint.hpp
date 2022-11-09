#ifndef UE4SS_SDK_BP_Checkpoint_HPP
#define UE4SS_SDK_BP_Checkpoint_HPP

class ABP_Checkpoint_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* SM_ShapeCirclePlane;
    class UStaticMeshComponent* SM_HiCityVehicleCatcher;
    class UChildActorComponent* BP_CircleMovement2;
    class UChildActorComponent* BP_CircleMovement;
    class UBoxComponent* Box;
    class UBillboardComponent* Billboard;
    bool IsFinish;
    bool Visited;

    void UserConstructionScript();
    void BndEvt__BP_Checkpoint_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_BP_Checkpoint(int32 EntryPoint);
};

#endif
