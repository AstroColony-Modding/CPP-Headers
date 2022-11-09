#ifndef UE4SS_SDK_WBP_CelestialBodyItem_HPP
#define UE4SS_SDK_WBP_CelestialBodyItem_HPP

class UWBP_CelestialBodyItem_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTGCheckBox* CategoryOption;
    class UTGConfigurableTextBlock* Distance;
    class UImage* Ico;
    class UTGConfigurableTextBlock* Name;
    class UBorder* PinBorder;
    FWBP_CelestialBodyItem_CClick Click;
    void Click(class AActor* CelestialBody, EEHTrackableType Type);
    EEHTrackableType Type;
    class AActor* CelestialBody;

    void UpdateDisplayName();
    void UpdatePinVisibility();
    void Set Selected(bool IsSelected);
    void Construct();
    void OnIndicatorStateChanged(class UObject* IndicatedObject);
    void BndEvt__CategoryOption_K2Node_ComponentBoundEvent_3_OnWidgetReleasedEvent__DelegateSignature();
    void ExecuteUbergraph_WBP_CelestialBodyItem(int32 EntryPoint);
    void Click__DelegateSignature(class AActor* CelestialBody, EEHTrackableType Type);
};

#endif
