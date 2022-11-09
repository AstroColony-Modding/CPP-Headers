#ifndef UE4SS_SDK_BP_Door_HPP
#define UE4SS_SDK_BP_Door_HPP

class ABP_Door_C : public AEHInteractiveActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* SM_Door1;
    class USceneComponent* Scene1;
    class UStaticMeshComponent* SM_Door;
    class USceneComponent* Scene;
    class UBoxComponent* Trigger;
    class USceneComponent* DefaultSceneRoot;
    float Timeline_0_DoorPos_F29358B54910F94B6FBA55B28D9579F8;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_F29358B54910F94B6FBA55B28D9579F8;
    class UTimelineComponent* Timeline_0;
    FVector DoorClosed;
    FVector DoorOpen;
    FVector DoorOpen_2;

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void BndEvt__Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Trigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_BP_Door(int32 EntryPoint);
};

#endif
