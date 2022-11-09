#ifndef UE4SS_SDK_BP_SuspensionPhysicsComponent_HPP
#define UE4SS_SDK_BP_SuspensionPhysicsComponent_HPP

class UBP_SuspensionPhysicsComponent_C : public USuspensionPhysics_Component
{
    FPointerToUberGraphFrame UberGraphFrame;
    EEHVehiclePartType PartType;

    class UPrimitiveComponent* GetPrimitiveComponent();
    class USceneComponent* GetSetupComponent();
    bool HasClickInteraction();
    TArray<class UMaterialInterface*> GetPartMaterials();
    EEHVehiclePartType GetVehiclePartType();
    FVector GetWheelLocationForSK();
    void ApplyColors(const TArray<FLinearColor>& Colors, const TArray<FName>& Names);
    void SetPartMaterials(const TArray<class UMaterialInterface*>& Materials);
    void SetVehiclePartType(const EEHVehiclePartType VehiclePartType);
    void ApplyTransform(const FTransform& Transform);
    void ApplyMaterials(const TArray<TSoftObjectPtr<UMaterialInterface>>& Materials);
    void ApplyMaterial(const class UMaterialInterface* Material);
    void ApplyStaticMesh(const class UStaticMesh* StaticMesh);
    void ExecuteUbergraph_BP_SuspensionPhysicsComponent(int32 EntryPoint);
};

#endif
