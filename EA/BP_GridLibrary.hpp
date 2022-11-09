#ifndef UE4SS_SDK_BP_GridLibrary_HPP
#define UE4SS_SDK_BP_GridLibrary_HPP

class UBP_GridLibrary_C : public UBlueprintFunctionLibrary
{

    void SetOutletPosition(const FIntVector& OutletVector, class UStaticMeshComponent*& MeshComponent, const FTransform& Transform, class UObject* __WorldContext);
};

#endif
