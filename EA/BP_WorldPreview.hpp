#ifndef UE4SS_SDK_BP_WorldPreview_HPP
#define UE4SS_SDK_BP_WorldPreview_HPP

class ABP_WorldPreview_C : public AEHVoxelWorld
{
    float StartRange;
    float OutRange;
    float NoiseFrequency;
    float MinChanceToSpawn;

    void GenerateDebugPlanetoid();
};

#endif
