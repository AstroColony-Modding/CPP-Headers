#ifndef UE4SS_SDK_WBP_Scenario1Overlay_HPP
#define UE4SS_SDK_WBP_Scenario1Overlay_HPP

class UWBP_Scenario1Overlay_C : public UEHScenarioOverlayWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Active;
    class UImage* OxygenMarker;

    void UpdateMarkerVisibility(FName MarkerName, bool IsVisible);
    void ChangeWidetMarkerVisibility(const FName& Name, const bool IsVisible);
    void ExecuteUbergraph_WBP_Scenario1Overlay(int32 EntryPoint);
};

#endif
