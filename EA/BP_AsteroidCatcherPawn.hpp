#ifndef UE4SS_SDK_BP_AsteroidCatcherPawn_HPP
#define UE4SS_SDK_BP_AsteroidCatcherPawn_HPP

class ABP_AsteroidCatcherPawn_C : public AEHAsteroidCatcherPawn
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCameraComponent* Camera;
    class UStaticMeshComponent* SM_Cannon;
    class USceneComponent* DefaultSceneRoot;
    class UEHAsteroidsCatcher* AsteroidCatcher;
    class ABP_AsteroidSpawner_C* AsteroidSpawner;
    class ABP_TransferAsteroid_C* AttractedAsteroidOld;
    float LineTraceLength;
    float AttractionSpeed;
    FEHAsteroidData AsteroidData;
    bool AutoCatchingActive;

    TMap<class EPlayerActionType, class FText> GetTraceActionNames();
    int32 GetTraceOverrideActions(class UObject* TracedObject);
    bool ShouldTraceObject(class UObject* TracedObject);
    void UpdateCannonRotation(const FVector& Target);
    void AutoCatchAsteroid();
    void InpActEvt_ActionCancel_K2Node_InputActionEvent_2(FKey Key);
    void InpActEvt_ActionLeave_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_ActionSelect_K2Node_InputActionEvent_0(FKey Key);
    void InpAxisEvt_LookUp_K2Node_InputAxisEvent_1(float AxisValue);
    void OnInteractionStarted();
    void OnInteractionFinished();
    void OnAsteroidCatchStateChanged(EAsteroidCatchStateChanged CatchStateChange);
    void InpAxisEvt_Turn_K2Node_InputAxisEvent_0(float AxisValue);
    void ActivateAutoCatching();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void CatchAsteroidLoop();
    void ActiveStateChanged(bool Active);
    void Init(class UEHInteractableObject* InInteractableObject);
    void ExecuteUbergraph_BP_AsteroidCatcherPawn(int32 EntryPoint);
};

#endif
