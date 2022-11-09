#ifndef UE4SS_SDK_WBP_PlanetInfo_HPP
#define UE4SS_SDK_WBP_PlanetInfo_HPP

class UWBP_PlanetInfo_C : public UInteractBaseWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class ABP_TransferAsteroid_C* BP_TransferDebris;

    void UpdatePlanetoidName(class AEHPlanetoidGrid* Planetoid);
    void Construct();
    void ExecuteUbergraph_WBP_PlanetInfo(int32 EntryPoint);
};

#endif
