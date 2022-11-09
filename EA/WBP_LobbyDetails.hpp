#ifndef UE4SS_SDK_WBP_LobbyDetails_HPP
#define UE4SS_SDK_WBP_LobbyDetails_HPP

class UWBP_LobbyDetails_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_IcoButton_C* ClearButton;
    class UTGCheckBox* LateJoinToggle;
    class UWBP_Spinner_C* MaxNumberPlayersSpinner;
    class UTGCheckBox* PublicServerToggle;
    class UTGConfigurableTextBlock* SavegameText;
    class UTGEditableTextBox* SeedHost;
    class UWBP_TextButton_C* SelectButton;
    class UVerticalBox* VerticalScenariosList;
    class UWBP_IcoMarker_C* WBP_IcoMarker;
    FWBP_LobbyDetails_CSelectPressed SelectPressed;
    void SelectPressed();
    FWBP_LobbyDetails_CClearPressed ClearPressed;
    void ClearPressed();

    void UpdateSavegameText(FText Text);
    void SetMultiplayerTravelParams();
    void Construct();
    void BndEvt__WBP_LobbyDetails_WBP_TextButton_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature();
    void BndEvt__WBP_LobbyDetails_ClearButton_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature();
    void ExecuteUbergraph_WBP_LobbyDetails(int32 EntryPoint);
    void ClearPressed__DelegateSignature();
    void SelectPressed__DelegateSignature();
};

#endif
