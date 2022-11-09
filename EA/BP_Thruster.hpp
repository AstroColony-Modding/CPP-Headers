#ifndef UE4SS_SDK_BP_Thruster_HPP
#define UE4SS_SDK_BP_Thruster_HPP

class ABP_Thruster_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBP_SceneInteractionChildMesh_C* ThrusterBase;
    class UPointLightComponent* PointLight;
    class UStaticMeshComponent* SM_RocketFlare;
    class USceneComponent* DefaultSceneRoot;
    float RocketFlare_LightIntensity_Max;
    float RocketFlare_Interpolated;
    float PointLight_Radius;
    FLinearColor FlareColor;

    void UpdateDirection(FVector& MoveDirection);
    void UpdateColor();
    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void Boost(FVector Direction);
    void ExecuteUbergraph_BP_Thruster(int32 EntryPoint);
};

#endif
