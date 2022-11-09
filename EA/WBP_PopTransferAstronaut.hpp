#ifndef UE4SS_SDK_WBP_PopTransferAstronaut_HPP
#define UE4SS_SDK_WBP_PopTransferAstronaut_HPP

class UWBP_PopTransferAstronaut_C : public UMenuWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVerticalBox* AstronautStations;
    class UEHAIObject* AIObject;

    void TransferToStationClicked(class AEHGrid* Station);
    void AddStation(class AEHGrid* SpaceStation, bool IsMainStation);
    void InitStations();
    void OnContextChanged();
    void ExecuteUbergraph_WBP_PopTransferAstronaut(int32 EntryPoint);
};

#endif
