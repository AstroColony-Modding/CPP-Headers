#ifndef UE4SS_SDK_BP_MenuNebulas_HPP
#define UE4SS_SDK_BP_MenuNebulas_HPP

class ABP_MenuNebulas_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Nebula2;
    class UStaticMeshComponent* Nebula;
    class USceneComponent* DefaultSceneRoot;
    int32 VisualQuality;
    float FogDensity;
    FNebulaEffect NebulaEffects;
    FEHNebulaGeneration NebulaGeneration;
    FEHNebulaGeneration NebulaGeneration2;
    FVector2D LightIntensity;
    TArray<TSoftObjectPtr<UObject>> NebulaMedium;

    void UpdateNebula(class UPrimitiveComponent* self2, FEHNebulaGeneration& NebulaGenerations);
    void UpdateMaterialSettings(class UMaterialInstanceDynamic* MatInstance, FEHNebulaGeneration& NebulaGenerations);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_MenuNebulas(int32 EntryPoint);
};

#endif
