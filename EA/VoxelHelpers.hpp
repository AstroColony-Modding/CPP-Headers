#ifndef UE4SS_SDK_VoxelHelpers_HPP
#define UE4SS_SDK_VoxelHelpers_HPP

struct FMaterialPackInput
{
    FName InputName;
    FExpressionInput Input;

};

class UMaterialExpressionBlendMaterialAttributesBarycentric : public UMaterialExpression
{
    FMaterialAttributesInput A;
    FMaterialAttributesInput B;
    FMaterialAttributesInput C;
    FExpressionInput AlphaA;
    FExpressionInput AlphaB;

};

class UMaterialExpressionPack : public UMaterialExpression
{
    TArray<FMaterialPackInput> Inputs;

};

class UMaterialExpressionUnpack : public UMaterialExpression
{
    FExpressionInput Input;
    bool bRefresh;

};

class UVoxelColorWheel : public UWidget
{
    FLinearColor Color;
    FVoxelColorWheelOnColorChanged OnColorChanged;
    void OnVoxelColorWheelColorChangedEvent(const FLinearColor& NewColor);

};

class UVoxelHelpersLibrary : public UBlueprintFunctionLibrary
{

    void CreateProcMeshPlane(class UProceduralMeshComponent* Mesh, int32 SizeX, int32 SizeY, float Step);
};

#endif
