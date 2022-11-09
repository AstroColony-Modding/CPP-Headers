#ifndef UE4SS_SDK_WBP_TransferAsteroidInfo_HPP
#define UE4SS_SDK_WBP_TransferAsteroidInfo_HPP

class UWBP_TransferAsteroidInfo_C : public UWorldInteractiveInfoWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* HorizontalBox;
    class ABP_TransferAsteroid_C* BP_TransferDebris;
    class AEHAsteroidSpawner* Asteroid Spawner;

    void UpdateItems();
    void Construct();
    void ExecuteUbergraph_WBP_TransferAsteroidInfo(int32 EntryPoint);
};

#endif
