#ifndef UE4SS_SDK_BP_ModularChildActorComponent_HPP
#define UE4SS_SDK_BP_ModularChildActorComponent_HPP

class UBP_ModularChildActorComponent_C : public UEHChildActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    EEHVehiclePartType Type;

    class UPrimitiveComponent* GetPrimitiveComponent();
    class USceneComponent* GetSetupComponent();
    bool HasClickInteraction();
    TArray<class UMaterialInterface*> GetPartMaterials();
    EEHVehiclePartType GetVehiclePartType();
    void ApplyMaterials(const TArray<TSoftObjectPtr<UMaterialInterface>>& Materials);
    void ApplyStaticMesh(const class UStaticMesh* StaticMesh);
    void SetPartMaterials(const TArray<class UMaterialInterface*>& Materials);
    void ApplyMaterial(const class UMaterialInterface* Material);
    void ApplyColors(const TArray<FLinearColor>& Colors, const TArray<FName>& Names);
    void ApplyTransform(const FTransform& Transform);
    void SetVehiclePartType(const EEHVehiclePartType VehiclePartType);
    void ExecuteUbergraph_BP_ModularChildActorComponent(int32 EntryPoint);
};

#endif
