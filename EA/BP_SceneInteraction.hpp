#ifndef UE4SS_SDK_BP_SceneInteraction_HPP
#define UE4SS_SDK_BP_SceneInteraction_HPP

class ABP_SceneInteraction_C : public AEHInteractiveActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCameraComponent* Camera;
    class USpringArmComponent* SpringArm;
    class USceneComponent* DefaultSceneRoot;
    float Timeline_0_RotInterpolationSpeed_2E9708944A138EA49AB01AB4D409BB72;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_2E9708944A138EA49AB01AB4D409BB72;
    class UTimelineComponent* Timeline_0;
    float DesiredArmLength;
    class UActorComponent* SelectedComponent;
    class UActorComponent* HoveredComponent;
    int32 HoveredIndex;
    int32 SelectedIndex;
    FRotator DesiredRotation;
    float RotationInterpolationSpeed;
    float ArmInterpolationSpeed;
    FVector DesiredSpringArmPosition;
    TArray<class AActor*> HiddenActors;
    float MaxTargetArmLength;
    float DefaultArmLength;
    FRotator DefaultRotation;
    float ArmPitchMin;
    float ArmPitchMax;
    TArray<class AActor*> DisabledCollisionActors;
    class AEHGrid* HiddenGrid;
    bool MouseButtonDown;
    bool MouseDragged;
    bool HasPreselectedComponent;
    bool IsActive;
    FVector TraceLocation;
    FVector TraceNormal;
    FBP_SceneInteraction_COnActiveStateChanged OnActiveStateChanged;
    void OnActiveStateChanged(bool Active);

    void GetInteractionHitResult(FHitResult& HitResult);
    void IsComponentSelected(bool& Selected);
    void GetSelectionRoootComponent(class USceneComponent*& SelectionRoot);
    void UpdateComponentMaterial(bool IsHovered, int32 Index, class UActorComponent* Component);
    void DeselectComponent();
    void SelectComponent(class UActorComponent* Component, int32 Index);
    void ClickSetupComponent(class UActorComponent* Component, int32 Index);
    void CheckMouseClickDrag();
    void SetDefaultCameraPosition();
    void ShowActors();
    void HideActors();
    void CheckMouseHover();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2(FKey Key);
    void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1(FKey Key);
    void InpActEvt_X_K2Node_InputKeyEvent_0(FKey Key);
    void ReceiveTick(float DeltaSeconds);
    void Activate();
    void Deactivate();
    void InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_1(float AxisValue);
    void ExecuteUbergraph_BP_SceneInteraction(int32 EntryPoint);
    void OnActiveStateChanged__DelegateSignature(bool Active);
};

#endif
