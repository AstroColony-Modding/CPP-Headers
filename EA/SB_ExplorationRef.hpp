#ifndef UE4SS_SDK_SB_ExplorationRef_HPP
#define UE4SS_SDK_SB_ExplorationRef_HPP

class USB_ExplorationRef_C : public UEHReferencedMissionObject
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UEHItem* HydrogenGenerator;
    class UEHItem* HydrogenTank;
    class UEHDevicesComponent* DevicesComp;
    class AEHGrid* PrimaryGrid;

    void OnHydrogenProduced(FEHItemInstance ProducedItem);
    void BindHydrogenProduction();
    void OnItemConstructed(class UEHItem* ConstructedItem, FIntVector Coords);
    void OnSelectedRecipesChanged();
    void MissionStarted(class APlayerController* PlayerController, const bool IsRecovered);
    void OnPlayerEnteredGrid(class AEHGrid* Grid);
    void ExecuteUbergraph_SB_ExplorationRef(int32 EntryPoint);
};

#endif
