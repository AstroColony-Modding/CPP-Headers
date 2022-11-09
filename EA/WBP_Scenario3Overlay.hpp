#ifndef UE4SS_SDK_WBP_Scenario3Overlay_HPP
#define UE4SS_SDK_WBP_Scenario3Overlay_HPP

class UWBP_Scenario3Overlay_C : public UEHScenarioOverlayWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Active;
    class UWBP_MiddleInfoText_C* DistanceAlphaCamembert;
    class UWBP_MiddleInfoText_C* TraveledDistance;
    TArray<FName> MarkerNames;

    void UpdateAlphaCamembertDistance(float Distance);
    void UpdateTraveledDistance(float Distance);
    void UpdateMarkerVisibility(FName MarkerName, bool IsVisible);
    void ChangeWidetMarkerVisibility(const FName& Name, const bool IsVisible);
    void ExecuteUbergraph_WBP_Scenario3Overlay(int32 EntryPoint);
};

#endif
