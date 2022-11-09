#ifndef UE4SS_SDK_BP_SquareFlare_HPP
#define UE4SS_SDK_BP_SquareFlare_HPP

class ABP_SquareFlare_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPointLightComponent* PointLight;
    class UStaticMeshComponent* SM_RocketFlare;
    class USceneComponent* DefaultSceneRoot;
    float RocketFlare_LightIntensity_Max;
    float RocketFlare_Interpolated;
    float PointLight_Radius;
    FLinearColor FlareColor;

    void UpdateColor();
    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_SquareFlare(int32 EntryPoint);
};

#endif
