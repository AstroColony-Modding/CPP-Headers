#ifndef UE4SS_SDK_BP_VehiclesLibrary_HPP
#define UE4SS_SDK_BP_VehiclesLibrary_HPP

class UBP_VehiclesLibrary_C : public UBlueprintFunctionLibrary
{

    int32 GetManeuverability(const class APawn* Pawn, class UObject* __WorldContext);
    class UMaterialInterface* GetVehicleMaterial(TArray<class UMaterialInterface*>& DefaultMaterials, int32 Index, const class UMaterialInterface* MaterialOverride, class UObject* __WorldContext);
    void UnpossesVehicle(class APawn* Pawn, const FVector DropLocation, class UObject* __WorldContext);
    void PossesVehicle(class APawn* Pawn, const int32 PossesedFlags, class UObject* __WorldContext);
    void AddMissingComponents(class APawn* Vehicle, const FEHVehicleDefinition& VehicleDefinition, class UObject* __WorldContext);
    void UpdateVehicleForDefinition(class APawn* Vehicle, const FEHVehicleDefinition& VehicleDefinition, class UObject* __WorldContext);
    void UpdateVehiclePart(class APawn* Vehicle, const FEHVehiclePart& VehiclePart, class UObject* __WorldContext);
};

#endif
