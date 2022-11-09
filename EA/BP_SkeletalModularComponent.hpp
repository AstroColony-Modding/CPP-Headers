#ifndef UE4SS_SDK_BP_SkeletalModularComponent_HPP
#define UE4SS_SDK_BP_SkeletalModularComponent_HPP

class UBP_SkeletalModularComponent_C : public USkeletalMeshComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    EEHVehiclePartType PartType;
    TArray<class UMaterialInterface*> PartMaterials;

    class UPrimitiveComponent* GetPrimitiveComponent();
    class USceneComponent* GetSetupComponent();
    TArray<class UMaterialInterface*> GetPartMaterials();
    bool HasClickInteraction();
    EEHVehiclePartType GetVehiclePartType();
    class UMaterialInterface* GetVehicleMaterialOld(TArray<class UMaterialInterface*>& DefaultMaterials, int32 Index, const class UMaterialInterface* MaterialOverride);
    void ApplyStaticMesh(const class UStaticMesh* StaticMesh);
    void SetVehiclePartType(const EEHVehiclePartType VehiclePartType);
    void SetPartMaterials(const TArray<class UMaterialInterface*>& Materials);
    void ApplyTransform(const FTransform& Transform);
    void ApplyMaterials(const TArray<TSoftObjectPtr<UMaterialInterface>>& Materials);
    void ApplyMaterial(const class UMaterialInterface* Material);
    void ApplyColors(const TArray<FLinearColor>& Colors, const TArray<FName>& Names);
    void ExecuteUbergraph_BP_SkeletalModularComponent(int32 EntryPoint);
};

#endif
