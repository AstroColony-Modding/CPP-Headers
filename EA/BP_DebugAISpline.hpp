#ifndef UE4SS_SDK_BP_DebugAISpline_HPP
#define UE4SS_SDK_BP_DebugAISpline_HPP

class ABP_DebugAISpline_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* Scene;
    class USplineComponent* Spline;
    class UStaticMesh* StaticMesh;
    TEnumAsByte<ESplineMeshAxis::Type> ForwardAxis;
    TArray<FVector> Points;
    class UMaterialInterface* Material;
    TArray<class USplineMeshComponent*> SplineComponents;

    void UpdateSpline(const TArray<FVector>& Points);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_DebugAISpline(int32 EntryPoint);
};

#endif
