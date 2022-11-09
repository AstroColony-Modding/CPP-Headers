#ifndef UE4SS_SDK_WBP_SPGameStartingStation_HPP
#define UE4SS_SDK_WBP_SPGameStartingStation_HPP

class UWBP_SPGameStartingStation_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVerticalBox* ConstructionContainerVerticalBox;
    class UHorizontalBox* HorizontalLarge;
    class UHorizontalBox* HorizontalMedium;
    class UHorizontalBox* HorizontalSmall;
    class UWBP_StationSlot_C* WBP_StationSlot;
    class UWBP_StationSlot_C* WBP_StationSlot_2;
    class UWBP_StationSlot_C* WBP_StationSlot_3;
    EEHStartingStationSize SelectedSize;
    int32 SelectedIndex;

    void GetSelectedSlotDetails(FEHStartingStation& Station);
    void GetStationSlots(TArray<class UWidget*>& Slots);
    void SetTravelParams();
    void SelectSlot(EEHStartingStationSize StationSize, int32 Index);
    void HandleStationClicked(int32 ID, EEHStartingStationSize Size);
    void CreateStartingStations(EEHStartingStationSize Size);
    void Construct();
    void ExecuteUbergraph_WBP_SPGameStartingStation(int32 EntryPoint);
};

#endif
