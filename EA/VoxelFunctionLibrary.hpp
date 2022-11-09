#ifndef UE4SS_SDK_VoxelFunctionLibrary_HPP
#define UE4SS_SDK_VoxelFunctionLibrary_HPP

class UVoxelFunctionLibrary_C : public UBlueprintFunctionLibrary
{

    void GetMultiIndexMaterialsAtPosition(class AVoxelWorld* Voxel World, FVector position, class UObject* __WorldContext, bool& Success, class UMaterialInterface*& Material 0, float& Strength 0, class UMaterialInterface*& Material 1, float& Strength 1, class UMaterialInterface*& Material 2, float& Strength 2, class UMaterialInterface*& Material 3, float& Strength 3, float& Wetness);
};

#endif
