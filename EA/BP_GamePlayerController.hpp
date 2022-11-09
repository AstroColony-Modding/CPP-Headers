#ifndef UE4SS_SDK_BP_GamePlayerController_HPP
#define UE4SS_SDK_BP_GamePlayerController_HPP

class ABP_GamePlayerController_C : public AEHGamePlayerController
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBP_ModularVehiclesComponent_C* BP_ModularVehicles;
    class UBP_MissionsComponent_C* BP_MissionsComponent;
    class UBP_SpaceCarryComponent_C* BP_SpaceCarryComponent;
    class UBP_TechTreeComponent_C* BP_TechTreeManager;
    class UBP_GridComponent_C* BP_GridComponent;
    class AVoxelWorld* CurrentVoxelWorld;
    FVector CurrentHitPosition;
    FVector CurrentHitNormal;
    float OxygenConsumptionRate;
    float HealthNoOxygenRate;
    float HealthAwayPlayerRate;
    FName LastPossesedPawn;
    int32 PossesedActionBits;
    FRotator PossesedControlRotation;
    bool AttachBlackholeTest;
    class AEHGrid* HiddenGrid;
    TArray<class AActor*> HiddenActorsNew;
    TArray<class AActor*> SharedHiddenActors;

    bool ShowActors();
    bool HideActors();
    bool SetVirtualCamera(bool IsActive);
    void CheckPlayerDeath();
    void IsUniverseDebugActive(bool& Active);
    void SetVirtualCameraOld(bool IsActive);
    void UpdateWorldOrigin();
    void UpdateLosingHealth();
    void ChangeTimeDilation(float TimeDilationChange);
    void InitScenarioParams();
    void DebugUniverseTravel(bool IsNext);
    void Init();
    void UpdateHasOxygen();
    void InpActEvt_ToggleMouse_K2Node_InputActionEvent_28(FKey Key);
    void InpActEvt_Add_K2Node_InputKeyEvent_13(FKey Key);
    void InpActEvt_Subtract_K2Node_InputKeyEvent_12(FKey Key);
    void InpActEvt_Multiply_K2Node_InputKeyEvent_11(FKey Key);
    void InpActEvt_F12_K2Node_InputKeyEvent_10(FKey Key);
    void InpActEvt_UIOption_K2Node_InputActionEvent_27(FKey Key);
    void InpActEvt_Period_K2Node_InputKeyEvent_9(FKey Key);
    void InpActEvt_UIOptionEditor_K2Node_InputActionEvent_26(FKey Key);
    void InpActEvt_BreakControl_K2Node_InputActionEvent_25(FKey Key);
    void InpActEvt_BreakControl_K2Node_InputActionEvent_24(FKey Key);
    void InpActEvt_ToolSelect_K2Node_InputActionEvent_23(FKey Key);
    void InpActEvt_ActionClose_K2Node_InputActionEvent_22(FKey Key);
    void InpActEvt_ActionRotateLeft_K2Node_InputActionEvent_21(FKey Key);
    void InpActEvt_ActionRotateRight_K2Node_InputActionEvent_20(FKey Key);
    void InpActEvt_UtilityQuickSave_K2Node_InputActionEvent_19(FKey Key);
    void InpActEvt_UtilityQuickLoad_K2Node_InputActionEvent_18(FKey Key);
    void InpActEvt_Nine_K2Node_InputKeyEvent_8(FKey Key);
    void InpActEvt_Zero_K2Node_InputKeyEvent_7(FKey Key);
    void InpActEvt_ToolJetpack_K2Node_InputActionEvent_17(FKey Key);
    void InpActEvt_Backslash_K2Node_InputKeyEvent_6(FKey Key);
    void InpActEvt_Home_K2Node_InputKeyEvent_5(FKey Key);
    void InpActEvt_B_K2Node_InputKeyEvent_4(FKey Key);
    void InpActEvt_N_K2Node_InputKeyEvent_3(FKey Key);
    void InpActEvt_H_K2Node_InputKeyEvent_2(FKey Key);
    void InpActEvt_F10_K2Node_InputKeyEvent_1(FKey Key);
    void InpActEvt_End_K2Node_InputKeyEvent_0(FKey Key);
    void InpActEvt_Turbo_K2Node_InputActionEvent_16(FKey Key);
    void InpActEvt_Turbo_K2Node_InputActionEvent_15(FKey Key);
    void OnFailure_1B4A267149DB94614104C4A90BC7C0C2();
    void OnSuccess_1B4A267149DB94614104C4A90BC7C0C2();
    void OnFailure_9CAE1AD64CE0CE3CF26EB1870981E143();
    void OnSuccess_9CAE1AD64CE0CE3CF26EB1870981E143();
    void InpActEvt_InvCategory7_K2Node_InputActionEvent_14(FKey Key);
    void InpActEvt_InvCategory6_K2Node_InputActionEvent_13(FKey Key);
    void InpActEvt_InvCategory5_K2Node_InputActionEvent_12(FKey Key);
    void InpActEvt_InvCategory4_K2Node_InputActionEvent_11(FKey Key);
    void InpActEvt_InvCategory3_K2Node_InputActionEvent_10(FKey Key);
    void InpActEvt_InvCategory2_K2Node_InputActionEvent_9(FKey Key);
    void InpActEvt_InvCategory1_K2Node_InputActionEvent_8(FKey Key);
    void InpActEvt_InvSlot8_K2Node_InputActionEvent_7(FKey Key);
    void InpActEvt_InvSlot7_K2Node_InputActionEvent_6(FKey Key);
    void InpActEvt_InvSlot6_K2Node_InputActionEvent_5(FKey Key);
    void InpActEvt_InvSlot5_K2Node_InputActionEvent_4(FKey Key);
    void InpActEvt_InvSlot4_K2Node_InputActionEvent_3(FKey Key);
    void InpActEvt_InvSlot3_K2Node_InputActionEvent_2(FKey Key);
    void InpActEvt_InvSlot2_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_InvSlot1_K2Node_InputActionEvent_0(FKey Key);
    void SavingGameData(class UEHSaveGame* SaveGame);
    void SavegameObjectSerializeDataLoaded();
    void OnFinished();
    void ReceiveUnPossess(class APawn* UnpossessedPawn);
    void ReceivePossess(class APawn* PossessedPawn);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void UpdateBoosterMode();
    void ReceiveTick(float DeltaSeconds);
    void HandlePossessImpossible();
    void Client_RebaseWorldOrigin(FIntVector NewLocation);
    void OnMenuOpenStateChanged(bool IsOpened);
    void TriggerCinematicSequence();
    void HandlePlayerAction(FName PlayerActionName);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_GamePlayerController(int32 EntryPoint);
};

#endif
