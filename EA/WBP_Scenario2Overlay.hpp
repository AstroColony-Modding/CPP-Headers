#ifndef UE4SS_SDK_WBP_Scenario2Overlay_HPP
#define UE4SS_SDK_WBP_Scenario2Overlay_HPP

class UWBP_Scenario2Overlay_C : public UEHScenarioOverlayWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* MarkersActive;
    class UImage* CommandsMarker;
    class UImage* ResourcesMarker;
    TArray<FName> MarkerNames;

    void UpdateMarkerVisibility(FName MarkerName, bool IsVisible);
    void ChangeWidetMarkerVisibility(const FName& Name, const bool IsVisible);
    void ExecuteUbergraph_WBP_Scenario2Overlay(int32 EntryPoint);
};

#endif
