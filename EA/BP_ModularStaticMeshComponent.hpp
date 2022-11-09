#ifndef UE4SS_SDK_BP_ModularStaticMeshComponent_HPP
#define UE4SS_SDK_BP_ModularStaticMeshComponent_HPP

class UBP_ModularStaticMeshComponent_C : public UStaticMeshComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    EEHVehiclePartType PartType;
    TArray<class UMaterialInterface*> PartMaterials;
    class UMaterialInterface* MaterialOverride;

    class UPrimitiveComponent* GetPrimitiveComponent();
    class USceneComponent* GetSetupComponent();
    bool HasClickInteraction();
    TArray<class UMaterialInterface*> GetPartMaterials();
    EEHVehiclePartType GetVehiclePartType();
    void SetPartMaterials(const TArray<class UMaterialInterface*>& Materials);
    void ApplyColors(const TArray<FLinearColor>& Colors, const TArray<FName>& Names);
    void ApplyTransform(const FTransform& Transform);
    void ApplyStaticMesh(const class UStaticMesh* StaticMesh);
    void ApplyMaterials(const TArray<TSoftObjectPtr<UMaterialInterface>>& Materials);
    void ApplyMaterial(const class UMaterialInterface* Material);
    void ReceiveBeginPlay();
    void SetVehiclePartType(const EEHVehiclePartType VehiclePartType);
    void ExecuteUbergraph_BP_ModularStaticMeshComponent(int32 EntryPoint);
};

#endif
