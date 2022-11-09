#ifndef UE4SS_SDK_BP_GeneratedOxygenBarrier_HPP
#define UE4SS_SDK_BP_GeneratedOxygenBarrier_HPP

class ABP_GeneratedOxygenBarrier_C : public AEHInteractiveActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Circle;
    class UStaticMeshComponent* Beam;
    class UStaticMeshComponent* Barrier;
    class USceneComponent* DefaultSceneRoot;
    float BeamAnimation_BeamHeight_A264F7EC4F785A13974398930476CD52;
    TEnumAsByte<ETimelineDirection::Type> BeamAnimation__Direction_A264F7EC4F785A13974398930476CD52;
    class UTimelineComponent* BeamAnimation;

    void UpdateOverlappingCharacter(class AEHCharacter* Character);
    void BeamAnimation__FinishedFunc();
    void BeamAnimation__UpdateFunc();
    void BndEvt__Barrier_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Barrier_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void OnActiveStateChanged(const bool IsActive);
    void ExecuteUbergraph_BP_GeneratedOxygenBarrier(int32 EntryPoint);
};

#endif
