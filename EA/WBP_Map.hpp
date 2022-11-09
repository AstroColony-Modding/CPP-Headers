#ifndef UE4SS_SDK_WBP_Map_HPP
#define UE4SS_SDK_WBP_Map_HPP

class UWBP_Map_C : public UEHMapWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* Border;
    class UWBP_CelestialBodyInfo_C* CelestialBodyInfo;
    class UOverlay* CelstialBodiesOverlay;
    class UImage* CornerImage;
    class UVerticalBox* KnownCelestialBodies;
    class UImage* MissionIco;
    class UTGConfigurableTextBlock* MissionName;
    class UTGConfigurableTextBlock* MissionText;
    class UWBP_PlayerInfo_C* PlayerInfo;
    class USizeBox* ScrollSizeBox;
    class UVerticalBox* UnkownCelestialBodies;
    class UWBP_NameDividerSmall_C* WBP_NameDividerSmall_C;
    class UWBP_NameDividerSmall_C* WBP_NameDividerSmall_C_0;
    class UWBP_PausePrompt_C* WBP_PausePrompt_C_0;
    class UHorizontalBox* XHorizontal;
    class UWBP_IcoButton_C* YouButton;
    TMap<class AActor*, class UWBP_CelestialBodyItem_C*> CelestialBodiesMap;
    class ABP_Map_C* BPMap;

    void RefreshNames();
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void SelectYou(bool IsSelected);
    void CelestialBodyClicked(class AActor* CelestialBody, EEHTrackableType Type);
    void SelectCelestialBody(class AActor* CelestalBody);
    void AddCelestialBody(class AActor* CelestalBody, EEHTrackableType Type);
    void ClearCelestalBodies();
    void Init(class ABP_Map_C* BPMap);
    void BndEvt__SettingsButton_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature();
    void BndEvt__WBP_Map_CelestialBodyInfo_K2Node_ComponentBoundEvent_1_DisplayNameChanged__DelegateSignature();
    void ExecuteUbergraph_WBP_Map(int32 EntryPoint);
};

#endif
